#include <ni/controller_editor/wstring.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

void wstring::__append_forward_unsafe(wchar_t* param_1, wchar_t* param_2) {
wstring *pwVar1;
  unsigned long long *puVar2;
  unsigned long long *puVar3;
  wstring wVar4;
  unsigned long long uVar5;
  unsigned long long uVar6;
  unsigned long long uVar7;
  wstring *pwVar8;
  long lVar9;
  unsigned long uVar10;
  long lVar11;
  unsigned long uVar12;
  unsigned long uVar13;
  unsigned long uVar14;
  unsigned long uVar15;
  unsigned long uVar16;
  unsigned int *puVar17;
  unsigned long long local_48;
  unsigned long local_40;
  unsigned int *local_38;
  
  wVar4 = *this;
  uVar15 = (unsigned long)(byte)wVar4;
  uVar14 = (long)param_2 - (long)param_1;
  uVar13 = (long)uVar14 >> 2;
  if (((byte)wVar4 & 1) == 0) {
    if (uVar14 == 0) {
      return this;
    }
    uVar16 = (unsigned long)((byte)wVar4 >> 1);
    pwVar1 = this + 4;
    uVar10 = 4;
  }
  else {
    if (uVar14 == 0) {
      return this;
    }
    uVar15 = *(unsigned long *)this;
    uVar16 = *(unsigned long *)(this + 8);
    uVar10 = (uVar15 & 0xfffffffffffffffe) - 1;
    pwVar1 = *(wstring **)(this + 0x10);
  }
  if ((pwVar1 <= param_1) && (param_1 < pwVar1 + uVar16 * 4)) {
    if (0x3fffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    if (uVar13 < 5) {
      local_48 = 0(local_48._1_7_,(char)(uVar14 >> 1)) & 0xfffffffffffffffe;
      puVar17 = (unsigned int *)((long)&local_48 + 4);
    }
    else {
      uVar15 = uVar13 + 4 & 0xfffffffffffffffc;
      puVar17 = (unsigned int *)new char[uVar15 * 4];
      local_48 = uVar15 | 1;
      local_38 = puVar17;
      local_40 = uVar13;
    }
    if (param_1 != param_2) {
      memcpy(puVar17,param_1,uVar14 & 0xfffffffffffffffc);
      puVar17 = (unsigned int *)((long)puVar17 + (uVar14 - 4 & 0xfffffffffffffffc) + 4);
    }
    *puVar17 = 0;
    puVar17 = local_38;
    if ((local_48 & 1) == 0) {
      puVar17 = (unsigned int *)((long)&local_48 + 4);
    }
    // std code if(1 param_1, 1 param_1, 1 param_1, 1 param_1, 1 param_1, 1 param_1, (local_48 & 1 == 0 {
      return this;
    }
    delete(local_38;
    return this;
  }
  if (uVar10 - uVar16 < uVar13 {
    // std code
    uVar15 = (unsigned long(byte*this;
  }
  if ((uVar15 & 1) == 0) {
    pwVar1 = this + 4;
    pwVar8 = pwVar1 + uVar16 * 4;
  }
  else {
    pwVar1 = *(wstring **)(this + 0x10);
    pwVar8 = pwVar1 + uVar16 * 4;
  }
  if (param_1 != param_2) {
    if ((0x1b < uVar14 - 4) &&
       ((uVar15 = uVar14 - 4 >> 2, (wstring *)(param_1 + uVar15 + 1) <= pwVar8 ||
        (pwVar1 + (uVar15 + uVar16) * 4 + 4 <= param_1)))) {
      uVar12 = uVar15 + 1 & 0xfffffffffffffff8;
      uVar10 = (uVar12 - 8 >> 3) + 1;
      uVar14 = (unsigned long)((uint)uVar10 & 3);
      if (uVar12 - 8 < 0x18) {
        lVar9 = 0;
      }
      else {
        lVar11 = -(uVar10 & 0xfffffffffffffffc);
        lVar9 = 0;
        do {
          uVar5 = *(unsigned long long *)(param_1 + lVar9 + 2);
          uVar6 = *(unsigned long long *)(param_1 + lVar9 + 4);
          uVar7 = *(unsigned long long *)(param_1 + lVar9 + 4 + 2);
          *(unsigned long long *)(pwVar1 + lVar9 * 4 + uVar16 * 4) = *(unsigned long long *)(param_1 + lVar9);
          *(unsigned long long *)(pwVar1 + lVar9 * 4 + uVar16 * 4 + 8) = uVar5;
          *(unsigned long long *)(pwVar1 + lVar9 * 4 + uVar16 * 4 + 0x10) = uVar6;
          *(unsigned long long *)(pwVar1 + lVar9 * 4 + uVar16 * 4 + 0x10 + 8) = uVar7;
          uVar5 = *(unsigned long long *)(param_1 + lVar9 + 8 + 2);
          uVar6 = *(unsigned long long *)(param_1 + lVar9 + 0xc);
          uVar7 = *(unsigned long long *)(param_1 + lVar9 + 0xc + 2);
          *(unsigned long long *)(pwVar1 + lVar9 * 4 + uVar16 * 4 + 0x20) =
               *(unsigned long long *)(param_1 + lVar9 + 8);
          *(unsigned long long *)(pwVar1 + lVar9 * 4 + uVar16 * 4 + 0x20 + 8) = uVar5;
          *(unsigned long long *)(pwVar1 + lVar9 * 4 + uVar16 * 4 + 0x30) = uVar6;
          *(unsigned long long *)(pwVar1 + lVar9 * 4 + uVar16 * 4 + 0x30 + 8) = uVar7;
          uVar5 = *(unsigned long long *)(param_1 + lVar9 + 0x10 + 2);
          uVar6 = *(unsigned long long *)(param_1 + lVar9 + 0x14);
          uVar7 = *(unsigned long long *)(param_1 + lVar9 + 0x14 + 2);
          *(unsigned long long *)(pwVar1 + lVar9 * 4 + uVar16 * 4 + 0x40) =
               *(unsigned long long *)(param_1 + lVar9 + 0x10);
          *(unsigned long long *)(pwVar1 + lVar9 * 4 + uVar16 * 4 + 0x40 + 8) = uVar5;
          *(unsigned long long *)(pwVar1 + lVar9 * 4 + uVar16 * 4 + 0x50) = uVar6;
          *(unsigned long long *)(pwVar1 + lVar9 * 4 + uVar16 * 4 + 0x50 + 8) = uVar7;
          uVar5 = *(unsigned long long *)(param_1 + lVar9 + 0x18 + 2);
          uVar6 = *(unsigned long long *)(param_1 + lVar9 + 0x1c);
          uVar7 = *(unsigned long long *)(param_1 + lVar9 + 0x1c + 2);
          *(unsigned long long *)(pwVar1 + lVar9 * 4 + uVar16 * 4 + 0x60) =
               *(unsigned long long *)(param_1 + lVar9 + 0x18);
          *(unsigned long long *)(pwVar1 + lVar9 * 4 + uVar16 * 4 + 0x60 + 8) = uVar5;
          *(unsigned long long *)(pwVar1 + lVar9 * 4 + uVar16 * 4 + 0x70) = uVar6;
          *(unsigned long long *)(pwVar1 + lVar9 * 4 + uVar16 * 4 + 0x70 + 8) = uVar7;
          lVar9 = lVar9 + 0x20;
          lVar11 = lVar11 + 4;
        } while (lVar11 != 0);
      }
      if (uVar14 != 0) {
        lVar11 = 0;
        do {
          puVar3 = (unsigned long long *)((long)param_1 + lVar11 + lVar9 * 4);
          uVar5 = puVar3[1];
          puVar2 = (unsigned long long *)((long)param_1 + lVar11 + lVar9 * 4 + 0x10);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          *(unsigned long long *)(pwVar1 + lVar11 + (lVar9 + uVar16) * 4) = *puVar3;
          *(unsigned long long *)(pwVar1 + lVar11 + (lVar9 + uVar16) * 4 + 8) = uVar5;
          *(unsigned long long *)(pwVar1 + lVar11 + (lVar9 + uVar16) * 4 + 0x10) = uVar6;
          *(unsigned long long *)(pwVar1 + lVar11 + (lVar9 + uVar16) * 4 + 0x10 + 8) = uVar7;
          lVar11 = lVar11 + 0x20;
        } while (uVar14 << 5 != lVar11);
      }
      pwVar8 = pwVar8 + uVar12 * 4;
      if (uVar15 + 1 == uVar12) return;
      param_1 = param_1 + uVar12;
    }
    do {
      *(wchar_t *)pwVar8 = *param_1;
      pwVar8 = pwVar8 + 4;
      param_1 = param_1 + 1;
    } while (param_2 != param_1);
  }
  *(wchar_t *)pwVar8 = L'\0';
  if (((byte)*this & 1) == 0) {
    *this = (wstring)((char)(uVar13 + uVar16) * '\x02');
  }
  else {
    *(unsigned long *)(this + 8) = uVar13 + uVar16;
  }
  return this;
}
}
