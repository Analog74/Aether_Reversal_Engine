#include <ni/controller_editor/unsubscribeModelFromNotifications_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ControllerSubscriptionMonitor {

void unsubscribeModelFromNotifications(NI::Model*) {
long *plVar1;
  long *plVar2;
  size_t sVar3;
  
  // std code
  plVar2 = *(long **)(this + 8);
  plVar1 = *(long **)(this + 0x10);
  if (plVar2 == plVar1) {
    if (plVar2 != plVar1) {
      sVar3 = (long)plVar1 - (long)(plVar2 + 1);
      if (sVar3 != 0) {
        _memmove(plVar2,plVar2 + 1,sVar3);
      }
      *(size_t *)(this + 0x10) = (long)plVar2 + sVar3;
    }
  }
  else {
    do {
      if ((Model *)*plVar2 == param_1) return;
      plVar2 = plVar2 + 1;
    } while (plVar1 != plVar2);
  }
  // std code
  return;
}
}
