// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/framework/stream_handler/default_input_stream_handler.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fframework_2fstream_5fhandler_2fdefault_5finput_5fstream_5fhandler_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fframework_2fstream_5fhandler_2fdefault_5finput_5fstream_5fhandler_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "mediapipe/framework/mediapipe_options.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_mediapipe_2fframework_2fstream_5fhandler_2fdefault_5finput_5fstream_5fhandler_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mediapipe_2fframework_2fstream_5fhandler_2fdefault_5finput_5fstream_5fhandler_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fframework_2fstream_5fhandler_2fdefault_5finput_5fstream_5fhandler_2eproto;
namespace mediapipe {
class DefaultInputStreamHandlerOptions;
class DefaultInputStreamHandlerOptionsDefaultTypeInternal;
extern DefaultInputStreamHandlerOptionsDefaultTypeInternal _DefaultInputStreamHandlerOptions_default_instance_;
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> ::mediapipe::DefaultInputStreamHandlerOptions* Arena::CreateMaybeMessage<::mediapipe::DefaultInputStreamHandlerOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mediapipe {

// ===================================================================

class DefaultInputStreamHandlerOptions :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.DefaultInputStreamHandlerOptions) */ {
 public:
  DefaultInputStreamHandlerOptions();
  virtual ~DefaultInputStreamHandlerOptions();

  DefaultInputStreamHandlerOptions(const DefaultInputStreamHandlerOptions& from);
  DefaultInputStreamHandlerOptions(DefaultInputStreamHandlerOptions&& from) noexcept
    : DefaultInputStreamHandlerOptions() {
    *this = ::std::move(from);
  }

  inline DefaultInputStreamHandlerOptions& operator=(const DefaultInputStreamHandlerOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline DefaultInputStreamHandlerOptions& operator=(DefaultInputStreamHandlerOptions&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const DefaultInputStreamHandlerOptions& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DefaultInputStreamHandlerOptions* internal_default_instance() {
    return reinterpret_cast<const DefaultInputStreamHandlerOptions*>(
               &_DefaultInputStreamHandlerOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DefaultInputStreamHandlerOptions& a, DefaultInputStreamHandlerOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(DefaultInputStreamHandlerOptions* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DefaultInputStreamHandlerOptions* New() const final {
    return CreateMaybeMessage<DefaultInputStreamHandlerOptions>(nullptr);
  }

  DefaultInputStreamHandlerOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DefaultInputStreamHandlerOptions>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const DefaultInputStreamHandlerOptions& from);
  void MergeFrom(const DefaultInputStreamHandlerOptions& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DefaultInputStreamHandlerOptions* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.DefaultInputStreamHandlerOptions";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_mediapipe_2fframework_2fstream_5fhandler_2fdefault_5finput_5fstream_5fhandler_2eproto);
    return ::descriptor_table_mediapipe_2fframework_2fstream_5fhandler_2fdefault_5finput_5fstream_5fhandler_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBatchSizeFieldNumber = 1,
  };
  // optional int32 batch_size = 1 [default = 1];
  bool has_batch_size() const;
  private:
  bool _internal_has_batch_size() const;
  public:
  void clear_batch_size();
  ::PROTOBUF_NAMESPACE_ID::int32 batch_size() const;
  void set_batch_size(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_batch_size() const;
  void _internal_set_batch_size(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  static const int kExtFieldNumber = 164312821;
  static ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::MediaPipeOptions,
      ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::DefaultInputStreamHandlerOptions >, 11, false >
    ext;
  // @@protoc_insertion_point(class_scope:mediapipe.DefaultInputStreamHandlerOptions)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 batch_size_;
  friend struct ::TableStruct_mediapipe_2fframework_2fstream_5fhandler_2fdefault_5finput_5fstream_5fhandler_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DefaultInputStreamHandlerOptions

// optional int32 batch_size = 1 [default = 1];
inline bool DefaultInputStreamHandlerOptions::_internal_has_batch_size() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool DefaultInputStreamHandlerOptions::has_batch_size() const {
  return _internal_has_batch_size();
}
inline void DefaultInputStreamHandlerOptions::clear_batch_size() {
  batch_size_ = 1;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 DefaultInputStreamHandlerOptions::_internal_batch_size() const {
  return batch_size_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 DefaultInputStreamHandlerOptions::batch_size() const {
  // @@protoc_insertion_point(field_get:mediapipe.DefaultInputStreamHandlerOptions.batch_size)
  return _internal_batch_size();
}
inline void DefaultInputStreamHandlerOptions::_internal_set_batch_size(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  batch_size_ = value;
}
inline void DefaultInputStreamHandlerOptions::set_batch_size(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_batch_size(value);
  // @@protoc_insertion_point(field_set:mediapipe.DefaultInputStreamHandlerOptions.batch_size)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mediapipe

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fframework_2fstream_5fhandler_2fdefault_5finput_5fstream_5fhandler_2eproto
