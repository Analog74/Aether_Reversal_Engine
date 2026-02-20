#include <ni/controller_editor/Vector_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IListSupport::getPageListFrom(std::weak_ptr<NI::NWL {

void Vector<NI::ListBar> >) {
long *plVar1;
  long lVar2;
  long *plVar3;
  unsigned long uVar4;
  long lVar5;
  long lVar6;
  long local_40;
  long *local_38;
  
  if ((param_3[1] == 0) ||
     (local_38 = (long *)// std code
    local_40 = 0;
    local_38 = (long *)0x0;
    lVar6 = *(long *)(param_2 + 0x18);
    if (*(long *)(param_2 + 0x20) == lVar6) return;
  }
  else {
    local_40 = *param_3;
    lVar6 = *(long *)(param_2 + 0x18);
    if (*(long *)(param_2 + 0x20) == lVar6) return;
  }
  lVar5 = 8;
  uVar4 = 0;
  do {
    plVar3 = (long *)// std code
    lVar6 = *(long *)(lVar6 + -8 + lVar5);
    lVar2 = *(long *)(lVar6 + 0x408);
    *param_1 = *(long *)(lVar6 + 0x400);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        // std code
      }
    }
    if (*param_1 == local_40) return;
    plVar3 = (long *)param_1[1];
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        // std code
      }
    }
    uVar4 = uVar4 + 1;
    lVar6 = *(long *)(param_2 + 0x18);
    lVar5 = lVar5 + 0x10;
  } while (uVar4 < (unsigned long)(*(long *)(param_2 + 0x20) - lVar6 >> 4));
  *param_1 = 0;
  param_1[1] = 0;
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    lVar6 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*local_38 + 0x10))(local_38);
      // std code
    }
  }
  return param_1;
}
}
