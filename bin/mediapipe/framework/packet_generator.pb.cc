// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/framework/packet_generator.proto

#include "mediapipe/framework/packet_generator.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_mediapipe_2fframework_2fpacket_5fgenerator_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PacketGeneratorOptions_mediapipe_2fframework_2fpacket_5fgenerator_2eproto;
namespace mediapipe {
class PacketGeneratorOptionsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PacketGeneratorOptions> _instance;
} _PacketGeneratorOptions_default_instance_;
class PacketGeneratorConfigDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PacketGeneratorConfig> _instance;
} _PacketGeneratorConfig_default_instance_;
}  // namespace mediapipe
static void InitDefaultsscc_info_PacketGeneratorConfig_mediapipe_2fframework_2fpacket_5fgenerator_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mediapipe::_PacketGeneratorConfig_default_instance_;
    new (ptr) ::mediapipe::PacketGeneratorConfig();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mediapipe::PacketGeneratorConfig::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_PacketGeneratorConfig_mediapipe_2fframework_2fpacket_5fgenerator_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_PacketGeneratorConfig_mediapipe_2fframework_2fpacket_5fgenerator_2eproto}, {
      &scc_info_PacketGeneratorOptions_mediapipe_2fframework_2fpacket_5fgenerator_2eproto.base,}};

static void InitDefaultsscc_info_PacketGeneratorOptions_mediapipe_2fframework_2fpacket_5fgenerator_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mediapipe::_PacketGeneratorOptions_default_instance_;
    new (ptr) ::mediapipe::PacketGeneratorOptions();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mediapipe::PacketGeneratorOptions::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PacketGeneratorOptions_mediapipe_2fframework_2fpacket_5fgenerator_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_PacketGeneratorOptions_mediapipe_2fframework_2fpacket_5fgenerator_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mediapipe_2fframework_2fpacket_5fgenerator_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mediapipe_2fframework_2fpacket_5fgenerator_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mediapipe_2fframework_2fpacket_5fgenerator_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mediapipe_2fframework_2fpacket_5fgenerator_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketGeneratorOptions, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketGeneratorOptions, _internal_metadata_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketGeneratorOptions, _extensions_),
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketGeneratorConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketGeneratorConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketGeneratorConfig, packet_generator_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketGeneratorConfig, input_side_packet_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketGeneratorConfig, external_input_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketGeneratorConfig, output_side_packet_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketGeneratorConfig, external_output_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::PacketGeneratorConfig, options_),
  0,
  ~0u,
  ~0u,
  ~0u,
  ~0u,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 5, sizeof(::mediapipe::PacketGeneratorOptions)},
  { 5, 16, sizeof(::mediapipe::PacketGeneratorConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_PacketGeneratorOptions_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_PacketGeneratorConfig_default_instance_),
};

