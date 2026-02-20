#include <ni/controller_editor/AcceleratorManagerImplMap.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void AcceleratorManagerImplMap::getCommand(unsigned int) {
unsigned int uVar1;
  AcceleratorManagerImplMap *pAVar2;
  uint uVar3;
  AcceleratorManagerImplMap *pAVar4;
  AcceleratorManagerImplMap *pAVar5;
  AcceleratorManagerImplMap *pAVar6;
  
  pAVar5 = *(AcceleratorManagerImplMap **)(this + 0x10);
  uVar1 = 0;
  if (pAVar5 != (AcceleratorManagerImplMap *)0x0) {
    pAVar4 = this + 0x10;
    pAVar2 = pAVar5;
    pAVar6 = pAVar4;
    do {
      if (*(uint *)(pAVar2 + 0x1c) >= param_1) {
        pAVar6 = pAVar2;
      }
      pAVar2 = *(AcceleratorManagerImplMap **)
                (pAVar2 + (unsigned long)(*(uint *)(pAVar2 + 0x1c) < param_1) * 8);
    } while (pAVar2 != (AcceleratorManagerImplMap *)0x0);
    if ((pAVar6 == pAVar4) || (param_1 < *(uint *)(pAVar6 + 0x1c))) {
      uVar3 = param_1 & 0xff01ffff;
      pAVar6 = pAVar4;
      do {
        if (*(uint *)(pAVar5 + 0x1c) >= uVar3) {
          pAVar6 = pAVar5;
        }
        pAVar5 = *(AcceleratorManagerImplMap **)
                  (pAVar5 + (unsigned long)(*(uint *)(pAVar5 + 0x1c) < uVar3) * 8);
      } while (pAVar5 != (AcceleratorManagerImplMap *)0x0);
      if (pAVar6 == pAVar4) {
        return 0;
      }
      if (uVar3 < *(uint *)(pAVar6 + 0x1c)) {
        return 0;
      }
    }
    uVar1 = 0;
    if (pAVar6 != pAVar4) {
      uVar1 = *(unsigned int *)(pAVar6 + 0x20);
    }
  }
  return uVar1;
}

AcceleratorManagerImplMap::~AcceleratorManagerImplMap() {
*(void ***)this = &PTR__AcceleratorManagerImplMap_101b23540;
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 8),*(__tree_node **)(this + 0x10));
  delete(this);
  return;
}
}
