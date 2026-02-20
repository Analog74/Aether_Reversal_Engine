#include <ni/controller_editor/getSelectedAssignmentLEDControlType_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void getSelectedAssignmentLEDControlType(NI::AssignmentActionType) const {
uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  unsigned long uVar10;
  unsigned long uVar11;
  bool bVar12;
  
  uVar6 = (**(code **)(*(long *)this + 0x140))();
  lVar4 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar6 * 0x18);
  lVar7 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar6 * 0x18);
  if (lVar4 == lVar7) {
    uVar11 = 0;
    uVar10 = 0;
  }
  else {
    uVar10 = 0x200000000;
    lVar7 = lVar7 - lVar4;
    piVar9 = (int *)((param_2 & 0xff) * 0xa8 + lVar4);
    uVar6 = 0;
    bVar5 = true;
    do {
      uVar11 = (unsigned long)uVar6;
      uVar1 = piVar9[0x18];
      if ((uVar1 < 2) && (*(short *)((long)piVar9 + 0x16) == 3)) {
        uVar1 = 2;
        if (!bVar5 && uVar6 != 2) return;
      }
      else {
        if (((uVar1 & 0xfffffffe) == 2) || (uVar2 = piVar9[0x1c], (uVar2 & 0x21) == 0x21)) {
          piVar8 = piVar9 + 2;
          if ((uVar1 & 0xfffffffe) == 2) {
            piVar8 = piVar9;
          }
          bVar12 = true;
          if ((*piVar8 != 0) && (*piVar8 != 3)) {
            iVar3 = piVar9[3];
            bVar12 = iVar3 != 0;
          }
        }
        else if (uVar1 == 5) {
          bVar12 = true;
          if ((piVar9[2] != 0) && (piVar9[2] != 3)) {
            iVar3 = piVar9[5];
            return;
          }
        }
        else if ((uVar1 == 0) && (((uVar2 & 8) != 0 || (((uVar2 & 2) != 0 && (piVar9[1] == 1)))))) {
          bVar12 = (bool)(*(byte *)(piVar9 + 5) & 1);
        }
        else {
          bVar12 = uVar1 == 6;
        }
        uVar1 = (uint)bVar12;
        if ((!bVar5) && (uVar1 = uVar6, uVar6 != bVar12)) return;
      }
      uVar6 = uVar1;
      piVar9 = piVar9 + 0x7e;
      bVar5 = false;
      lVar7 = lVar7 + -0x1f8;
    } while (lVar7 != 0);
    uVar11 = (unsigned long)uVar6;
    uVar10 = 0x100000000;
  }
  return uVar11 | uVar10;
}
}
