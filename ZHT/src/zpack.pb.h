// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zpack.proto

#ifndef PROTOBUF_zpack_2eproto__INCLUDED
#define PROTOBUF_zpack_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_zpack_2eproto();
void protobuf_AssignDesc_zpack_2eproto();
void protobuf_ShutdownFile_zpack_2eproto();

class ZPack;

// ===================================================================

class ZPack : public ::google::protobuf::Message {
 public:
  ZPack();
  virtual ~ZPack();

  ZPack(const ZPack& from);

  inline ZPack& operator=(const ZPack& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ZPack& default_instance();

  void Swap(ZPack* other);

  // implements Message ----------------------------------------------

  inline ZPack* New() const { return New(NULL); }

  ZPack* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ZPack& from);
  void MergeFrom(const ZPack& from);
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
  void InternalSwap(ZPack* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes opcode = 1;
  inline bool has_opcode() const;
  inline void clear_opcode();
  static const int kOpcodeFieldNumber = 1;
  inline const ::std::string& opcode() const;
  inline void set_opcode(const ::std::string& value);
  inline void set_opcode(const char* value);
  inline void set_opcode(const void* value, size_t size);
  inline ::std::string* mutable_opcode();
  inline ::std::string* release_opcode();
  inline void set_allocated_opcode(::std::string* opcode);

  // optional bytes key = 2;
  inline bool has_key() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 2;
  inline const ::std::string& key() const;
  inline void set_key(const ::std::string& value);
  inline void set_key(const char* value);
  inline void set_key(const void* value, size_t size);
  inline ::std::string* mutable_key();
  inline ::std::string* release_key();
  inline void set_allocated_key(::std::string* key);

  // optional bytes val = 3;
  inline bool has_val() const;
  inline void clear_val();
  static const int kValFieldNumber = 3;
  inline const ::std::string& val() const;
  inline void set_val(const ::std::string& value);
  inline void set_val(const char* value);
  inline void set_val(const void* value, size_t size);
  inline ::std::string* mutable_val();
  inline ::std::string* release_val();
  inline void set_allocated_val(::std::string* val);

  // optional bytes newval = 4;
  inline bool has_newval() const;
  inline void clear_newval();
  static const int kNewvalFieldNumber = 4;
  inline const ::std::string& newval() const;
  inline void set_newval(const ::std::string& value);
  inline void set_newval(const char* value);
  inline void set_newval(const void* value, size_t size);
  inline ::std::string* mutable_newval();
  inline ::std::string* release_newval();
  inline void set_allocated_newval(::std::string* newval);

  // optional bytes lease = 5;
  inline bool has_lease() const;
  inline void clear_lease();
  static const int kLeaseFieldNumber = 5;
  inline const ::std::string& lease() const;
  inline void set_lease(const ::std::string& value);
  inline void set_lease(const char* value);
  inline void set_lease(const void* value, size_t size);
  inline ::std::string* mutable_lease();
  inline ::std::string* release_lease();
  inline void set_allocated_lease(::std::string* lease);

  // optional bool valnull = 6;
  inline bool has_valnull() const;
  inline void clear_valnull();
  static const int kValnullFieldNumber = 6;
  inline bool valnull() const;
  inline void set_valnull(bool value);

  // optional bool newvalnull = 7;
  inline bool has_newvalnull() const;
  inline void clear_newvalnull();
  static const int kNewvalnullFieldNumber = 7;
  inline bool newvalnull() const;
  inline void set_newvalnull(bool value);

  // optional int32 replicanum = 8;
  inline bool has_replicanum() const;
  inline void clear_replicanum();
  static const int kReplicanumFieldNumber = 8;
  inline ::google::protobuf::int32 replicanum() const;
  inline void set_replicanum(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ZPack)
 private:
  inline void set_has_opcode();
  inline void clear_has_opcode();
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_val();
  inline void clear_has_val();
  inline void set_has_newval();
  inline void clear_has_newval();
  inline void set_has_lease();
  inline void clear_has_lease();
  inline void set_has_valnull();
  inline void clear_has_valnull();
  inline void set_has_newvalnull();
  inline void clear_has_newvalnull();
  inline void set_has_replicanum();
  inline void clear_has_replicanum();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr opcode_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr val_;
  ::google::protobuf::internal::ArenaStringPtr newval_;
  ::google::protobuf::internal::ArenaStringPtr lease_;
  bool valnull_;
  bool newvalnull_;
  ::google::protobuf::int32 replicanum_;
  friend void  protobuf_AddDesc_zpack_2eproto();
  friend void protobuf_AssignDesc_zpack_2eproto();
  friend void protobuf_ShutdownFile_zpack_2eproto();

  void InitAsDefaultInstance();
  static ZPack* default_instance_;
};
// ===================================================================


// ===================================================================

// ZPack

// optional bytes opcode = 1;
inline bool ZPack::has_opcode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ZPack::set_has_opcode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ZPack::clear_has_opcode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ZPack::clear_opcode() {
  opcode_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_opcode();
}
inline const ::std::string& ZPack::opcode() const {
  // @@protoc_insertion_point(field_get:ZPack.opcode)
  return opcode_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ZPack::set_opcode(const ::std::string& value) {
  set_has_opcode();
  opcode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ZPack.opcode)
}
inline void ZPack::set_opcode(const char* value) {
  set_has_opcode();
  opcode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ZPack.opcode)
}
inline void ZPack::set_opcode(const void* value, size_t size) {
  set_has_opcode();
  opcode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ZPack.opcode)
}
inline ::std::string* ZPack::mutable_opcode() {
  set_has_opcode();
  // @@protoc_insertion_point(field_mutable:ZPack.opcode)
  return opcode_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ZPack::release_opcode() {
  clear_has_opcode();
  return opcode_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ZPack::set_allocated_opcode(::std::string* opcode) {
  if (opcode != NULL) {
    set_has_opcode();
  } else {
    clear_has_opcode();
  }
  opcode_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), opcode);
  // @@protoc_insertion_point(field_set_allocated:ZPack.opcode)
}

