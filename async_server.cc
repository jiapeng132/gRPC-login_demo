#include <iostream>
#include <string>
#include <thread>
#include <memory>

#include "IM.Login.grpc.pb.h"
#include "IM.Login.pb.h"
#include <grpc/support/log.h>
#include <grpcpp/grpcpp.h>

using grpc::Server;
using grpc::ServerAsyncResponseWriter;
using grpc::ServerBuilder;
using grpc::ServerCompletionQueue; // 
using grpc::ServerContext;
using grpc::Status;

using IM::Login::ImLogin;
using IM::Login::IMRegisterReq;
using IM::Login::IMRegisterRes;
using IM::Login::IMLoginReq;
using IM::Login::IMLoginRes;

class ServerImpl final {
public:
    ~ServerImpl() {
        server_->Shutdown();
        cq_->Shutdown();
    }
    
    void Run() {
        std::string server_address("0.0.0.0:50001");

        //成员初始化
        ServerBuilder builder;
        builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
        builder.RegisterService(&service_); // 初始化service_
        cq_ = builder.AddCompletionQueue();
        server_ = builder.BuildAndStart(); // 
        std::cout << "Server listening on " << server_address << std::endl;

        //Proceed to the server's main loop
        HandleRpcs();
    }

private:

    class CallData{
    public:
        CallData(ImLogin::AsyncService* service, ServerCompletionQueue* cq)
            :service_(service), cq_(cq), status_(CREATE){
            std::cout << "CallData constructing, this:" << this << std::endl;
            Proceed();
        }
        virtual ~CallData(){}
        virtual void Proceed() {
            return;
        }
        //与异步服务器的 gRPC 运行时进行通信的方式。
        ImLogin::AsyncService* service_;

        ServerCompletionQueue *cq_;

        ServerContext ctx_;

        enum CallStatus{CREATE, PROCESS, FINISH};

        CallStatus status_; //current serving state
    };

    class RegistCallData : public CallData {
    public:
        RegistCallData(ImLogin::AsyncService* service, ServerCompletionQueue* cq)
            :CallData(service, cq), responder_(&ctx_){
            Proceed();
        }

        ~RegistCallData(){}

        void Proceed() override {
            std::cout << "this: " << this 
                    <<" RegistCallData Proceed(), status : " << status_
                    << std::endl;
            //状态机
            if(status_ == CREATE) {
                std::cout << "this: " << this 
                    <<" RegistCallData Proceed(), status : " << "CREATE"
                    << std::endl;

                status_ = PROCESS; // 

                //this唯一标识这个request(故不同实例可并发的服务不同的requests)
                service_->RequestRegist(&ctx_, &request_, &responder_, cq_, cq_,this);
            } else if(status_ == PROCESS) {
                std::cout << "this: " << this <<" RegistCallData Proceed(), status : " << "PROCESS"<< std::endl;

                new RegistCallData(service_, cq_); //1. 创建处理逻辑

                reply_.set_user_name(request_.user_name());
                reply_.set_user_id(10);
                reply_.set_result_code(0);

                status_ = FINISH;
                responder_.Finish(reply_, Status::OK, this);
            } else  {
                std::cout << "this: " << this <<" RegistCallData Proceed(), status : " << "FINISH"<< std::endl;
                GPR_ASSERT(status_ == FINISH);
                delete this;
            }
        }

    private:
        IMRegisterReq request_;
        IMRegisterRes reply_;
        ServerAsyncResponseWriter<IMRegisterRes> responder_;
    };

    class LoginCallData : public CallData {
    public:
        LoginCallData(ImLogin::AsyncService* service, ServerCompletionQueue* cq)
            :CallData(service, cq), responder_(&ctx_){
            Proceed();
        }

        ~LoginCallData(){}

        void Proceed() override {
            std::cout << "this: " << this 
                    <<" LoginCallData Proceed(), status : " << status_
                    << std::endl;
            //状态机
            if(status_ == CREATE) {
                std::cout << "this: " << this 
                    <<" LoginCallData Proceed(), status : " << "CREATE"
                    << std::endl;

                status_ = PROCESS; // 

                //this唯一标识这个request(故不同实例可并发的服务不同的requests)
                service_->RequestLogin(&ctx_, &request_, &responder_, cq_, cq_,this);
            } else if(status_ == PROCESS) {
                std::cout << "this: " << this <<" LoginCallData Proceed(), status : " << "PROCESS"<< std::endl;

                new LoginCallData(service_, cq_); //1. 创建处理逻辑

                reply_.set_user_id(10);
                reply_.set_result_code(0);

                status_ = FINISH;
                responder_.Finish(reply_, Status::OK, this);
            } else  {
                std::cout << "this: " << this <<" LoginCallData Proceed(), status : " << "FINISH"<< std::endl;
                GPR_ASSERT(status_ == FINISH);
                delete this;
            }
        }

    private:
        IMLoginReq request_;
        IMLoginRes reply_;
        ServerAsyncResponseWriter<IMLoginRes> responder_;
    };

    void HandleRpcs() { // 可运行在多线程
        new RegistCallData(&service_, cq_.get()); //
        new LoginCallData(&service_, cq_.get());

        void* tag;
        bool ok;

        while(true) {
            std::cout << "before cq_->Next "<< std::endl;
            // Read from the queue, blocking until an event is available or the queue is
            // shutting down.
            GPR_ASSERT(cq_->Next(&tag, &ok));
            std::cout << "after cq_->Next " << std::endl;          
            GPR_ASSERT(ok);

            std::cout << "before static_cast" << std::endl;
            static_cast<CallData*>(tag)->Proceed();
            std::cout << "after static_cast" << std::endl;

        }
    }

    std::unique_ptr<ServerCompletionQueue> cq_;
    ImLogin::AsyncService service_; //与异步服务器的 gRPC 运行时进行通信的方式
    std::unique_ptr<Server> server_;
};

int main() {
    ServerImpl server;
    server.Run();    
    return 0;
}
