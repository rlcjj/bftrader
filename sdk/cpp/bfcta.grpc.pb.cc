// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: bfcta.proto

#include "bfcta.pb.h"
#include "bfcta.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace bftrader {
namespace bfctaservice {

static const char* BfCtaService_method_names[] = {
  "/bftrader.bfctaservice.BfCtaService/Connect",
  "/bftrader.bfctaservice.BfCtaService/GetRobotInfo",
  "/bftrader.bfctaservice.BfCtaService/SendOrder",
  "/bftrader.bfctaservice.BfCtaService/CancelOrder",
  "/bftrader.bfctaservice.BfCtaService/Close",
};

std::unique_ptr< BfCtaService::Stub> BfCtaService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< BfCtaService::Stub> stub(new BfCtaService::Stub(channel));
  return stub;
}

BfCtaService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Connect_(BfCtaService_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetRobotInfo_(BfCtaService_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SendOrder_(BfCtaService_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CancelOrder_(BfCtaService_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Close_(BfCtaService_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status BfCtaService::Stub::Connect(::grpc::ClientContext* context, const ::bftrader::BfConnectReq& request, ::bftrader::BfConnectResp* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Connect_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::bftrader::BfConnectResp>* BfCtaService::Stub::AsyncConnectRaw(::grpc::ClientContext* context, const ::bftrader::BfConnectReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::bftrader::BfConnectResp>(channel_.get(), cq, rpcmethod_Connect_, context, request);
}

::grpc::Status BfCtaService::Stub::GetRobotInfo(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::bftrader::BfKvData* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_GetRobotInfo_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::bftrader::BfKvData>* BfCtaService::Stub::AsyncGetRobotInfoRaw(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::bftrader::BfKvData>(channel_.get(), cq, rpcmethod_GetRobotInfo_, context, request);
}

::grpc::Status BfCtaService::Stub::SendOrder(::grpc::ClientContext* context, const ::bftrader::BfSendOrderReq& request, ::bftrader::BfSendOrderResp* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SendOrder_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::bftrader::BfSendOrderResp>* BfCtaService::Stub::AsyncSendOrderRaw(::grpc::ClientContext* context, const ::bftrader::BfSendOrderReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::bftrader::BfSendOrderResp>(channel_.get(), cq, rpcmethod_SendOrder_, context, request);
}

::grpc::Status BfCtaService::Stub::CancelOrder(::grpc::ClientContext* context, const ::bftrader::BfCancelOrderReq& request, ::bftrader::BfVoid* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CancelOrder_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* BfCtaService::Stub::AsyncCancelOrderRaw(::grpc::ClientContext* context, const ::bftrader::BfCancelOrderReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>(channel_.get(), cq, rpcmethod_CancelOrder_, context, request);
}

::grpc::Status BfCtaService::Stub::Close(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::bftrader::BfVoid* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Close_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* BfCtaService::Stub::AsyncCloseRaw(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>(channel_.get(), cq, rpcmethod_Close_, context, request);
}

BfCtaService::Service::Service() {
  (void)BfCtaService_method_names;
  AddMethod(new ::grpc::RpcServiceMethod(
      BfCtaService_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< BfCtaService::Service, ::bftrader::BfConnectReq, ::bftrader::BfConnectResp>(
          std::mem_fn(&BfCtaService::Service::Connect), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      BfCtaService_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< BfCtaService::Service, ::bftrader::BfKvData, ::bftrader::BfKvData>(
          std::mem_fn(&BfCtaService::Service::GetRobotInfo), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      BfCtaService_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< BfCtaService::Service, ::bftrader::BfSendOrderReq, ::bftrader::BfSendOrderResp>(
          std::mem_fn(&BfCtaService::Service::SendOrder), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      BfCtaService_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< BfCtaService::Service, ::bftrader::BfCancelOrderReq, ::bftrader::BfVoid>(
          std::mem_fn(&BfCtaService::Service::CancelOrder), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      BfCtaService_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< BfCtaService::Service, ::bftrader::BfVoid, ::bftrader::BfVoid>(
          std::mem_fn(&BfCtaService::Service::Close), this)));
}

BfCtaService::Service::~Service() {
}

::grpc::Status BfCtaService::Service::Connect(::grpc::ServerContext* context, const ::bftrader::BfConnectReq* request, ::bftrader::BfConnectResp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BfCtaService::Service::GetRobotInfo(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfKvData* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BfCtaService::Service::SendOrder(::grpc::ServerContext* context, const ::bftrader::BfSendOrderReq* request, ::bftrader::BfSendOrderResp* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BfCtaService::Service::CancelOrder(::grpc::ServerContext* context, const ::bftrader::BfCancelOrderReq* request, ::bftrader::BfVoid* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status BfCtaService::Service::Close(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::bftrader::BfVoid* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace bftrader
}  // namespace bfctaservice
