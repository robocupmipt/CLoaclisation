#pragma once
#include "kernelcloc.h"


KernelCLoc::KernelCLoc(boost::shared_ptr <AL::ALBroker> broker_) :
    message_for_vision_(FROM_LOCALIZATION_TO_VISION, FROM_VISION_TO_LOCALIZATION), message_for_strategy_(FROM_LOCALIZATION_TO_STRATEGY, FROM_STRATEGY_TO_LOCALIZATION) {}

void KernelCLoc::StartModule()
{
  std::thread receive([&](){
  ReceiveLoop();
  });

  receive.detach();
}

void KernelCLoc::ReceiveLoop()
{
  std::cout << "start receive loop\n";

  while(1)
  {
    MessageType<ReceiveFromVision> buf_for_vision = message_for_vision_.ReceiveMessage();

    // Example of using
    buf.data.Print();

    message::SendToStrategy buf_for_strategy;
    buf_for_strategy.Write(15, 20);
    message_for_strategy_.SendMessage(buf_for_strategy);
  }
}
