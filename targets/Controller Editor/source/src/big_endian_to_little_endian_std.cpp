#include <ni/controller_editor/big_endian_to_little_endian_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::(anonymous namespace) {

void big_endian_to_little_endian(2 param_2, 2 param_2, std::u16string, bool {
byte bVar1;
  ushort uVar2;
  unsigned long long uVar3;
  unsigned long long uVar4;
  unsigned long long uVar5;
  unsigned long long uVar6;
  unsigned long long uVar7;
  unsigned long long uVar8;
  unsigned long long uVar9;
  unsigned long uVar10;
  byte *pbVar11;
  unsigned long uVar12;
  byte *pbVar13;
  ushort *puVar14;
  long lVar15;
  unsigned long uVar16;
  unsigned long uVar17;
  long lVar18;
  unsigned long uVar19;
  
  if (param_3 == '\0' {
    bVar1 = *param_2;
  }
  else {
    bVar1 = *param_2;
    if ((bVar1 & 1) != 0) {
      uVar17 = *(unsigned long *)(param_2 + 8);
      if (uVar17 == 0) return;
      pbVar11 = *(byte **)(param_2 + 0x10);
      uVar19 = uVar17 - 1;
      if (uVar19 != 0) return;
joined_r0x00010053f358:
      if ((bVar1 & 1) == 0) {
        *param_2 = (char)uVar19 * '\x02';
      }
      else {
        *(unsigned long *)(param_2 + 8) = uVar19;
      }
      (pbVar11 + uVar17 * 2 + -2)[0] = 0;
      (pbVar11 + uVar17 * 2 + -2)[1] = 0;
      return;
    }
    if (1 < bVar1) {
      uVar17 = (unsigned long)(bVar1 >> 1);
      pbVar11 = param_2 + 2;
      uVar19 = uVar17 - 1;
      if (uVar19 == 0) goto joined_r0x00010053f358;
      uVar10 = uVar19;
      pbVar13 = pbVar11;
      if (uVar19 < 0x10) {
        uVar12 = 0;
        do {
          *(void2 *)(pbVar13 + uVar12 * 2) = *(void2 *)(pbVar13 + uVar12 * 2 + 2);
          uVar12 = uVar12 + 1;
        } while (uVar10 != uVar12);
      }
      else {
        uVar16 = uVar19 & 0xfffffffffffffff0;
        uVar12 = (uVar16 - 0x10 >> 4) + 1;
        uVar10 = (unsigned long)((uint)uVar12 & 3);
        if (uVar16 - 0x10 < 0x30) {
          lVar18 = 0;
        }
        else {
          lVar15 = -(uVar12 & 0xfffffffffffffffc);
          lVar18 = 0;
          do {
            uVar3 = *(unsigned long long *)(pbVar11 + lVar18 * 2 + 2 + 8);
            uVar4 = *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x12);
            uVar5 = *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x12 + 8);
            uVar6 = *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x22);
            uVar7 = *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x22 + 8);
            uVar8 = *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x32);
            uVar9 = *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x32 + 8);
            *(unsigned long long *)(pbVar11 + lVar18 * 2) = *(unsigned long long *)(pbVar11 + lVar18 * 2 + 2);
            *(unsigned long long *)(pbVar11 + lVar18 * 2 + 8) = uVar3;
            *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x10) = uVar4;
            *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x10 + 8) = uVar5;
            *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x20) = uVar6;
            *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x20 + 8) = uVar7;
            *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x30) = uVar8;
            *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x30 + 8) = uVar9;
            uVar3 = *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x42 + 8);
            uVar4 = *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x52);
            uVar5 = *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x52 + 8);
            *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x40) =
                 *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x42);
            *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x40 + 8) = uVar3;
            *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x50) = uVar4;
            *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x50 + 8) = uVar5;
            uVar3 = *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x62 + 8);
            uVar4 = *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x72);
            uVar5 = *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x72 + 8);
            *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x60) =
                 *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x62);
            *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x60 + 8) = uVar3;
            *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x70) = uVar4;
            *(unsigned long long *)(pbVar11 + lVar18 * 2 + 0x70 + 8) = uVar5;
            lVar18 = lVar18 + 0x40;
            lVar15 = lVar15 + 4;
          } while (lVar15 != 0);
        }
        if (uVar10 != 0) {
          lVar15 = 0;
          do {
            uVar3 = *(unsigned long long *)(pbVar11 + lVar15 + lVar18 * 2 + 2 + 8);
            uVar4 = *(unsigned long long *)(pbVar11 + lVar15 + lVar18 * 2 + 0x12);
            uVar5 = *(unsigned long long *)(pbVar11 + lVar15 + lVar18 * 2 + 0x12 + 8);
            *(unsigned long long *)(pbVar11 + lVar15 + lVar18 * 2) =
                 *(unsigned long long *)(pbVar11 + lVar15 + lVar18 * 2 + 2);
            *(unsigned long long *)(pbVar11 + lVar15 + lVar18 * 2 + 8) = uVar3;
            *(unsigned long long *)(pbVar11 + lVar15 + lVar18 * 2 + 0x10) = uVar4;
            *(unsigned long long *)(pbVar11 + lVar15 + lVar18 * 2 + 0x10 + 8) = uVar5;
            lVar15 = lVar15 + 0x20;
          } while (uVar10 << 5 != lVar15);
        }
        if (uVar19 != uVar16) {
          uVar10 = (unsigned long)((uint)uVar19 & 0xf);
          pbVar13 = pbVar11 + uVar16 * 2;
          return;
        }
      }
      bVar1 = *param_2;
      goto joined_r0x00010053f358;
    }
  }
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 2) return;
    uVar17 = (unsigned long)(bVar1 >> 1);
  }
  else {
    uVar17 = *(unsigned long *)(param_2 + 8);
    if (uVar17 == 0) return;
  }
  lVar15 = 0;
  lVar18 = 0;
  while( true ) {
    uVar17 = uVar17 - 1;
    pbVar11 = param_2 + 2;
    if ((bVar1 & 1) != 0) {
      pbVar11 = *(byte **)(param_2 + 0x10);
    }
    uVar2 = *(ushort *)(pbVar11 + lVar15);
    *(ushort *)(pbVar11 + lVar15) = uVar2 << 8;
    if ((*param_2 & 1) == 0) {
      puVar14 = (ushort *)(param_2 + lVar18 * 2 + 2);
      pbVar11 = param_2 + 2;
    }
    else {
      pbVar11 = *(byte **)(param_2 + 0x10);
      puVar14 = (ushort *)(pbVar11 + lVar15);
    }
    *(ushort *)(pbVar11 + lVar15) = uVar2 >> 8 | *puVar14;
    if (uVar17 == 0) break;
    lVar18 = lVar18 + 1;
    bVar1 = *param_2;
    lVar15 = lVar15 + 2;
  }
  *(unsigned long long *)(this + 0x10) = *(unsigned long long *)(param_2 + 0x10);
  uVar3 = *(unsigned long long *)(param_2 + 8);
  *(unsigned long long *)this = *(unsigned long long *)param_2;
  *(unsigned long long *)(this + 8) = uVar3;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  return;
}
}
