#include <ni/controller_editor/Multiple_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ButtonLEDControl::ButtonLEDControl(NI {

void Multiple<NI::LEDControlType>, bool) [clone .cold.2] {
ButtonLEDControl *pBVar1;
  long lVar2;
  
  LOCK();
  pBVar1 = this + 8;
  lVar2 = *(long *)pBVar1;
  *(long *)pBVar1 = *(long *)pBVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}
}
