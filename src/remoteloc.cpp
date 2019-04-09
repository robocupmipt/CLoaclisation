#pragma once
#include "remoteloc.h"


RemoteLoc::RemoteLoc(boost::shared_ptr <AL::ALBroker> broker, const std::string &name) :
    AL::ALModule(broker, name),
    kernel_(broker) {}

void RemoteLoc::init() {
  while (true) {
    std::string command(SmallLog("ENTER command", 1, true));
  }
}


/*------- PRIVAT SPACE ---------*/


template <typename T>
T RemoteLoc::SmallLog(const std::string text, size_t deep_level, bool is_reply) const {
  std::string request = "";
  for (size_t i = 0; i < deep_level; ++i) {
    request += "--";
  }

  std::cout << request + "> " + text << std::endl;
  if (is_reply) {
    T ans;
    std::cout << request + "| ";
    std::cin >> ans;
    return ans;
  }
  return T();
}