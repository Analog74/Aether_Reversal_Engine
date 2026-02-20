#include <ni/controller_editor/setIDString_std.hpp>
namespace NI::NHL2::MsgDeviceConnect {

void setIDString(std::u16string const&) {
uint uVar1;
  uint uVar2;
  u16string *puVar3;
  
  this[0xf] = (MsgDeviceConnect)0x2;
  if (((byte)*param_1 & 1) == 0) {
    uVar1 = (uint)((byte)*param_1 >> 1);
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
  }
  uVar2 = 0x400;
  if (uVar1 + 1 < 0x400) {
    uVar2 = uVar1 + 1;
  }
  *(uint *)(this + 0x1c) = uVar2;
  if (((byte)*param_1 & 1) == 0) {
    puVar3 = param_1 + 2;
  }
  else {
    puVar3 = *(u16string **)(param_1 + 0x10);
  }
  memcpy(this + 0x20,puVar3,(unsigned long)(uVar2 * 2));
  *(uint *)this = uVar2 * 2 + 0x14;
  return;
}
}
