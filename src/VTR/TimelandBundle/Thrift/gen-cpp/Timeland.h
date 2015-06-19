/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Timeland_H
#define Timeland_H

#include <thrift/TDispatchProcessor.h>
#include "Timeland_types.h"

namespace timeland_thrift {

class TimelandIf {
 public:
  virtual ~TimelandIf() {}
  virtual void compute(std::string& _return, const std::string& file) = 0;
};

class TimelandIfFactory {
 public:
  typedef TimelandIf Handler;

  virtual ~TimelandIfFactory() {}

  virtual TimelandIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(TimelandIf* /* handler */) = 0;
};

class TimelandIfSingletonFactory : virtual public TimelandIfFactory {
 public:
  TimelandIfSingletonFactory(const boost::shared_ptr<TimelandIf>& iface) : iface_(iface) {}
  virtual ~TimelandIfSingletonFactory() {}

  virtual TimelandIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(TimelandIf* /* handler */) {}

 protected:
  boost::shared_ptr<TimelandIf> iface_;
};

class TimelandNull : virtual public TimelandIf {
 public:
  virtual ~TimelandNull() {}
  void compute(std::string& /* _return */, const std::string& /* file */) {
    return;
  }
};

typedef struct _Timeland_compute_args__isset {
  _Timeland_compute_args__isset() : file(false) {}
  bool file :1;
} _Timeland_compute_args__isset;

class Timeland_compute_args {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  Timeland_compute_args(const Timeland_compute_args&);
  Timeland_compute_args& operator=(const Timeland_compute_args&);
  Timeland_compute_args() : file() {
  }

  virtual ~Timeland_compute_args() throw();
  std::string file;

  _Timeland_compute_args__isset __isset;

  void __set_file(const std::string& val);

  bool operator == (const Timeland_compute_args & rhs) const
  {
    if (!(file == rhs.file))
      return false;
    return true;
  }
  bool operator != (const Timeland_compute_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Timeland_compute_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Timeland_compute_args& obj);
};


class Timeland_compute_pargs {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};


  virtual ~Timeland_compute_pargs() throw();
  const std::string* file;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Timeland_compute_pargs& obj);
};

typedef struct _Timeland_compute_result__isset {
  _Timeland_compute_result__isset() : success(false) {}
  bool success :1;
} _Timeland_compute_result__isset;

class Timeland_compute_result {
 public:

  static const char* ascii_fingerprint; // = "9A73381FEFD6B67F432E717102246330";
  static const uint8_t binary_fingerprint[16]; // = {0x9A,0x73,0x38,0x1F,0xEF,0xD6,0xB6,0x7F,0x43,0x2E,0x71,0x71,0x02,0x24,0x63,0x30};

  Timeland_compute_result(const Timeland_compute_result&);
  Timeland_compute_result& operator=(const Timeland_compute_result&);
  Timeland_compute_result() : success() {
  }

  virtual ~Timeland_compute_result() throw();
  std::string success;

  _Timeland_compute_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const Timeland_compute_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Timeland_compute_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Timeland_compute_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Timeland_compute_result& obj);
};

typedef struct _Timeland_compute_presult__isset {
  _Timeland_compute_presult__isset() : success(false) {}
  bool success :1;
} _Timeland_compute_presult__isset;

class Timeland_compute_presult {
 public:

  static const char* ascii_fingerprint; // = "9A73381FEFD6B67F432E717102246330";
  static const uint8_t binary_fingerprint[16]; // = {0x9A,0x73,0x38,0x1F,0xEF,0xD6,0xB6,0x7F,0x43,0x2E,0x71,0x71,0x02,0x24,0x63,0x30};


  virtual ~Timeland_compute_presult() throw();
  std::string* success;

  _Timeland_compute_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const Timeland_compute_presult& obj);
};

class TimelandClient : virtual public TimelandIf {
 public:
  TimelandClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  TimelandClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void compute(std::string& _return, const std::string& file);
  void send_compute(const std::string& file);
  void recv_compute(std::string& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class TimelandProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<TimelandIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (TimelandProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_compute(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  TimelandProcessor(boost::shared_ptr<TimelandIf> iface) :
    iface_(iface) {
    processMap_["compute"] = &TimelandProcessor::process_compute;
  }

  virtual ~TimelandProcessor() {}
};

class TimelandProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  TimelandProcessorFactory(const ::boost::shared_ptr< TimelandIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< TimelandIfFactory > handlerFactory_;
};

class TimelandMultiface : virtual public TimelandIf {
 public:
  TimelandMultiface(std::vector<boost::shared_ptr<TimelandIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~TimelandMultiface() {}
 protected:
  std::vector<boost::shared_ptr<TimelandIf> > ifaces_;
  TimelandMultiface() {}
  void add(boost::shared_ptr<TimelandIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void compute(std::string& _return, const std::string& file) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->compute(_return, file);
    }
    ifaces_[i]->compute(_return, file);
    return;
  }

};

} // namespace

#endif