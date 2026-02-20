#include <ni/controller_editor/MsgDisplayDraw.hpp>
namespace NI::NHL2 {

void MsgDisplayDraw::getUpdateRect() const {
uint uVar1;
  unsigned char auVar2 [16];
  
  uVar1 = *(uint *)(this + 0x14);
  auVar2._8_8_ = (unsigned long)((uVar1 & 0xffff) + (*(uint *)(this + 0x18) & 0xffff)) << 0x20 |
                 (unsigned long)(*(uint *)(this + 0x18) >> 0x10) + (unsigned long)(uVar1 >> 0x10);
  auVar2._0_8_ = CONCAT44(uVar1,uVar1 >> 0x10) & 0xffffffffffff;
  return auVar2;
}

void MsgDisplayDraw::setResult(bool param_1) {
}
}
