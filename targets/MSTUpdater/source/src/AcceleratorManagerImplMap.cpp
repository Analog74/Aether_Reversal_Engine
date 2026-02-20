#include <ni/controller_editor/AcceleratorManagerImplMap.hpp>
namespace NI::UIA {

void AcceleratorManagerImplMap::getCommand(unsigned int) {
unsigned int uVar1;
  AcceleratorManagerImplMap *pAVar2;
  AcceleratorManagerImplMap *pAVar3;
  AcceleratorManagerImplMap *pAVar4;
  AcceleratorManagerImplMap *pAVar5;
  AcceleratorManagerImplMap *pAVar6;
  
  pAVar2 = *(AcceleratorManagerImplMap **)(this + 0x10);
  uVar1 = 0;
  if (pAVar2 != (AcceleratorManagerImplMap *)0x0) {
    pAVar5 = this + 0x10;
    pAVar3 = pAVar2;
    pAVar6 = pAVar5;
    do {
      if (*(uint *)(pAVar3 + 0x1c) < param_1) {
        pAVar4 = *(AcceleratorManagerImplMap **)(pAVar3 + 8);
      }
      else {
        pAVar4 = *(AcceleratorManagerImplMap **)pAVar3;
        pAVar6 = pAVar3;
      }
      pAVar3 = pAVar4;
    } while (pAVar4 != (AcceleratorManagerImplMap *)0x0);
    if ((pAVar6 == pAVar5) || (param_1 < *(uint *)(pAVar6 + 0x1c))) {
      pAVar6 = pAVar5;
      do {
        if (*(uint *)(pAVar2 + 0x1c) < (param_1 & 0xff01ffff)) {
          pAVar3 = *(AcceleratorManagerImplMap **)(pAVar2 + 8);
        }
        else {
          pAVar3 = *(AcceleratorManagerImplMap **)pAVar2;
          pAVar6 = pAVar2;
        }
        pAVar2 = pAVar3;
      } while (pAVar3 != (AcceleratorManagerImplMap *)0x0);
      if (pAVar6 == pAVar5) {
        return 0;
      }
      if ((param_1 & 0xff01ffff) < *(uint *)(pAVar6 + 0x1c)) {
        return 0;
      }
    }
    uVar1 = 0;
    if (pAVar6 != pAVar5) {
      uVar1 = *(unsigned int *)(pAVar6 + 0x20);
    }
  }
  return uVar1;
}

void AcceleratorManagerImplMap::removeAll() {
// std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 8),*(__tree_node **)(this + 0x10));
  *(unsigned long long *)(this + 0x18) = 0;
  *(AcceleratorManagerImplMap **)(this + 8) = this + 0x10;
  *(unsigned long long *)(this + 0x10) = 0;
  return;
}

AcceleratorManagerImplMap::~AcceleratorManagerImplMap() {
*(void ***)this = &PTR__AcceleratorManagerImplMap_100229858;
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 8),*(__tree_node **)(this + 0x10));
  delete(this);
  return;
}
}