// optional bytes key = 2;
inline bool ZPack::has_key() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ZPack::set_has_key() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ZPack::clear_has_key() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ZPack::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_key();
}
inline const ::std::string& ZPack::key() const {
  // @@protoc_insertion_point(field_get:ZPack.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ZPack::set_key(const ::std::string& value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ZPack.key)
}
inline void ZPack::set_key(const char* value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ZPack.key)
}
inline void ZPack::set_key(const void* value, size_t size) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ZPack.key)
}
inline ::std::string* ZPack::mutable_key() {
  set_has_key();
  // @@protoc_insertion_point(field_mutable:ZPack.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ZPack::release_key() {
  clear_has_key();
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ZPack::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    set_has_key();
  } else {
    clear_has_key();
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:ZPack.key)
}

// optional bytes val = 3;
inline bool ZPack::has_val() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ZPack::set_has_val() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ZPack::clear_has_val() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ZPack::clear_val() {
  val_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_val();
}
inline const ::std::string& ZPack::val() const {
  // @@protoc_insertion_point(field_get:ZPack.val)
  return val_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ZPack::set_val(const ::std::string& value) {
  set_has_val();
  val_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ZPack.val)
}
inline void ZPack::set_val(const char* value) {
  set_has_val();
  val_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ZPack.val)
}
inline void ZPack::set_val(const void* value, size_t size) {
  set_has_val();
  val_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ZPack.val)
}
inline ::std::string* ZPack::mutable_val() {
  set_has_val();
  // @@protoc_insertion_point(field_mutable:ZPack.val)
  return val_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ZPack::release_val() {
  clear_has_val();
  return val_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ZPack::set_allocated_val(::std::string* val) {
  if (val != NULL) {
    set_has_val();
  } else {
    clear_has_val();
  }
  val_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), val);
  // @@protoc_insertion_point(field_set_allocated:ZPack.val)
}

