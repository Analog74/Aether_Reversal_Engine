#include <ni/controller_editor/isDisplayColumnColorEditNeeded_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MaschineStudioModelBase {

void isDisplayColumnColorEditNeeded(NI::AssignmentActionType) const {
uint uVar1;
  unsigned long long uVar2;
  long lVar3;
  long lVar4;
  unsigned long long local_38;
  
  uVar1 = (**(code **)(*(long *)this + 0x140))();
  lVar3 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar1 * 0x18);
  lVar4 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar1 * 0x18);
  if (lVar3 == lVar4) {
    uVar2 = 0((int7)((unsigned long)lVar3 >> 8),1);
  }
  else {
    lVar4 = lVar4 - lVar3;
    lVar3 = (param_2 & 0xff) * 0xa8 + lVar3;
    while( true ) {
      lVar4 = lVar4 + -0x1f8;
      local_38 = 0;
      uVar1 = *(uint *)(lVar3 + 0x60);
      if ((6 < uVar1) ||
         (((0x6cU >> (uVar1 & 0x1f) & 1) == 0 && ((uVar1 != 0 || (*(int *)(lVar3 + 4) != 0))))))
      break;
      uVar2 = (**(code **)(*(long *)this + 0x250))(this,lVar3,&local_38);
      if (lVar4 == 0) {
        return uVar2;
      }
      lVar3 = lVar3 + 0x1f8;
      if ((char)uVar2 == '\0') {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}
}
