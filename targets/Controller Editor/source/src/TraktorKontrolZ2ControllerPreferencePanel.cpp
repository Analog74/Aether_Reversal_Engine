#include <ni/controller_editor/TraktorKontrolZ2ControllerPreferencePanel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void TraktorKontrolZ2ControllerPreferencePanel::onDeviceChange() [clone .cold.1] {
TraktorKontrolZ2ControllerPreferencePanel *pTVar1;
  long lVar2;
  
  LOCK();
  pTVar1 = this + 8;
  lVar2 = *(long *)pTVar1;
  *(long *)pTVar1 = *(long *)pTVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}
}
