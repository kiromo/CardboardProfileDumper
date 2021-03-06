// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CardboardDevice.proto

#ifndef PROTOBUF_CardboardDevice_2eproto__INCLUDED
#define PROTOBUF_CardboardDevice_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CardboardDevice_2eproto();
void protobuf_AssignDesc_CardboardDevice_2eproto();
void protobuf_ShutdownFile_CardboardDevice_2eproto();

class DeviceParams;

enum DeviceParams_VerticalAlignmentType {
  DeviceParams_VerticalAlignmentType_BOTTOM = 0,
  DeviceParams_VerticalAlignmentType_CENTER = 1,
  DeviceParams_VerticalAlignmentType_TOP = 2
};
bool DeviceParams_VerticalAlignmentType_IsValid(int value);
const DeviceParams_VerticalAlignmentType DeviceParams_VerticalAlignmentType_VerticalAlignmentType_MIN = DeviceParams_VerticalAlignmentType_BOTTOM;
const DeviceParams_VerticalAlignmentType DeviceParams_VerticalAlignmentType_VerticalAlignmentType_MAX = DeviceParams_VerticalAlignmentType_TOP;
const int DeviceParams_VerticalAlignmentType_VerticalAlignmentType_ARRAYSIZE = DeviceParams_VerticalAlignmentType_VerticalAlignmentType_MAX + 1;

const ::google::protobuf::EnumDescriptor* DeviceParams_VerticalAlignmentType_descriptor();
inline const ::std::string& DeviceParams_VerticalAlignmentType_Name(DeviceParams_VerticalAlignmentType value) {
  return ::google::protobuf::internal::NameOfEnum(
    DeviceParams_VerticalAlignmentType_descriptor(), value);
}
inline bool DeviceParams_VerticalAlignmentType_Parse(
    const ::std::string& name, DeviceParams_VerticalAlignmentType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DeviceParams_VerticalAlignmentType>(
    DeviceParams_VerticalAlignmentType_descriptor(), name, value);
}
enum DeviceParams_ButtonType {
  DeviceParams_ButtonType_NONE = 0,
  DeviceParams_ButtonType_MAGNET = 1,
  DeviceParams_ButtonType_TOUCH = 2,
  DeviceParams_ButtonType_INDIRECT_TOUCH = 3
};
bool DeviceParams_ButtonType_IsValid(int value);
const DeviceParams_ButtonType DeviceParams_ButtonType_ButtonType_MIN = DeviceParams_ButtonType_NONE;
const DeviceParams_ButtonType DeviceParams_ButtonType_ButtonType_MAX = DeviceParams_ButtonType_INDIRECT_TOUCH;
const int DeviceParams_ButtonType_ButtonType_ARRAYSIZE = DeviceParams_ButtonType_ButtonType_MAX + 1;

const ::google::protobuf::EnumDescriptor* DeviceParams_ButtonType_descriptor();
inline const ::std::string& DeviceParams_ButtonType_Name(DeviceParams_ButtonType value) {
  return ::google::protobuf::internal::NameOfEnum(
    DeviceParams_ButtonType_descriptor(), value);
}
inline bool DeviceParams_ButtonType_Parse(
    const ::std::string& name, DeviceParams_ButtonType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DeviceParams_ButtonType>(
    DeviceParams_ButtonType_descriptor(), name, value);
}
// ===================================================================

class DeviceParams : public ::google::protobuf::Message {
 public:
  DeviceParams();
  virtual ~DeviceParams();

  DeviceParams(const DeviceParams& from);

