#include <ni/controller_editor/EventTimerManagerMacosBridge.hpp>
namespace NI::UIA {

void EventTimerManagerMacosBridge::deinstall() {
void *puVar1;
  
  puVar1 = PTR__objc_msgSend_100227360;
  if (*(long *)(this + 0x10) != 0) {
    (*(code *)PTR__objc_msgSend_100227360)(*(long *)(this + 0x10),"performSelector:","detach");
    (*(code *)puVar1)(*(unsigned long long *)(this + 0x10),"release");
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
