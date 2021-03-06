// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/contrib/boosted_trees/proto/split_info.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcontrib_2fboosted_5ftrees_2fproto_2fsplit_5finfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcontrib_2fboosted_5ftrees_2fproto_2fsplit_5finfo_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include "tensorflow/contrib/boosted_trees/proto/tree_config.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcontrib_2fboosted_5ftrees_2fproto_2fsplit_5finfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_2fcontrib_2fboosted_5ftrees_2fproto_2fsplit_5finfo_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_2fcontrib_2fboosted_5ftrees_2fproto_2fsplit_5finfo_2eproto;
namespace tensorflow {
namespace boosted_trees {
namespace learner {
class ObliviousSplitInfo;
class ObliviousSplitInfoDefaultTypeInternal;
extern ObliviousSplitInfoDefaultTypeInternal _ObliviousSplitInfo_default_instance_;
class SplitInfo;
class SplitInfoDefaultTypeInternal;
extern SplitInfoDefaultTypeInternal _SplitInfo_default_instance_;
}  // namespace learner
}  // namespace boosted_trees
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorflow::boosted_trees::learner::ObliviousSplitInfo* Arena::CreateMaybeMessage<::tensorflow::boosted_trees::learner::ObliviousSplitInfo>(Arena*);
template<> ::tensorflow::boosted_trees::learner::SplitInfo* Arena::CreateMaybeMessage<::tensorflow::boosted_trees::learner::SplitInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {
namespace boosted_trees {
namespace learner {

// ===================================================================

class SplitInfo :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.boosted_trees.learner.SplitInfo) */ {
 public:
  SplitInfo();
  virtual ~SplitInfo();

  SplitInfo(const SplitInfo& from);
  SplitInfo(SplitInfo&& from) noexcept
    : SplitInfo() {
    *this = ::std::move(from);
  }

  inline SplitInfo& operator=(const SplitInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline SplitInfo& operator=(SplitInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
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
  static const SplitInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SplitInfo* internal_default_instance() {
    return reinterpret_cast<const SplitInfo*>(
               &_SplitInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(SplitInfo* other);
  void Swap(SplitInfo* other);
  friend void swap(SplitInfo& a, SplitInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SplitInfo* New() const final {
    return CreateMaybeMessage<SplitInfo>(nullptr);
  }

  SplitInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SplitInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SplitInfo& from);
  void MergeFrom(const SplitInfo& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SplitInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.boosted_trees.learner.SplitInfo";
  }
  protected:
  explicit SplitInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_2fcontrib_2fboosted_5ftrees_2fproto_2fsplit_5finfo_2eproto);
    return ::descriptor_table_tensorflow_2fcontrib_2fboosted_5ftrees_2fproto_2fsplit_5finfo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .tensorflow.boosted_trees.trees.TreeNode split_node = 1;
  bool has_split_node() const;
  void clear_split_node();
  static const int kSplitNodeFieldNumber = 1;
  const ::tensorflow::boosted_trees::trees::TreeNode& split_node() const;
  ::tensorflow::boosted_trees::trees::TreeNode* release_split_node();
  ::tensorflow::boosted_trees::trees::TreeNode* mutable_split_node();
  void set_allocated_split_node(::tensorflow::boosted_trees::trees::TreeNode* split_node);
  void unsafe_arena_set_allocated_split_node(
      ::tensorflow::boosted_trees::trees::TreeNode* split_node);
  ::tensorflow::boosted_trees::trees::TreeNode* unsafe_arena_release_split_node();

  // .tensorflow.boosted_trees.trees.Leaf left_child = 2;
  bool has_left_child() const;
  void clear_left_child();
  static const int kLeftChildFieldNumber = 2;
  const ::tensorflow::boosted_trees::trees::Leaf& left_child() const;
  ::tensorflow::boosted_trees::trees::Leaf* release_left_child();
  ::tensorflow::boosted_trees::trees::Leaf* mutable_left_child();
  void set_allocated_left_child(::tensorflow::boosted_trees::trees::Leaf* left_child);
  void unsafe_arena_set_allocated_left_child(
      ::tensorflow::boosted_trees::trees::Leaf* left_child);
  ::tensorflow::boosted_trees::trees::Leaf* unsafe_arena_release_left_child();

  // .tensorflow.boosted_trees.trees.Leaf right_child = 3;
  bool has_right_child() const;
  void clear_right_child();
  static const int kRightChildFieldNumber = 3;
  const ::tensorflow::boosted_trees::trees::Leaf& right_child() const;
  ::tensorflow::boosted_trees::trees::Leaf* release_right_child();
  ::tensorflow::boosted_trees::trees::Leaf* mutable_right_child();
  void set_allocated_right_child(::tensorflow::boosted_trees::trees::Leaf* right_child);
  void unsafe_arena_set_allocated_right_child(
      ::tensorflow::boosted_trees::trees::Leaf* right_child);
  ::tensorflow::boosted_trees::trees::Leaf* unsafe_arena_release_right_child();

  // @@protoc_insertion_point(class_scope:tensorflow.boosted_trees.learner.SplitInfo)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::tensorflow::boosted_trees::trees::TreeNode* split_node_;
  ::tensorflow::boosted_trees::trees::Leaf* left_child_;
  ::tensorflow::boosted_trees::trees::Leaf* right_child_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_2fcontrib_2fboosted_5ftrees_2fproto_2fsplit_5finfo_2eproto;
};
// -------------------------------------------------------------------

class ObliviousSplitInfo :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.boosted_trees.learner.ObliviousSplitInfo) */ {
 public:
  ObliviousSplitInfo();
  virtual ~ObliviousSplitInfo();

  ObliviousSplitInfo(const ObliviousSplitInfo& from);
  ObliviousSplitInfo(ObliviousSplitInfo&& from) noexcept
    : ObliviousSplitInfo() {
    *this = ::std::move(from);
  }

  inline ObliviousSplitInfo& operator=(const ObliviousSplitInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline ObliviousSplitInfo& operator=(ObliviousSplitInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
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
  static const ObliviousSplitInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ObliviousSplitInfo* internal_default_instance() {
    return reinterpret_cast<const ObliviousSplitInfo*>(
               &_ObliviousSplitInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(ObliviousSplitInfo* other);
  void Swap(ObliviousSplitInfo* other);
  friend void swap(ObliviousSplitInfo& a, ObliviousSplitInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ObliviousSplitInfo* New() const final {
    return CreateMaybeMessage<ObliviousSplitInfo>(nullptr);
  }

  ObliviousSplitInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ObliviousSplitInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ObliviousSplitInfo& from);
  void MergeFrom(const ObliviousSplitInfo& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ObliviousSplitInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.boosted_trees.learner.ObliviousSplitInfo";
  }
  protected:
  explicit ObliviousSplitInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_2fcontrib_2fboosted_5ftrees_2fproto_2fsplit_5finfo_2eproto);
    return ::descriptor_table_tensorflow_2fcontrib_2fboosted_5ftrees_2fproto_2fsplit_5finfo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .tensorflow.boosted_trees.trees.Leaf children = 2;
  int children_size() const;
  void clear_children();
  static const int kChildrenFieldNumber = 2;
  ::tensorflow::boosted_trees::trees::Leaf* mutable_children(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::boosted_trees::trees::Leaf >*
      mutable_children();
  const ::tensorflow::boosted_trees::trees::Leaf& children(int index) const;
  ::tensorflow::boosted_trees::trees::Leaf* add_children();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::boosted_trees::trees::Leaf >&
      children() const;

  // repeated int32 children_parent_id = 3;
  int children_parent_id_size() const;
  void clear_children_parent_id();
  static const int kChildrenParentIdFieldNumber = 3;
  ::PROTOBUF_NAMESPACE_ID::int32 children_parent_id(int index) const;
  void set_children_parent_id(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_children_parent_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      children_parent_id() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_children_parent_id();

  // .tensorflow.boosted_trees.trees.TreeNode split_node = 1;
  bool has_split_node() const;
  void clear_split_node();
  static const int kSplitNodeFieldNumber = 1;
  const ::tensorflow::boosted_trees::trees::TreeNode& split_node() const;
  ::tensorflow::boosted_trees::trees::TreeNode* release_split_node();
  ::tensorflow::boosted_trees::trees::TreeNode* mutable_split_node();
  void set_allocated_split_node(::tensorflow::boosted_trees::trees::TreeNode* split_node);
  void unsafe_arena_set_allocated_split_node(
      ::tensorflow::boosted_trees::trees::TreeNode* split_node);
  ::tensorflow::boosted_trees::trees::TreeNode* unsafe_arena_release_split_node();

  // @@protoc_insertion_point(class_scope:tensorflow.boosted_trees.learner.ObliviousSplitInfo)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::boosted_trees::trees::Leaf > children_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > children_parent_id_;
  mutable std::atomic<int> _children_parent_id_cached_byte_size_;
  ::tensorflow::boosted_trees::trees::TreeNode* split_node_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_2fcontrib_2fboosted_5ftrees_2fproto_2fsplit_5finfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SplitInfo

// .tensorflow.boosted_trees.trees.TreeNode split_node = 1;
inline bool SplitInfo::has_split_node() const {
  return this != internal_default_instance() && split_node_ != nullptr;
}
inline const ::tensorflow::boosted_trees::trees::TreeNode& SplitInfo::split_node() const {
  const ::tensorflow::boosted_trees::trees::TreeNode* p = split_node_;
  // @@protoc_insertion_point(field_get:tensorflow.boosted_trees.learner.SplitInfo.split_node)
  return p != nullptr ? *p : *reinterpret_cast<const ::tensorflow::boosted_trees::trees::TreeNode*>(
      &::tensorflow::boosted_trees::trees::_TreeNode_default_instance_);
}
inline ::tensorflow::boosted_trees::trees::TreeNode* SplitInfo::release_split_node() {
  // @@protoc_insertion_point(field_release:tensorflow.boosted_trees.learner.SplitInfo.split_node)
  
  ::tensorflow::boosted_trees::trees::TreeNode* temp = split_node_;
  if (GetArenaNoVirtual() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  split_node_ = nullptr;
  return temp;
}
inline ::tensorflow::boosted_trees::trees::TreeNode* SplitInfo::unsafe_arena_release_split_node() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.boosted_trees.learner.SplitInfo.split_node)
  
  ::tensorflow::boosted_trees::trees::TreeNode* temp = split_node_;
  split_node_ = nullptr;
  return temp;
}
inline ::tensorflow::boosted_trees::trees::TreeNode* SplitInfo::mutable_split_node() {
  
  if (split_node_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::boosted_trees::trees::TreeNode>(GetArenaNoVirtual());
    split_node_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.boosted_trees.learner.SplitInfo.split_node)
  return split_node_;
}
inline void SplitInfo::set_allocated_split_node(::tensorflow::boosted_trees::trees::TreeNode* split_node) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(split_node_);
  }
  if (split_node) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(split_node)->GetArena();
    if (message_arena != submessage_arena) {
      split_node = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, split_node, submessage_arena);
    }
    
  } else {
    
  }
  split_node_ = split_node;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.boosted_trees.learner.SplitInfo.split_node)
}

// .tensorflow.boosted_trees.trees.Leaf left_child = 2;
inline bool SplitInfo::has_left_child() const {
  return this != internal_default_instance() && left_child_ != nullptr;
}
inline const ::tensorflow::boosted_trees::trees::Leaf& SplitInfo::left_child() const {
  const ::tensorflow::boosted_trees::trees::Leaf* p = left_child_;
  // @@protoc_insertion_point(field_get:tensorflow.boosted_trees.learner.SplitInfo.left_child)
  return p != nullptr ? *p : *reinterpret_cast<const ::tensorflow::boosted_trees::trees::Leaf*>(
      &::tensorflow::boosted_trees::trees::_Leaf_default_instance_);
}
inline ::tensorflow::boosted_trees::trees::Leaf* SplitInfo::release_left_child() {
  // @@protoc_insertion_point(field_release:tensorflow.boosted_trees.learner.SplitInfo.left_child)
  
  ::tensorflow::boosted_trees::trees::Leaf* temp = left_child_;
  if (GetArenaNoVirtual() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  left_child_ = nullptr;
  return temp;
}
inline ::tensorflow::boosted_trees::trees::Leaf* SplitInfo::unsafe_arena_release_left_child() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.boosted_trees.learner.SplitInfo.left_child)
  
  ::tensorflow::boosted_trees::trees::Leaf* temp = left_child_;
  left_child_ = nullptr;
  return temp;
}
inline ::tensorflow::boosted_trees::trees::Leaf* SplitInfo::mutable_left_child() {
  
  if (left_child_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::boosted_trees::trees::Leaf>(GetArenaNoVirtual());
    left_child_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.boosted_trees.learner.SplitInfo.left_child)
  return left_child_;
}
inline void SplitInfo::set_allocated_left_child(::tensorflow::boosted_trees::trees::Leaf* left_child) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(left_child_);
  }
  if (left_child) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(left_child)->GetArena();
    if (message_arena != submessage_arena) {
      left_child = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, left_child, submessage_arena);
    }
    
  } else {
    
  }
  left_child_ = left_child;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.boosted_trees.learner.SplitInfo.left_child)
}

