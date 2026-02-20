#include <ni/controller_editor/emitMappingWasEdited_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IEditingChangeNotifier {

void emitMappingWasEdited(NI::Model const*, bool) const {
unsigned long uVar1;
  unsigned long uVar2;
  Model *local_28;
  bool local_19;
  
  if (this[400] == (IEditingChangeNotifier)0x0) {
    if (*(long *)(this + (unsigned long)param_2 * 8 + 0x260) != -1) {
      uVar2 = *(long *)(this + (unsigned long)param_2 * 8 + 0x260) + 1;
      *(unsigned long *)(this + (unsigned long)param_2 * 8 + 0x260) = uVar2;
      local_28 = param_1;
      local_19 = param_2;
      uVar1 = MixpanelTracker::numRequiredMappingOperations(param_2);
      if (uVar1 <= uVar2) {
        nod::signal_type<nod::multithread_policy,void(NI::Model_const*,bool)>::operator()
                  ((signal_type<nod::multithread_policy,void(NI::Model_const*,bool)> *)
                   (this + 0x1a0),&local_28,&local_19);
        *(unsigned long long *)(this + (unsigned long)local_19 * 8 + 0x260) = 0xffffffffffffffff;
      }
    }
  }
  return;
}
}
