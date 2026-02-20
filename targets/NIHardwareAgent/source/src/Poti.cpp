#include <ni/controller_editor/Poti.hpp>
namespace NI::NHL2::SERVER::Poti::setProperties(NI::NHL2::SERVER {

void Poti::Properties const&) {
unsigned long long uVar1;
  uint uVar2;
  int iVar3;
  unsigned long uVar4;
  
  uVar1 = *(unsigned long long *)param_1;
  *(unsigned long long *)(this + 9) = *(unsigned long long *)(param_1 + 5);
  *(unsigned long long *)(this + 4) = uVar1;
  *(unsigned long long *)(this + 0x34) = 0x3f0000000fffffff;
  this[0x3c] = (Poti)0x0;
  uVar4 = 1;
  if (*(uint *)(this + 0xc) != 0) {
    uVar4 = (unsigned long)*(uint *)(this + 0xc);
  }
  uVar2 = (uint)uVar1;
  iVar3 = uVar2 - (int)uVar4;
  uVar4 = uVar4 | (unsigned long)(uVar2 & 0xfffffffe) << 0x1f;
  *(unsigned long *)(this + 0x20) = uVar4;
  *(int *)(this + 0x28) = iVar3;
  *(int *)(this + 0x1c) = iVar3;
  *(unsigned long *)(this + 0x14) = uVar4;
  *(unsigned long long *)(this + 0x2c) = 0xfffffff00000000;
  return;
}
}
