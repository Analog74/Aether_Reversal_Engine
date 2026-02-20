#include <ni/controller_editor/Font.hpp>
namespace NI::UIA::Font::getHorizontalAlignmentOffset(char const*, NI::UIA {

void Font::eAlignment, int) const {
Font *pFVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  Font *pFVar5;
  int *piVar6;
  Font *pFVar7;
  int iVar8;
  wchar32 local_68 [4];
  unsigned long long local_58;
  unsigned long long local_50;
  int local_48;
  uint local_34;
  
  iVar8 = 0;
  if ((param_3 & 0x1000) == 0) {
    local_68[0] = L'\0';
    local_68[1] = L'\0';
    local_68[2] = L'\0';
    local_68[3] = L'\0';
    local_50 = 0;
    local_48 = 1;
    local_58 = param_1;
    local_34 = param_3;
    ni::string::utf8_iterator::import_next_nfc_codepoint((utf8_iterator *)local_68);
    if (local_68[0] < L'\x01') {
      iVar8 = 0;
    }
    else {
      pFVar1 = this + 0x10;
      iVar8 = 0;
      do {
        if ((param_4 <= iVar8) || (local_68[0] == L'\n')) break;
        pFVar7 = *(Font **)pFVar1;
        if (pFVar7 == (Font *)0x0) {
LAB_100205f65:
          pFVar5 = pFVar1;
        }
        else {
          fVar2 = *(float *)(this + 0x44);
          pFVar5 = pFVar1;
          do {
            bVar3 = fVar2 != *(float *)(pFVar7 + 0x20);
            bVar4 = *(float *)(pFVar7 + 0x20) <= fVar2;
            if (!bVar4 || !bVar3) {
              pFVar5 = pFVar7;
            }
            pFVar7 = *(Font **)(pFVar7 + (unsigned long)(bVar4 && bVar3) * 8);
          } while (pFVar7 != (Font *)0x0);
          if ((pFVar5 == pFVar1) || (fVar2 < *(float *)(pFVar5 + 0x20))) goto LAB_100205f65;
        }
        piVar6 = (int *)DETAIL::FTRenderCache::getCharBitmap
                                  (*(FTRenderCache **)(pFVar5 + 0x28),local_68[0]);
        if (piVar6 != (int *)0x0) {
          iVar8 = iVar8 + (int)ROUND((double)*piVar6 * 0.015625);
        }
        if (local_48 == 2) {
          ni::string::utf8_iterator::import_next_nfd_codepoint((utf8_iterator *)local_68);
        }
        else if (local_48 == 1) {
          ni::string::utf8_iterator::import_next_nfc_codepoint((utf8_iterator *)local_68);
        }
        else {
          ni::string::utf8_iterator::import_next_codepoint((utf8_iterator *)local_68);
        }
      } while (L'\0' < local_68[0]);
    }
    if (iVar8 < param_4) {
      if ((local_34 & 1) == 0) {
        iVar8 = ((param_4 - iVar8) - ((param_4 - iVar8) + 1 >> 0x1f)) + 1 >> 1;
      }
      else {
        iVar8 = param_4 - iVar8;
      }
    }
    else {
      iVar8 = 0;
    }
  }
  return iVar8;
}
}
