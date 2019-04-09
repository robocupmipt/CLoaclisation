#pragma once
#include "kernelcloc.h"


class RemoteLoc : public AL::ALModule {
 public:
  RemoteLoc(boost::shared_ptr<AL::ALBroker> broker, const std::string& name);

  void virtual init();

 private:
  template <typename T=std::string>
  T SmallLog(const std::string text, size_t deep_level, bool is_reply=false) const;

 private:
  KernelCLoc kernel_;
};