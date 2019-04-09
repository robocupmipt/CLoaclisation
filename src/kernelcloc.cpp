#pragma once
#include "kernelcloc.h"
#include <thread>

KernelCLoc::KernelCLoc(boost::shared_ptr <AL::ALBroker> broker_) :
    message_for_vision_(FROM_LOCALIZATION_TO_VISION, FROM_VISION_TO_LOCALIZATION),
    message_for_strategy_(FROM_LOCALIZATION_TO_STRATEGY, FROM_STRATEGY_TO_LOCALIZATION) {}

void KernelCLoc::StartModule(){
  std::thread receive([&]() {
    ReceiveLoop();
  });

  //receive.detach();
}

void KernelCLoc::ReceiveLoop() {
  std::cout << "start receive loop\n";

  while(true) {
    MessageType<ReceiveFromVision> income_message = message_for_vision_.ReceiveMessage();
    income_message.data.Print();
  }
}
