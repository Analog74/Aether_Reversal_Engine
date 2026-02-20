#include <ni/controller_editor/getUniqueTypeForExtension_std.hpp>
namespace NI::GP::FileTypeManager {

void getUniqueTypeForExtension(std::string const&) {
byte *pbVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  string *psVar6;
  byte *pbVar7;
  long *plVar8;
  long *plVar9;
  byte *pbVar10;
  
  // std code
  plVar2 = 0;
  plVar9 = s_registeredTypes;
  if (s_registeredTypes != 0) {
    plVar8 = s_registeredTypes;
    do {
      lVar5 = *plVar8;
      if (lVar5 != 0) {
        pbVar1 = *(byte **)(lVar5 + 0x40);
        for (pbVar10 = *(byte **)(lVar5 + 0x38); pbVar10 != pbVar1; pbVar10 = pbVar10 + 0x18) {
          pbVar7 = *(byte **)(pbVar10 + 0x10);
          if ((*pbVar10 & 1) == 0) {
            pbVar7 = pbVar10 + 1;
          }
          psVar6 = *(string **)(param_1 + 0x10);
          if (((byte)*param_1 & 1) == 0) {
            psVar6 = param_1 + 1;
          }
          iVar3 = wstrcmpc<char>((char *)pbVar7,(char *)psVar6,false);
          plVar9 = plVar8;
          if (iVar3 == 0) goto LAB_100193b0f;
        }
      }
      plVar8 = plVar8 + 1;
      plVar9 = plVar2;
    } while (plVar8 != plVar2);
  }
LAB_100193b0f:
  plVar2 = 0;
  if (plVar9 == 0) {
    lVar5 = *s_stdTypes;
  }
  else {
    plVar8 = plVar9 + 1;
    plVar4 = plVar2;
    if (plVar8 != 0) {
      do {
        lVar5 = *plVar8;
        if (lVar5 != 0) {
          pbVar1 = *(byte **)(lVar5 + 0x40);
          for (pbVar10 = *(byte **)(lVar5 + 0x38); pbVar10 != pbVar1; pbVar10 = pbVar10 + 0x18) {
            pbVar7 = *(byte **)(pbVar10 + 0x10);
            if ((*pbVar10 & 1) == 0) {
              pbVar7 = pbVar10 + 1;
            }
            psVar6 = *(string **)(param_1 + 0x10);
            if (((byte)*param_1 & 1) == 0) {
              psVar6 = param_1 + 1;
            }
            iVar3 = wstrcmpc<char>((char *)pbVar7,(char *)psVar6,false);
            plVar4 = plVar8;
            if (iVar3 == 0) goto LAB_100193bae;
          }
        }
        plVar8 = plVar8 + 1;
        plVar4 = plVar2;
      } while (plVar8 != plVar2);
    }
LAB_100193bae:
    if (plVar2 == plVar4) {
      lVar5 = *plVar9;
    }
    else {
      lVar5 = 0;
    }
  }
  // std code
  return lVar5;
}
}
