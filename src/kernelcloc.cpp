#pragma once
#include "kernelcloc.h"


KernelCLoc::KernelCLoc(boost::shared_ptr <AL::ALBroker> broker_) :
    message_(FROM_LOCALIZATION_TO_VISION, FROM_VISION_TO_LOCALIZATION) {}

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
    MessageType<Receive> buf = ReceiveMessage();

    // Example of using
    buf.data.Print();
  }
}