const char descriptor_table_protodef_mediapipe_2fframework_2fpacket_5fgenerator_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n*mediapipe/framework/packet_generator.p"
  "roto\022\tmediapipe\"$\n\026PacketGeneratorOption"
  "s*\n\010\240\234\001\020\200\200\200\200\002\"\317\001\n\025PacketGeneratorConfig\022"
  "\030\n\020packet_generator\030\001 \001(\t\022\031\n\021input_side_"
  "packet\030\002 \003(\t\022\027\n\016external_input\030\352\007 \003(\t\022\032\n"
  "\022output_side_packet\030\003 \003(\t\022\030\n\017external_ou"
  "tput\030\353\007 \003(\t\0222\n\007options\030\004 \001(\0132!.mediapipe"
  ".PacketGeneratorOptions"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mediapipe_2fframework_2fpacket_5fgenerator_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_mediapipe_2fframework_2fpacket_5fgenerator_2eproto_sccs[2] = {
  &scc_info_PacketGeneratorConfig_mediapipe_2fframework_2fpacket_5fgenerator_2eproto.base,
  &scc_info_PacketGeneratorOptions_mediapipe_2fframework_2fpacket_5fgenerator_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mediapipe_2fframework_2fpacket_5fgenerator_2eproto_once;
static bool descriptor_table_mediapipe_2fframework_2fpacket_5fgenerator_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fframework_2fpacket_5fgenerator_2eproto = {
  &descriptor_table_mediapipe_2fframework_2fpacket_5fgenerator_2eproto_initialized, descriptor_table_protodef_mediapipe_2fframework_2fpacket_5fgenerator_2eproto, "mediapipe/framework/packet_generator.proto", 303,
  &descriptor_table_mediapipe_2fframework_2fpacket_5fgenerator_2eproto_once, descriptor_table_mediapipe_2fframework_2fpacket_5fgenerator_2eproto_sccs, descriptor_table_mediapipe_2fframework_2fpacket_5fgenerator_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_mediapipe_2fframework_2fpacket_5fgenerator_2eproto::offsets,
  file_level_metadata_mediapipe_2fframework_2fpacket_5fgenerator_2eproto, 2, file_level_enum_descriptors_mediapipe_2fframework_2fpacket_5fgenerator_2eproto, file_level_service_descriptors_mediapipe_2fframework_2fpacket_5fgenerator_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_mediapipe_2fframework_2fpacket_5fgenerator_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_mediapipe_2fframework_2fpacket_5fgenerator_2eproto), true);
namespace mediapipe {

// ===================================================================

void PacketGeneratorOptions::InitAsDefaultInstance() {
}
class PacketGeneratorOptions::_Internal {
 public:
  using HasBits = decltype(std::declval<PacketGeneratorOptions>()._has_bits_);
};

PacketGeneratorOptions::PacketGeneratorOptions()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mediapipe.PacketGeneratorOptions)
}
PacketGeneratorOptions::PacketGeneratorOptions(const PacketGeneratorOptions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  _extensions_.MergeFrom(from._extensions_);
  // @@protoc_insertion_point(copy_constructor:mediapipe.PacketGeneratorOptions)
}

void PacketGeneratorOptions::SharedCtor() {
}

PacketGeneratorOptions::~PacketGeneratorOptions() {
  // @@protoc_insertion_point(destructor:mediapipe.PacketGeneratorOptions)
  SharedDtor();
}

void PacketGeneratorOptions::SharedDtor() {
}

void PacketGeneratorOptions::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PacketGeneratorOptions& PacketGeneratorOptions::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PacketGeneratorOptions_mediapipe_2fframework_2fpacket_5fgenerator_2eproto.base);
  return *internal_default_instance();
}


void PacketGeneratorOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.PacketGeneratorOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _extensions_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* PacketGeneratorOptions::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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

::PROTOBUF_NAMESPACE_ID::uint8* PacketGeneratorOptions::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.PacketGeneratorOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // Extension range [20000, 536870912)
  target = _extensions_._InternalSerialize(
      20000, 536870912, target, stream);

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.PacketGeneratorOptions)
  return target;
}

size_t PacketGeneratorOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.PacketGeneratorOptions)
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

void PacketGeneratorOptions::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mediapipe.PacketGeneratorOptions)
  GOOGLE_DCHECK_NE(&from, this);
  const PacketGeneratorOptions* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PacketGeneratorOptions>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mediapipe.PacketGeneratorOptions)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mediapipe.PacketGeneratorOptions)
    MergeFrom(*source);
  }
}