// .tensorflow.boosted_trees.trees.Leaf right_child = 3;
inline bool SplitInfo::has_right_child() const {
  return this != internal_default_instance() && right_child_ != nullptr;
}
inline const ::tensorflow::boosted_trees::trees::Leaf& SplitInfo::right_child() const {
  const ::tensorflow::boosted_trees::trees::Leaf* p = right_child_;
  // @@protoc_insertion_point(field_get:tensorflow.boosted_trees.learner.SplitInfo.right_child)
  return p != nullptr ? *p : *reinterpret_cast<const ::tensorflow::boosted_trees::trees::Leaf*>(
      &::tensorflow::boosted_trees::trees::_Leaf_default_instance_);
}
inline ::tensorflow::boosted_trees::trees::Leaf* SplitInfo::release_right_child() {
  // @@protoc_insertion_point(field_release:tensorflow.boosted_trees.learner.SplitInfo.right_child)
  
  ::tensorflow::boosted_trees::trees::Leaf* temp = right_child_;
  if (GetArenaNoVirtual() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  right_child_ = nullptr;
  return temp;
}
inline ::tensorflow::boosted_trees::trees::Leaf* SplitInfo::unsafe_arena_release_right_child() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.boosted_trees.learner.SplitInfo.right_child)
  
  ::tensorflow::boosted_trees::trees::Leaf* temp = right_child_;
  right_child_ = nullptr;
  return temp;
}
inline ::tensorflow::boosted_trees::trees::Leaf* SplitInfo::mutable_right_child() {
  
  if (right_child_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::boosted_trees::trees::Leaf>(GetArenaNoVirtual());
    right_child_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.boosted_trees.learner.SplitInfo.right_child)
  return right_child_;
}
inline void SplitInfo::set_allocated_right_child(::tensorflow::boosted_trees::trees::Leaf* right_child) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(right_child_);
  }
  if (right_child) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(right_child)->GetArena();
    if (message_arena != submessage_arena) {
      right_child = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, right_child, submessage_arena);
    }
    
  } else {
    
  }
  right_child_ = right_child;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.boosted_trees.learner.SplitInfo.right_child)
}

