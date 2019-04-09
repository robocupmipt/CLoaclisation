#pragma once
#include "config.h"
#include <boost/shared_ptr.hpp>
#include <alcommon/albroker.h>

#include"Channels.h"
#include"Custom.h"
#include"Message.h"

using namespace message;

class KernelCLoc {
 public:
  KernelCLoc(boost::shared_ptr <AL::ALBroker> broker_);

  void StartModule()
  void ReceiveLoop();


 private:
  GameState game_;
  Message<MessageType<SendToStrategy>, MessageType<ReceiveFromStrategy>> message_for_strategy_;
  Message<MessageType<SendToVision>, MessageType<ReceiveFromVision>> message_for_vision_;
};
