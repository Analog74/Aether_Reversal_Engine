#include <ni/controller_editor/RegularAllocatorBase.hpp>
namespace NI::GP::DETAIL {

void RegularAllocatorBase::allocNewPacket() {
long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  unsigned long *puVar5;
  unsigned long uVar6;
  long lVar7;
  unsigned long uVar8;
  unsigned long uVar9;
  unsigned long *puVar10;
  unsigned long *puVar11;
  unsigned long *puVar12;
  
  if (((*(uint *)(this + 0x48) & 1) == 0) || (*(long *)(this + 0x50) == 0)) {
    uVar6 = *(unsigned long *)(this + 0x18);
    lVar2 = *(long *)(this + 0x38);
    lVar7 = *(long *)(this + 0x10) * uVar6 + 0x18;
    if ((*(uint *)(this + 0x48) & 4) == 0) {
      lVar7 = *(long *)(this + 0x10) * uVar6;
    }
    plVar3 = (long *)(*(code *)**(unsigned long long **)this)(this,lVar7 + lVar2);
    if (plVar3 != (long *)0x0) {
      plVar3[5] = 0;
      plVar3[4] = 0;
      plVar3[6] = uVar6;
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + lVar7 + lVar2;
      lVar2 = *(long *)(this + 0x58);
      *plVar3 = lVar2;
      plVar3[1] = 0;
      if (lVar2 == 0) {
        *(long **)(this + 0x50) = plVar3;
      }
      else {
        *(long **)(lVar2 + 8) = plVar3;
      }
      *(long **)(this + 0x58) = plVar3;
      plVar4 = plVar3 + 2;
      lVar2 = *(long *)(this + 0x68);
      plVar3[2] = lVar2;
      plVar3[3] = 0;
      if (lVar2 == 0) {
        *(long **)(this + 0x60) = plVar4;
      }
      else {
        *(long **)(lVar2 + 8) = plVar4;
      }
      *(long **)(this + 0x68) = plVar4;
      puVar5 = (unsigned long *)(*(long *)(this + 0x38) + (long)plVar3);
      if ((((byte)this[0x48] & 4) != 0) && (((unsigned long)puVar5 & 0x1f) != 0)) {
        puVar5 = (unsigned long *)((long)puVar5 + (0x20 - ((unsigned long)puVar5 & 0x1f)));
      }
      if (uVar6 == 0) {
        puVar12 = (unsigned long *)0x0;
      }
      else {
        lVar2 = *(long *)(this + 0x10);
        uVar8 = 0;
        uVar9 = 0;
        if ((uVar6 & 7) != 0) {
          uVar8 = 0;
          puVar12 = (unsigned long *)0x0;
          puVar10 = puVar5;
          do {
            *puVar10 = (unsigned long)puVar12;
            uVar8 = uVar8 + 1;
            puVar11 = (unsigned long *)((long)puVar10 + lVar2);
            puVar12 = puVar10;
            puVar10 = puVar11;
          } while ((uVar6 & 7) != uVar8);
          uVar9 = (long)puVar11 - lVar2;
        }
        puVar12 = (unsigned long *)(lVar2 * (uVar6 - 1) + (long)puVar5);
        if (6 < uVar6 - 1) {
          lVar7 = uVar6 - uVar8;
          puVar5 = (unsigned long *)((long)puVar5 + uVar8 * lVar2);
          do {
            *puVar5 = uVar9;
            lVar1 = (long)puVar5 + lVar2;
            *(unsigned long **)((long)puVar5 + lVar2) = puVar5;
            *(long *)(lVar2 + lVar1) = lVar1;
            lVar1 = lVar1 + lVar2;
            *(long *)(lVar2 + lVar1) = lVar1;
            lVar1 = lVar1 + lVar2;
            *(long *)(lVar2 + lVar1) = lVar1;
            lVar1 = lVar1 + lVar2;
            *(long *)(lVar2 + lVar1) = lVar1;
            lVar1 = lVar1 + lVar2;
            *(long *)(lVar2 + lVar1) = lVar1;
            lVar1 = lVar1 + lVar2;
            *(long *)(lVar2 + lVar1) = lVar1;
            uVar9 = lVar1 + lVar2;
            puVar5 = puVar5 + lVar2;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      plVar3[4] = (long)puVar12;
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

RegularAllocatorBase::~RegularAllocatorBase() {
delete(this);
  return;
}
}
