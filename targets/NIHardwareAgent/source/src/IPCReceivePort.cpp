#include <ni/controller_editor/IPCReceivePort.hpp>
namespace NI::NHL2 {

void IPCReceivePort::stopReceiveLoop() {
long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 0x20);
  if ((*plVar1 != 0) && ((int)plVar1[6] == 1)) {
    LOCK();
    *(unsigned int *)(plVar1 + 6) = 0;
    UNLOCK();
    if (plVar1[1] != 0) {
      _CFRunLoopStop();
      plVar1[1] = 0;
    }
    lVar2 = // boost code
    if (lVar2 == 0) {
      // std code
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
    }
    if (lVar2 != 0) {
      _CFMessagePortInvalidate();
      return;
    }
  }
  return;
}

IPCReceivePort::~IPCReceivePort() {
~IPCReceivePort(this);
  delete(this);
  return;
}
}
