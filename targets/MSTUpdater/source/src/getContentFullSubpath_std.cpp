#include <ni/controller_editor/getContentFullSubpath_std.hpp>
namespace NI::GP::FileContainerParser {

void getContentFullSubpath(std::string&) const {
FileContainerParser *pFVar1;
  unsigned long uVar2;
  long lVar3;
  unsigned long uVar4;
  
  lVar3 = *(long *)(this + 200);
  uVar4 = (unsigned long)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar4 = *(unsigned long *)(param_1 + 8);
  }
  // std code
  // std code
  pFVar1 = this + 0x39;
  if (((byte)this[0x38] & 1) != 0) {
    pFVar1 = *(FileContainerParser **)(this + 0x48);
  }
  // std code
  for (; lVar3 != 0; lVar3 = *(long *)(lVar3 + 200)) {
    uVar2 = lVar3 + 0x39;
    if ((*(byte *)(lVar3 + 0x38) & 1) != 0) {
      uVar2 = *(unsigned long *)(lVar3 + 0x48);
    }
    // std code
    // std code
  }
  uVar2 = (unsigned long)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar2 = *(unsigned long *)(param_1 + 8);
  }
  return uVar4 + 1 < uVar2;
}
}
