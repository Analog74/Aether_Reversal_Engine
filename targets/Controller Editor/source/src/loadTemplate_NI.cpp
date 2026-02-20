#include <ni/controller_editor/loadTemplate_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MainWidget {

void loadTemplate(NI::ListBar&, unsigned long) [clone .cold.1] {
ListBar *pLVar1;
  long lVar2;
  
  LOCK();
  pLVar1 = param_1 + 8;
  lVar2 = *(long *)pLVar1;
  *(long *)pLVar1 = *(long *)pLVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1 + 0x10))();
    // std code
  }
  return;
}
}
