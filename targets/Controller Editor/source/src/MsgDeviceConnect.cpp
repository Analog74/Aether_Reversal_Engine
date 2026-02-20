#include <ni/controller_editor/MsgDeviceConnect.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2 {

void MsgDeviceConnect::getInPortName() const {
MsgDeviceConnect *pMVar1;
  
  pMVar1 = (MsgDeviceConnect *)"<null>";
  if (*(int *)(this + 0x18) != 0) {
    pMVar1 = this + 0x20;
  }
  return pMVar1;
}

void MsgDeviceConnect::getOutPortName() const {
if (*(int *)(this + 0x18) != 0) {
    return this + (unsigned long)*(uint *)(this + 0x1c) + 0x24;
  }
  return (MsgDeviceConnect *)"<null>";
}
}
