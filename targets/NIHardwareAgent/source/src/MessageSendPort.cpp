#include <ni/controller_editor/MessageSendPort.hpp>
namespace NI::NHL2 {

MessageSendPort::~MessageSendPort() {
MessageSendPort *pMVar1;
  
  *(void ***)this = &PTR__IPCSendPort_1009e7758;
  pMVar1 = *(MessageSendPort **)(this + 0x50);
  if (this + 0x30 == pMVar1) {
    (**(code **)(*(long *)pMVar1 + 0x20))();
  }
  else if (pMVar1 != (MessageSendPort *)0x0) {
    (**(code **)(*(long *)pMVar1 + 0x28))();
  }
  IPCPort::~IPCPort((IPCPort *)this);
  delete(this);
  return;
}
}
