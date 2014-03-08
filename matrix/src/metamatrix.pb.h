// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamatrix.proto

#ifndef PROTOBUF_metamatrix_2eproto__INCLUDED
#define PROTOBUF_metamatrix_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_metamatrix_2eproto();
void protobuf_AssignDesc_metamatrix_2eproto();
void protobuf_ShutdownFile_metamatrix_2eproto();

class MatrixMsg;
class MatrixMsg_TaskMsg;

// ===================================================================

class MatrixMsg_TaskMsg : public ::google::protobuf::Message {
 public:
  MatrixMsg_TaskMsg();
  virtual ~MatrixMsg_TaskMsg();
  
  MatrixMsg_TaskMsg(const MatrixMsg_TaskMsg& from);
  
  inline MatrixMsg_TaskMsg& operator=(const MatrixMsg_TaskMsg& from) {
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
  static const MatrixMsg_TaskMsg& default_instance();
  
  void Swap(MatrixMsg_TaskMsg* other);
  
  // implements Message ----------------------------------------------
  
  MatrixMsg_TaskMsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MatrixMsg_TaskMsg& from);
  void MergeFrom(const MatrixMsg_TaskMsg& from);
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
  
  // accessors -------------------------------------------------------
  
  // required string taskId = 1;
  inline bool has_taskid() const;
  inline void clear_taskid();
  static const int kTaskIdFieldNumber = 1;
  inline const ::std::string& taskid() const;
  inline void set_taskid(const ::std::string& value);
  inline void set_taskid(const char* value);
  inline void set_taskid(const char* value, size_t size);
  inline ::std::string* mutable_taskid();
  inline ::std::string* release_taskid();
  
  // required string user = 2;
  inline bool has_user() const;
  inline void clear_user();
  static const int kUserFieldNumber = 2;
  inline const ::std::string& user() const;
  inline void set_user(const ::std::string& value);
  inline void set_user(const char* value);
  inline void set_user(const char* value, size_t size);
  inline ::std::string* mutable_user();
  inline ::std::string* release_user();
  
  // required string dir = 3;
  inline bool has_dir() const;
  inline void clear_dir();
  static const int kDirFieldNumber = 3;
  inline const ::std::string& dir() const;
  inline void set_dir(const ::std::string& value);
  inline void set_dir(const char* value);
  inline void set_dir(const char* value, size_t size);
  inline ::std::string* mutable_dir();
  inline ::std::string* release_dir();
  
  // required string cmd = 4;
  inline bool has_cmd() const;
  inline void clear_cmd();
  static const int kCmdFieldNumber = 4;
  inline const ::std::string& cmd() const;
  inline void set_cmd(const ::std::string& value);
  inline void set_cmd(const char* value);
  inline void set_cmd(const char* value, size_t size);
  inline ::std::string* mutable_cmd();
  inline ::std::string* release_cmd();
  
  // required int64 dataLength = 5;
  inline bool has_datalength() const;
  inline void clear_datalength();
  static const int kDataLengthFieldNumber = 5;
  inline ::google::protobuf::int64 datalength() const;
  inline void set_datalength(::google::protobuf::int64 value);
  
  // @@protoc_insertion_point(class_scope:MatrixMsg.TaskMsg)
 private:
  inline void set_has_taskid();
  inline void clear_has_taskid();
  inline void set_has_user();
  inline void clear_has_user();
  inline void set_has_dir();
  inline void clear_has_dir();
  inline void set_has_cmd();
  inline void clear_has_cmd();
  inline void set_has_datalength();
  inline void clear_has_datalength();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* taskid_;
  ::std::string* user_;
  ::std::string* dir_;
  ::std::string* cmd_;
  ::google::protobuf::int64 datalength_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  friend void  protobuf_AddDesc_metamatrix_2eproto();
  friend void protobuf_AssignDesc_metamatrix_2eproto();
  friend void protobuf_ShutdownFile_metamatrix_2eproto();
  
  void InitAsDefaultInstance();
  static MatrixMsg_TaskMsg* default_instance_;
};
// -------------------------------------------------------------------

class MatrixMsg : public ::google::protobuf::Message {
 public:
  MatrixMsg();
  virtual ~MatrixMsg();
  
