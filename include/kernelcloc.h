#pragma once
#include "config.h"
#include <boost/shared_ptr.hpp>
#include <alcommon/albroker.h>

class KernelCLoc {
 public:
  KernelCLoc(boost::shared_ptr <AL::ALBroker> broker_);

 private:
  GameState game_;
};
