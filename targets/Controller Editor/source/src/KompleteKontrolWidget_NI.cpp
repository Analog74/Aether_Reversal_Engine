#include <ni/controller_editor/KompleteKontrolWidget_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::KompleteKontrolWidget {

void KompleteKontrolWidget(NI::Model*) [clone .cold.2] {
KompleteKontrolWidget *pKVar1;
  long lVar2;
  
  LOCK();
  pKVar1 = this + 8;
  lVar2 = *(long *)pKVar1;
  *(long *)pKVar1 = *(long *)pKVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}
}
