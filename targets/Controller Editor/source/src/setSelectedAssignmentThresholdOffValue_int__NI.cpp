#include <ni/controller_editor/setSelectedAssignmentThresholdOffValue_int__NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void setSelectedAssignmentThresholdOffValue(1 param_1, int, NI::AssignmentActionType {
long lVar1;
  uint uVar2;
  unsigned long in_RAX;
  long lVar3;
  float fVar4;
  float fVar5;
  unsigned long long uStack_28;
  
  uStack_28 = in_RAX;
  uVar2 = (**(code **)(*(long *)this + 0x140))();
  lVar3 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar2 * 0x18);
  lVar1 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar2 * 0x18);
  if (lVar3 != lVar1) {
    fVar5 = 0.0;
    if (0.0 <= (float)param_1 / 100.0) {
      fVar5 = (float)param_1 / 100.0;
    }
    fVar4 = 1.0;
    if (fVar5 <= 1.0) {
      fVar4 = fVar5;
    }
    do {
      *(float *)(lVar3 + 4 + (param_3 & 0xff) * 0xa8) = fVar4;
      lVar3 = lVar3 + 0x1f8;
    } while (lVar1 != lVar3);
  }
  IAssignmentSupport::updateSelectedAssignments((IAssignmentSupport *)this);
  uStack_28 = uStack_28 & 0xffffffffffffff;
  nod::signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)>::operator()
            ((signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)> *)
             (this + 0xf0),(SelectionContentUpdateScope *)((long)&uStack_28 + 7));
  return;
}
}
