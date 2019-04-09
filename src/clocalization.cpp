#pragma once
#include "clocalization.h"

CLocalization::CLocalization(boost::shared_ptr <AL::ALBroker> broker, const std::string &name) :
    ALModule(broker, name),
    kernel_(broker) {}