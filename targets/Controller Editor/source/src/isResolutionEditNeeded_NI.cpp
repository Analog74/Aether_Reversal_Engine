#include <ni/controller_editor/isResolutionEditNeeded_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void isResolutionEditNeeded(NI::AssignmentActionType) const {
long lVar1;
  uint uVar2;
  Model *pMVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = (**(code **)(*(long *)this + 0x140))();
  lVar4 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar2 * 0x18);
  lVar1 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar2 * 0x18);
  if (lVar4 != lVar1) {
    lVar5 = (param_2 & 0xff) * 0xa8;
    do {
      if (((*(int *)(lVar4 + 0x60 + lVar5) == 0) && ((*(byte *)(lVar4 + 0x70 + lVar5) & 8) != 0)) ||
         (pMVar3 = (Model *)// std code
                            __tree<// std code
                            find<// std code
                                               *)(this + 0x9a0),(string *)(lVar4 + lVar5 + 0x30)),
         pMVar3 != this + 0x9a8)) {
        return 0;
      }
      lVar4 = lVar4 + 0x1f8;
    } while (lVar1 != lVar4);
  }
  return 1;
}
}
