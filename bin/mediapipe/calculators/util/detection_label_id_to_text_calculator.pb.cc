// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/calculators/util/detection_label_id_to_text_calculator.proto

#include "mediapipe/calculators/util/detection_label_id_to_text_calculator.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_DetectionLabelIdToTextCalculatorOptions_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto;
namespace mediapipe {
class DetectionLabelIdToTextCalculatorOptionsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<DetectionLabelIdToTextCalculatorOptions> _instance;
} _DetectionLabelIdToTextCalculatorOptions_default_instance_;
}  // namespace mediapipe
static void InitDefaultsscc_info_DetectionLabelIdToTextCalculatorOptions_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mediapipe::_DetectionLabelIdToTextCalculatorOptions_default_instance_;
    new (ptr) ::mediapipe::DetectionLabelIdToTextCalculatorOptions();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mediapipe::DetectionLabelIdToTextCalculatorOptions::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_DetectionLabelIdToTextCalculatorOptions_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_DetectionLabelIdToTextCalculatorOptions_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::mediapipe::DetectionLabelIdToTextCalculatorOptions, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::DetectionLabelIdToTextCalculatorOptions, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mediapipe::DetectionLabelIdToTextCalculatorOptions, label_map_path_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::DetectionLabelIdToTextCalculatorOptions, label_),
  0,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::mediapipe::DetectionLabelIdToTextCalculatorOptions)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_DetectionLabelIdToTextCalculatorOptions_default_instance_),
};

const char descriptor_table_protodef_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\nFmediapipe/calculators/util/detection_l"
  "abel_id_to_text_calculator.proto\022\tmediap"
  "ipe\032$mediapipe/framework/calculator.prot"
  "o\"\262\001\n\'DetectionLabelIdToTextCalculatorOp"
  "tions\022\026\n\016label_map_path\030\001 \001(\t\022\r\n\005label\030\002"
  " \003(\t2`\n\003ext\022\034.mediapipe.CalculatorOption"
  "s\030\260\213\216x \001(\01322.mediapipe.DetectionLabelIdT"
  "oTextCalculatorOptions"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto_deps[1] = {
  &::descriptor_table_mediapipe_2fframework_2fcalculator_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto_sccs[1] = {
  &scc_info_DetectionLabelIdToTextCalculatorOptions_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto_once;
static bool descriptor_table_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto = {
  &descriptor_table_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto_initialized, descriptor_table_protodef_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto, "mediapipe/calculators/util/detection_label_id_to_text_calculator.proto", 302,
  &descriptor_table_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto_once, descriptor_table_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto_sccs, descriptor_table_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto::offsets,
  file_level_metadata_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto, 1, file_level_enum_descriptors_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto, file_level_service_descriptors_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto), true);
namespace mediapipe {

// ===================================================================

void DetectionLabelIdToTextCalculatorOptions::InitAsDefaultInstance() {
}
class DetectionLabelIdToTextCalculatorOptions::_Internal {
 public:
  using HasBits = decltype(std::declval<DetectionLabelIdToTextCalculatorOptions>()._has_bits_);
  static void set_has_label_map_path(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

DetectionLabelIdToTextCalculatorOptions::DetectionLabelIdToTextCalculatorOptions()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mediapipe.DetectionLabelIdToTextCalculatorOptions)
}
DetectionLabelIdToTextCalculatorOptions::DetectionLabelIdToTextCalculatorOptions(const DetectionLabelIdToTextCalculatorOptions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      label_(from.label_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  label_map_path_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_label_map_path()) {
    label_map_path_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.label_map_path_);
  }
  // @@protoc_insertion_point(copy_constructor:mediapipe.DetectionLabelIdToTextCalculatorOptions)
}

void DetectionLabelIdToTextCalculatorOptions::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_DetectionLabelIdToTextCalculatorOptions_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto.base);
  label_map_path_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

DetectionLabelIdToTextCalculatorOptions::~DetectionLabelIdToTextCalculatorOptions() {
  // @@protoc_insertion_point(destructor:mediapipe.DetectionLabelIdToTextCalculatorOptions)
  SharedDtor();
}

