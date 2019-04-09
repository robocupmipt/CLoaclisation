#pragma once
#ifndef _WIN32
# include <signal.h>
#endif

#include <alcommon/albroker.h>
#include <alcommon/albrokermanager.h>
#include <alcommon/altoolsmain.h>

#ifdef CLOCALIZATION_IS_REMOTE
# include "remoteloc.h"
#else
# include "clocalization.h"
#endif


extern "C"
{
int _createModule(boost::shared_ptr<AL::ALBroker> pBroker)
{
  // init broker with the main broker instance
  // from the parent executable
  AL::ALBrokerManager::setInstance(pBroker->fBrokerManager.lock());
  AL::ALBrokerManager::getInstance()->addBroker(pBroker);
  // create module instances
#ifdef CLOCALIZATION_IS_REMOTE
  AL::ALModule::createModule<RemoteLoc>(pBroker, "RemoteLoc");
#else
  AL::ALModule::createModule<CLocalization>(pBroker, "CLocalization");
#endif
  return 0;
}

int _closeModule(  )
{
  return 0;
}
} // extern "C"


#ifdef CLOCALIZATION_IS_REMOTE
int main(int argc, char *argv[])
  {
    // pointer to createModule
    TMainType sig;
    sig = &_createModule;
    // call main
    return ALTools::mainFunction("RemoteLoc", argc, argv, sig);
  }
#endif