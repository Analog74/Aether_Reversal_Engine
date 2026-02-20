#include <ni/controller_editor/TraktorKontrolS4ControllerPreferencePanel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void TraktorKontrolS4ControllerPreferencePanel::onFootswitchChange(int param_1) {
}

void TraktorKontrolS4ControllerPreferencePanel::updateFootswitchMode(bool) [clone .cold.1] {
long *plVar1;
  long lVar2;
  void7 in_register_00000031;
  
  if (0(in_register_00000031,param_1) != 0) {
    LOCK();
    plVar1 = (long *)(0(in_register_00000031,param_1) + 8);
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*(long *)0(in_register_00000031,param_1) + 0x10))
                ((long *)0(in_register_00000031,param_1));
      // std code
    }
  }
  return;
}
}
