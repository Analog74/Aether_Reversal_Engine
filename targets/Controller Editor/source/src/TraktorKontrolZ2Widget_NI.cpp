#include <ni/controller_editor/TraktorKontrolZ2Widget_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::TraktorKontrolZ2Widget {

void TraktorKontrolZ2Widget(NI::Model*) [clone .cold.4] {
TraktorKontrolZ2Widget *pTVar1;
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
