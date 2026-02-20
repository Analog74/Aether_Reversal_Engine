#include <ni/controller_editor/getSelectedAssignmentLEDColorMode_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void getSelectedAssignmentLEDColorMode(NI::AssignmentActionType) const {
long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  unsigned long uVar5;
  bool bVar6;
  
  uVar2 = (**(code **)(*(long *)this + 0x140))();
  lVar4 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar2 * 0x18);
  lVar1 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar2 * 0x18);
  if (lVar4 == lVar1) {
    uVar2 = 0;
    uVar5 = 0;
  }
  else {
    bVar6 = true;
    uVar5 = 0x200000000;
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(**(long **)(lVar4 + 0x18 + (param_2 & 0xff) * 0xa8) + 0xc);
      if (3 < uVar3) {
        uVar3 = 0;
      }
      if ((!bVar6) && (bVar6 = uVar2 != uVar3, uVar3 = uVar2, bVar6)) return;
      lVar4 = lVar4 + 0x1f8;
      bVar6 = false;
      uVar2 = uVar3;
    } while (lVar1 != lVar4);
    uVar5 = 0x100000000;
  }
  return uVar2 | uVar5;
}
}