  MatrixMsg(const MatrixMsg& from);
  
  inline MatrixMsg& operator=(const MatrixMsg& from) {
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
  static const MatrixMsg& default_instance();
  
  void Swap(MatrixMsg* other);
  
  // implements Message ----------------------------------------------
  
  MatrixMsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MatrixMsg& from);
  void MergeFrom(const MatrixMsg& from);
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
  
  typedef MatrixMsg_TaskMsg TaskMsg;
  
  // accessors -------------------------------------------------------
  
  // required string msgType = 1;
  inline bool has_msgtype() const;
  inline void clear_msgtype();
  static const int kMsgTypeFieldNumber = 1;
  inline const ::std::string& msgtype() const;
  inline void set_msgtype(const ::std::string& value);
  inline void set_msgtype(const char* value);
  inline void set_msgtype(const char* value, size_t size);
  inline ::std::string* mutable_msgtype();
  inline ::std::string* release_msgtype();
  
  // optional int64 count = 2;
  inline bool has_count() const;
  inline void clear_count();
  static const int kCountFieldNumber = 2;
  inline ::google::protobuf::int64 count() const;
  inline void set_count(::google::protobuf::int64 value);
  
  // repeated .MatrixMsg.TaskMsg tasks = 3;
  inline int tasks_size() const;
  inline void clear_tasks();
  static const int kTasksFieldNumber = 3;
  inline const ::MatrixMsg_TaskMsg& tasks(int index) const;
  inline ::MatrixMsg_TaskMsg* mutable_tasks(int index);
  inline ::MatrixMsg_TaskMsg* add_tasks();
  inline const ::google::protobuf::RepeatedPtrField< ::MatrixMsg_TaskMsg >&
      tasks() const;
  inline ::google::protobuf::RepeatedPtrField< ::MatrixMsg_TaskMsg >*
      mutable_tasks();
  
  // @@protoc_insertion_point(class_scope:MatrixMsg)
 private:
  inline void set_has_msgtype();
  inline void clear_has_msgtype();
  inline void set_has_count();
  inline void clear_has_count();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* msgtype_;
  ::google::protobuf::int64 count_;
  ::google::protobuf::RepeatedPtrField< ::MatrixMsg_TaskMsg > tasks_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_metamatrix_2eproto();
  friend void protobuf_AssignDesc_metamatrix_2eproto();
  friend void protobuf_ShutdownFile_metamatrix_2eproto();
  
