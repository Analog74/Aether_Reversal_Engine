#include <ni/controller_editor/listAllSelectedAssignments_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void listAllSelectedAssignments(NI::AssignmentActionType) [clone .cold.1] {
NI *pNVar1;
  NI *pNVar2;
  
  pNVar1 = (NI *)param_2[1];
  pNVar2 = this;
  if ((NI *)param_2[1] != this) {
    do {
      pNVar2 = pNVar1 + -0x18;
      if (((byte)pNVar1[-0x18] & 1) != 0) {
        delete(*(void **)(pNVar1 + -8));
      }
      pNVar1 = pNVar2;
    } while (this != pNVar2);
    pNVar2 = (NI *)*param_2;
  }
  param_2[1] = this;
  delete(pNVar2);
  return;
}
}
