// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/framework/packet_factory.proto

#include "mediapipe/framework/packet_factory.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_mediapipe_2fframework_2fpacket_5ffactory_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_PacketFactoryConfig_mediapipe_2fframework_2fpacket_5ffactory_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_mediapipe_2fframework_2fpacket_5ffactory_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PacketFactoryOptions_mediapipe_2fframework_2fpacket_5ffactory_2eproto;
namespace mediapipe {
class PacketFactoryOptionsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PacketFactoryOptions> _instance;
} _PacketFactoryOptions_default_instance_;
class PacketFactoryConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PacketFactoryConfig> _instance;
} _PacketFactoryConfig_default_instance_;
class PacketManagerConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PacketManagerConfig> _instance;
} _PacketManagerConfig_default_instance_;
}  // namespace mediapipe
static void InitDefaultsscc_info_PacketFactoryConfig_mediapipe_2fframework_2fpacket_5ffactory_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mediapipe::_PacketFactoryConfig_default_instance_;
    new (ptr) ::mediapipe::PacketFactoryConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mediapipe::PacketFactoryConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_PacketFactoryConfig_mediapipe_2fframework_2fpacket_5ffactory_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_PacketFactoryConfig_mediapipe_2fframework_2fpacket_5ffactory_2eproto}, {
      &scc_info_PacketFactoryOptions_mediapipe_2fframework_2fpacket_5ffactory_2eproto.base,}};

static void InitDefaultsscc_info_PacketFactoryOptions_mediapipe_2fframework_2fpacket_5ffactory_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mediapipe::_PacketFactoryOptions_default_instance_;
    new (ptr) ::mediapipe::PacketFactoryOptions();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mediapipe::PacketFactoryOptions::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PacketFactoryOptions_mediapipe_2fframework_2fpacket_5ffactory_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_PacketFactoryOptions_mediapipe_2fframework_2fpacket_5ffactory_2eproto}, {}};

static void InitDefaultsscc_info_PacketManagerConfig_mediapipe_2fframework_2fpacket_5ffactory_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mediapipe::_PacketManagerConfig_default_instance_;
    new (ptr) ::mediapipe::PacketManagerConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mediapipe::PacketManagerConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_PacketManagerConfig_mediapipe_2fframework_2fpacket_5ffactory_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_PacketManagerConfig_mediapipe_2fframework_2fpacket_5ffactory_2eproto}, {
      &scc_info_PacketFactoryConfig_mediapipe_2fframework_2fpacket_5ffactory_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mediapipe_2fframework_2fpacket_5ffactory_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mediapipe_2fframework_2fpacket_5ffactory_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mediapipe_2fframework_2fpacket_5ffactory_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mediapipe_2fframework_2fpacket_5ffactory_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketFactoryOptions, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketFactoryOptions, _internal_metadata_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketFactoryOptions, _extensions_),
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketFactoryConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketFactoryConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketFactoryConfig, packet_factory_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketFactoryConfig, output_side_packet_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketFactoryConfig, external_output_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketFactoryConfig, options_),
  0,
  1,
  2,
  3,
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketManagerConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketManagerConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketManagerConfig, packet_),
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 5, sizeof(::mediapipe::PacketFactoryOptions)},
  { 5, 14, sizeof(::mediapipe::PacketFactoryConfig)},
  { 18, 24, sizeof(::mediapipe::PacketManagerConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_PacketFactoryOptions_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_PacketFactoryConfig_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_PacketManagerConfig_default_instance_),
};