// -------------------------------------------------------------------

// ObliviousSplitInfo

// .tensorflow.boosted_trees.trees.TreeNode split_node = 1;
inline bool ObliviousSplitInfo::has_split_node() const {
  return this != internal_default_instance() && split_node_ != nullptr;
}
inline const ::tensorflow::boosted_trees::trees::TreeNode& ObliviousSplitInfo::split_node() const {
  const ::tensorflow::boosted_trees::trees::TreeNode* p = split_node_;
  // @@protoc_insertion_point(field_get:tensorflow.boosted_trees.learner.ObliviousSplitInfo.split_node)
  return p != nullptr ? *p : *reinterpret_cast<const ::tensorflow::boosted_trees::trees::TreeNode*>(
      &::tensorflow::boosted_trees::trees::_TreeNode_default_instance_);
}
inline ::tensorflow::boosted_trees::trees::TreeNode* ObliviousSplitInfo::release_split_node() {
  // @@protoc_insertion_point(field_release:tensorflow.boosted_trees.learner.ObliviousSplitInfo.split_node)
  
  ::tensorflow::boosted_trees::trees::TreeNode* temp = split_node_;
  if (GetArenaNoVirtual() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  split_node_ = nullptr;
  return temp;
}
inline ::tensorflow::boosted_trees::trees::TreeNode* ObliviousSplitInfo::unsafe_arena_release_split_node() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.boosted_trees.learner.ObliviousSplitInfo.split_node)
  
  ::tensorflow::boosted_trees::trees::TreeNode* temp = split_node_;
  split_node_ = nullptr;
  return temp;
}
inline ::tensorflow::boosted_trees::trees::TreeNode* ObliviousSplitInfo::mutable_split_node() {
  
  if (split_node_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::boosted_trees::trees::TreeNode>(GetArenaNoVirtual());
    split_node_ = p;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.boosted_trees.learner.ObliviousSplitInfo.split_node)
  return split_node_;
}
inline void ObliviousSplitInfo::set_allocated_split_node(::tensorflow::boosted_trees::trees::TreeNode* split_node) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(split_node_);
  }
  if (split_node) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(split_node)->GetArena();
    if (message_arena != submessage_arena) {
      split_node = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, split_node, submessage_arena);
    }
    
  } else {
    
  }
  split_node_ = split_node;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.boosted_trees.learner.ObliviousSplitInfo.split_node)
}

