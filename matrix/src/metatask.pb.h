// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metatask.proto

#ifndef PROTOBUF_metatask_2eproto__INCLUDED
#define PROTOBUF_metatask_2eproto__INCLUDED

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
void  protobuf_AddDesc_metatask_2eproto();
void protobuf_AssignDesc_metatask_2eproto();
void protobuf_ShutdownFile_metatask_2eproto();

class TaskMsg;

// ===================================================================

class TaskMsg : public ::google::protobuf::Message {
 public:
  TaskMsg();
  virtual ~TaskMsg();
  
  TaskMsg(const TaskMsg& from);
  
  inline TaskMsg& operator=(const TaskMsg& from) {
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
  static const TaskMsg& default_instance();
  
  void Swap(TaskMsg* other);
  
  // implements Message ----------------------------------------------
  
  TaskMsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TaskMsg& from);
  void MergeFrom(const TaskMsg& from);
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
  
  // @@protoc_insertion_point(class_scope:TaskMsg)
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
  
  friend void  protobuf_AddDesc_metatask_2eproto();
  friend void protobuf_AssignDesc_metatask_2eproto();
  friend void protobuf_ShutdownFile_metatask_2eproto();
  
  void InitAsDefaultInstance();
  static TaskMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// TaskMsg

// required string taskId = 1;
inline bool TaskMsg::has_taskid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TaskMsg::set_has_taskid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TaskMsg::clear_has_taskid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TaskMsg::clear_taskid() {
  if (taskid_ != &::google::protobuf::internal::kEmptyString) {
    taskid_->clear();
  }
  clear_has_taskid();
}
inline const ::std::string& TaskMsg::taskid() const {
  return *taskid_;
}
inline void TaskMsg::set_taskid(const ::std::string& value) {
  set_has_taskid();
  if (taskid_ == &::google::protobuf::internal::kEmptyString) {
    taskid_ = new ::std::string;
  }
  taskid_->assign(value);
}
inline void TaskMsg::set_taskid(const char* value) {
  set_has_taskid();
  if (taskid_ == &::google::protobuf::internal::kEmptyString) {
    taskid_ = new ::std::string;
  }
  taskid_->assign(value);
}
inline void TaskMsg::set_taskid(const char* value, size_t size) {
  set_has_taskid();
  if (taskid_ == &::google::protobuf::internal::kEmptyString) {
    taskid_ = new ::std::string;
  }
  taskid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TaskMsg::mutable_taskid() {
  set_has_taskid();
  if (taskid_ == &::google::protobuf::internal::kEmptyString) {
    taskid_ = new ::std::string;
  }
  return taskid_;
}
inline ::std::string* TaskMsg::release_taskid() {
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
inline bool TaskMsg::has_user() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TaskMsg::set_has_user() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TaskMsg::clear_has_user() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TaskMsg::clear_user() {
  if (user_ != &::google::protobuf::internal::kEmptyString) {
    user_->clear();
  }
  clear_has_user();
}
inline const ::std::string& TaskMsg::user() const {
  return *user_;
}
inline void TaskMsg::set_user(const ::std::string& value) {
  set_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    user_ = new ::std::string;
  }
  user_->assign(value);
}
inline void TaskMsg::set_user(const char* value) {
  set_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    user_ = new ::std::string;
  }
  user_->assign(value);
}
inline void TaskMsg::set_user(const char* value, size_t size) {
  set_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    user_ = new ::std::string;
  }
  user_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TaskMsg::mutable_user() {
  set_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    user_ = new ::std::string;
  }
  return user_;
}
inline ::std::string* TaskMsg::release_user() {
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
inline bool TaskMsg::has_dir() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TaskMsg::set_has_dir() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TaskMsg::clear_has_dir() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TaskMsg::clear_dir() {
  if (dir_ != &::google::protobuf::internal::kEmptyString) {
    dir_->clear();
  }
  clear_has_dir();
}
inline const ::std::string& TaskMsg::dir() const {
  return *dir_;
}
inline void TaskMsg::set_dir(const ::std::string& value) {
  set_has_dir();
  if (dir_ == &::google::protobuf::internal::kEmptyString) {
    dir_ = new ::std::string;
  }
  dir_->assign(value);
}
inline void TaskMsg::set_dir(const char* value) {
  set_has_dir();
  if (dir_ == &::google::protobuf::internal::kEmptyString) {
    dir_ = new ::std::string;
  }
  dir_->assign(value);
}
inline void TaskMsg::set_dir(const char* value, size_t size) {
  set_has_dir();
  if (dir_ == &::google::protobuf::internal::kEmptyString) {
    dir_ = new ::std::string;
  }
  dir_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TaskMsg::mutable_dir() {
  set_has_dir();
  if (dir_ == &::google::protobuf::internal::kEmptyString) {
    dir_ = new ::std::string;
  }
  return dir_;
}
inline ::std::string* TaskMsg::release_dir() {
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
inline bool TaskMsg::has_cmd() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TaskMsg::set_has_cmd() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TaskMsg::clear_has_cmd() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TaskMsg::clear_cmd() {
  if (cmd_ != &::google::protobuf::internal::kEmptyString) {
    cmd_->clear();
  }
  clear_has_cmd();
}
inline const ::std::string& TaskMsg::cmd() const {
  return *cmd_;
}
inline void TaskMsg::set_cmd(const ::std::string& value) {
  set_has_cmd();
  if (cmd_ == &::google::protobuf::internal::kEmptyString) {
    cmd_ = new ::std::string;
  }
  cmd_->assign(value);
}
inline void TaskMsg::set_cmd(const char* value) {
  set_has_cmd();
  if (cmd_ == &::google::protobuf::internal::kEmptyString) {
    cmd_ = new ::std::string;
  }
  cmd_->assign(value);
}
inline void TaskMsg::set_cmd(const char* value, size_t size) {
  set_has_cmd();
  if (cmd_ == &::google::protobuf::internal::kEmptyString) {
    cmd_ = new ::std::string;
  }
  cmd_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TaskMsg::mutable_cmd() {
  set_has_cmd();
  if (cmd_ == &::google::protobuf::internal::kEmptyString) {
    cmd_ = new ::std::string;
  }
  return cmd_;
}
inline ::std::string* TaskMsg::release_cmd() {
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
inline bool TaskMsg::has_datalength() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void TaskMsg::set_has_datalength() {
  _has_bits_[0] |= 0x00000010u;
}
inline void TaskMsg::clear_has_datalength() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void TaskMsg::clear_datalength() {
  datalength_ = GOOGLE_LONGLONG(0);
  clear_has_datalength();
}
inline ::google::protobuf::int64 TaskMsg::datalength() const {
  return datalength_;
}
inline void TaskMsg::set_datalength(::google::protobuf::int64 value) {
  set_has_datalength();
  datalength_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_metatask_2eproto__INCLUDED