const char descriptor_table_protodef_mediapipe_2fframework_2fpacket_5ffactory_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n(mediapipe/framework/packet_factory.pro"
  "to\022\tmediapipe\"\"\n\024PacketFactoryOptions*\n\010"
  "\240\234\001\020\200\200\200\200\002\"\225\001\n\023PacketFactoryConfig\022\026\n\016pac"
  "ket_factory\030\001 \001(\t\022\032\n\022output_side_packet\030"
  "\002 \001(\t\022\030\n\017external_output\030\352\007 \001(\t\0220\n\007optio"
  "ns\030\003 \001(\0132\037.mediapipe.PacketFactoryOption"
  "s\"E\n\023PacketManagerConfig\022.\n\006packet\030\001 \003(\013"
  "2\036.mediapipe.PacketFactoryConfig"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mediapipe_2fframework_2fpacket_5ffactory_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_mediapipe_2fframework_2fpacket_5ffactory_2eproto_sccs[3] = {
  &scc_info_PacketFactoryConfig_mediapipe_2fframework_2fpacket_5ffactory_2eproto.base,
  &scc_info_PacketFactoryOptions_mediapipe_2fframework_2fpacket_5ffactory_2eproto.base,
  &scc_info_PacketManagerConfig_mediapipe_2fframework_2fpacket_5ffactory_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mediapipe_2fframework_2fpacket_5ffactory_2eproto_once;
static bool descriptor_table_mediapipe_2fframework_2fpacket_5ffactory_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fframework_2fpacket_5ffactory_2eproto = {
  &descriptor_table_mediapipe_2fframework_2fpacket_5ffactory_2eproto_initialized, descriptor_table_protodef_mediapipe_2fframework_2fpacket_5ffactory_2eproto, "mediapipe/framework/packet_factory.proto", 312,
  &descriptor_table_mediapipe_2fframework_2fpacket_5ffactory_2eproto_once, descriptor_table_mediapipe_2fframework_2fpacket_5ffactory_2eproto_sccs, descriptor_table_mediapipe_2fframework_2fpacket_5ffactory_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_mediapipe_2fframework_2fpacket_5ffactory_2eproto::offsets,
  file_level_metadata_mediapipe_2fframework_2fpacket_5ffactory_2eproto, 3, file_level_enum_descriptors_mediapipe_2fframework_2fpacket_5ffactory_2eproto, file_level_service_descriptors_mediapipe_2fframework_2fpacket_5ffactory_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_mediapipe_2fframework_2fpacket_5ffactory_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_mediapipe_2fframework_2fpacket_5ffactory_2eproto), true);
namespace mediapipe {

// ===================================================================

void PacketFactoryOptions::InitAsDefaultInstance() {
}
class PacketFactoryOptions::_Internal {
 public:
  using HasBits = decltype(std::declval<PacketFactoryOptions>()._has_bits_);
};

PacketFactoryOptions::PacketFactoryOptions()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mediapipe.PacketFactoryOptions)
}
PacketFactoryOptions::PacketFactoryOptions(const PacketFactoryOptions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  _extensions_.MergeFrom(from._extensions_);
  // @@protoc_insertion_point(copy_constructor:mediapipe.PacketFactoryOptions)
}

void PacketFactoryOptions::SharedCtor() {
}

PacketFactoryOptions::~PacketFactoryOptions() {
  // @@protoc_insertion_point(destructor:mediapipe.PacketFactoryOptions)
  SharedDtor();
}

void PacketFactoryOptions::SharedDtor() {
}

void PacketFactoryOptions::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PacketFactoryOptions& PacketFactoryOptions::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PacketFactoryOptions_mediapipe_2fframework_2fpacket_5ffactory_2eproto.base);
  return *internal_default_instance();
}


void PacketFactoryOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.PacketFactoryOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _extensions_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* PacketFactoryOptions::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
      if ((160000u <= tag)) {
        ptr = _extensions_.ParseField(tag, ptr,
            internal_default_instance(), &_internal_metadata_, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* PacketFactoryOptions::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.PacketFactoryOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // Extension range [20000, 536870912)
  target = _extensions_._InternalSerialize(
      20000, 536870912, target, stream);

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.PacketFactoryOptions)
  return target;
}

size_t PacketFactoryOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.PacketFactoryOptions)
  size_t total_size = 0;

  total_size += _extensions_.ByteSize();

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PacketFactoryOptions::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mediapipe.PacketFactoryOptions)
  GOOGLE_DCHECK_NE(&from, this);
  const PacketFactoryOptions* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PacketFactoryOptions>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mediapipe.PacketFactoryOptions)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mediapipe.PacketFactoryOptions)
    MergeFrom(*source);
  }
}

