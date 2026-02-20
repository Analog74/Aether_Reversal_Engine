#include <ni/controller_editor/getSelectedAssignment_unsigned_int__NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IAssignmentSupport {

void getSelectedAssignment(unsigned int, NI::AssignmentActionType) const {
long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  unsigned long uVar5;
  
  param_2 = param_2 & 0xffffffff;
  plVar3 = (long *)(**(code **)(*(long *)this + 0xe0))();
  uVar2 = (**(code **)(*plVar3 + 0x148))(plVar3);
  lVar4 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar2 * 0x18);
  lVar1 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar2 * 0x18);
  if ((lVar4 == lVar1) ||
     (uVar5 = (lVar1 - lVar4 >> 3) * -0x1041041041041041, uVar5 < param_2 || uVar5 - param_2 == 0))
  {
    lVar4 = 0;
  }
  else {
    lVar4 = (param_3 & 0xff) * 0xa8 + lVar4 + param_2 * 0x1f8;
  }
  return lVar4;
}
}
