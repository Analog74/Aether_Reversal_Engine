#include <ni/controller_editor/EventTimerManagerMacosBridge.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void EventTimerManagerMacosBridge::deinstall() {
if (*(long *)(this + 0x10) != 0) {
    (*(code *)PTR__objc_msgSend_101ab46d8)(*(long *)(this + 0x10),"performSelector:","detach");
    (*(code *)PTR__objc_release_101ab46e0)(*(unsigned long long *)(this + 0x10));
    *(unsigned long long *)(this + 0x10) = 0;
  }
  return;
}

EventTimerManagerMacosBridge::~EventTimerManagerMacosBridge() {
AbstractEventTimerManagerOsBridge::~AbstractEventTimerManagerOsBridge
            ((AbstractEventTimerManagerOsBridge *)this);
  delete(this);
  return;
}
}
