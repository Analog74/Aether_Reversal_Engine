#include <ni/controller_editor/MaschineStudioWidget_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MaschineStudioWidget {

void MaschineStudioWidget(NI::Model*) [clone .cold.1] {
MaschineStudioWidget *pMVar1;
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
