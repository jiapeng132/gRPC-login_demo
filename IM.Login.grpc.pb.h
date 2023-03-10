// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: IM.Login.proto
#ifndef GRPC_IM_2eLogin_2eproto__INCLUDED
#define GRPC_IM_2eLogin_2eproto__INCLUDED

#include "IM.Login.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace IM {
namespace Login {

// 定义服务
class ImLogin final {
 public:
  static constexpr char const* service_full_name() {
    return "IM.Login.ImLogin";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // 定义服务函数
    virtual ::grpc::Status Regist(::grpc::ClientContext* context, const ::IM::Login::IMRegisterReq& request, ::IM::Login::IMRegisterRes* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::IM::Login::IMRegisterRes>> AsyncRegist(::grpc::ClientContext* context, const ::IM::Login::IMRegisterReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::IM::Login::IMRegisterRes>>(AsyncRegistRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::IM::Login::IMRegisterRes>> PrepareAsyncRegist(::grpc::ClientContext* context, const ::IM::Login::IMRegisterReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::IM::Login::IMRegisterRes>>(PrepareAsyncRegistRaw(context, request, cq));
    }
    virtual ::grpc::Status Login(::grpc::ClientContext* context, const ::IM::Login::IMLoginReq& request, ::IM::Login::IMLoginRes* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::IM::Login::IMLoginRes>> AsyncLogin(::grpc::ClientContext* context, const ::IM::Login::IMLoginReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::IM::Login::IMLoginRes>>(AsyncLoginRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::IM::Login::IMLoginRes>> PrepareAsyncLogin(::grpc::ClientContext* context, const ::IM::Login::IMLoginReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::IM::Login::IMLoginRes>>(PrepareAsyncLoginRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // 定义服务函数
      virtual void Regist(::grpc::ClientContext* context, const ::IM::Login::IMRegisterReq* request, ::IM::Login::IMRegisterRes* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Regist(::grpc::ClientContext* context, const ::IM::Login::IMRegisterReq* request, ::IM::Login::IMRegisterRes* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void Login(::grpc::ClientContext* context, const ::IM::Login::IMLoginReq* request, ::IM::Login::IMLoginRes* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Login(::grpc::ClientContext* context, const ::IM::Login::IMLoginReq* request, ::IM::Login::IMLoginRes* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::IM::Login::IMRegisterRes>* AsyncRegistRaw(::grpc::ClientContext* context, const ::IM::Login::IMRegisterReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::IM::Login::IMRegisterRes>* PrepareAsyncRegistRaw(::grpc::ClientContext* context, const ::IM::Login::IMRegisterReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::IM::Login::IMLoginRes>* AsyncLoginRaw(::grpc::ClientContext* context, const ::IM::Login::IMLoginReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::IM::Login::IMLoginRes>* PrepareAsyncLoginRaw(::grpc::ClientContext* context, const ::IM::Login::IMLoginReq& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Regist(::grpc::ClientContext* context, const ::IM::Login::IMRegisterReq& request, ::IM::Login::IMRegisterRes* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::IM::Login::IMRegisterRes>> AsyncRegist(::grpc::ClientContext* context, const ::IM::Login::IMRegisterReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::IM::Login::IMRegisterRes>>(AsyncRegistRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::IM::Login::IMRegisterRes>> PrepareAsyncRegist(::grpc::ClientContext* context, const ::IM::Login::IMRegisterReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::IM::Login::IMRegisterRes>>(PrepareAsyncRegistRaw(context, request, cq));
    }
    ::grpc::Status Login(::grpc::ClientContext* context, const ::IM::Login::IMLoginReq& request, ::IM::Login::IMLoginRes* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::IM::Login::IMLoginRes>> AsyncLogin(::grpc::ClientContext* context, const ::IM::Login::IMLoginReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::IM::Login::IMLoginRes>>(AsyncLoginRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::IM::Login::IMLoginRes>> PrepareAsyncLogin(::grpc::ClientContext* context, const ::IM::Login::IMLoginReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::IM::Login::IMLoginRes>>(PrepareAsyncLoginRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Regist(::grpc::ClientContext* context, const ::IM::Login::IMRegisterReq* request, ::IM::Login::IMRegisterRes* response, std::function<void(::grpc::Status)>) override;
      void Regist(::grpc::ClientContext* context, const ::IM::Login::IMRegisterReq* request, ::IM::Login::IMRegisterRes* response, ::grpc::ClientUnaryReactor* reactor) override;
      void Login(::grpc::ClientContext* context, const ::IM::Login::IMLoginReq* request, ::IM::Login::IMLoginRes* response, std::function<void(::grpc::Status)>) override;
      void Login(::grpc::ClientContext* context, const ::IM::Login::IMLoginReq* request, ::IM::Login::IMLoginRes* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::IM::Login::IMRegisterRes>* AsyncRegistRaw(::grpc::ClientContext* context, const ::IM::Login::IMRegisterReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::IM::Login::IMRegisterRes>* PrepareAsyncRegistRaw(::grpc::ClientContext* context, const ::IM::Login::IMRegisterReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::IM::Login::IMLoginRes>* AsyncLoginRaw(::grpc::ClientContext* context, const ::IM::Login::IMLoginReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::IM::Login::IMLoginRes>* PrepareAsyncLoginRaw(::grpc::ClientContext* context, const ::IM::Login::IMLoginReq& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Regist_;
    const ::grpc::internal::RpcMethod rpcmethod_Login_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // 定义服务函数
    virtual ::grpc::Status Regist(::grpc::ServerContext* context, const ::IM::Login::IMRegisterReq* request, ::IM::Login::IMRegisterRes* response);
    virtual ::grpc::Status Login(::grpc::ServerContext* context, const ::IM::Login::IMLoginReq* request, ::IM::Login::IMLoginRes* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Regist : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Regist() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Regist() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Regist(::grpc::ServerContext* /*context*/, const ::IM::Login::IMRegisterReq* /*request*/, ::IM::Login::IMRegisterRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRegist(::grpc::ServerContext* context, ::IM::Login::IMRegisterReq* request, ::grpc::ServerAsyncResponseWriter< ::IM::Login::IMRegisterRes>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Login : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Login() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Login() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Login(::grpc::ServerContext* /*context*/, const ::IM::Login::IMLoginReq* /*request*/, ::IM::Login::IMLoginRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestLogin(::grpc::ServerContext* context, ::IM::Login::IMLoginReq* request, ::grpc::ServerAsyncResponseWriter< ::IM::Login::IMLoginRes>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Regist<WithAsyncMethod_Login<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Regist : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Regist() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::IM::Login::IMRegisterReq, ::IM::Login::IMRegisterRes>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::IM::Login::IMRegisterReq* request, ::IM::Login::IMRegisterRes* response) { return this->Regist(context, request, response); }));}
    void SetMessageAllocatorFor_Regist(
        ::grpc::MessageAllocator< ::IM::Login::IMRegisterReq, ::IM::Login::IMRegisterRes>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::IM::Login::IMRegisterReq, ::IM::Login::IMRegisterRes>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Regist() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Regist(::grpc::ServerContext* /*context*/, const ::IM::Login::IMRegisterReq* /*request*/, ::IM::Login::IMRegisterRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Regist(
      ::grpc::CallbackServerContext* /*context*/, const ::IM::Login::IMRegisterReq* /*request*/, ::IM::Login::IMRegisterRes* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_Login : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Login() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::IM::Login::IMLoginReq, ::IM::Login::IMLoginRes>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::IM::Login::IMLoginReq* request, ::IM::Login::IMLoginRes* response) { return this->Login(context, request, response); }));}
    void SetMessageAllocatorFor_Login(
        ::grpc::MessageAllocator< ::IM::Login::IMLoginReq, ::IM::Login::IMLoginRes>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::IM::Login::IMLoginReq, ::IM::Login::IMLoginRes>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Login() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Login(::grpc::ServerContext* /*context*/, const ::IM::Login::IMLoginReq* /*request*/, ::IM::Login::IMLoginRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Login(
      ::grpc::CallbackServerContext* /*context*/, const ::IM::Login::IMLoginReq* /*request*/, ::IM::Login::IMLoginRes* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Regist<WithCallbackMethod_Login<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Regist : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Regist() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Regist() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Regist(::grpc::ServerContext* /*context*/, const ::IM::Login::IMRegisterReq* /*request*/, ::IM::Login::IMRegisterRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Login : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Login() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Login() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Login(::grpc::ServerContext* /*context*/, const ::IM::Login::IMLoginReq* /*request*/, ::IM::Login::IMLoginRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Regist : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Regist() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Regist() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Regist(::grpc::ServerContext* /*context*/, const ::IM::Login::IMRegisterReq* /*request*/, ::IM::Login::IMRegisterRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRegist(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Login : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Login() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Login() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Login(::grpc::ServerContext* /*context*/, const ::IM::Login::IMLoginReq* /*request*/, ::IM::Login::IMLoginRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestLogin(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Regist : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Regist() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Regist(context, request, response); }));
    }
    ~WithRawCallbackMethod_Regist() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Regist(::grpc::ServerContext* /*context*/, const ::IM::Login::IMRegisterReq* /*request*/, ::IM::Login::IMRegisterRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Regist(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Login : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Login() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Login(context, request, response); }));
    }
    ~WithRawCallbackMethod_Login() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Login(::grpc::ServerContext* /*context*/, const ::IM::Login::IMLoginReq* /*request*/, ::IM::Login::IMLoginRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Login(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Regist : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Regist() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::IM::Login::IMRegisterReq, ::IM::Login::IMRegisterRes>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::IM::Login::IMRegisterReq, ::IM::Login::IMRegisterRes>* streamer) {
                       return this->StreamedRegist(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Regist() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Regist(::grpc::ServerContext* /*context*/, const ::IM::Login::IMRegisterReq* /*request*/, ::IM::Login::IMRegisterRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedRegist(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::IM::Login::IMRegisterReq,::IM::Login::IMRegisterRes>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Login : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Login() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::IM::Login::IMLoginReq, ::IM::Login::IMLoginRes>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::IM::Login::IMLoginReq, ::IM::Login::IMLoginRes>* streamer) {
                       return this->StreamedLogin(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Login() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Login(::grpc::ServerContext* /*context*/, const ::IM::Login::IMLoginReq* /*request*/, ::IM::Login::IMLoginRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedLogin(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::IM::Login::IMLoginReq,::IM::Login::IMLoginRes>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Regist<WithStreamedUnaryMethod_Login<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Regist<WithStreamedUnaryMethod_Login<Service > > StreamedService;
};

}  // namespace Login
}  // namespace IM


#endif  // GRPC_IM_2eLogin_2eproto__INCLUDED
