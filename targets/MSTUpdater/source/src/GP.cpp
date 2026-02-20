#include <ni/controller_editor/GP.hpp>
namespace int NI {

void GP::wstrcmpc<char>(char const*, char const*, bool) {
byte bVar1;
  int iVar2;
  uint uVar3;
  wchar32 wVar4;
  wchar32 wVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *local_50;
  wchar32 local_48;
  byte *local_40;
  wchar32 local_38;
  
  uVar3 = (uint)(byte)*param_1;
  if ((*param_1 & 0xc0U) != 0x80) {
    if (param_3 param_1) {
    }
    else {
      do {
        uVar6 = 1;
        if ((char)uVar3 < '\0') {
          uVar6 = 0x80;
          iVar2 = 0;
          do {
            uVar6 = uVar6 >> 1;
            iVar2 = iVar2 + -1;
          } while ((uVar6 & uVar3) != 0);
          uVar6 = -iVar2;
          if (4 < uVar6) {
            uVar6 = 4;
          }
          if (iVar2 == 0) {
            uVar6 = 1;
          }
          pbVar8 = (byte *)param_1;
          if (uVar6 != 0) goto LAB_1001a1778;
        }
        else {
LAB_1001a1778:
          lVar7 = 0;
          do {
            if ((uVar6 - 1 != (int)lVar7) && ((((byte *)param_1)[lVar7 + 1] & 0xc0) != 0x80))
            goto LAB_1001a18c5;
            lVar7 = lVar7 + 1;
          } while ((uint)lVar7 < uVar6);
          pbVar8 = (byte *)param_1 + lVar7;
        }
        local_48 = L'\xffffffff';
        local_50 = (byte *)param_1;
        // boost code
                  ((u8_to_u32_iterator<char_const*,char32_t> *)&local_50);
        wVar4 = local_48;
        bVar1 = *param_2;
        if ((bVar1 & 0xc0) == 0x80) goto LAB_1001a18c5;
        uVar3 = 1;
        if ((char)bVar1 < '\0') {
          uVar3 = 0x80;
          iVar2 = 0;
          do {
            uVar3 = uVar3 >> 1;
            iVar2 = iVar2 + -1;
          } while ((uVar3 & bVar1) != 0);
          uVar3 = -iVar2;
          if (4 < uVar3) {
            uVar3 = 4;
          }
          if (iVar2 == 0) {
            uVar3 = 1;
          }
          pbVar9 = (byte *)param_2;
          if (uVar3 != 0) goto LAB_1001a1808;
        }
        else {
LAB_1001a1808:
          lVar7 = 0;
          do {
            if ((uVar3 - 1 != (int)lVar7) && ((((byte *)param_2)[lVar7 + 1] & 0xc0) != 0x80))
            goto LAB_1001a18c5;
            lVar7 = lVar7 + 1;
          } while ((uint)lVar7 < uVar3);
          pbVar9 = (byte *)param_2 + lVar7;
        }
        local_38 = L'\xffffffff';
        local_40 = (byte *)param_2;
        // boost code
                  ((u8_to_u32_iterator<char_const*,char32_t> *)&local_40);
        wVar5 = local_38;
        if (wVar4 == L'\0') goto LAB_1001a1897;
        if (local_38 == L'\0') {
          return 1;
        }
        if (wVar4 != local_38) {
          wVar4 = DETAIL::toUpperCodePoint(wVar4);
          wVar5 = DETAIL::toUpperCodePoint(wVar5);
          if (wVar4 != wVar5) goto LAB_1001a18a4;
        }
        uVar3 = (uint)*pbVar8;
        param_1 = (char *)pbVar8;
        param_2 = (char *)pbVar9;
      } while ((*pbVar8 & 0xc0) != 0x80);
    }
  }
                    /* WARNING: Subroutine does not return */
  // boost code
}
}