  inline DeviceParams& operator=(const DeviceParams& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DeviceParams& default_instance();

  void Swap(DeviceParams* other);

  // implements Message ----------------------------------------------

  DeviceParams* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DeviceParams& from);
  void MergeFrom(const DeviceParams& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef DeviceParams_VerticalAlignmentType VerticalAlignmentType;
  static const VerticalAlignmentType BOTTOM = DeviceParams_VerticalAlignmentType_BOTTOM;
  static const VerticalAlignmentType CENTER = DeviceParams_VerticalAlignmentType_CENTER;
  static const VerticalAlignmentType TOP = DeviceParams_VerticalAlignmentType_TOP;
  static inline bool VerticalAlignmentType_IsValid(int value) {
    return DeviceParams_VerticalAlignmentType_IsValid(value);
  }
  static const VerticalAlignmentType VerticalAlignmentType_MIN =
    DeviceParams_VerticalAlignmentType_VerticalAlignmentType_MIN;
  static const VerticalAlignmentType VerticalAlignmentType_MAX =
    DeviceParams_VerticalAlignmentType_VerticalAlignmentType_MAX;
  static const int VerticalAlignmentType_ARRAYSIZE =
    DeviceParams_VerticalAlignmentType_VerticalAlignmentType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  VerticalAlignmentType_descriptor() {
    return DeviceParams_VerticalAlignmentType_descriptor();
  }
  static inline const ::std::string& VerticalAlignmentType_Name(VerticalAlignmentType value) {
    return DeviceParams_VerticalAlignmentType_Name(value);
  }
  static inline bool VerticalAlignmentType_Parse(const ::std::string& name,
      VerticalAlignmentType* value) {
    return DeviceParams_VerticalAlignmentType_Parse(name, value);
  }

  typedef DeviceParams_ButtonType ButtonType;
  static const ButtonType NONE = DeviceParams_ButtonType_NONE;
  static const ButtonType MAGNET = DeviceParams_ButtonType_MAGNET;
  static const ButtonType TOUCH = DeviceParams_ButtonType_TOUCH;
  static const ButtonType INDIRECT_TOUCH = DeviceParams_ButtonType_INDIRECT_TOUCH;
  static inline bool ButtonType_IsValid(int value) {
    return DeviceParams_ButtonType_IsValid(value);
  }
  static const ButtonType ButtonType_MIN =
    DeviceParams_ButtonType_ButtonType_MIN;
  static const ButtonType ButtonType_MAX =
    DeviceParams_ButtonType_ButtonType_MAX;
  static const int ButtonType_ARRAYSIZE =
    DeviceParams_ButtonType_ButtonType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ButtonType_descriptor() {
    return DeviceParams_ButtonType_descriptor();
  }
  static inline const ::std::string& ButtonType_Name(ButtonType value) {
    return DeviceParams_ButtonType_Name(value);
  }
  static inline bool ButtonType_Parse(const ::std::string& name,
      ButtonType* value) {
    return DeviceParams_ButtonType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional string vendor = 1;
  inline bool has_vendor() const;
  inline void clear_vendor();
  static const int kVendorFieldNumber = 1;
  inline const ::std::string& vendor() const;
  inline void set_vendor(const ::std::string& value);
  inline void set_vendor(const char* value);
  inline void set_vendor(const char* value, size_t size);
  inline ::std::string* mutable_vendor();
  inline ::std::string* release_vendor();
  inline void set_allocated_vendor(::std::string* vendor);

  // optional string model = 2;
  inline bool has_model() const;
  inline void clear_model();
  static const int kModelFieldNumber = 2;
  inline const ::std::string& model() const;
  inline void set_model(const ::std::string& value);
  inline void set_model(const char* value);
  inline void set_model(const char* value, size_t size);
  inline ::std::string* mutable_model();
  inline ::std::string* release_model();
  inline void set_allocated_model(::std::string* model);

  // optional float screen_to_lens_distance = 3;
  inline bool has_screen_to_lens_distance() const;
  inline void clear_screen_to_lens_distance();
  static const int kScreenToLensDistanceFieldNumber = 3;
  inline float screen_to_lens_distance() const;
  inline void set_screen_to_lens_distance(float value);

  // optional float inter_lens_distance = 4;
  inline bool has_inter_lens_distance() const;
  inline void clear_inter_lens_distance();
  static const int kInterLensDistanceFieldNumber = 4;
  inline float inter_lens_distance() const;
  inline void set_inter_lens_distance(float value);

  // repeated float left_eye_field_of_view_angles = 5 [packed = true];
  inline int left_eye_field_of_view_angles_size() const;
  inline void clear_left_eye_field_of_view_angles();
  static const int kLeftEyeFieldOfViewAnglesFieldNumber = 5;
  inline float left_eye_field_of_view_angles(int index) const;
  inline void set_left_eye_field_of_view_angles(int index, float value);
  inline void add_left_eye_field_of_view_angles(float value);
  inline const ::google::protobuf::RepeatedField< float >&
      left_eye_field_of_view_angles() const;
  inline ::google::protobuf::RepeatedField< float >*
      mutable_left_eye_field_of_view_angles();

  // optional .DeviceParams.VerticalAlignmentType vertical_alignment = 11 [default = BOTTOM];
  inline bool has_vertical_alignment() const;
  inline void clear_vertical_alignment();
  static const int kVerticalAlignmentFieldNumber = 11;
  inline ::DeviceParams_VerticalAlignmentType vertical_alignment() const;
  inline void set_vertical_alignment(::DeviceParams_VerticalAlignmentType value);

  // optional float tray_to_lens_distance = 6;
  inline bool has_tray_to_lens_distance() const;
  inline void clear_tray_to_lens_distance();
  static const int kTrayToLensDistanceFieldNumber = 6;
  inline float tray_to_lens_distance() const;
  inline void set_tray_to_lens_distance(float value);

  // repeated float distortion_coefficients = 7 [packed = true];
  inline int distortion_coefficients_size() const;
  inline void clear_distortion_coefficients();
  static const int kDistortionCoefficientsFieldNumber = 7;
  inline float distortion_coefficients(int index) const;
  inline void set_distortion_coefficients(int index, float value);
  inline void add_distortion_coefficients(float value);
  inline const ::google::protobuf::RepeatedField< float >&
      distortion_coefficients() const;
  inline ::google::protobuf::RepeatedField< float >*
      mutable_distortion_coefficients();

  // optional bool has_magnet = 10;
  inline bool has_has_magnet() const;
  inline void clear_has_magnet();
  static const int kHasMagnetFieldNumber = 10;
  inline bool has_magnet() const;
  inline void set_has_magnet(bool value);

  // optional .DeviceParams.ButtonType primary_button = 12 [default = MAGNET];
  inline bool has_primary_button() const;
  inline void clear_primary_button();
  static const int kPrimaryButtonFieldNumber = 12;
  inline ::DeviceParams_ButtonType primary_button() const;
  inline void set_primary_button(::DeviceParams_ButtonType value);

  // @@protoc_insertion_point(class_scope:DeviceParams)
 private:
  inline void set_has_vendor();
  inline void clear_has_vendor();
  inline void set_has_model();
  inline void clear_has_model();
  inline void set_has_screen_to_lens_distance();
  inline void clear_has_screen_to_lens_distance();
  inline void set_has_inter_lens_distance();
  inline void clear_has_inter_lens_distance();
  inline void set_has_vertical_alignment();
  inline void clear_has_vertical_alignment();
  inline void set_has_tray_to_lens_distance();
  inline void clear_has_tray_to_lens_distance();
  inline void set_has_has_magnet();
  inline void clear_has_has_magnet();
  inline void set_has_primary_button();
  inline void clear_has_primary_button();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* vendor_;
  ::std::string* model_;
  float screen_to_lens_distance_;
  float inter_lens_distance_;
  ::google::protobuf::RepeatedField< float > left_eye_field_of_view_angles_;
  mutable int _left_eye_field_of_view_angles_cached_byte_size_;
  int vertical_alignment_;
  float tray_to_lens_distance_;
  ::google::protobuf::RepeatedField< float > distortion_coefficients_;
  mutable int _distortion_coefficients_cached_byte_size_;
  bool has_magnet_;
  int primary_button_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(10 + 31) / 32];

  friend void  protobuf_AddDesc_CardboardDevice_2eproto();
  friend void protobuf_AssignDesc_CardboardDevice_2eproto();
  friend void protobuf_ShutdownFile_CardboardDevice_2eproto();

  void InitAsDefaultInstance();
  static DeviceParams* default_instance_;
};
// ===================================================================


// ===================================================================

// DeviceParams

// optional string vendor = 1;
inline bool DeviceParams::has_vendor() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DeviceParams::set_has_vendor() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DeviceParams::clear_has_vendor() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DeviceParams::clear_vendor() {
  if (vendor_ != &::google::protobuf::internal::kEmptyString) {
    vendor_->clear();
  }
  clear_has_vendor();
}
inline const ::std::string& DeviceParams::vendor() const {
  return *vendor_;
}
inline void DeviceParams::set_vendor(const ::std::string& value) {
  set_has_vendor();
  if (vendor_ == &::google::protobuf::internal::kEmptyString) {
    vendor_ = new ::std::string;
  }
  vendor_->assign(value);
}
inline void DeviceParams::set_vendor(const char* value) {
  set_has_vendor();
  if (vendor_ == &::google::protobuf::internal::kEmptyString) {
    vendor_ = new ::std::string;
  }
  vendor_->assign(value);
}
inline void DeviceParams::set_vendor(const char* value, size_t size) {
  set_has_vendor();
  if (vendor_ == &::google::protobuf::internal::kEmptyString) {
    vendor_ = new ::std::string;
  }
  vendor_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeviceParams::mutable_vendor() {
  set_has_vendor();
  if (vendor_ == &::google::protobuf::internal::kEmptyString) {
    vendor_ = new ::std::string;
  }
  return vendor_;
}
inline ::std::string* DeviceParams::release_vendor() {
  clear_has_vendor();
  if (vendor_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = vendor_;
    vendor_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DeviceParams::set_allocated_vendor(::std::string* vendor) {
  if (vendor_ != &::google::protobuf::internal::kEmptyString) {
    delete vendor_;
  }
  if (vendor) {
    set_has_vendor();
    vendor_ = vendor;
  } else {
    clear_has_vendor();
    vendor_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string model = 2;
inline bool DeviceParams::has_model() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DeviceParams::set_has_model() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DeviceParams::clear_has_model() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DeviceParams::clear_model() {
  if (model_ != &::google::protobuf::internal::kEmptyString) {
    model_->clear();
  }
  clear_has_model();
}
inline const ::std::string& DeviceParams::model() const {
  return *model_;
}
inline void DeviceParams::set_model(const ::std::string& value) {
  set_has_model();
  if (model_ == &::google::protobuf::internal::kEmptyString) {
    model_ = new ::std::string;
  }
  model_->assign(value);
}
inline void DeviceParams::set_model(const char* value) {
  set_has_model();
  if (model_ == &::google::protobuf::internal::kEmptyString) {
    model_ = new ::std::string;
  }
  model_->assign(value);
}
inline void DeviceParams::set_model(const char* value, size_t size) {
  set_has_model();
  if (model_ == &::google::protobuf::internal::kEmptyString) {
    model_ = new ::std::string;
  }
  model_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeviceParams::mutable_model() {
  set_has_model();
  if (model_ == &::google::protobuf::internal::kEmptyString) {
    model_ = new ::std::string;
  }
  return model_;
}
inline ::std::string* DeviceParams::release_model() {
  clear_has_model();
  if (model_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = model_;
    model_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DeviceParams::set_allocated_model(::std::string* model) {
  if (model_ != &::google::protobuf::internal::kEmptyString) {
    delete model_;
  }
  if (model) {
    set_has_model();
    model_ = model;
  } else {
    clear_has_model();
    model_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional float screen_to_lens_distance = 3;
inline bool DeviceParams::has_screen_to_lens_distance() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DeviceParams::set_has_screen_to_lens_distance() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DeviceParams::clear_has_screen_to_lens_distance() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DeviceParams::clear_screen_to_lens_distance() {
  screen_to_lens_distance_ = 0;
  clear_has_screen_to_lens_distance();
}
inline float DeviceParams::screen_to_lens_distance() const {
  return screen_to_lens_distance_;
}
inline void DeviceParams::set_screen_to_lens_distance(float value) {
  set_has_screen_to_lens_distance();
  screen_to_lens_distance_ = value;
}

// optional float inter_lens_distance = 4;
inline bool DeviceParams::has_inter_lens_distance() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DeviceParams::set_has_inter_lens_distance() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DeviceParams::clear_has_inter_lens_distance() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DeviceParams::clear_inter_lens_distance() {
  inter_lens_distance_ = 0;
  clear_has_inter_lens_distance();
}
inline float DeviceParams::inter_lens_distance() const {
  return inter_lens_distance_;
}
inline void DeviceParams::set_inter_lens_distance(float value) {
  set_has_inter_lens_distance();
  inter_lens_distance_ = value;
}

// repeated float left_eye_field_of_view_angles = 5 [packed = true];
inline int DeviceParams::left_eye_field_of_view_angles_size() const {
  return left_eye_field_of_view_angles_.size();
}
inline void DeviceParams::clear_left_eye_field_of_view_angles() {
  left_eye_field_of_view_angles_.Clear();
}
inline float DeviceParams::left_eye_field_of_view_angles(int index) const {
  return left_eye_field_of_view_angles_.Get(index);
}
inline void DeviceParams::set_left_eye_field_of_view_angles(int index, float value) {
  left_eye_field_of_view_angles_.Set(index, value);
}
inline void DeviceParams::add_left_eye_field_of_view_angles(float value) {
  left_eye_field_of_view_angles_.Add(value);
}
inline const ::google::protobuf::RepeatedField< float >&
DeviceParams::left_eye_field_of_view_angles() const {
  return left_eye_field_of_view_angles_;
}
inline ::google::protobuf::RepeatedField< float >*
DeviceParams::mutable_left_eye_field_of_view_angles() {
  return &left_eye_field_of_view_angles_;
}

// optional .DeviceParams.VerticalAlignmentType vertical_alignment = 11 [default = BOTTOM];
inline bool DeviceParams::has_vertical_alignment() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void DeviceParams::set_has_vertical_alignment() {
  _has_bits_[0] |= 0x00000020u;
}
inline void DeviceParams::clear_has_vertical_alignment() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void DeviceParams::clear_vertical_alignment() {
  vertical_alignment_ = 0;
  clear_has_vertical_alignment();
}
inline ::DeviceParams_VerticalAlignmentType DeviceParams::vertical_alignment() const {
  return static_cast< ::DeviceParams_VerticalAlignmentType >(vertical_alignment_);
}
inline void DeviceParams::set_vertical_alignment(::DeviceParams_VerticalAlignmentType value) {
  assert(::DeviceParams_VerticalAlignmentType_IsValid(value));
  set_has_vertical_alignment();
  vertical_alignment_ = value;
}

// optional float tray_to_lens_distance = 6;
inline bool DeviceParams::has_tray_to_lens_distance() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void DeviceParams::set_has_tray_to_lens_distance() {
  _has_bits_[0] |= 0x00000040u;
}
inline void DeviceParams::clear_has_tray_to_lens_distance() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void DeviceParams::clear_tray_to_lens_distance() {
  tray_to_lens_distance_ = 0;
  clear_has_tray_to_lens_distance();
}
inline float DeviceParams::tray_to_lens_distance() const {
  return tray_to_lens_distance_;
}
inline void DeviceParams::set_tray_to_lens_distance(float value) {
  set_has_tray_to_lens_distance();
  tray_to_lens_distance_ = value;
}

// repeated float distortion_coefficients = 7 [packed = true];
inline int DeviceParams::distortion_coefficients_size() const {
  return distortion_coefficients_.size();
}
inline void DeviceParams::clear_distortion_coefficients() {
  distortion_coefficients_.Clear();
}
inline float DeviceParams::distortion_coefficients(int index) const {
  return distortion_coefficients_.Get(index);
}
inline void DeviceParams::set_distortion_coefficients(int index, float value) {
  distortion_coefficients_.Set(index, value);
}
inline void DeviceParams::add_distortion_coefficients(float value) {
  distortion_coefficients_.Add(value);
}
inline const ::google::protobuf::RepeatedField< float >&
DeviceParams::distortion_coefficients() const {
  return distortion_coefficients_;
}
inline ::google::protobuf::RepeatedField< float >*
DeviceParams::mutable_distortion_coefficients() {
  return &distortion_coefficients_;
}

// optional bool has_magnet = 10;
inline bool DeviceParams::has_has_magnet() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void DeviceParams::set_has_has_magnet() {
  _has_bits_[0] |= 0x00000100u;
}
inline void DeviceParams::clear_has_has_magnet() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void DeviceParams::clear_has_magnet() {
  has_magnet_ = false;
  clear_has_has_magnet();
}
inline bool DeviceParams::has_magnet() const {
  return has_magnet_;
}
inline void DeviceParams::set_has_magnet(bool value) {
  set_has_has_magnet();
  has_magnet_ = value;
}

// optional .DeviceParams.ButtonType primary_button = 12 [default = MAGNET];
inline bool DeviceParams::has_primary_button() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void DeviceParams::set_has_primary_button() {
  _has_bits_[0] |= 0x00000200u;
}
inline void DeviceParams::clear_has_primary_button() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void DeviceParams::clear_primary_button() {
  primary_button_ = 1;
  clear_has_primary_button();
}
inline ::DeviceParams_ButtonType DeviceParams::primary_button() const {
  return static_cast< ::DeviceParams_ButtonType >(primary_button_);
}
inline void DeviceParams::set_primary_button(::DeviceParams_ButtonType value) {
  assert(::DeviceParams_ButtonType_IsValid(value));
  set_has_primary_button();
  primary_button_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::DeviceParams_VerticalAlignmentType>() {
  return ::DeviceParams_VerticalAlignmentType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::DeviceParams_ButtonType>() {
  return ::DeviceParams_ButtonType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CardboardDevice_2eproto__INCLUDED
