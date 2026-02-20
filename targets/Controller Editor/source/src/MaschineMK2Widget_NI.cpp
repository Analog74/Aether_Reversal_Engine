#include <ni/controller_editor/MaschineMK2Widget_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MaschineMK2Widget {

void MaschineMK2Widget(NI::Model*) [clone .cold.57] {
MaschineMK2Widget *pMVar1;
  long lVar2;
  
  LOCK();
  pMVar1 = this + 8;
  lVar2 = *(long *)pMVar1;
  *(long *)pMVar1 = *(long *)pMVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}
}
