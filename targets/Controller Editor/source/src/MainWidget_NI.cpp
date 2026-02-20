#include <ni/controller_editor/MainWidget_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MainWidget {

void MainWidget(NI::ControllerEditorWindow*) [clone .cold.1] {
MainWidget *pMVar1;
  long lVar2;
  
  LOCK();
  pMVar1 = this + 8;
  lVar2 = *(long *)pMVar1;
  *(long *)pMVar1 = *(long *)pMVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*(long *)this + 0x10))();
  // std code
  return;
}
}
