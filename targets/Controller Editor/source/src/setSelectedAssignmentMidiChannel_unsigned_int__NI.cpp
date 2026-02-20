#include <ni/controller_editor/setSelectedAssignmentMidiChannel_unsigned_int__NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void setSelectedAssignmentMidiChannel(2 param_2, unsigned int, NI::AssignmentActionType {
long lVar1;
  uint uVar2;
  unsigned long in_RAX;
  long lVar3;
  byte bVar4;
  unsigned long long uStack_28;
  
  uStack_28 = in_RAX;
  uVar2 = (**(code **)(*(long *)this + 0x140))();
  lVar3 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar2 * 0x18);
  lVar1 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar2 * 0x18);
  if (lVar3 != lVar1) {
    bVar4 = 0xf;
    if (param_2 < 0xf) {
      bVar4 = param_2;
    }
    do {
      *(byte *)(lVar3 + 0xa0 + (param_3 & 0xff) * 0xa8) = bVar4;
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
