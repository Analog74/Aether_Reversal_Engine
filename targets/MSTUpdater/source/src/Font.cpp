#include <ni/controller_editor/Font.hpp>
namespace NI::UIA::Font::getHorizontalAlignmentOffset(char const*, NI::UIA {

void Font::eAlignment, int) const {
Font *pFVar1;
  byte *pbVar2;
  float fVar3;
  byte bVar4;
  FTRenderCache *this_00;
  Font *pFVar5;
  Font *pFVar6;
  int *piVar7;
  Font *pFVar8;
  unsigned long uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  byte *local_40;
  wchar32 local_38;
  
  iVar13 = 0;
  if ((param_3 & 0x1000) == 0) {
    pFVar1 = this + 0x10;
    iVar14 = 0;
    pbVar2 = param_1;
    while( true ) {
      local_40 = pbVar2;
      local_38 = L'\xffffffff';
      // boost code
                ((u8_to_u32_iterator<char_const*,char32_t> *)&local_40);
      if (local_38 != L'\xffffffff') break;
      // boost code
                ((u8_to_u32_iterator<char_const*,char32_t> *)&local_40);
LAB_1000a8f3b:
      if ((param_4 <= iVar14) || (local_38 == L'\n')) goto LAB_1000a9063;
      if (*(Font **)pFVar1 == (Font *)0x0) {
LAB_1000a8f8e:
        pFVar6 = pFVar1;
      }
      else {
        fVar3 = *(float *)(this + 0x44);
        pFVar5 = pFVar1;
        pFVar8 = *(Font **)pFVar1;
        do {
          pFVar6 = pFVar8;
          if (fVar3 < *(float *)(pFVar6 + 0x20) || fVar3 == *(float *)(pFVar6 + 0x20)) {
            pFVar8 = *(Font **)pFVar6;
          }
          else {
            pFVar8 = *(Font **)(pFVar6 + 8);
            pFVar6 = pFVar5;
          }
          pFVar5 = pFVar6;
        } while (pFVar8 != (Font *)0x0);
        if ((pFVar6 == pFVar1) || (fVar3 < *(float *)(pFVar6 + 0x20))) goto LAB_1000a8f8e;
      }
      this_00 = *(FTRenderCache **)(pFVar6 + 0x28);
      if (local_38 == L'\xffffffff') {
        // boost code
                  ((u8_to_u32_iterator<char_const*,char32_t> *)&local_40);
      }
      piVar7 = (int *)DETAIL::FTRenderCache::getCharBitmap(this_00,local_38);
      if (piVar7 != (int *)0x0) {
        iVar14 = iVar14 + (int)ROUND((double)*piVar7 * 0.015625);
      }
      bVar4 = *local_40;
      pbVar2 = local_40;
      if ((bVar4 & 0xc0) == 0x80) {
LAB_1000a9098:
        local_40 = pbVar2;
                    /* WARNING: Subroutine does not return */
        // boost code
      }
      uVar10 = 0;
      if ((char)bVar4 < '\0') {
        uVar10 = 0;
        uVar11 = 0x80;
        do {
          uVar10 = uVar10 + 1;
          uVar11 = uVar11 >> 1;
        } while ((uVar11 & bVar4) != 0);
      }
      uVar9 = (unsigned long)uVar10;
      if (4 < uVar10) {
        uVar9 = 4;
      }
      if (uVar10 == 0) {
        uVar9 = 1;
      }
      uVar10 = (uint)uVar9;
      if (local_38 == L'\xffffffff') {
        if (uVar10 != 0) {
          lVar12 = 0;
          do {
            pbVar2 = local_40 + lVar12 + 1;
            if ((uVar10 - 1 != (int)lVar12) && ((*pbVar2 & 0xc0) != 0x80)) goto LAB_1000a9098;
            lVar12 = lVar12 + 1;
          } while ((uint)lVar12 < uVar10);
        }
      }
      else {
        pbVar2 = local_40 + uVar9;
      }
    }
    if (local_38 != L'\0') goto LAB_1000a8f3b;
LAB_1000a9063:
    iVar13 = 0;
    if ((iVar14 < param_4) && (iVar13 = param_4 - iVar14, (param_3 & 1) == 0)) {
      iVar13 = (iVar13 + 1) - (iVar13 + 1 >> 0x1f) >> 1;
    }
  }
  return iVar13;
}
}
