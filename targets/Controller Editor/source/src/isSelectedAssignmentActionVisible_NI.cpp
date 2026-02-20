#include <ni/controller_editor/isSelectedAssignmentActionVisible_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::KompleteKontrolModelBase {

void isSelectedAssignmentActionVisible(1 param_1, NI::AssignmentActionType {
char cVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = IAssignmentSupport::getCurrentSelectedAssignment();
  bVar2 = true;
  if (((lVar3 != 0) && (*(int *)(lVar3 + 0x60) == 1)) && ((*(uint *)(lVar3 + 100) & 0xfffffff) == 1)
     ) {
    cVar1 = (**(code **)(*param_1 + 400))(param_1);
    if ((cVar1 == '\0') || ((int)param_1[0x19e] < 0x47)) {
      return false;
    }
    bVar2 = 2 < *(int *)((long)param_1 + 0xcf4);
  }
  return bVar2;
}
}
