#include <ni/controller_editor/IPCSendPort.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2 {

IPCSendPort::~IPCSendPort() {
IPCSendPort *pIVar1;
  
  *(void ***)this = &PTR__IPCSendPort_101b0e338;
  pIVar1 = *(IPCSendPort **)(this + 0x50);
  if (this + 0x30 == pIVar1) {
    (**(code **)(*(long *)pIVar1 + 0x20))();
  }
  else if (pIVar1 != (IPCSendPort *)0x0) {
    (**(code **)(*(long *)pIVar1 + 0x28))();
  }
  IPCPort::~IPCPort((IPCPort *)this);
  delete(this);
  return;
}
}
