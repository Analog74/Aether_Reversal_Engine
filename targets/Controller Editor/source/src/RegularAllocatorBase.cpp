#include <ni/controller_editor/RegularAllocatorBase.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::DETAIL {

void RegularAllocatorBase::allocate(unsigned long) {
long *plVar1;
  long lVar2;
  long lVar3;
  bad_alloc *this;
  long lVar4;
  long *plVar5;
  unsigned long uVar6;
  long *plVar7;
  
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 == 0) {
    lVar3 = allocNewPacket((RegularAllocatorBase *)param_1);
    if (lVar3 == 0) {
      this = (bad_alloc *)___cxa_allocate_exception(8);
      // std code
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(this,PTR_typeinfo_101ab4330,PTR__bad_alloc_101ab4138);
    }
    lVar3 = *(long *)(param_1 + 0x60);
  }
  lVar4 = lVar3 + -0x10;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  plVar1 = *(long **)(lVar4 + 0x20);
  *(long *)(lVar4 + 0x20) = *plVar1;
  lVar2 = *(long *)(param_1 + 0x40);
  *plVar1 = lVar4;
  uVar6 = *(long *)(lVar4 + 0x28) + 1;
  *(unsigned long *)(lVar4 + 0x28) = uVar6;
  if (*(unsigned long *)(lVar4 + 0x30) <= uVar6) {
    plVar5 = (long *)(lVar4 + 0x10);
    if (lVar3 == 0) {
      plVar5 = (long *)0x0;
    }
    lVar3 = *plVar5;
    plVar7 = (long *)plVar5[1];
    if (lVar3 == 0) {
      *(long **)(param_1 + 0x60) = plVar7;
    }
    else {
      *(long **)(lVar3 + 8) = plVar7;
      plVar7 = (long *)plVar5[1];
    }
    plVar5 = (long *)(param_1 + 0x68);
    if (plVar7 != (long *)0x0) {
      plVar5 = plVar7;
    }
    *plVar5 = lVar3;
  }
  return (long)plVar1 + lVar2;
}

void RegularAllocatorBase::allocNewPacket() {
long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  unsigned long *puVar5;
  unsigned long uVar6;
  unsigned long *puVar7;
  long lVar8;
  RegularAllocatorBase *pRVar9;
  unsigned long uVar10;
  unsigned long *puVar11;
  long *plVar12;
  unsigned long uVar13;
  
  if (((*(uint *)(this + 0x48) & 1) == 0) || (*(long *)(this + 0x50) == 0)) {
    uVar6 = *(unsigned long *)(this + 0x18);
    lVar2 = *(long *)(this + 0x38);
    lVar8 = *(long *)(this + 0x10) * uVar6 + 0x18;
    if ((*(uint *)(this + 0x48) & 4) == 0) {
      lVar8 = *(long *)(this + 0x10) * uVar6;
    }
    plVar3 = (long *)(*(code *)**(unsigned long long **)this)(this,lVar8 + lVar2);
    if (plVar3 != (long *)0x0) {
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[6] = uVar6;
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + lVar8 + lVar2;
      lVar2 = *(long *)(this + 0x58);
      *plVar3 = lVar2;
      plVar3[1] = 0;
      pRVar9 = (RegularAllocatorBase *)(lVar2 + 8);
      if (lVar2 == 0) {
        pRVar9 = this + 0x50;
      }
      *(long **)pRVar9 = plVar3;
      *(long **)(this + 0x58) = plVar3;
      lVar2 = *(long *)(this + 0x68);
      plVar3[2] = lVar2;
      plVar3[3] = 0;
      pRVar9 = (RegularAllocatorBase *)(lVar2 + 8);
      if (lVar2 == 0) {
        pRVar9 = this + 0x60;
      }
      *(long **)pRVar9 = plVar3 + 2;
      *(long **)(this + 0x68) = plVar3 + 2;
      plVar12 = (long *)(*(long *)(this + 0x38) + (long)plVar3);
      if ((((byte)this[0x48] & 4) != 0) && (((unsigned long)plVar12 & 0x1f) != 0)) {
        plVar12 = (long *)((long)plVar12 + (0x20 - ((unsigned long)plVar12 & 0x1f)));
      }
      if (uVar6 == 0) {
        puVar5 = (unsigned long *)0x0;
      }
      else {
        lVar2 = *(long *)(this + 0x10);
        puVar5 = (unsigned long *)(uVar6 - 1);
        uVar13 = (unsigned long)((uint)uVar6 & 7);
        if (puVar5 < (unsigned long *)0x7) {
          uVar10 = 0;
          puVar7 = (unsigned long *)0x0;
        }
        else {
          uVar10 = 0;
          lVar8 = 0;
          plVar4 = plVar12;
          do {
            *plVar4 = lVar8;
            lVar8 = (long)plVar4 + lVar2;
            *(long **)((long)plVar4 + lVar2) = plVar4;
            lVar1 = lVar8 + lVar2;
            *(long *)(lVar2 + lVar8) = lVar8;
            lVar8 = lVar1 + lVar2;
            *(long *)(lVar2 + lVar1) = lVar1;
            lVar1 = lVar8 + lVar2;
            *(long *)(lVar2 + lVar8) = lVar8;
            lVar8 = lVar1 + lVar2;
            *(long *)(lVar2 + lVar1) = lVar1;
            lVar1 = lVar8 + lVar2;
            *(long *)(lVar2 + lVar8) = lVar8;
            lVar8 = lVar1 + lVar2;
            *(long *)(lVar2 + lVar1) = lVar1;
            uVar10 = uVar10 + 8;
            plVar4 = plVar4 + lVar2;
          } while ((uVar6 & 0xfffffffffffffff8) != uVar10);
          puVar5 = (unsigned long *)((long)plVar4 - lVar2);
          puVar7 = puVar5;
        }
        if (uVar13 != 0) {
          puVar5 = (unsigned long *)((uVar10 - 1) * lVar2 + (long)plVar12);
          puVar11 = (unsigned long *)(uVar10 * lVar2 + (long)plVar12);
          do {
            *puVar11 = (unsigned long)puVar7;
            puVar5 = (unsigned long *)((long)puVar5 + lVar2);
            uVar13 = uVar13 - 1;
            puVar7 = puVar11;
            puVar11 = (unsigned long *)((long)puVar11 + lVar2);
          } while (uVar13 != 0);
        }
      }
      plVar3[4] = (long)puVar5;
      if (uVar6 < *(unsigned long *)(this + 0x20)) {
        uVar6 = *(unsigned long *)(this + 0x20);
      }
      *(unsigned long *)(this + 0x20) = uVar6;
      if (*(unsigned long *)(this + 0x18) < uVar6) {
        return plVar3;
      }
      uVar6 = *(unsigned long *)(this + 0x18) * 2;
      if (*(unsigned long *)(this + 0x28) < uVar6) {
        uVar6 = *(unsigned long *)(this + 0x28);
      }
      *(unsigned long *)(this + 0x18) = uVar6;
      return plVar3;
    }
  }
  return (long *)0x0;
}

void RegularAllocatorBase::deallocate(void* param_1) {
}

RegularAllocatorBase::~RegularAllocatorBase() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
