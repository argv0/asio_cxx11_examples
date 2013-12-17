// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sample.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "sample.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace asio_sample {

namespace {

const ::google::protobuf::Descriptor* request_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  request_reflection_ = NULL;
const ::google::protobuf::Descriptor* request_get_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  request_get_reflection_ = NULL;
const ::google::protobuf::Descriptor* request_set_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  request_set_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* request_request_type_descriptor_ = NULL;
const ::google::protobuf::Descriptor* response_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  response_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_sample_2eproto() {
  protobuf_AddDesc_sample_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "sample.proto");
  GOOGLE_CHECK(file != NULL);
  request_descriptor_ = file->message_type(0);
  static const int request_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, request_get_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, request_set_),
  };
  request_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      request_descriptor_,
      request::default_instance_,
      request_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(request));
  request_get_descriptor_ = request_descriptor_->nested_type(0);
  static const int request_get_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request_get, key_),
  };
  request_get_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      request_get_descriptor_,
      request_get::default_instance_,
      request_get_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request_get, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request_get, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(request_get));
  request_set_descriptor_ = request_descriptor_->nested_type(1);
  static const int request_set_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request_set, key_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request_set, value_),
  };
  request_set_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      request_set_descriptor_,
      request_set::default_instance_,
      request_set_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request_set, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(request_set, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(request_set));
  request_request_type_descriptor_ = request_descriptor_->enum_type(0);
  response_descriptor_ = file->message_type(1);
  static const int response_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(response, value_),
  };
  response_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      response_descriptor_,
      response::default_instance_,
      response_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(response, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(response, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(response));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_sample_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    request_descriptor_, &request::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    request_get_descriptor_, &request_get::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    request_set_descriptor_, &request_set::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    response_descriptor_, &response::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_sample_2eproto() {
  delete request::default_instance_;
  delete request_reflection_;
  delete request_get::default_instance_;
  delete request_get_reflection_;
  delete request_set::default_instance_;
  delete request_set_reflection_;
  delete response::default_instance_;
  delete response_reflection_;
}

void protobuf_AddDesc_sample_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014sample.proto\022\013asio_sample\"\375\001\n\007request\022"
    "/\n\004type\030\001 \002(\0162!.asio_sample.request.requ"
    "est_type\022-\n\013request_get\030\025 \001(\0132\030.asio_sam"
    "ple.request.get\022-\n\013request_set\030\026 \001(\0132\030.a"
    "sio_sample.request.set\032\022\n\003get\022\013\n\003key\030\001 \002"
    "(\t\032!\n\003set\022\013\n\003key\030\001 \002(\t\022\r\n\005value\030\002 \002(\t\",\n"
    "\014request_type\022\r\n\tGET_VALUE\020\001\022\r\n\tSET_VALU"
    "E\020\002\"\031\n\010response\022\r\n\005value\030\001 \002(\t", 310);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "sample.proto", &protobuf_RegisterTypes);
  request::default_instance_ = new request();
  request_get::default_instance_ = new request_get();
  request_set::default_instance_ = new request_set();
  response::default_instance_ = new response();
  request::default_instance_->InitAsDefaultInstance();
  request_get::default_instance_->InitAsDefaultInstance();
  request_set::default_instance_->InitAsDefaultInstance();
  response::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_sample_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_sample_2eproto {
  StaticDescriptorInitializer_sample_2eproto() {
    protobuf_AddDesc_sample_2eproto();
  }
} static_descriptor_initializer_sample_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* request_request_type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return request_request_type_descriptor_;
}
bool request_request_type_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const request_request_type request::GET_VALUE;
const request_request_type request::SET_VALUE;
const request_request_type request::request_type_MIN;
const request_request_type request::request_type_MAX;
const int request::request_type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int request_get::kKeyFieldNumber;
#endif  // !_MSC_VER

request_get::request_get()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void request_get::InitAsDefaultInstance() {
}

