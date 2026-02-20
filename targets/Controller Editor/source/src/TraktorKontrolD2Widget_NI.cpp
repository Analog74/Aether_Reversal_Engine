#include <ni/controller_editor/TraktorKontrolD2Widget_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::TraktorKontrolD2Widget {

void TraktorKontrolD2Widget(NI::Model*) [clone .cold.1] {
TraktorKontrolD2Widget *pTVar1;
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
