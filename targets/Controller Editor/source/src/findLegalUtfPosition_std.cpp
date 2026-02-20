#include <ni/controller_editor/findLegalUtfPosition_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::(anonymous namespace) {

void findLegalUtfPosition(1 param_1, std::string const&, int {
string sVar1;
  code *pcVar2;
  string *psVar3;
  int iVar4;
  uint uVar5;
  unsigned long uVar6;
  long lVar7;
  uint uVar8;
  string *psVar9;
  void *local_20 [2];
  
  if (((byte)*param_1 & 1) == 0) {
    psVar9 = param_1 + 1;
    uVar6 = (unsigned long)((byte)*param_1 >> 1);
  }
  else {
    uVar6 = *(unsigned long *)(param_1 + 8);
    psVar9 = *(string **)(param_1 + 0x10);
  }
  psVar3 = psVar9 + uVar6;
  iVar4 = (int)uVar6;
  if (param_2 < (int)uVar6) {
    iVar4 = param_2;
  }
  do {
    if ((psVar3 == psVar9) || (psVar3 <= psVar9 + iVar4)) {
      return (int)psVar3 - (int)psVar9;
    }
    lVar7 = 0;
    do {
      sVar1 = psVar3[lVar7 + -1];
      lVar7 = lVar7 + -1;
    } while (((byte)sVar1 & 0xc0) == 0x80);
    if ((char)sVar1 < '\0') {
      uVar5 = 0x80;
      uVar8 = 0;
      do {
        uVar8 = uVar8 + 1;
        uVar5 = uVar5 >> 1;
      } while ((uVar5 & (byte)sVar1) != 0);
      uVar5 = 4;
      if (uVar8 < 4) {
        uVar5 = uVar8;
      }
      if (uVar8 == 0) return;
    }
    else {
      uVar5 = 1;
    }
    psVar3 = psVar3 + lVar7;
    if ((int)lVar7 + uVar5 != 0) {
      // std code
                ((logic_error *)local_20,
                 "Invalid UTF-8 sequence encountered while trying to encode UTF-32 character");
      local_20[0] = (char*)PTR_vtable_101ab45e0 + 0x10;
      // boost code
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  } while( true );
}
}
