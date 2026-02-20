#include <ni/controller_editor/utf16_to_utf8_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace utility::conversions {

void utf16_to_utf8(1 param_1, std::u16string const& {
conversions cVar1;
  ushort uVar2;
  unsigned long uVar3;
  long lVar4;
  unsigned long uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  unsigned long uVar9;
  u16string *puVar10;
  conversions *pcVar11;
  
  if (((byte)*param_1 & 1) == 0) {
    uVar9 = (unsigned long)((byte)*param_1 >> 1);
    puVar10 = param_1 + 2;
  }
  else {
    uVar9 = *(unsigned long *)(param_1 + 8);
    puVar10 = *(u16string **)(param_1 + 0x10);
  }
  uVar3 = count_utf16_to_utf8(param_1);
  if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (uVar3 < 0x17) {
    *this = (conversions)((char)uVar3 * '\x02');
    pcVar11 = this + 1;
    if (uVar3 == 0) {
      *pcVar11 = (conversions)0x0;
      cVar1 = *this;
      goto joined_r0x00010052f0b6;
    }
  }
  else {
    uVar5 = uVar3 + 0x10 & 0xfffffffffffffff0;
    pcVar11 = (conversions *)new char[uVar5];
    *(conversions **)(this + 0x10) = pcVar11;
    *(unsigned long *)this = uVar5 | 1;
    *(unsigned long *)(this + 8) = uVar3;
  }
  ___bzero(pcVar11,uVar3);
  pcVar11[uVar3] = (conversions)0x0;
  cVar1 = *this;
joined_r0x00010052f0b6:
  if (((byte)cVar1 & 1) == 0) {
    pcVar11 = this + 1;
  }
  else {
    pcVar11 = *(conversions **)(this + 0x10);
  }
  if (uVar9 != 0) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      uVar2 = *(ushort *)(puVar10 + uVar3 * 2);
      uVar7 = (uint)uVar2;
      if (uVar7 < 0x800) {
        if (uVar2 < 0x80) {
          lVar6 = 1;
          lVar8 = lVar4;
        }
        else {
          lVar8 = lVar4 + 1;
          pcVar11[lVar4] = (conversions)((byte)(uVar2 >> 6) | 0xc0);
          uVar7 = (uint)((byte)uVar2 & 0x3f | 0x80);
          lVar6 = 2;
        }
      }
      else if ((uVar7 & 0xfc00) == 0xd800) {
        uVar2 = *(ushort *)(puVar10 + uVar3 * 2 + 2);
        uVar3 = uVar3 + 1;
        uVar7 = (uVar2 - 0xdc00 | uVar7 * 0x400 + 0xfca00000) + 0x10000;
        pcVar11[lVar4] = (conversions)((byte)(uVar7 >> 0x12) | 0xf0);
        pcVar11[lVar4 + 1] = (conversions)((byte)(uVar7 >> 0xc) & 0x3f | 0x80);
        lVar8 = lVar4 + 3;
        pcVar11[lVar4 + 2] = (conversions)((byte)(uVar7 >> 6) & 0x3f | 0x80);
        uVar7 = (uint)((byte)uVar2 & 0x3f | 0x80);
        lVar6 = 4;
      }
      else {
        pcVar11[lVar4] = (conversions)((byte)(uVar2 >> 0xc) | 0xe0);
        lVar8 = lVar4 + 2;
        pcVar11[lVar4 + 1] = (conversions)((byte)(uVar2 >> 6) & 0x3f | 0x80);
        uVar7 = (uint)((byte)uVar2 & 0x3f | 0x80);
        lVar6 = 3;
      }
      lVar4 = lVar4 + lVar6;
      pcVar11[lVar8] = SUB41(uVar7,0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar9);
  }
  return;
}
}
