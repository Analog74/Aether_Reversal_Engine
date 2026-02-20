#include <ni/controller_editor/getDescriptionForAction_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IAssignmentSupport {

void getDescriptionForAction(NI::AssignmentActionType) [clone .cold.1] {
void *pvVar1;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    delete(*(void **)(param_1 + 0x40));
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar1;
    delete(pvVar1);
  }
  *param_4 = param_2;
  *(unsigned int *)(param_4 + 1) = param_3;
  return;
}
}
