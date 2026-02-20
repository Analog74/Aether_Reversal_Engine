#include <ni/controller_editor/LEDStyleType__NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model::setSelectedAssignmentLEDStyleType(NI {

void LEDStyleType, NI::AssignmentActionType, bool) {
long lVar1;
  uint uVar2;
  long lVar3;
  SelectionContentUpdateScope local_29;
  
  uVar2 = (**(code **)(*(long *)this + 0x140))();
  lVar3 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar2 * 0x18);
  lVar1 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar2 * 0x18);
  param_3 = param_3 & 0xff;
  if (lVar3 != lVar1) {
    param_4 = param_4 & 0xff;
    if (param_2 == 0) {
      do {
        *(ushort *)(lVar3 + 0x16 + param_3 * 0xa8) = param_4 << 2;
        lVar3 = lVar3 + 0x1f8;
      } while (lVar1 != lVar3);
    }
    else if(4 param_4, 4 param_4, param_2 == 1 {
      do {
        *(ushort *(lVar3 + 0x16 + param_3 * 0xa8) = param_4 * 4 + 1;
        lVar3 = lVar3 + 0x1f8;
      } while (lVar1 != lVar3);
    }
    else if(4 param_4, 4 param_4, param_2 == 2 {
      do {
        *(ushort *(lVar3 + 0x16 + param_3 * 0xa8) = param_4 * 4 + 2;
        lVar3 = lVar3 + 0x1f8;
      } while (lVar1 != lVar3);
    }
  }
  IAssignmentSupport::updateSelectedAssignments((IAssignmentSupport *)this);
  local_29 = (SelectionContentUpdateScope)0x0;
  nod::signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)>::operator()
            ((signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)> *)
             (this + 0xf0),&local_29);
  return;
}
}
