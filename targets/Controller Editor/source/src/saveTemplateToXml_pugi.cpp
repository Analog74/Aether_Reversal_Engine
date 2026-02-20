#include <ni/controller_editor/saveTemplateToXml_pugi.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void saveTemplateToXml(pugi::xml_node, unsigned int) const {
long *plVar1;
  unsigned long uVar2;
  unsigned long uVar3;
  Model *local_30;
  unsigned long long local_28;
  bool local_19;
  
  local_28 = param_2;
  plVar1 = (long *)(**(code **)(*(long *)this + 0xe0))();
  (**(code **)(*plVar1 + 0x310))(plVar1,&local_28,param_3);
  local_19 = true;
  if ((this[0x1b0] == (Model)0x0) && (*(long *)(this + 0x288) != -1)) {
    uVar3 = *(long *)(this + 0x288) + 1;
    *(unsigned long *)(this + 0x288) = uVar3;
    local_30 = this;
    uVar2 = MixpanelTracker::numRequiredMappingOperations(true);
    if (uVar2 <= uVar3) {
      nod::signal_type<nod::multithread_policy,void(NI::Model_const*,bool)>::operator()
                ((signal_type<nod::multithread_policy,void(NI::Model_const*,bool)> *)(this + 0x1c0),
                 &local_30,&local_19);
      *(unsigned long long *)(this + (unsigned long)local_19 * 8 + 0x280) = 0xffffffffffffffff;
    }
  }
  return;
}
}
