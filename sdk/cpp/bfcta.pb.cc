// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bfcta.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "bfcta.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace bftrader {
namespace bfctaservice {

namespace {


}  // namespace


void protobuf_AssignDesc_bfcta_2eproto() {
  protobuf_AddDesc_bfcta_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "bfcta.proto");
  GOOGLE_CHECK(file != NULL);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_bfcta_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_bfcta_2eproto() {
}

void protobuf_AddDesc_bfcta_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::bftrader::protobuf_AddDesc_bftrader_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013bfcta.proto\022\025bftrader.bfctaservice\032\016bf"
    "trader.proto2\270\002\n\014BfCtaService\022<\n\007Connect"
    "\022\026.bftrader.BfConnectReq\032\027.bftrader.BfCo"
    "nnectResp\"\000\0228\n\014GetRobotInfo\022\022.bftrader.B"
    "fKvData\032\022.bftrader.BfKvData\"\000\022B\n\tSendOrd"
    "er\022\030.bftrader.BfSendOrderReq\032\031.bftrader."
    "BfSendOrderResp\"\000\022=\n\013CancelOrder\022\032.bftra"
    "der.BfCancelOrderReq\032\020.bftrader.BfVoid\"\000"
    "\022-\n\005Close\022\020.bftrader.BfVoid\032\020.bftrader.B"
    "fVoid\"\000b\006proto3", 375);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "bfcta.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_bfcta_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_bfcta_2eproto {
  StaticDescriptorInitializer_bfcta_2eproto() {
    protobuf_AddDesc_bfcta_2eproto();
  }
} static_descriptor_initializer_bfcta_2eproto_;

// @@protoc_insertion_point(namespace_scope)

}  // namespace bfctaservice
}  // namespace bftrader

// @@protoc_insertion_point(global_scope)