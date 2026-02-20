#include <ni/controller_editor/setSelectedAssignmentKnobSteps_unsigned_int__NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void setSelectedAssignmentKnobSteps(1 param_1, unsigned int, NI::AssignmentActionType {
long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = (**(code **)(*(long *)this + 0x140))();
  lVar3 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar2 * 0x18);
  lVar1 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar2 * 0x18);
  if (lVar3 != lVar1) {
    lVar4 = (param_3 & 0xff) * 0xa8;
    do {
      if (*(int *)(lVar3 + 0x60 + lVar4) == 8) {
        *(unsigned int *)(lVar3 + 4 + lVar4) = param_1;
      }
      *(unsigned int *)(lVar3 + 0xc + lVar4) = param_1;
      lVar3 = lVar3 + 0x1f8;
    } while (lVar1 != lVar3);
  }
  IAssignmentSupport::updateSelectedAssignments((IAssignmentSupport *)this);
  return;
}
}
