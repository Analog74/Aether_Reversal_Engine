#include <ni/controller_editor/EventTimerManager.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

EventTimerManager::EventTimerManager() [clone .cold.1] {
long lVar1;
  EventTimerManager *pEVar2;
  long *in_RDX;
  EventTimerSubscription *in_RSI;
  
  do {
    lVar1 = *(long *)in_RSI;
    pEVar2 = *(EventTimerManager **)(in_RSI + 8);
    if (lVar1 == 0) {
      *in_RDX = (long)pEVar2;
    }
    else {
      *(EventTimerManager **)(lVar1 + 8) = pEVar2;
      pEVar2 = *(EventTimerManager **)(in_RSI + 8);
    }
    if (pEVar2 == (EventTimerManager *)0x0) {
      pEVar2 = this + 0x20;
    }
    *(long *)pEVar2 = lVar1;
    DETAIL::EventTimerSubscription::~EventTimerSubscription(in_RSI);
    delete(in_RSI);
    in_RSI = (EventTimerSubscription *)*in_RDX;
  } while (in_RSI != (EventTimerSubscription *)0x0);
  
}

void EventTimerManager::getMasterTimerTimeout() const {
return *(unsigned int *)(this + 8);
}

void EventTimerManager::setMasterTimerTimeout(unsigned int) {
if ((param_1 != 0) && (*(long *)(this + 0x18) == 0)) {
    *(uint *)(this + 8) = param_1;
  }
  return;
}

EventTimerManager::~EventTimerManager() {
~EventTimerManager(this);
  return;
}
}
