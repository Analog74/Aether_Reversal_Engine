#include <ni/controller_editor/getButtonReactionForSelectedAssignment_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void getButtonReactionForSelectedAssignment(NI::AssignmentActionType) const {
long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  unsigned long uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar3 = (**(code **)(*(long *)this + 0x140))();
  lVar4 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar3 * 0x18);
  lVar2 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar3 * 0x18);
  if (lVar4 == lVar2) {
    uVar3 = 0;
    uVar6 = 0;
  }
  else {
    lVar5 = (param_2 & 0xff) * 0xa8;
    bVar8 = true;
    uVar6 = 0x200000000;
    uVar3 = 0;
    do {
      lVar1 = lVar5 + 0xc;
      if ((*(uint *)(lVar4 + 0x60 + lVar5) & 0xfffffffe) == 2) {
        lVar1 = lVar5 + 4;
      }
      uVar7 = *(uint *)(lVar4 + lVar1);
      if ((!bVar8) && (bVar8 = uVar3 != uVar7, uVar7 = uVar3, bVar8)) return;
      lVar4 = lVar4 + 0x1f8;
      bVar8 = false;
      uVar3 = uVar7;
    } while (lVar2 != lVar4);
    uVar6 = 0x100000000;
  }
  return uVar3 | uVar6;
}
}