void DetectionLabelIdToTextCalculatorOptions::SharedDtor() {
  label_map_path_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void DetectionLabelIdToTextCalculatorOptions::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const DetectionLabelIdToTextCalculatorOptions& DetectionLabelIdToTextCalculatorOptions::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_DetectionLabelIdToTextCalculatorOptions_mediapipe_2fcalculators_2futil_2fdetection_5flabel_5fid_5fto_5ftext_5fcalculator_2eproto.base);
  return *internal_default_instance();
}


void DetectionLabelIdToTextCalculatorOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.DetectionLabelIdToTextCalculatorOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  label_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    label_map_path_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* DetectionLabelIdToTextCalculatorOptions::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional string label_map_path = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_label_map_path();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mediapipe.DetectionLabelIdToTextCalculatorOptions.label_map_path");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string label = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_label();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            #ifndef NDEBUG
            ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mediapipe.DetectionLabelIdToTextCalculatorOptions.label");
            #endif  // !NDEBUG
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* DetectionLabelIdToTextCalculatorOptions::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.DetectionLabelIdToTextCalculatorOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string label_map_path = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_label_map_path().data(), static_cast<int>(this->_internal_label_map_path().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "mediapipe.DetectionLabelIdToTextCalculatorOptions.label_map_path");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_label_map_path(), target);
  }

  // repeated string label = 2;
  for (int i = 0, n = this->_internal_label_size(); i < n; i++) {
    const auto& s = this->_internal_label(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "mediapipe.DetectionLabelIdToTextCalculatorOptions.label");
    target = stream->WriteString(2, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.DetectionLabelIdToTextCalculatorOptions)
  return target;
}

size_t DetectionLabelIdToTextCalculatorOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.DetectionLabelIdToTextCalculatorOptions)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string label = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(label_.size());
  for (int i = 0, n = label_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      label_.Get(i));
  }

  // optional string label_map_path = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_label_map_path());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DetectionLabelIdToTextCalculatorOptions::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mediapipe.DetectionLabelIdToTextCalculatorOptions)
  GOOGLE_DCHECK_NE(&from, this);
  const DetectionLabelIdToTextCalculatorOptions* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<DetectionLabelIdToTextCalculatorOptions>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mediapipe.DetectionLabelIdToTextCalculatorOptions)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mediapipe.DetectionLabelIdToTextCalculatorOptions)
    MergeFrom(*source);
  }
}

void DetectionLabelIdToTextCalculatorOptions::MergeFrom(const DetectionLabelIdToTextCalculatorOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.DetectionLabelIdToTextCalculatorOptions)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  label_.MergeFrom(from.label_);
  if (from._internal_has_label_map_path()) {
    _has_bits_[0] |= 0x00000001u;
    label_map_path_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.label_map_path_);
  }
}

void DetectionLabelIdToTextCalculatorOptions::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mediapipe.DetectionLabelIdToTextCalculatorOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DetectionLabelIdToTextCalculatorOptions::CopyFrom(const DetectionLabelIdToTextCalculatorOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.DetectionLabelIdToTextCalculatorOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DetectionLabelIdToTextCalculatorOptions::IsInitialized() const {
  return true;
}

void DetectionLabelIdToTextCalculatorOptions::InternalSwap(DetectionLabelIdToTextCalculatorOptions* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  label_.InternalSwap(&other->label_);
  label_map_path_.Swap(&other->label_map_path_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata DetectionLabelIdToTextCalculatorOptions::GetMetadata() const {
  return GetMetadataStatic();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DetectionLabelIdToTextCalculatorOptions::kExtFieldNumber;
#endif
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::DetectionLabelIdToTextCalculatorOptions >, 11, false >
  DetectionLabelIdToTextCalculatorOptions::ext(kExtFieldNumber, *::mediapipe::DetectionLabelIdToTextCalculatorOptions::internal_default_instance());

// @@protoc_insertion_point(namespace_scope)
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mediapipe::DetectionLabelIdToTextCalculatorOptions* Arena::CreateMaybeMessage< ::mediapipe::DetectionLabelIdToTextCalculatorOptions >(Arena* arena) {
  return Arena::CreateInternal< ::mediapipe::DetectionLabelIdToTextCalculatorOptions >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