void PacketFactoryOptions::MergeFrom(const PacketFactoryOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.PacketFactoryOptions)
  GOOGLE_DCHECK_NE(&from, this);
  _extensions_.MergeFrom(from._extensions_);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void PacketFactoryOptions::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mediapipe.PacketFactoryOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PacketFactoryOptions::CopyFrom(const PacketFactoryOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.PacketFactoryOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PacketFactoryOptions::IsInitialized() const {
  if (!_extensions_.IsInitialized()) {
    return false;
  }

  return true;
}

void PacketFactoryOptions::InternalSwap(PacketFactoryOptions* other) {
  using std::swap;
  _extensions_.Swap(&other->_extensions_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata PacketFactoryOptions::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void PacketFactoryConfig::InitAsDefaultInstance() {
  ::mediapipe::_PacketFactoryConfig_default_instance_._instance.get_mutable()->options_ = const_cast< ::mediapipe::PacketFactoryOptions*>(
      ::mediapipe::PacketFactoryOptions::internal_default_instance());
}
class PacketFactoryConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<PacketFactoryConfig>()._has_bits_);
  static void set_has_packet_factory(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_output_side_packet(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_external_output(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::mediapipe::PacketFactoryOptions& options(const PacketFactoryConfig* msg);
  static void set_has_options(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

const ::mediapipe::PacketFactoryOptions&
PacketFactoryConfig::_Internal::options(const PacketFactoryConfig* msg) {
  return *msg->options_;
}
PacketFactoryConfig::PacketFactoryConfig()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mediapipe.PacketFactoryConfig)
}
PacketFactoryConfig::PacketFactoryConfig(const PacketFactoryConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  packet_factory_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_packet_factory()) {
    packet_factory_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.packet_factory_);
  }
  output_side_packet_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_output_side_packet()) {
    output_side_packet_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.output_side_packet_);
  }
  external_output_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_external_output()) {
    external_output_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.external_output_);
  }
  if (from._internal_has_options()) {
    options_ = new ::mediapipe::PacketFactoryOptions(*from.options_);
  } else {
    options_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:mediapipe.PacketFactoryConfig)
}

void PacketFactoryConfig::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_PacketFactoryConfig_mediapipe_2fframework_2fpacket_5ffactory_2eproto.base);
  packet_factory_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  output_side_packet_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  external_output_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  options_ = nullptr;
}

PacketFactoryConfig::~PacketFactoryConfig() {
  // @@protoc_insertion_point(destructor:mediapipe.PacketFactoryConfig)
  SharedDtor();
}

void PacketFactoryConfig::SharedDtor() {
  packet_factory_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  output_side_packet_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  external_output_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete options_;
}

void PacketFactoryConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PacketFactoryConfig& PacketFactoryConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PacketFactoryConfig_mediapipe_2fframework_2fpacket_5ffactory_2eproto.base);
  return *internal_default_instance();
}


void PacketFactoryConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.PacketFactoryConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      packet_factory_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      output_side_packet_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      external_output_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(options_ != nullptr);
      options_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* PacketFactoryConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional string packet_factory = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_packet_factory();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mediapipe.PacketFactoryConfig.packet_factory");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string output_side_packet = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_output_side_packet();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mediapipe.PacketFactoryConfig.output_side_packet");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .mediapipe.PacketFactoryOptions options = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_options(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string external_output = 1002;
      case 1002:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          auto str = _internal_mutable_external_output();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mediapipe.PacketFactoryConfig.external_output");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* PacketFactoryConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.PacketFactoryConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string packet_factory = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_packet_factory().data(), static_cast<int>(this->_internal_packet_factory().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "mediapipe.PacketFactoryConfig.packet_factory");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_packet_factory(), target);
  }

  // optional string output_side_packet = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_output_side_packet().data(), static_cast<int>(this->_internal_output_side_packet().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "mediapipe.PacketFactoryConfig.output_side_packet");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_output_side_packet(), target);
  }

  // optional .mediapipe.PacketFactoryOptions options = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::options(this), target, stream);
  }

  // optional string external_output = 1002;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_external_output().data(), static_cast<int>(this->_internal_external_output().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "mediapipe.PacketFactoryConfig.external_output");
    target = stream->WriteStringMaybeAliased(
        1002, this->_internal_external_output(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.PacketFactoryConfig)
  return target;
}

size_t PacketFactoryConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.PacketFactoryConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string packet_factory = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_packet_factory());
    }

    // optional string output_side_packet = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_output_side_packet());
    }

    // optional string external_output = 1002;
    if (cached_has_bits & 0x00000004u) {
      total_size += 2 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_external_output());
    }

    // optional .mediapipe.PacketFactoryOptions options = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *options_);
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PacketFactoryConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mediapipe.PacketFactoryConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const PacketFactoryConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PacketFactoryConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mediapipe.PacketFactoryConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mediapipe.PacketFactoryConfig)
    MergeFrom(*source);
  }
}

