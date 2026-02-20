#include <ni/controller_editor/isPageColorEditNeeded_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void isPageColorEditNeeded(NI::AssignmentActionType) const {
long lVar1;
  char cVar2;
  uint uVar3;
  unsigned long uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  cVar2 = (**(code **)(*(long *)this + 0x110))(this,1);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = (**(code **)(*(long *)this + 0x140))(this);
  uVar4 = (unsigned long)uVar3;
  lVar5 = uVar4 * 3;
  lVar6 = *(long *)(*(long *)(this + 0x2a8) + uVar4 * 0x18);
  lVar1 = *(long *)(*(long *)(this + 0x2a8) + 8 + uVar4 * 0x18);
  if (lVar6 != lVar1) {
    lVar7 = ((unsigned long)param_2 & 0xff) * 0xa8;
    do {
      uVar3 = *(uint *)(lVar6 + 0x60 + lVar7);
      if (6 < uVar3) {
        return 0;
      }
      if ((0x6cU >> (uVar3 & 0x1f) & 1) == 0) {
        return 0;
      }
      lVar5 = *(long *)(lVar6 + 0x20 + lVar7);
      if (lVar5 == *(long *)(lVar6 + 0x18 + lVar7)) {
        return 0;
      }
      lVar6 = lVar6 + 0x1f8;
    } while (lVar1 != lVar6);
  }
  return 0((int7)((unsigned long)lVar5 >> 8),1);
}
}
