#include <ni/controller_editor/getSelectionWidgetLayerForId_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::TraktorKontrolS4Widget {

void getSelectionWidgetLayerForId(std::string const&) const {
long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  unsigned long long uVar5;
  long lVar6;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x7b8) + 0x120);
  lVar6 = (long)*(int *)(*(long *)(param_1 + 0x7b8) + 0x2f0) * 0x10;
  lVar3 = *(long *)(lVar2 + lVar6);
  plVar4 = *(long **)(lVar2 + 8 + lVar6);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  uVar5 = *(unsigned long long *)(lVar3 + 0x708);
  lVar2 = *(long *)(lVar3 + 0x710);
  if (lVar2 != 0) {
    LOCK();
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(unsigned long long *)this = uVar5;
  *(long *)(this + 8) = lVar2;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      // std code
    }
  }
  return this;
}
}