// optional bytes newval = 4;
inline bool ZPack::has_newval() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ZPack::set_has_newval() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ZPack::clear_has_newval() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ZPack::clear_newval() {
  newval_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_newval();
}
inline const ::std::string& ZPack::newval() const {
  // @@protoc_insertion_point(field_get:ZPack.newval)
  return newval_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ZPack::set_newval(const ::std::string& value) {
  set_has_newval();
  newval_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ZPack.newval)
}
inline void ZPack::set_newval(const char* value) {
  set_has_newval();
  newval_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ZPack.newval)
}
inline void ZPack::set_newval(const void* value, size_t size) {
  set_has_newval();
  newval_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ZPack.newval)
}
inline ::std::string* ZPack::mutable_newval() {
  set_has_newval();
  // @@protoc_insertion_point(field_mutable:ZPack.newval)
  return newval_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ZPack::release_newval() {
  clear_has_newval();
  return newval_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ZPack::set_allocated_newval(::std::string* newval) {
  if (newval != NULL) {
    set_has_newval();
  } else {
    clear_has_newval();
  }
  newval_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), newval);
  // @@protoc_insertion_point(field_set_allocated:ZPack.newval)
}

// optional bytes lease = 5;
inline bool ZPack::has_lease() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ZPack::set_has_lease() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ZPack::clear_has_lease() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ZPack::clear_lease() {
  lease_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_lease();
}
inline const ::std::string& ZPack::lease() const {
  // @@protoc_insertion_point(field_get:ZPack.lease)
  return lease_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ZPack::set_lease(const ::std::string& value) {
  set_has_lease();
  lease_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ZPack.lease)
}
inline void ZPack::set_lease(const char* value) {
  set_has_lease();
  lease_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ZPack.lease)
}
inline void ZPack::set_lease(const void* value, size_t size) {
  set_has_lease();
  lease_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ZPack.lease)
}
inline ::std::string* ZPack::mutable_lease() {
  set_has_lease();
  // @@protoc_insertion_point(field_mutable:ZPack.lease)
  return lease_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ZPack::release_lease() {
  clear_has_lease();
  return lease_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ZPack::set_allocated_lease(::std::string* lease) {
  if (lease != NULL) {
    set_has_lease();
  } else {
    clear_has_lease();
  }
  lease_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), lease);
  // @@protoc_insertion_point(field_set_allocated:ZPack.lease)
}

// optional bool valnull = 6;
inline bool ZPack::has_valnull() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ZPack::set_has_valnull() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ZPack::clear_has_valnull() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ZPack::clear_valnull() {
  valnull_ = false;
  clear_has_valnull();
}
inline bool ZPack::valnull() const {
  // @@protoc_insertion_point(field_get:ZPack.valnull)
  return valnull_;
}
inline void ZPack::set_valnull(bool value) {
  set_has_valnull();
  valnull_ = value;
  // @@protoc_insertion_point(field_set:ZPack.valnull)
}

// optional bool newvalnull = 7;
inline bool ZPack::has_newvalnull() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ZPack::set_has_newvalnull() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ZPack::clear_has_newvalnull() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ZPack::clear_newvalnull() {
  newvalnull_ = false;
  clear_has_newvalnull();
}
inline bool ZPack::newvalnull() const {
  // @@protoc_insertion_point(field_get:ZPack.newvalnull)
  return newvalnull_;
}
inline void ZPack::set_newvalnull(bool value) {
  set_has_newvalnull();
  newvalnull_ = value;
  // @@protoc_insertion_point(field_set:ZPack.newvalnull)
}

// optional int32 replicanum = 8;
inline bool ZPack::has_replicanum() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ZPack::set_has_replicanum() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ZPack::clear_has_replicanum() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ZPack::clear_replicanum() {
  replicanum_ = 0;
  clear_has_replicanum();
}
inline ::google::protobuf::int32 ZPack::replicanum() const {
  // @@protoc_insertion_point(field_get:ZPack.replicanum)
  return replicanum_;
}
inline void ZPack::set_replicanum(::google::protobuf::int32 value) {
  set_has_replicanum();
  replicanum_ = value;
  // @@protoc_insertion_point(field_set:ZPack.replicanum)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_zpack_2eproto__INCLUDED
