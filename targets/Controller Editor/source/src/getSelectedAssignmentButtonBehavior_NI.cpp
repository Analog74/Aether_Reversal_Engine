#include <ni/controller_editor/getSelectedAssignmentButtonBehavior_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void getSelectedAssignmentButtonBehavior(NI::AssignmentActionType) const {
long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  unsigned long uVar7;
  bool bVar8;
  
  uVar2 = (**(code **)(*(long *)this + 0x140))();
  lVar1 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar2 * 0x18);
  lVar4 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar2 * 0x18);
  if (lVar1 == lVar4) {
    uVar2 = 0;
    uVar7 = 0;
  }
  else {
    lVar4 = lVar4 - lVar1;
    puVar6 = (uint *)((param_2 & 0xff) * 0xa8 + lVar1);
    bVar8 = true;
    uVar7 = 0x200000000;
    uVar2 = 0;
    do {
      puVar5 = puVar6 + 2;
      if ((puVar6[0x18] & 0xfffffffe) == 2) {
        puVar5 = puVar6;
      }
      uVar3 = *puVar5;
      if ((!bVar8) && (bVar8 = uVar2 != uVar3, uVar3 = uVar2, bVar8)) return;
      puVar6 = puVar6 + 0x7e;
      bVar8 = false;
      lVar4 = lVar4 + -0x1f8;
      uVar2 = uVar3;
    } while (lVar4 != 0);
    uVar7 = 0x100000000;
  }
  return uVar2 | uVar7;
}
}
