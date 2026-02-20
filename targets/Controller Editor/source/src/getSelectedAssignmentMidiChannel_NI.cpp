#include <ni/controller_editor/getSelectedAssignmentMidiChannel_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void getSelectedAssignmentMidiChannel(NI::AssignmentActionType) const {
long lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  bool bVar7;
  
  uVar4 = (**(code **)(*(long *)this + 0x140))();
  lVar6 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar4 * 0x18);
  lVar1 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar4 * 0x18);
  if (lVar6 == lVar1) {
    bVar2 = 0;
    uVar5 = 0;
  }
  else {
    bVar7 = true;
    bVar3 = 0;
    do {
      bVar2 = *(byte *)(lVar6 + 0xa0 + (param_2 & 0xff) * 0xa8);
      if ((!bVar7) && (bVar7 = bVar3 != bVar2, bVar2 = bVar3, bVar7)) {
        uVar5 = 0x200;
        return;
      }
      lVar6 = lVar6 + 0x1f8;
      bVar7 = false;
      bVar3 = bVar2;
    } while (lVar1 != lVar6);
    uVar5 = 0x100;
  }
  return uVar5 | bVar2;
}
}
