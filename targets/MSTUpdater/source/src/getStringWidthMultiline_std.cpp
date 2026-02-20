#include <ni/controller_editor/getStringWidthMultiline_std.hpp>
namespace NI::UIA::Font {

void getStringWidthMultiline(std::string const&) const {
string *psVar1;
  byte bVar2;
  int iVar3;
  string *psVar4;
  unsigned long uVar5;
  unsigned long uVar6;
  string *psVar7;
  char *pcVar8;
  string *psVar9;
  int iVar10;
  long lVar11;
  string local_58;
  char local_57 [15];
  char *local_48;
  Font *local_40;
  string *local_38;
  
  local_38 = param_1 + 1;
  uVar6 = 0;
  iVar10 = 0;
  local_40 = this;
  do {
    bVar2 = (byte)*param_1 & 1;
    uVar5 = (unsigned long)((byte)*param_1 >> 1);
    if (bVar2 != 0) {
      uVar5 = *(unsigned long *)(param_1 + 8);
    }
    psVar4 = *(string **)(param_1 + 0x10);
    if (bVar2 == 0) {
      psVar4 = local_38;
    }
    lVar11 = -1;
    if (uVar6 < uVar5) {
      psVar1 = psVar4 + uVar5;
      lVar11 = uVar5 - uVar6;
      psVar7 = psVar1;
      if ((lVar11 != 0) &&
         (psVar9 = psVar4 + uVar6, psVar1 != psVar9 && -1 < (long)psVar1 - (long)psVar9)) {
        do {
          psVar7 = psVar9;
          if (*psVar9 == (string)0xa) break;
          psVar9 = psVar9 + 1;
          lVar11 = lVar11 + -1;
          psVar7 = psVar1;
        } while (lVar11 != 0);
      }
      lVar11 = (long)psVar7 - (long)psVar4;
      if (psVar7 == psVar1) {
        lVar11 = -1;
      }
    }
    // std code
    pcVar8 = local_48;
    if (((byte)local_58 & 1) == 0) {
      pcVar8 = local_57;
    }
    iVar3 = getStringWidth(local_40,pcVar8,-1);
    // std code
    if (iVar10 <= iVar3) {
      iVar10 = iVar3;
    }
    uVar6 = lVar11 + 1;
    if (lVar11 == -1) {
      return iVar10;
    }
  } while( true );
}
}
