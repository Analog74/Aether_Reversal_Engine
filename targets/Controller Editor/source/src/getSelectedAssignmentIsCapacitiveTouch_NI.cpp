#include <ni/controller_editor/getSelectedAssignmentIsCapacitiveTouch_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void getSelectedAssignmentIsCapacitiveTouch(NI::AssignmentActionType) const {
bool bVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  
  uVar3 = (**(code **)(*(long *)this + 0x140))();
  lVar5 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar3 * 0x18);
  lVar4 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar3 * 0x18);
  if (lVar5 == lVar4) {
    bVar6 = false;
    uVar2 = 0;
  }
  else if(2 param_2, 2 param_2, (byte(param_2 - 1 < 2) {
    bVar1 = true;
    bVar6 = false;
    bVar8 = bVar6;
    if (param_2 == 2) {
      do {
        if ((*(uint *)(lVar5 + 0x60) | 4) == 4) {
          bVar7 = (*(uint *)(lVar5 + 0x60 + (unsigned long)param_2 * 0xa8) & 0xfffffffe) == 2;
        }
        else {
          bVar7 = false;
        }
        bVar6 = bVar7;
        if ((!bVar1) && (bVar6 = bVar8, bVar8 != bVar7)) return;
        lVar5 = lVar5 + 0x1f8;
        bVar1 = false;
        bVar8 = bVar6;
      } while (lVar4 != lVar5);
    }
    else {
      do {
        if (*(int *)(lVar5 + 0x60) == 0) {
          bVar8 = (*(uint *)(lVar5 + 0x60 + (unsigned long)param_2 * 0xa8) & 0xfffffffe) == 2;
        }
        else {
          bVar8 = false;
        }
        bVar7 = bVar8;
        if ((!bVar1) && (bVar7 = bVar6, bVar6 != bVar8)) return;
        bVar6 = bVar7;
        lVar5 = lVar5 + 0x1f8;
        bVar1 = false;
      } while (lVar4 != lVar5);
    }
    uVar2 = 0x100;
  }
  else {
    lVar4 = lVar4 - lVar5;
    do {
      lVar4 = lVar4 + -0x1f8;
    } while (lVar4 != 0);
    bVar6 = false;
    uVar2 = 0x100;
  }
  return uVar2 | bVar6;
  uVar2 = 0x200;
  return;
}
}