// repeated .tensorflow.boosted_trees.trees.Leaf children = 2;
inline int ObliviousSplitInfo::children_size() const {
  return children_.size();
}
inline ::tensorflow::boosted_trees::trees::Leaf* ObliviousSplitInfo::mutable_children(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.boosted_trees.learner.ObliviousSplitInfo.children)
  return children_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::boosted_trees::trees::Leaf >*
ObliviousSplitInfo::mutable_children() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.boosted_trees.learner.ObliviousSplitInfo.children)
  return &children_;
}
inline const ::tensorflow::boosted_trees::trees::Leaf& ObliviousSplitInfo::children(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.boosted_trees.learner.ObliviousSplitInfo.children)
  return children_.Get(index);
}
inline ::tensorflow::boosted_trees::trees::Leaf* ObliviousSplitInfo::add_children() {
  // @@protoc_insertion_point(field_add:tensorflow.boosted_trees.learner.ObliviousSplitInfo.children)
  return children_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tensorflow::boosted_trees::trees::Leaf >&
ObliviousSplitInfo::children() const {
  // @@protoc_insertion_point(field_list:tensorflow.boosted_trees.learner.ObliviousSplitInfo.children)
  return children_;
}

// repeated int32 children_parent_id = 3;
inline int ObliviousSplitInfo::children_parent_id_size() const {
  return children_parent_id_.size();
}
inline void ObliviousSplitInfo::clear_children_parent_id() {
  children_parent_id_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ObliviousSplitInfo::children_parent_id(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.boosted_trees.learner.ObliviousSplitInfo.children_parent_id)
  return children_parent_id_.Get(index);
}
inline void ObliviousSplitInfo::set_children_parent_id(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  children_parent_id_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.boosted_trees.learner.ObliviousSplitInfo.children_parent_id)
}
inline void ObliviousSplitInfo::add_children_parent_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  children_parent_id_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.boosted_trees.learner.ObliviousSplitInfo.children_parent_id)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
ObliviousSplitInfo::children_parent_id() const {
  // @@protoc_insertion_point(field_list:tensorflow.boosted_trees.learner.ObliviousSplitInfo.children_parent_id)
  return children_parent_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
ObliviousSplitInfo::mutable_children_parent_id() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.boosted_trees.learner.ObliviousSplitInfo.children_parent_id)
  return &children_parent_id_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace learner
}  // namespace boosted_trees
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcontrib_2fboosted_5ftrees_2fproto_2fsplit_5finfo_2eproto