void PacketGeneratorOptions::MergeFrom(const PacketGeneratorOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.PacketGeneratorOptions)
  GOOGLE_DCHECK_NE(&from, this);
  _extensions_.MergeFrom(from._extensions_);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void PacketGeneratorOptions::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mediapipe.PacketGeneratorOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PacketGeneratorOptions::CopyFrom(const PacketGeneratorOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.PacketGeneratorOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PacketGeneratorOptions::IsInitialized() const {
  if (!_extensions_.IsInitialized()) {
    return false;
  }

  return true;
}

void PacketGeneratorOptions::InternalSwap(PacketGeneratorOptions* other) {
  using std::swap;
  _extensions_.Swap(&other->_extensions_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata PacketGeneratorOptions::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void PacketGeneratorConfig::InitAsDefaultInstance() {
  ::mediapipe::_PacketGeneratorConfig_default_instance_._instance.get_mutable()->options_ = const_cast< ::mediapipe::PacketGeneratorOptions*>(
      ::mediapipe::PacketGeneratorOptions::internal_default_instance());
}
class PacketGeneratorConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<PacketGeneratorConfig>()._has_bits_);
  static void set_has_packet_generator(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::mediapipe::PacketGeneratorOptions& options(const PacketGeneratorConfig* msg);
  static void set_has_options(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::mediapipe::PacketGeneratorOptions&
PacketGeneratorConfig::_Internal::options(const PacketGeneratorConfig* msg) {
  return *msg->options_;
}
PacketGeneratorConfig::PacketGeneratorConfig()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mediapipe.PacketGeneratorConfig)
}
PacketGeneratorConfig::PacketGeneratorConfig(const PacketGeneratorConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      input_side_packet_(from.input_side_packet_),
      output_side_packet_(from.output_side_packet_),
      external_input_(from.external_input_),
      external_output_(from.external_output_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  packet_generator_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_packet_generator()) {
    packet_generator_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.packet_generator_);
  }
  if (from._internal_has_options()) {
    options_ = new ::mediapipe::PacketGeneratorOptions(*from.options_);
  } else {
    options_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:mediapipe.PacketGeneratorConfig)
}

void PacketGeneratorConfig::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_PacketGeneratorConfig_mediapipe_2fframework_2fpacket_5fgenerator_2eproto.base);
  packet_generator_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  options_ = nullptr;
}

PacketGeneratorConfig::~PacketGeneratorConfig() {
  // @@protoc_insertion_point(destructor:mediapipe.PacketGeneratorConfig)
  SharedDtor();
}

void PacketGeneratorConfig::SharedDtor() {
  packet_generator_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete options_;
}

void PacketGeneratorConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PacketGeneratorConfig& PacketGeneratorConfig::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PacketGeneratorConfig_mediapipe_2fframework_2fpacket_5fgenerator_2eproto.base);
  return *internal_default_instance();
}


void PacketGeneratorConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.PacketGeneratorConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  input_side_packet_.Clear();
  output_side_packet_.Clear();
  external_input_.Clear();
  external_output_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      packet_generator_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(options_ != nullptr);
      options_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* PacketGeneratorConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional string packet_generator = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_packet_generator();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mediapipe.PacketGeneratorConfig.packet_generator");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string input_side_packet = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_input_side_packet();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            #ifndef NDEBUG
            ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mediapipe.PacketGeneratorConfig.input_side_packet");
            #endif  // !NDEBUG
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated string output_side_packet = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_output_side_packet();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            #ifndef NDEBUG
            ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mediapipe.PacketGeneratorConfig.output_side_packet");
            #endif  // !NDEBUG
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else goto handle_unusual;
        continue;
      // optional .mediapipe.PacketGeneratorOptions options = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_options(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string external_input = 1002;
      case 1002:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          ptr -= 2;
          do {
            ptr += 2;
            auto str = _internal_add_external_input();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            #ifndef NDEBUG
            ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mediapipe.PacketGeneratorConfig.external_input");
            #endif  // !NDEBUG
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<8018>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated string external_output = 1003;
      case 1003:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          ptr -= 2;
          do {
            ptr += 2;
            auto str = _internal_add_external_output();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            #ifndef NDEBUG
            ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mediapipe.PacketGeneratorConfig.external_output");
            #endif  // !NDEBUG
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<8026>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* PacketGeneratorConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.PacketGeneratorConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string packet_generator = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_packet_generator().data(), static_cast<int>(this->_internal_packet_generator().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "mediapipe.PacketGeneratorConfig.packet_generator");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_packet_generator(), target);
  }

  // repeated string input_side_packet = 2;
  for (int i = 0, n = this->_internal_input_side_packet_size(); i < n; i++) {
    const auto& s = this->_internal_input_side_packet(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "mediapipe.PacketGeneratorConfig.input_side_packet");
    target = stream->WriteString(2, s, target);
  }

  // repeated string output_side_packet = 3;
  for (int i = 0, n = this->_internal_output_side_packet_size(); i < n; i++) {
    const auto& s = this->_internal_output_side_packet(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "mediapipe.PacketGeneratorConfig.output_side_packet");
    target = stream->WriteString(3, s, target);
  }

  // optional .mediapipe.PacketGeneratorOptions options = 4;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::options(this), target, stream);
  }

  // repeated string external_input = 1002;
  for (int i = 0, n = this->_internal_external_input_size(); i < n; i++) {
    const auto& s = this->_internal_external_input(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "mediapipe.PacketGeneratorConfig.external_input");
    target = stream->WriteString(1002, s, target);
  }

  // repeated string external_output = 1003;
  for (int i = 0, n = this->_internal_external_output_size(); i < n; i++) {
    const auto& s = this->_internal_external_output(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "mediapipe.PacketGeneratorConfig.external_output");
    target = stream->WriteString(1003, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.PacketGeneratorConfig)
  return target;
}

