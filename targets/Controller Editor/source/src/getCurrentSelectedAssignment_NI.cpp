#include <ni/controller_editor/getCurrentSelectedAssignment_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IAssignmentSupport {

void getCurrentSelectedAssignment(2 param_2, NI::AssignmentActionType {
unsigned long uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  unsigned long uVar5;
  long lVar6;
  
  plVar4 = (long *)(**(code **)(*(long *)this + 0xe8))();
  uVar3 = (**(code **)(*plVar4 + 0x148))(plVar4);
  uVar5 = (unsigned long)uVar3;
  uVar1 = *(unsigned long *)(*(long *)(this + 0x290) + uVar5 * 8);
  lVar2 = *(long *)(*(long *)(this + 0x2a8) + uVar5 * 0x18);
  lVar6 = 0;
  if (uVar1 < (unsigned long)((*(long *)(*(long *)(this + 0x2a8) + 8 + uVar5 * 0x18) - lVar2 >> 3) *
                     -0x1041041041041041)) {
    lVar6 = (param_2 & 0xffffffff) * 0xa8 + uVar1 * 0x1f8 + lVar2;
  }
  return lVar6;
}
}