  void InitAsDefaultInstance();
  static MatrixMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// MatrixMsg_TaskMsg

// required string taskId = 1;
inline bool MatrixMsg_TaskMsg::has_taskid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MatrixMsg_TaskMsg::set_has_taskid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MatrixMsg_TaskMsg::clear_has_taskid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MatrixMsg_TaskMsg::clear_taskid() {
  if (taskid_ != &::google::protobuf::internal::kEmptyString) {
    taskid_->clear();
  }
  clear_has_taskid();
}
inline const ::std::string& MatrixMsg_TaskMsg::taskid() const {
  return *taskid_;
}
inline void MatrixMsg_TaskMsg::set_taskid(const ::std::string& value) {
  set_has_taskid();
  if (taskid_ == &::google::protobuf::internal::kEmptyString) {
    taskid_ = new ::std::string;
  }
  taskid_->assign(value);
}
inline void MatrixMsg_TaskMsg::set_taskid(const char* value) {
  set_has_taskid();
  if (taskid_ == &::google::protobuf::internal::kEmptyString) {
    taskid_ = new ::std::string;
  }
  taskid_->assign(value);
}
inline void MatrixMsg_TaskMsg::set_taskid(const char* value, size_t size) {
  set_has_taskid();
  if (taskid_ == &::google::protobuf::internal::kEmptyString) {
    taskid_ = new ::std::string;
  }
  taskid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MatrixMsg_TaskMsg::mutable_taskid() {
  set_has_taskid();
  if (taskid_ == &::google::protobuf::internal::kEmptyString) {
    taskid_ = new ::std::string;
  }
  return taskid_;
}
inline ::std::string* MatrixMsg_TaskMsg::release_taskid() {
  clear_has_taskid();
  if (taskid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = taskid_;
    taskid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string user = 2;
inline bool MatrixMsg_TaskMsg::has_user() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MatrixMsg_TaskMsg::set_has_user() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MatrixMsg_TaskMsg::clear_has_user() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MatrixMsg_TaskMsg::clear_user() {
  if (user_ != &::google::protobuf::internal::kEmptyString) {
    user_->clear();
  }
  clear_has_user();
}
inline const ::std::string& MatrixMsg_TaskMsg::user() const {
  return *user_;
}
inline void MatrixMsg_TaskMsg::set_user(const ::std::string& value) {
  set_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    user_ = new ::std::string;
  }
  user_->assign(value);
}
inline void MatrixMsg_TaskMsg::set_user(const char* value) {
  set_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    user_ = new ::std::string;
  }
  user_->assign(value);
}
inline void MatrixMsg_TaskMsg::set_user(const char* value, size_t size) {
  set_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    user_ = new ::std::string;
  }
  user_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MatrixMsg_TaskMsg::mutable_user() {
  set_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    user_ = new ::std::string;
  }
  return user_;
}
inline ::std::string* MatrixMsg_TaskMsg::release_user() {
  clear_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = user_;
    user_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string dir = 3;
inline bool MatrixMsg_TaskMsg::has_dir() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MatrixMsg_TaskMsg::set_has_dir() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MatrixMsg_TaskMsg::clear_has_dir() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MatrixMsg_TaskMsg::clear_dir() {
  if (dir_ != &::google::protobuf::internal::kEmptyString) {
    dir_->clear();
  }
  clear_has_dir();
}
inline const ::std::string& MatrixMsg_TaskMsg::dir() const {
  return *dir_;
}
inline void MatrixMsg_TaskMsg::set_dir(const ::std::string& value) {
  set_has_dir();
  if (dir_ == &::google::protobuf::internal::kEmptyString) {
    dir_ = new ::std::string;
  }
  dir_->assign(value);
}
inline void MatrixMsg_TaskMsg::set_dir(const char* value) {
  set_has_dir();
  if (dir_ == &::google::protobuf::internal::kEmptyString) {
    dir_ = new ::std::string;
  }
  dir_->assign(value);
}
inline void MatrixMsg_TaskMsg::set_dir(const char* value, size_t size) {
  set_has_dir();
  if (dir_ == &::google::protobuf::internal::kEmptyString) {
    dir_ = new ::std::string;
  }
  dir_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MatrixMsg_TaskMsg::mutable_dir() {
  set_has_dir();
  if (dir_ == &::google::protobuf::internal::kEmptyString) {
    dir_ = new ::std::string;
  }
  return dir_;
}
inline ::std::string* MatrixMsg_TaskMsg::release_dir() {
  clear_has_dir();
  if (dir_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = dir_;
    dir_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string cmd = 4;
inline bool MatrixMsg_TaskMsg::has_cmd() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MatrixMsg_TaskMsg::set_has_cmd() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MatrixMsg_TaskMsg::clear_has_cmd() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MatrixMsg_TaskMsg::clear_cmd() {
  if (cmd_ != &::google::protobuf::internal::kEmptyString) {
    cmd_->clear();
  }
  clear_has_cmd();
}
inline const ::std::string& MatrixMsg_TaskMsg::cmd() const {
  return *cmd_;
}
inline void MatrixMsg_TaskMsg::set_cmd(const ::std::string& value) {
  set_has_cmd();
  if (cmd_ == &::google::protobuf::internal::kEmptyString) {
    cmd_ = new ::std::string;
  }
  cmd_->assign(value);
}
inline void MatrixMsg_TaskMsg::set_cmd(const char* value) {
  set_has_cmd();
  if (cmd_ == &::google::protobuf::internal::kEmptyString) {
    cmd_ = new ::std::string;
  }
  cmd_->assign(value);
}
inline void MatrixMsg_TaskMsg::set_cmd(const char* value, size_t size) {
  set_has_cmd();
  if (cmd_ == &::google::protobuf::internal::kEmptyString) {
    cmd_ = new ::std::string;
  }
  cmd_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MatrixMsg_TaskMsg::mutable_cmd() {
  set_has_cmd();
  if (cmd_ == &::google::protobuf::internal::kEmptyString) {
    cmd_ = new ::std::string;
  }
  return cmd_;
}
inline ::std::string* MatrixMsg_TaskMsg::release_cmd() {
  clear_has_cmd();
  if (cmd_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = cmd_;
    cmd_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required int64 dataLength = 5;
inline bool MatrixMsg_TaskMsg::has_datalength() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void MatrixMsg_TaskMsg::set_has_datalength() {
  _has_bits_[0] |= 0x00000010u;
}
inline void MatrixMsg_TaskMsg::clear_has_datalength() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void MatrixMsg_TaskMsg::clear_datalength() {
  datalength_ = GOOGLE_LONGLONG(0);
  clear_has_datalength();
}
inline ::google::protobuf::int64 MatrixMsg_TaskMsg::datalength() const {
  return datalength_;
}
inline void MatrixMsg_TaskMsg::set_datalength(::google::protobuf::int64 value) {
  set_has_datalength();
  datalength_ = value;
}

// -------------------------------------------------------------------

// MatrixMsg

// required string msgType = 1;
inline bool MatrixMsg::has_msgtype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MatrixMsg::set_has_msgtype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MatrixMsg::clear_has_msgtype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MatrixMsg::clear_msgtype() {
  if (msgtype_ != &::google::protobuf::internal::kEmptyString) {
    msgtype_->clear();
  }
  clear_has_msgtype();
}
inline const ::std::string& MatrixMsg::msgtype() const {
  return *msgtype_;
}
inline void MatrixMsg::set_msgtype(const ::std::string& value) {
  set_has_msgtype();
  if (msgtype_ == &::google::protobuf::internal::kEmptyString) {
    msgtype_ = new ::std::string;
  }
  msgtype_->assign(value);
}
inline void MatrixMsg::set_msgtype(const char* value) {
  set_has_msgtype();
  if (msgtype_ == &::google::protobuf::internal::kEmptyString) {
    msgtype_ = new ::std::string;
  }
  msgtype_->assign(value);
}
inline void MatrixMsg::set_msgtype(const char* value, size_t size) {
  set_has_msgtype();
  if (msgtype_ == &::google::protobuf::internal::kEmptyString) {
    msgtype_ = new ::std::string;
  }
  msgtype_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MatrixMsg::mutable_msgtype() {
  set_has_msgtype();
  if (msgtype_ == &::google::protobuf::internal::kEmptyString) {
    msgtype_ = new ::std::string;
  }
  return msgtype_;
}
inline ::std::string* MatrixMsg::release_msgtype() {
  clear_has_msgtype();
  if (msgtype_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msgtype_;
    msgtype_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional int64 count = 2;
inline bool MatrixMsg::has_count() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MatrixMsg::set_has_count() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MatrixMsg::clear_has_count() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MatrixMsg::clear_count() {
  count_ = GOOGLE_LONGLONG(0);
  clear_has_count();
}
inline ::google::protobuf::int64 MatrixMsg::count() const {
  return count_;
}
inline void MatrixMsg::set_count(::google::protobuf::int64 value) {
  set_has_count();
  count_ = value;
}

// repeated .MatrixMsg.TaskMsg tasks = 3;
inline int MatrixMsg::tasks_size() const {
  return tasks_.size();
}
inline void MatrixMsg::clear_tasks() {
  tasks_.Clear();
}
inline const ::MatrixMsg_TaskMsg& MatrixMsg::tasks(int index) const {
  return tasks_.Get(index);
}
inline ::MatrixMsg_TaskMsg* MatrixMsg::mutable_tasks(int index) {
  return tasks_.Mutable(index);
}
inline ::MatrixMsg_TaskMsg* MatrixMsg::add_tasks() {
  return tasks_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::MatrixMsg_TaskMsg >&
MatrixMsg::tasks() const {
  return tasks_;
}
inline ::google::protobuf::RepeatedPtrField< ::MatrixMsg_TaskMsg >*
MatrixMsg::mutable_tasks() {
  return &tasks_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_metamatrix_2eproto__INCLUDED