void PacketFactoryConfig::MergeFrom(const PacketFactoryConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.PacketFactoryConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      packet_factory_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.packet_factory_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      output_side_packet_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.output_side_packet_);
    }
    if (cached_has_bits & 0x00000004u) {
      _has_bits_[0] |= 0x00000004u;
      external_output_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.external_output_);
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_mutable_options()->::mediapipe::PacketFactoryOptions::MergeFrom(from._internal_options());
    }
  }
}

void PacketFactoryConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mediapipe.PacketFactoryConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PacketFactoryConfig::CopyFrom(const PacketFactoryConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.PacketFactoryConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PacketFactoryConfig::IsInitialized() const {
  if (_internal_has_options()) {
    if (!options_->IsInitialized()) return false;
  }
  return true;
}

void PacketFactoryConfig::InternalSwap(PacketFactoryConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  packet_factory_.Swap(&other->packet_factory_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  output_side_packet_.Swap(&other->output_side_packet_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  external_output_.Swap(&other->external_output_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(options_, other->options_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PacketFactoryConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void PacketManagerConfig::InitAsDefaultInstance() {
}
class PacketManagerConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<PacketManagerConfig>()._has_bits_);
};

PacketManagerConfig::PacketManagerConfig()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mediapipe.PacketManagerConfig)
}
PacketManagerConfig::PacketManagerConfig(const PacketManagerConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      packet_(from.packet_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:mediapipe.PacketManagerConfig)
}

void PacketManagerConfig::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_PacketManagerConfig_mediapipe_2fframework_2fpacket_5ffactory_2eproto.base);
}

PacketManagerConfig::~PacketManagerConfig() {
  // @@protoc_insertion_point(destructor:mediapipe.PacketManagerConfig)
  SharedDtor();
}

void PacketManagerConfig::SharedDtor() {
}

void PacketManagerConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PacketManagerConfig& PacketManagerConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PacketManagerConfig_mediapipe_2fframework_2fpacket_5ffactory_2eproto.base);
  return *internal_default_instance();
}


void PacketManagerConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.PacketManagerConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  packet_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* PacketManagerConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .mediapipe.PacketFactoryConfig packet = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_packet(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* PacketManagerConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.PacketManagerConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .mediapipe.PacketFactoryConfig packet = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_packet_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_packet(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.PacketManagerConfig)
  return target;
}

size_t PacketManagerConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.PacketManagerConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .mediapipe.PacketFactoryConfig packet = 1;
  total_size += 1UL * this->_internal_packet_size();
  for (const auto& msg : this->packet_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PacketManagerConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mediapipe.PacketManagerConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const PacketManagerConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PacketManagerConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mediapipe.PacketManagerConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mediapipe.PacketManagerConfig)
    MergeFrom(*source);
  }
}

void PacketManagerConfig::MergeFrom(const PacketManagerConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.PacketManagerConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  packet_.MergeFrom(from.packet_);
}

void PacketManagerConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mediapipe.PacketManagerConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PacketManagerConfig::CopyFrom(const PacketManagerConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.PacketManagerConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PacketManagerConfig::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(packet_)) return false;
  return true;
}

void PacketManagerConfig::InternalSwap(PacketManagerConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  packet_.InternalSwap(&other->packet_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PacketManagerConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mediapipe::PacketFactoryOptions* Arena::CreateMaybeMessage< ::mediapipe::PacketFactoryOptions >(Arena* arena) {
  return Arena::CreateInternal< ::mediapipe::PacketFactoryOptions >(arena);
}
template<> PROTOBUF_NOINLINE ::mediapipe::PacketFactoryConfig* Arena::CreateMaybeMessage< ::mediapipe::PacketFactoryConfig >(Arena* arena) {
  return Arena::CreateInternal< ::mediapipe::PacketFactoryConfig >(arena);
}
template<> PROTOBUF_NOINLINE ::mediapipe::PacketManagerConfig* Arena::CreateMaybeMessage< ::mediapipe::PacketManagerConfig >(Arena* arena) {
  return Arena::CreateInternal< ::mediapipe::PacketManagerConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
