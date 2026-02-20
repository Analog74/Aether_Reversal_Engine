#include <ni/controller_editor/ST7529.hpp>
namespace NI::NHL2::Display {

void ST7529::getContrast() const {
return *(unsigned int *)(this + 0x14);
}

void ST7529::initialize(bool param_1) {
}

void ST7529::setInverted(bool param_1) {
}

void ST7529::setRevision(unsigned short) {
int iVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long local_28 [3];
  
  *(ushort *)(this + 2) = param_1;
  if (param_1 < 2) {
    local_28[0] = _lroundf(*(float *)(this + 0x14) * 70.0);
    local_28[1] = 0;
    local_28[2] = 0x46;
    plVar4 = local_28;
    if (0x46 < local_28[0]) {
      plVar4 = local_28 + 2;
    }
    plVar2 = local_28 + 1;
    if (-1 < local_28[0]) {
      plVar2 = plVar4;
    }
    iVar1 = (int)*plVar2;
    iVar3 = 0xe6;
  }
  else {
    local_28[0] = _lroundf(*(float *)(this + 0x14) * 50.0);
    local_28[1] = 0;
    local_28[2] = 0x32;
    plVar4 = local_28;
    if (0x32 < local_28[0]) {
      plVar4 = local_28 + 2;
    }
    plVar2 = local_28 + 1;
    if (-1 < local_28[0]) {
      plVar2 = plVar4;
    }
    iVar1 = (int)*plVar2;
    iVar3 = 0x8c;
  }
  *(int *)(this + 0x10) = iVar1 + iVar3;
  return;
}

ST7529::ST7529() {
*this = (ST7529)0x0;
  *(void2 *)(this + 2) = 2;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0x3f000000000000af;
  this[0x18] = (ST7529)0x0;
  *(unsigned long long *)(this + 0x1c) = 0;
  *(unsigned int *)(this + 0x24) = 1;
  
}
}
