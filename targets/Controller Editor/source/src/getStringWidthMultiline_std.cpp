#include <ni/controller_editor/getStringWidthMultiline_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::Font {

void getStringWidthMultiline(std::string const&) const {
int iVar1;
  long lVar2;
  long lVar3;
  string *psVar4;
  int iVar5;
  
  lVar3 = 0;
  iVar5 = 0;
  do {
    lVar2 = // std code
    psVar4 = param_1 + 1;
    if (((byte)*param_1 & 1) != 0) {
      psVar4 = *(string **)(param_1 + 0x10);
    }
    iVar1 = (int)lVar2 - (int)lVar3;
    if (lVar2 == -1) {
      iVar1 = -1;
    }
    iVar1 = getStringWidth(this,(char *)(psVar4 + lVar3),iVar1);
    if (iVar5 < iVar1) {
      iVar5 = iVar1;
    }
    lVar3 = lVar2 + 1;
  } while (lVar3 != 0);
  return iVar5;
}
}
