#include <ni/controller_editor/setSelectedAssignmentMidiID_int__NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void setSelectedAssignmentMidiID(2 param_2, int, NI::AssignmentActionType {
long lVar1;
  uint uVar2;
  unsigned long in_RAX;
  Assignment *this_00;
  long lVar3;
  unsigned long long uStack_38;
  
  uStack_38 = in_RAX;
  uVar2 = (**(code **)(*(long *)this + 0x140))();
  lVar1 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar2 * 0x18);
  lVar3 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar2 * 0x18);
  if (lVar1 != lVar3) {
    this_00 = (Assignment *)((param_3 & 0xff) * 0xa8 + lVar1);
    lVar3 = lVar3 - lVar1;
    do {
      NHL2::Assignment::setMidiID(this_00,param_2);
      this_00 = this_00 + 0x1f8;
      lVar3 = lVar3 + -0x1f8;
    } while (lVar3 != 0);
  }
  IAssignmentSupport::updateSelectedAssignments((IAssignmentSupport *)this,param_3 & 0xff);
  uStack_38 = uStack_38 & 0xffffffffffffff;
  nod::signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)>::operator()
            ((signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)> *)
             (this + 0xf0),(SelectionContentUpdateScope *)((long)&uStack_38 + 7));
  return;
}
}
