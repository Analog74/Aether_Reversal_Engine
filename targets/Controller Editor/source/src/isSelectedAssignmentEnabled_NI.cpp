#include <ni/controller_editor/isSelectedAssignmentEnabled_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IAssignmentSupport {

void isSelectedAssignmentEnabled(NI::AssignmentActionType) const {
long lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  ushort uVar6;
  long lVar7;
  bool bVar8;
  
  plVar5 = (long *)(**(code **)(*(long *)this + 0xe0))();
  uVar4 = (**(code **)(*plVar5 + 0x148))(plVar5);
  lVar7 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar4 * 0x18);
  lVar1 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar4 * 0x18);
  if (lVar7 == lVar1) {
    bVar2 = 0;
    uVar6 = 0;
  }
  else {
    bVar8 = true;
    bVar3 = 0;
    do {
      bVar2 = *(byte *)(lVar7 + 0xa2 + (param_2 & 0xff) * 0xa8);
      if ((!bVar8) && (bVar8 = bVar3 != bVar2, bVar2 = bVar3, bVar8)) {
        uVar6 = 0x200;
        return;
      }
      lVar7 = lVar7 + 0x1f8;
      bVar8 = false;
      bVar3 = bVar2;
    } while (lVar1 != lVar7);
    uVar6 = 0x100;
  }
  return uVar6 | bVar2;
}
}
