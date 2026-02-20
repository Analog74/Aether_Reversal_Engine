#include <ni/controller_editor/Selector.hpp>
namespace NI::NWL {

void Selector::getSpecifity() const {
uint uVar1;
  uint uVar2;
  uint uVar3;
  Selector *pSVar4;
  
  uVar2 = *(int *)(this + 0x28) * 0x10 + 0x1000000;
  if (*(long *)(this + 0x10) == emptyStdString) {
    uVar2 = *(int *)(this + 0x28) * 0x10;
  }
  uVar3 = uVar2 + 0x10000;
  if (*(long *)(this + 8) == emptyStdString) {
    uVar3 = uVar2;
  }
  uVar3 = *(long *)this != emptyStdString | uVar3;
  for (pSVar4 = *(Selector **)(this + 0x38); pSVar4 != this + 0x30;
      pSVar4 = *(Selector **)(pSVar4 + 8)) {
    uVar2 = *(int *)(pSVar4 + 0x38) * 0x10 + 0x1000000;
    if (*(long *)(pSVar4 + 0x20) == emptyStdString) {
      uVar2 = *(int *)(pSVar4 + 0x38) * 0x10;
    }
    uVar1 = uVar2 + 0x10000;
    if (*(long *)(pSVar4 + 0x18) == emptyStdString) {
      uVar1 = uVar2;
    }
    uVar3 = uVar3 + (*(long *)(pSVar4 + 0x10) != emptyStdString | uVar1);
  }
  return ((uint)(*(int *)(this + 0x60) != 2) +
         (uint)(*(int *)(this + 0x5c) != 2) +
         (uint)(*(int *)(this + 0x58) != 2) +
         (uint)(*(int *)(this + 0x54) != 2) +
         (uint)(*(int *)(this + 0x50) != 2) +
         (uint)(*(int *)(this + 0x4c) != 2) + (uint)(*(int *)(this + 0x48) != 2)) * 0x100 + uVar3;
}
}
