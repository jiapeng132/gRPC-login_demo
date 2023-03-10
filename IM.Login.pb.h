// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IM.Login.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_IM_2eLogin_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_IM_2eLogin_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_IM_2eLogin_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_IM_2eLogin_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_IM_2eLogin_2eproto;
namespace IM {
namespace Login {
class IMLoginReq;
struct IMLoginReqDefaultTypeInternal;
extern IMLoginReqDefaultTypeInternal _IMLoginReq_default_instance_;
class IMLoginRes;
struct IMLoginResDefaultTypeInternal;
extern IMLoginResDefaultTypeInternal _IMLoginRes_default_instance_;
class IMRegisterReq;
struct IMRegisterReqDefaultTypeInternal;
extern IMRegisterReqDefaultTypeInternal _IMRegisterReq_default_instance_;
class IMRegisterRes;
struct IMRegisterResDefaultTypeInternal;
extern IMRegisterResDefaultTypeInternal _IMRegisterRes_default_instance_;
}  // namespace Login
}  // namespace IM
PROTOBUF_NAMESPACE_OPEN
template<> ::IM::Login::IMLoginReq* Arena::CreateMaybeMessage<::IM::Login::IMLoginReq>(Arena*);
template<> ::IM::Login::IMLoginRes* Arena::CreateMaybeMessage<::IM::Login::IMLoginRes>(Arena*);
template<> ::IM::Login::IMRegisterReq* Arena::CreateMaybeMessage<::IM::Login::IMRegisterReq>(Arena*);
template<> ::IM::Login::IMRegisterRes* Arena::CreateMaybeMessage<::IM::Login::IMRegisterRes>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace IM {
namespace Login {

// ===================================================================

class IMRegisterReq final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:IM.Login.IMRegisterReq) */ {
 public:
  inline IMRegisterReq() : IMRegisterReq(nullptr) {}
  ~IMRegisterReq() override;
  explicit PROTOBUF_CONSTEXPR IMRegisterReq(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  IMRegisterReq(const IMRegisterReq& from);
  IMRegisterReq(IMRegisterReq&& from) noexcept
    : IMRegisterReq() {
    *this = ::std::move(from);
  }

  inline IMRegisterReq& operator=(const IMRegisterReq& from) {
    CopyFrom(from);
    return *this;
  }
  inline IMRegisterReq& operator=(IMRegisterReq&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const IMRegisterReq& default_instance() {
    return *internal_default_instance();
  }
  static inline const IMRegisterReq* internal_default_instance() {
    return reinterpret_cast<const IMRegisterReq*>(
               &_IMRegisterReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(IMRegisterReq& a, IMRegisterReq& b) {
    a.Swap(&b);
  }
  inline void Swap(IMRegisterReq* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(IMRegisterReq* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  IMRegisterReq* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<IMRegisterReq>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const IMRegisterReq& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const IMRegisterReq& from) {
    IMRegisterReq::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(IMRegisterReq* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "IM.Login.IMRegisterReq";
  }
  protected:
  explicit IMRegisterReq(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserNameFieldNumber = 1,
    kPasswordFieldNumber = 2,
  };
  // string user_name = 1;
  void clear_user_name();
  const std::string& user_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_user_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_user_name();
  PROTOBUF_NODISCARD std::string* release_user_name();
  void set_allocated_user_name(std::string* user_name);
  private:
  const std::string& _internal_user_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_user_name(const std::string& value);
  std::string* _internal_mutable_user_name();
  public:

  // string password = 2;
  void clear_password();
  const std::string& password() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_password(ArgT0&& arg0, ArgT... args);
  std::string* mutable_password();
  PROTOBUF_NODISCARD std::string* release_password();
  void set_allocated_password(std::string* password);
  private:
  const std::string& _internal_password() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_password(const std::string& value);
  std::string* _internal_mutable_password();
  public:

  // @@protoc_insertion_point(class_scope:IM.Login.IMRegisterReq)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr user_name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr password_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_IM_2eLogin_2eproto;
};
// -------------------------------------------------------------------

class IMRegisterRes final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:IM.Login.IMRegisterRes) */ {
 public:
  inline IMRegisterRes() : IMRegisterRes(nullptr) {}
  ~IMRegisterRes() override;
  explicit PROTOBUF_CONSTEXPR IMRegisterRes(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  IMRegisterRes(const IMRegisterRes& from);
  IMRegisterRes(IMRegisterRes&& from) noexcept
    : IMRegisterRes() {
    *this = ::std::move(from);
  }

  inline IMRegisterRes& operator=(const IMRegisterRes& from) {
    CopyFrom(from);
    return *this;
  }
  inline IMRegisterRes& operator=(IMRegisterRes&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const IMRegisterRes& default_instance() {
    return *internal_default_instance();
  }
  static inline const IMRegisterRes* internal_default_instance() {
    return reinterpret_cast<const IMRegisterRes*>(
               &_IMRegisterRes_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(IMRegisterRes& a, IMRegisterRes& b) {
    a.Swap(&b);
  }
  inline void Swap(IMRegisterRes* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(IMRegisterRes* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  IMRegisterRes* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<IMRegisterRes>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const IMRegisterRes& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const IMRegisterRes& from) {
    IMRegisterRes::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(IMRegisterRes* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "IM.Login.IMRegisterRes";
  }
  protected:
  explicit IMRegisterRes(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserNameFieldNumber = 1,
    kUserIdFieldNumber = 2,
    kResultCodeFieldNumber = 3,
  };
  // string user_name = 1;
  void clear_user_name();
  const std::string& user_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_user_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_user_name();
  PROTOBUF_NODISCARD std::string* release_user_name();
  void set_allocated_user_name(std::string* user_name);
  private:
  const std::string& _internal_user_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_user_name(const std::string& value);
  std::string* _internal_mutable_user_name();
  public:

  // uint32 user_id = 2;
  void clear_user_id();
  uint32_t user_id() const;
  void set_user_id(uint32_t value);
  private:
  uint32_t _internal_user_id() const;
  void _internal_set_user_id(uint32_t value);
  public:

  // uint32 result_code = 3;
  void clear_result_code();
  uint32_t result_code() const;
  void set_result_code(uint32_t value);
  private:
  uint32_t _internal_result_code() const;
  void _internal_set_result_code(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:IM.Login.IMRegisterRes)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr user_name_;
    uint32_t user_id_;
    uint32_t result_code_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_IM_2eLogin_2eproto;
};
// -------------------------------------------------------------------

class IMLoginReq final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:IM.Login.IMLoginReq) */ {
 public:
  inline IMLoginReq() : IMLoginReq(nullptr) {}
  ~IMLoginReq() override;
  explicit PROTOBUF_CONSTEXPR IMLoginReq(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  IMLoginReq(const IMLoginReq& from);
  IMLoginReq(IMLoginReq&& from) noexcept
    : IMLoginReq() {
    *this = ::std::move(from);
  }

  inline IMLoginReq& operator=(const IMLoginReq& from) {
    CopyFrom(from);
    return *this;
  }
  inline IMLoginReq& operator=(IMLoginReq&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const IMLoginReq& default_instance() {
    return *internal_default_instance();
  }
  static inline const IMLoginReq* internal_default_instance() {
    return reinterpret_cast<const IMLoginReq*>(
               &_IMLoginReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(IMLoginReq& a, IMLoginReq& b) {
    a.Swap(&b);
  }
  inline void Swap(IMLoginReq* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(IMLoginReq* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  IMLoginReq* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<IMLoginReq>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const IMLoginReq& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const IMLoginReq& from) {
    IMLoginReq::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(IMLoginReq* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "IM.Login.IMLoginReq";
  }
  protected:
  explicit IMLoginReq(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserNameFieldNumber = 1,
    kPasswordFieldNumber = 2,
  };
  // string user_name = 1;
  void clear_user_name();
  const std::string& user_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_user_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_user_name();
  PROTOBUF_NODISCARD std::string* release_user_name();
  void set_allocated_user_name(std::string* user_name);
  private:
  const std::string& _internal_user_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_user_name(const std::string& value);
  std::string* _internal_mutable_user_name();
  public:

  // string password = 2;
  void clear_password();
  const std::string& password() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_password(ArgT0&& arg0, ArgT... args);
  std::string* mutable_password();
  PROTOBUF_NODISCARD std::string* release_password();
  void set_allocated_password(std::string* password);
  private:
  const std::string& _internal_password() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_password(const std::string& value);
  std::string* _internal_mutable_password();
  public:

  // @@protoc_insertion_point(class_scope:IM.Login.IMLoginReq)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr user_name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr password_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_IM_2eLogin_2eproto;
};
// -------------------------------------------------------------------

class IMLoginRes final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:IM.Login.IMLoginRes) */ {
 public:
  inline IMLoginRes() : IMLoginRes(nullptr) {}
  ~IMLoginRes() override;
  explicit PROTOBUF_CONSTEXPR IMLoginRes(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  IMLoginRes(const IMLoginRes& from);
  IMLoginRes(IMLoginRes&& from) noexcept
    : IMLoginRes() {
    *this = ::std::move(from);
  }

  inline IMLoginRes& operator=(const IMLoginRes& from) {
    CopyFrom(from);
    return *this;
  }
  inline IMLoginRes& operator=(IMLoginRes&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const IMLoginRes& default_instance() {
    return *internal_default_instance();
  }
  static inline const IMLoginRes* internal_default_instance() {
    return reinterpret_cast<const IMLoginRes*>(
               &_IMLoginRes_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(IMLoginRes& a, IMLoginRes& b) {
    a.Swap(&b);
  }
  inline void Swap(IMLoginRes* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(IMLoginRes* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  IMLoginRes* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<IMLoginRes>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const IMLoginRes& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const IMLoginRes& from) {
    IMLoginRes::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(IMLoginRes* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "IM.Login.IMLoginRes";
  }
  protected:
  explicit IMLoginRes(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserIdFieldNumber = 1,
    kResultCodeFieldNumber = 2,
  };
  // uint32 user_id = 1;
  void clear_user_id();
  uint32_t user_id() const;
  void set_user_id(uint32_t value);
  private:
  uint32_t _internal_user_id() const;
  void _internal_set_user_id(uint32_t value);
  public:

  // uint32 result_code = 2;
  void clear_result_code();
  uint32_t result_code() const;
  void set_result_code(uint32_t value);
  private:
  uint32_t _internal_result_code() const;
  void _internal_set_result_code(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:IM.Login.IMLoginRes)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    uint32_t user_id_;
    uint32_t result_code_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_IM_2eLogin_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// IMRegisterReq

// string user_name = 1;
inline void IMRegisterReq::clear_user_name() {
  _impl_.user_name_.ClearToEmpty();
}
inline const std::string& IMRegisterReq::user_name() const {
  // @@protoc_insertion_point(field_get:IM.Login.IMRegisterReq.user_name)
  return _internal_user_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void IMRegisterReq::set_user_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.user_name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:IM.Login.IMRegisterReq.user_name)
}
inline std::string* IMRegisterReq::mutable_user_name() {
  std::string* _s = _internal_mutable_user_name();
  // @@protoc_insertion_point(field_mutable:IM.Login.IMRegisterReq.user_name)
  return _s;
}
inline const std::string& IMRegisterReq::_internal_user_name() const {
  return _impl_.user_name_.Get();
}
inline void IMRegisterReq::_internal_set_user_name(const std::string& value) {
  
  _impl_.user_name_.Set(value, GetArenaForAllocation());
}
inline std::string* IMRegisterReq::_internal_mutable_user_name() {
  
  return _impl_.user_name_.Mutable(GetArenaForAllocation());
}
inline std::string* IMRegisterReq::release_user_name() {
  // @@protoc_insertion_point(field_release:IM.Login.IMRegisterReq.user_name)
  return _impl_.user_name_.Release();
}
inline void IMRegisterReq::set_allocated_user_name(std::string* user_name) {
  if (user_name != nullptr) {
    
  } else {
    
  }
  _impl_.user_name_.SetAllocated(user_name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.user_name_.IsDefault()) {
    _impl_.user_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:IM.Login.IMRegisterReq.user_name)
}

// string password = 2;
inline void IMRegisterReq::clear_password() {
  _impl_.password_.ClearToEmpty();
}
inline const std::string& IMRegisterReq::password() const {
  // @@protoc_insertion_point(field_get:IM.Login.IMRegisterReq.password)
  return _internal_password();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void IMRegisterReq::set_password(ArgT0&& arg0, ArgT... args) {
 
 _impl_.password_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:IM.Login.IMRegisterReq.password)
}
inline std::string* IMRegisterReq::mutable_password() {
  std::string* _s = _internal_mutable_password();
  // @@protoc_insertion_point(field_mutable:IM.Login.IMRegisterReq.password)
  return _s;
}
inline const std::string& IMRegisterReq::_internal_password() const {
  return _impl_.password_.Get();
}
inline void IMRegisterReq::_internal_set_password(const std::string& value) {
  
  _impl_.password_.Set(value, GetArenaForAllocation());
}
inline std::string* IMRegisterReq::_internal_mutable_password() {
  
  return _impl_.password_.Mutable(GetArenaForAllocation());
}
inline std::string* IMRegisterReq::release_password() {
  // @@protoc_insertion_point(field_release:IM.Login.IMRegisterReq.password)
  return _impl_.password_.Release();
}
inline void IMRegisterReq::set_allocated_password(std::string* password) {
  if (password != nullptr) {
    
  } else {
    
  }
  _impl_.password_.SetAllocated(password, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.password_.IsDefault()) {
    _impl_.password_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:IM.Login.IMRegisterReq.password)
}

// -------------------------------------------------------------------

// IMRegisterRes

// string user_name = 1;
inline void IMRegisterRes::clear_user_name() {
  _impl_.user_name_.ClearToEmpty();
}
inline const std::string& IMRegisterRes::user_name() const {
  // @@protoc_insertion_point(field_get:IM.Login.IMRegisterRes.user_name)
  return _internal_user_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void IMRegisterRes::set_user_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.user_name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:IM.Login.IMRegisterRes.user_name)
}
inline std::string* IMRegisterRes::mutable_user_name() {
  std::string* _s = _internal_mutable_user_name();
  // @@protoc_insertion_point(field_mutable:IM.Login.IMRegisterRes.user_name)
  return _s;
}
inline const std::string& IMRegisterRes::_internal_user_name() const {
  return _impl_.user_name_.Get();
}
inline void IMRegisterRes::_internal_set_user_name(const std::string& value) {
  
  _impl_.user_name_.Set(value, GetArenaForAllocation());
}
inline std::string* IMRegisterRes::_internal_mutable_user_name() {
  
  return _impl_.user_name_.Mutable(GetArenaForAllocation());
}
inline std::string* IMRegisterRes::release_user_name() {
  // @@protoc_insertion_point(field_release:IM.Login.IMRegisterRes.user_name)
  return _impl_.user_name_.Release();
}
inline void IMRegisterRes::set_allocated_user_name(std::string* user_name) {
  if (user_name != nullptr) {
    
  } else {
    
  }
  _impl_.user_name_.SetAllocated(user_name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.user_name_.IsDefault()) {
    _impl_.user_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:IM.Login.IMRegisterRes.user_name)
}

// uint32 user_id = 2;
inline void IMRegisterRes::clear_user_id() {
  _impl_.user_id_ = 0u;
}
inline uint32_t IMRegisterRes::_internal_user_id() const {
  return _impl_.user_id_;
}
inline uint32_t IMRegisterRes::user_id() const {
  // @@protoc_insertion_point(field_get:IM.Login.IMRegisterRes.user_id)
  return _internal_user_id();
}
inline void IMRegisterRes::_internal_set_user_id(uint32_t value) {
  
  _impl_.user_id_ = value;
}
inline void IMRegisterRes::set_user_id(uint32_t value) {
  _internal_set_user_id(value);
  // @@protoc_insertion_point(field_set:IM.Login.IMRegisterRes.user_id)
}

// uint32 result_code = 3;
inline void IMRegisterRes::clear_result_code() {
  _impl_.result_code_ = 0u;
}
inline uint32_t IMRegisterRes::_internal_result_code() const {
  return _impl_.result_code_;
}
inline uint32_t IMRegisterRes::result_code() const {
  // @@protoc_insertion_point(field_get:IM.Login.IMRegisterRes.result_code)
  return _internal_result_code();
}
inline void IMRegisterRes::_internal_set_result_code(uint32_t value) {
  
  _impl_.result_code_ = value;
}
inline void IMRegisterRes::set_result_code(uint32_t value) {
  _internal_set_result_code(value);
  // @@protoc_insertion_point(field_set:IM.Login.IMRegisterRes.result_code)
}

// -------------------------------------------------------------------

// IMLoginReq

// string user_name = 1;
inline void IMLoginReq::clear_user_name() {
  _impl_.user_name_.ClearToEmpty();
}
inline const std::string& IMLoginReq::user_name() const {
  // @@protoc_insertion_point(field_get:IM.Login.IMLoginReq.user_name)
  return _internal_user_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void IMLoginReq::set_user_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.user_name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:IM.Login.IMLoginReq.user_name)
}
inline std::string* IMLoginReq::mutable_user_name() {
  std::string* _s = _internal_mutable_user_name();
  // @@protoc_insertion_point(field_mutable:IM.Login.IMLoginReq.user_name)
  return _s;
}
inline const std::string& IMLoginReq::_internal_user_name() const {
  return _impl_.user_name_.Get();
}
inline void IMLoginReq::_internal_set_user_name(const std::string& value) {
  
  _impl_.user_name_.Set(value, GetArenaForAllocation());
}
inline std::string* IMLoginReq::_internal_mutable_user_name() {
  
  return _impl_.user_name_.Mutable(GetArenaForAllocation());
}
inline std::string* IMLoginReq::release_user_name() {
  // @@protoc_insertion_point(field_release:IM.Login.IMLoginReq.user_name)
  return _impl_.user_name_.Release();
}
inline void IMLoginReq::set_allocated_user_name(std::string* user_name) {
  if (user_name != nullptr) {
    
  } else {
    
  }
  _impl_.user_name_.SetAllocated(user_name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.user_name_.IsDefault()) {
    _impl_.user_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:IM.Login.IMLoginReq.user_name)
}

// string password = 2;
inline void IMLoginReq::clear_password() {
  _impl_.password_.ClearToEmpty();
}
inline const std::string& IMLoginReq::password() const {
  // @@protoc_insertion_point(field_get:IM.Login.IMLoginReq.password)
  return _internal_password();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void IMLoginReq::set_password(ArgT0&& arg0, ArgT... args) {
 
 _impl_.password_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:IM.Login.IMLoginReq.password)
}
inline std::string* IMLoginReq::mutable_password() {
  std::string* _s = _internal_mutable_password();
  // @@protoc_insertion_point(field_mutable:IM.Login.IMLoginReq.password)
  return _s;
}
inline const std::string& IMLoginReq::_internal_password() const {
  return _impl_.password_.Get();
}
inline void IMLoginReq::_internal_set_password(const std::string& value) {
  
  _impl_.password_.Set(value, GetArenaForAllocation());
}
inline std::string* IMLoginReq::_internal_mutable_password() {
  
  return _impl_.password_.Mutable(GetArenaForAllocation());
}
inline std::string* IMLoginReq::release_password() {
  // @@protoc_insertion_point(field_release:IM.Login.IMLoginReq.password)
  return _impl_.password_.Release();
}
inline void IMLoginReq::set_allocated_password(std::string* password) {
  if (password != nullptr) {
    
  } else {
    
  }
  _impl_.password_.SetAllocated(password, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.password_.IsDefault()) {
    _impl_.password_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:IM.Login.IMLoginReq.password)
}

// -------------------------------------------------------------------

// IMLoginRes

// uint32 user_id = 1;
inline void IMLoginRes::clear_user_id() {
  _impl_.user_id_ = 0u;
}
inline uint32_t IMLoginRes::_internal_user_id() const {
  return _impl_.user_id_;
}
inline uint32_t IMLoginRes::user_id() const {
  // @@protoc_insertion_point(field_get:IM.Login.IMLoginRes.user_id)
  return _internal_user_id();
}
inline void IMLoginRes::_internal_set_user_id(uint32_t value) {
  
  _impl_.user_id_ = value;
}
inline void IMLoginRes::set_user_id(uint32_t value) {
  _internal_set_user_id(value);
  // @@protoc_insertion_point(field_set:IM.Login.IMLoginRes.user_id)
}

// uint32 result_code = 2;
inline void IMLoginRes::clear_result_code() {
  _impl_.result_code_ = 0u;
}
inline uint32_t IMLoginRes::_internal_result_code() const {
  return _impl_.result_code_;
}
inline uint32_t IMLoginRes::result_code() const {
  // @@protoc_insertion_point(field_get:IM.Login.IMLoginRes.result_code)
  return _internal_result_code();
}
inline void IMLoginRes::_internal_set_result_code(uint32_t value) {
  
  _impl_.result_code_ = value;
}
inline void IMLoginRes::set_result_code(uint32_t value) {
  _internal_set_result_code(value);
  // @@protoc_insertion_point(field_set:IM.Login.IMLoginRes.result_code)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Login
}  // namespace IM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_IM_2eLogin_2eproto
