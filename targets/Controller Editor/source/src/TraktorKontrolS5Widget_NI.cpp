#include <ni/controller_editor/TraktorKontrolS5Widget_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::TraktorKontrolS5Widget {

void TraktorKontrolS5Widget(NI::Model*) [clone .cold.2] {
TraktorKontrolS5Widget *pTVar1;
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
