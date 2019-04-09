#pragma once
#include "kernelcloc.h"

class CLocalization: public AL::ALModule {
 public:
  CLocalization(boost::shared_ptr<AL::ALBroker> broker, const std::string& name);

 private:
  KernelCLoc kernel_;
};
