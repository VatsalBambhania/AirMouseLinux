// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/calculators/tflite/tflite_custom_op_resolver_calculator.proto

#include "mediapipe/calculators/tflite/tflite_custom_op_resolver_calculator.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_TfLiteCustomOpResolverCalculatorOptions_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto;
namespace mediapipe {
class TfLiteCustomOpResolverCalculatorOptionsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TfLiteCustomOpResolverCalculatorOptions> _instance;
} _TfLiteCustomOpResolverCalculatorOptions_default_instance_;
}  // namespace mediapipe
static void InitDefaultsscc_info_TfLiteCustomOpResolverCalculatorOptions_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mediapipe::_TfLiteCustomOpResolverCalculatorOptions_default_instance_;
    new (ptr) ::mediapipe::TfLiteCustomOpResolverCalculatorOptions();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mediapipe::TfLiteCustomOpResolverCalculatorOptions::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_TfLiteCustomOpResolverCalculatorOptions_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_TfLiteCustomOpResolverCalculatorOptions_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::mediapipe::TfLiteCustomOpResolverCalculatorOptions, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::TfLiteCustomOpResolverCalculatorOptions, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mediapipe::TfLiteCustomOpResolverCalculatorOptions, use_gpu_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::mediapipe::TfLiteCustomOpResolverCalculatorOptions)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_TfLiteCustomOpResolverCalculatorOptions_default_instance_),
};

const char descriptor_table_protodef_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\nGmediapipe/calculators/tflite/tflite_cu"
  "stom_op_resolver_calculator.proto\022\tmedia"
  "pipe\032$mediapipe/framework/calculator.pro"
  "to\"\243\001\n\'TfLiteCustomOpResolverCalculatorO"
  "ptions\022\026\n\007use_gpu\030\001 \001(\010:\005false2`\n\003ext\022\034."
  "mediapipe.CalculatorOptions\030\201\232\232x \001(\01322.m"
  "ediapipe.TfLiteCustomOpResolverCalculato"
  "rOptions"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto_deps[1] = {
  &::descriptor_table_mediapipe_2fframework_2fcalculator_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto_sccs[1] = {
  &scc_info_TfLiteCustomOpResolverCalculatorOptions_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto_once;
static bool descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto = {
  &descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto_initialized, descriptor_table_protodef_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto, "mediapipe/calculators/tflite/tflite_custom_op_resolver_calculator.proto", 288,
  &descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto_once, descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto_sccs, descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto::offsets,
  file_level_metadata_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto, 1, file_level_enum_descriptors_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto, file_level_service_descriptors_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto), true);
namespace mediapipe {

// ===================================================================

void TfLiteCustomOpResolverCalculatorOptions::InitAsDefaultInstance() {
}
class TfLiteCustomOpResolverCalculatorOptions::_Internal {
 public:
  using HasBits = decltype(std::declval<TfLiteCustomOpResolverCalculatorOptions>()._has_bits_);
  static void set_has_use_gpu(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

TfLiteCustomOpResolverCalculatorOptions::TfLiteCustomOpResolverCalculatorOptions()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mediapipe.TfLiteCustomOpResolverCalculatorOptions)
}
TfLiteCustomOpResolverCalculatorOptions::TfLiteCustomOpResolverCalculatorOptions(const TfLiteCustomOpResolverCalculatorOptions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  use_gpu_ = from.use_gpu_;
  // @@protoc_insertion_point(copy_constructor:mediapipe.TfLiteCustomOpResolverCalculatorOptions)
}

void TfLiteCustomOpResolverCalculatorOptions::SharedCtor() {
  use_gpu_ = false;
}

TfLiteCustomOpResolverCalculatorOptions::~TfLiteCustomOpResolverCalculatorOptions() {
  // @@protoc_insertion_point(destructor:mediapipe.TfLiteCustomOpResolverCalculatorOptions)
  SharedDtor();
}

void TfLiteCustomOpResolverCalculatorOptions::SharedDtor() {
}

void TfLiteCustomOpResolverCalculatorOptions::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TfLiteCustomOpResolverCalculatorOptions& TfLiteCustomOpResolverCalculatorOptions::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TfLiteCustomOpResolverCalculatorOptions_mediapipe_2fcalculators_2ftflite_2ftflite_5fcustom_5fop_5fresolver_5fcalculator_2eproto.base);
  return *internal_default_instance();
}


void TfLiteCustomOpResolverCalculatorOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.TfLiteCustomOpResolverCalculatorOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  use_gpu_ = false;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* TfLiteCustomOpResolverCalculatorOptions::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional bool use_gpu = 1 [default = false];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_use_gpu(&has_bits);
          use_gpu_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* TfLiteCustomOpResolverCalculatorOptions::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.TfLiteCustomOpResolverCalculatorOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bool use_gpu = 1 [default = false];
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_use_gpu(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.TfLiteCustomOpResolverCalculatorOptions)
  return target;
}

size_t TfLiteCustomOpResolverCalculatorOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.TfLiteCustomOpResolverCalculatorOptions)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional bool use_gpu = 1 [default = false];
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TfLiteCustomOpResolverCalculatorOptions::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mediapipe.TfLiteCustomOpResolverCalculatorOptions)
  GOOGLE_DCHECK_NE(&from, this);
  const TfLiteCustomOpResolverCalculatorOptions* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TfLiteCustomOpResolverCalculatorOptions>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mediapipe.TfLiteCustomOpResolverCalculatorOptions)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mediapipe.TfLiteCustomOpResolverCalculatorOptions)
    MergeFrom(*source);
  }
}

void TfLiteCustomOpResolverCalculatorOptions::MergeFrom(const TfLiteCustomOpResolverCalculatorOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.TfLiteCustomOpResolverCalculatorOptions)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_use_gpu()) {
    _internal_set_use_gpu(from._internal_use_gpu());
  }
}

void TfLiteCustomOpResolverCalculatorOptions::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mediapipe.TfLiteCustomOpResolverCalculatorOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TfLiteCustomOpResolverCalculatorOptions::CopyFrom(const TfLiteCustomOpResolverCalculatorOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.TfLiteCustomOpResolverCalculatorOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TfLiteCustomOpResolverCalculatorOptions::IsInitialized() const {
  return true;
}

void TfLiteCustomOpResolverCalculatorOptions::InternalSwap(TfLiteCustomOpResolverCalculatorOptions* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(use_gpu_, other->use_gpu_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TfLiteCustomOpResolverCalculatorOptions::GetMetadata() const {
  return GetMetadataStatic();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TfLiteCustomOpResolverCalculatorOptions::kExtFieldNumber;
#endif
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::TfLiteCustomOpResolverCalculatorOptions >, 11, false >
  TfLiteCustomOpResolverCalculatorOptions::ext(kExtFieldNumber, *::mediapipe::TfLiteCustomOpResolverCalculatorOptions::internal_default_instance());

// @@protoc_insertion_point(namespace_scope)
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mediapipe::TfLiteCustomOpResolverCalculatorOptions* Arena::CreateMaybeMessage< ::mediapipe::TfLiteCustomOpResolverCalculatorOptions >(Arena* arena) {
  return Arena::CreateInternal< ::mediapipe::TfLiteCustomOpResolverCalculatorOptions >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
