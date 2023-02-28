#include <iostream>
#include <string>
#include <memory>

//grpc头文件
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>

#include "IM.Login.grpc.pb.h"
#include "IM.Login.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

using IM::Login::ImLogin;
using IM::Login::IMRegisterReq;
using IM::Login::IMRegisterRes;
using IM::Login::IMLoginReq;
using IM::Login::IMLoginRes;

class IMLoginServiceImpl : public ImLogin::Service{
    virtual Status Regist(ServerContext* context, const IMRegisterReq* request, IMRegisterRes* response) override {
        std::cout<<"Regist user_name:" << request->user_name() << std::endl;
        response->set_user_name(request->user_name()); // 这也是插件自动生成的函数 set_属性名()
        response->set_user_id(10);
        response->set_result_code(0);

        return Status::OK;
    }
    virtual Status Login(ServerContext* context, const IMLoginReq* request, IMLoginRes* response) override {
        std::cout << "Login user_name: " << request->user_name() << std::endl;
        response->set_user_id(10);
        response->set_result_code(0);

        return Status::OK;
    }
};

void RunServer() {
    std::string server_addr("0.0.0.0:50001");

    //服务类实例
    IMLoginServiceImpl service;

    ServerBuilder builder;

    //第二参数: The credentials associated with the server.
    builder.AddListeningPort(server_addr, grpc::InsecureServerCredentials());
    builder.AddChannelArgument(GRPC_ARG_KEEPALIVE_TIME_MS, 5000);
    builder.AddChannelArgument(GRPC_ARG_KEEPALIVE_TIMEOUT_MS, 10000);
    //是否允许在没有任何未完成流的情况下发送保持连接的ping包
    builder.AddChannelArgument(GRPC_ARG_KEEPALIVE_PERMIT_WITHOUT_CALLS, 1);
    builder.RegisterService(&service);

    //创建启动
    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_addr << std::endl;
 
    server->Wait();
}

int main(int argc, const char** argv) {

    RunServer();
    return 0;
}
