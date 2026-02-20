#include <ni/controller_editor/setLabelForCurrentSelectedAssignment_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IAssignmentSupport {

void setLabelForCurrentSelectedAssignment(1 param_1, std::string const& {
Assignment *pAVar1;
  uint uVar2;
  long *plVar3;
  Assignment *this_00;
  SelectionContentUpdateScope local_29;
  
  plVar3 = (long *)(**(code **)(*(long *)this + 0xe8))();
  uVar2 = (**(code **)(*plVar3 + 0x148))(plVar3);
  pAVar1 = *(Assignment **)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar2 * 0x18);
  for (this_00 = *(Assignment **)(*(long *)(this + 0x2a8) + (unsigned long)uVar2 * 0x18); this_00 != pAVar1;
      this_00 = this_00 + 0x1f8) {
    NHL2::Assignment::setLabel(this_00,param_1);
  }
  updateSelectedAssignments(this,0);
  local_29 = (SelectionContentUpdateScope)0x0;
  nod::signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)>::operator()
            ((signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)> *)
             (this + 0xf0),&local_29);
  return;
}
}
