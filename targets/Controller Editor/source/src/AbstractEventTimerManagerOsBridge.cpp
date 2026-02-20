#include <ni/controller_editor/AbstractEventTimerManagerOsBridge.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void AbstractEventTimerManagerOsBridge::notifySubscribers() {
EventTimerManager::notifySubscribers(*(EventTimerManager **)(this + 8));
  return;
}

AbstractEventTimerManagerOsBridge::~AbstractEventTimerManagerOsBridge() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
