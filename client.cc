#include <iostream>
#include <string>
#include <memory>

//grpc头文件
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>

#include "IM.Login.grpc.pb.h"
#include "IM.Login.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using IM::Login::ImLogin;
using IM::Login::IMRegisterReq;
using IM::Login::IMRegisterRes;
using IM::Login::IMLoginReq;
using IM::Login::IMLoginRes;

class ImLoginClient{
public:
    ImLoginClient(std::shared_ptr<Channel> channel)
        :stub_(ImLogin::NewStub(channel)){}

    void Regist(const std::string &user_name, const std::string &password) {
        IMRegisterReq request;
        request.set_user_name(user_name);
        request.set_password(password);

        IMRegisterRes response;
        ClientContext context;
        std::cout << "-> Regist req" << std::endl; 
        Status status = stub_->Regist(&context, request, &response);

        if(status.ok()) {
            std::cout << "user_name: " << response.user_name() << ", user_id: " << response.user_id() << std::endl;
        } else {
            std::cout << "user_name: " << response.user_name() << ",Regist failed: " << response.result_code() << std::endl;
        }
    }

    void Login(const std::string &user_name, const std::string &password) {
        IMLoginReq request;
        request.set_user_name(user_name);
        request.set_password(password);

        IMLoginRes response;
        ClientContext context;
        std::cout << "-> Login req" << std::endl; 
        Status status = stub_->Login(&context, request, &response);

        if(status.ok()) {
            std::cout << "user_id: " << response.user_id() << ", login ok" << std::endl;
        } else {
            std::cout << "user_name: " << request.user_name() << ",Login failed: " << response.result_code() << std::endl;
        }
    }

private:
    std::unique_ptr<ImLogin::Stub> stub_;
};

int main() {

    std::string server_addr = "localhost:50001";
    ImLoginClient im_login_client(
        grpc::CreateChannel(server_addr, grpc::InsecureChannelCredentials())
    );
    std::string user_name = "jyh";
    std::string password = "123456";

    im_login_client.Regist(user_name, password);
    im_login_client.Login(user_name, password);
    return 0;
}
