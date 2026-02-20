#include <ni/controller_editor/getTypeForCurrentAssignment_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IAssignmentSupport {

void getTypeForCurrentAssignment(NI::AssignmentActionType) const {
uint uVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)(*(long *)this + 0xe0))();
  uVar1 = (**(code **)(*plVar2 + 0x148))(plVar2);
  return *(unsigned int *)
          (*(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar1 * 0x18) + 0x60 + (unsigned long)param_2 * 0xa8);
}
}