request_get::request_get(const request_get& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void request_get::SharedCtor() {
  _cached_size_ = 0;
  key_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

request_get::~request_get() {
  SharedDtor();
}

void request_get::SharedDtor() {
  if (key_ != &::google::protobuf::internal::kEmptyString) {
    delete key_;
  }
  if (this != default_instance_) {
  }
}

void request_get::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* request_get::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return request_get_descriptor_;
}

const request_get& request_get::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_sample_2eproto();
  return *default_instance_;
}

request_get* request_get::default_instance_ = NULL;

request_get* request_get::New() const {
  return new request_get;
}

void request_get::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_key()) {
      if (key_ != &::google::protobuf::internal::kEmptyString) {
        key_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool request_get::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string key = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->key().data(), this->key().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void request_get::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string key = 1;
  if (has_key()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->key(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* request_get::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string key = 1;
  if (has_key()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->key(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int request_get::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string key = 1;
    if (has_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->key());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void request_get::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const request_get* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const request_get*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void request_get::MergeFrom(const request_get& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_key()) {
      set_key(from.key());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void request_get::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void request_get::CopyFrom(const request_get& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool request_get::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void request_get::Swap(request_get* other) {
  if (other != this) {
    std::swap(key_, other->key_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata request_get::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = request_get_descriptor_;
  metadata.reflection = request_get_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int request_set::kKeyFieldNumber;
const int request_set::kValueFieldNumber;
#endif  // !_MSC_VER

request_set::request_set()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void request_set::InitAsDefaultInstance() {
}

request_set::request_set(const request_set& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void request_set::SharedCtor() {
  _cached_size_ = 0;
  key_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

request_set::~request_set() {
  SharedDtor();
}

void request_set::SharedDtor() {
  if (key_ != &::google::protobuf::internal::kEmptyString) {
    delete key_;
  }
  if (value_ != &::google::protobuf::internal::kEmptyString) {
    delete value_;
  }
  if (this != default_instance_) {
  }
}

void request_set::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* request_set::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return request_set_descriptor_;
}

const request_set& request_set::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_sample_2eproto();
  return *default_instance_;
}

request_set* request_set::default_instance_ = NULL;

request_set* request_set::New() const {
  return new request_set;
}

void request_set::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_key()) {
      if (key_ != &::google::protobuf::internal::kEmptyString) {
        key_->clear();
      }
    }
    if (has_value()) {
      if (value_ != &::google::protobuf::internal::kEmptyString) {
        value_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool request_set::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string key = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->key().data(), this->key().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_value;
        break;
      }

      // required string value = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->value().data(), this->value().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void request_set::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string key = 1;
  if (has_key()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->key(), output);
  }

  // required string value = 2;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* request_set::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string key = 1;
  if (has_key()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->key(), target);
  }

  // required string value = 2;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int request_set::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string key = 1;
    if (has_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->key());
    }

    // required string value = 2;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->value());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void request_set::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const request_set* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const request_set*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void request_set::MergeFrom(const request_set& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_key()) {
      set_key(from.key());
    }
    if (from.has_value()) {
      set_value(from.value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void request_set::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void request_set::CopyFrom(const request_set& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool request_set::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void request_set::Swap(request_set* other) {
  if (other != this) {
    std::swap(key_, other->key_);
    std::swap(value_, other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata request_set::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = request_set_descriptor_;
  metadata.reflection = request_set_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int request::kTypeFieldNumber;
const int request::kRequestGetFieldNumber;
const int request::kRequestSetFieldNumber;
#endif  // !_MSC_VER

request::request()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void request::InitAsDefaultInstance() {
  request_get_ = const_cast< ::asio_sample::request_get*>(&::asio_sample::request_get::default_instance());
  request_set_ = const_cast< ::asio_sample::request_set*>(&::asio_sample::request_set::default_instance());
}

request::request(const request& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void request::SharedCtor() {
  _cached_size_ = 0;
  type_ = 1;
  request_get_ = NULL;
  request_set_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

request::~request() {
  SharedDtor();
}

void request::SharedDtor() {
  if (this != default_instance_) {
    delete request_get_;
    delete request_set_;
  }
}

void request::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* request::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return request_descriptor_;
}

const request& request::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_sample_2eproto();
  return *default_instance_;
}

request* request::default_instance_ = NULL;

request* request::New() const {
  return new request;
}

void request::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 1;
    if (has_request_get()) {
      if (request_get_ != NULL) request_get_->::asio_sample::request_get::Clear();
    }
    if (has_request_set()) {
      if (request_set_ != NULL) request_set_->::asio_sample::request_set::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool request::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .asio_sample.request.request_type type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::asio_sample::request_request_type_IsValid(value)) {
            set_type(static_cast< ::asio_sample::request_request_type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(170)) goto parse_request_get;
        break;
      }

      // optional .asio_sample.request.get request_get = 21;
      case 21: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_request_get:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_request_get()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(178)) goto parse_request_set;
        break;
      }

      // optional .asio_sample.request.set request_set = 22;
      case 22: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_request_set:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_request_set()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void request::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .asio_sample.request.request_type type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional .asio_sample.request.get request_get = 21;
  if (has_request_get()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      21, this->request_get(), output);
  }

  // optional .asio_sample.request.set request_set = 22;
  if (has_request_set()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      22, this->request_set(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* request::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .asio_sample.request.request_type type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional .asio_sample.request.get request_get = 21;
  if (has_request_get()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        21, this->request_get(), target);
  }

  // optional .asio_sample.request.set request_set = 22;
  if (has_request_set()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        22, this->request_set(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int request::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .asio_sample.request.request_type type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional .asio_sample.request.get request_get = 21;
    if (has_request_get()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->request_get());
    }

    // optional .asio_sample.request.set request_set = 22;
    if (has_request_set()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->request_set());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void request::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const request* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const request*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void request::MergeFrom(const request& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_request_get()) {
      mutable_request_get()->::asio_sample::request_get::MergeFrom(from.request_get());
    }
    if (from.has_request_set()) {
      mutable_request_set()->::asio_sample::request_set::MergeFrom(from.request_set());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void request::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void request::CopyFrom(const request& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool request::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_request_get()) {
    if (!this->request_get().IsInitialized()) return false;
  }
  if (has_request_set()) {
    if (!this->request_set().IsInitialized()) return false;
  }
  return true;
}

void request::Swap(request* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(request_get_, other->request_get_);
    std::swap(request_set_, other->request_set_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata request::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = request_descriptor_;
  metadata.reflection = request_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int response::kValueFieldNumber;
#endif  // !_MSC_VER

response::response()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void response::InitAsDefaultInstance() {
}

response::response(const response& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void response::SharedCtor() {
  _cached_size_ = 0;
  value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

response::~response() {
  SharedDtor();
}

void response::SharedDtor() {
  if (value_ != &::google::protobuf::internal::kEmptyString) {
    delete value_;
  }
  if (this != default_instance_) {
  }
}

void response::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* response::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return response_descriptor_;
}

const response& response::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_sample_2eproto();
  return *default_instance_;
}

response* response::default_instance_ = NULL;

response* response::New() const {
  return new response;
}

void response::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_value()) {
      if (value_ != &::google::protobuf::internal::kEmptyString) {
        value_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool response::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string value = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->value().data(), this->value().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void response::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string value = 1;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* response::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string value = 1;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int response::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string value = 1;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->value());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void response::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const response* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const response*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void response::MergeFrom(const response& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_value()) {
      set_value(from.value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void response::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void response::CopyFrom(const response& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool response::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void response::Swap(response* other) {
  if (other != this) {
    std::swap(value_, other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata response::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = response_descriptor_;
  metadata.reflection = response_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace asio_sample

// @@protoc_insertion_point(global_scope)
