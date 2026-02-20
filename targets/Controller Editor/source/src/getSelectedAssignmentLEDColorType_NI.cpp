#include <ni/controller_editor/getSelectedAssignmentLEDColorType_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void getSelectedAssignmentLEDColorType(NI::AssignmentActionType) const {
long lVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  Assignment *this_00;
  long lVar7;
  unsigned long uVar8;
  
  uVar6 = (**(code **)(*(long *)this + 0x140))();
  lVar1 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar6 * 0x18);
  lVar7 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar6 * 0x18);
  if (lVar1 == lVar7) {
    uVar6 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = 0x200000000;
    lVar7 = lVar7 - lVar1;
    this_00 = (Assignment *)((unsigned long)(param_2 & 0xff) * 0xa8 + lVar1);
    uVar6 = 0;
    bVar3 = true;
    do {
      if ((((*(unsigned long long **)(this_00 + 0x20) == *(unsigned long long **)(this_00 + 0x18)) ||
           (piVar2 = (int *)**(unsigned long long **)(this_00 + 0x18), piVar2[0x18] != 7)) || (*piVar2 != 0)
          ) || (piVar2[2] != 1)) {
        if ((*(int *)(this_00 + 0x60) == 0) && (((byte)this_00[0x70] & 8) != 0)) {
          uVar4 = 1;
          if (!bVar3 && uVar6 != 1) return;
        }
        else {
          cVar5 = NHL2::Assignment::hasLEDSettings(this_00);
          if (cVar5 == '\0') return;
          uVar4 = 0;
          if ((bool)(~bVar3 & uVar6 != 0)) return;
        }
      }
      else {
        uVar4 = 2;
        if (!bVar3 && uVar6 != 2) return;
      }
      uVar6 = uVar4;
      this_00 = this_00 + 0x1f8;
      bVar3 = false;
      lVar7 = lVar7 + -0x1f8;
    } while (lVar7 != 0);
    uVar8 = 0x100000000;
  }
  return uVar6 | uVar8;
}
}
