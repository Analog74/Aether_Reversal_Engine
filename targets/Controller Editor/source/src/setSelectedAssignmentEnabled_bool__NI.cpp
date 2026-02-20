#include <ni/controller_editor/setSelectedAssignmentEnabled_bool__NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IAssignmentSupport {

void setSelectedAssignmentEnabled(1 param_1, bool, NI::AssignmentActionType, bool {
long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  SelectionContentUpdateScope local_29;
  
  plVar3 = (long *)(**(code **)(*(long *)this + 0xe8))();
  uVar2 = (**(code **)(*plVar3 + 0x148))(plVar3);
  lVar4 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar2 * 0x18);
  lVar1 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar2 * 0x18);
  if (lVar4 != lVar1) {
    lVar5 = (param_3 & 0xff) * 0xa8;
    bVar6 = false;
    do {
      if ((*(char *)(lVar4 + 0xa2 + lVar5) != '\0') != (bool)param_1) {
        *(char *)(lVar4 + 0xa2 + lVar5) = param_1;
        bVar6 = true;
      }
      lVar4 = lVar4 + 0x1f8;
    } while (lVar1 != lVar4);
    if (bVar6) {
      updateSelectedAssignments(this);
      if (param_4 != '\0') {
        local_29 = (SelectionContentUpdateScope)0x1;
        nod::signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)>::operator()
                  ((signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)> *)
                   (this + 0xf0),&local_29);
      }
    }
  }
  return;
}
}