size_t PacketGeneratorConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.PacketGeneratorConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string input_side_packet = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(input_side_packet_.size());
  for (int i = 0, n = input_side_packet_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      input_side_packet_.Get(i));
  }

  // repeated string output_side_packet = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(output_side_packet_.size());
  for (int i = 0, n = output_side_packet_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      output_side_packet_.Get(i));
  }

  // repeated string external_input = 1002;
  total_size += 2 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(external_input_.size());
  for (int i = 0, n = external_input_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      external_input_.Get(i));
  }

  // repeated string external_output = 1003;
  total_size += 2 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(external_output_.size());
  for (int i = 0, n = external_output_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      external_output_.Get(i));
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string packet_generator = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_packet_generator());
    }

    // optional .mediapipe.PacketGeneratorOptions options = 4;
    if (cached_has_bits & 0x00000002u) {
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

void PacketGeneratorConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mediapipe.PacketGeneratorConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const PacketGeneratorConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PacketGeneratorConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mediapipe.PacketGeneratorConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mediapipe.PacketGeneratorConfig)
    MergeFrom(*source);
  }
}

void PacketGeneratorConfig::MergeFrom(const PacketGeneratorConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.PacketGeneratorConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  input_side_packet_.MergeFrom(from.input_side_packet_);
  output_side_packet_.MergeFrom(from.output_side_packet_);
  external_input_.MergeFrom(from.external_input_);
  external_output_.MergeFrom(from.external_output_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      packet_generator_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.packet_generator_);
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_options()->::mediapipe::PacketGeneratorOptions::MergeFrom(from._internal_options());
    }
  }
}

void PacketGeneratorConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mediapipe.PacketGeneratorConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PacketGeneratorConfig::CopyFrom(const PacketGeneratorConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.PacketGeneratorConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PacketGeneratorConfig::IsInitialized() const {
  if (_internal_has_options()) {
    if (!options_->IsInitialized()) return false;
  }
  return true;
}

void PacketGeneratorConfig::InternalSwap(PacketGeneratorConfig* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  input_side_packet_.InternalSwap(&other->input_side_packet_);
  output_side_packet_.InternalSwap(&other->output_side_packet_);
  external_input_.InternalSwap(&other->external_input_);
  external_output_.InternalSwap(&other->external_output_);
  packet_generator_.Swap(&other->packet_generator_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(options_, other->options_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PacketGeneratorConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mediapipe::PacketGeneratorOptions* Arena::CreateMaybeMessage< ::mediapipe::PacketGeneratorOptions >(Arena* arena) {
  return Arena::CreateInternal< ::mediapipe::PacketGeneratorOptions >(arena);
}
template<> PROTOBUF_NOINLINE ::mediapipe::PacketGeneratorConfig* Arena::CreateMaybeMessage< ::mediapipe::PacketGeneratorConfig >(Arena* arena) {
  return Arena::CreateInternal< ::mediapipe::PacketGeneratorConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
