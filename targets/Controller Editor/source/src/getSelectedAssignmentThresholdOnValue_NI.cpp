#include <ni/controller_editor/getSelectedAssignmentThresholdOnValue_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void getSelectedAssignmentThresholdOnValue(NI::AssignmentActionType) const {
long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  unsigned long uVar5;
  bool bVar6;
  
  uVar2 = (**(code **)(*(long *)this + 0x140))();
  lVar3 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar2 * 0x18);
  lVar1 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar2 * 0x18);
  if (lVar3 == lVar1) {
    uVar2 = 0;
    uVar5 = 0;
  }
  else {
    bVar6 = true;
    uVar5 = 0x200000000;
    uVar2 = 0;
    do {
      uVar4 = (uint)(*(float *)(lVar3 + (param_2 & 0xff) * 0xa8) * 100.0);
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (99 < (int)uVar4) {
        uVar4 = 100;
      }
      if ((!bVar6) && (bVar6 = uVar2 != uVar4, uVar4 = uVar2, bVar6)) return;
      lVar3 = lVar3 + 0x1f8;
      bVar6 = false;
      uVar2 = uVar4;
    } while (lVar1 != lVar3);
    uVar5 = 0x100000000;
  }
  return uVar2 | uVar5;
}
}
