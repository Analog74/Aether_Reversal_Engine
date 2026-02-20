#include <ni/controller_editor/inner_parse_out.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::details::(anonymous namespace) {

void inner_parse_out::parse_from(char const*) {
byte *pbVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  unsigned long long uVar4;
  char *pcVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  byte bVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  byte *pbVar20;
  unsigned long uVar21;
  unsigned long uVar22;
  unsigned long uVar23;
  unsigned long uVar24;
  unsigned long long local_58;
  unsigned long uStack_50;
  byte *pbStack_48;
  inner_parse_out *local_40;
  byte *local_38;
  
  cVar6 = *param_1;
  pcVar9 = param_1;
  while ((cVar6 != '\0' && (cVar6 != '/'))) {
    if (cVar6 == ':') {
      cVar6 = *param_1;
      if (cVar6 < '\0') {
        uVar7 = ___maskrune((int)cVar6,0x100);
      }
      else {
        uVar7 = *(uint *)(PTR___DefaultRuneLocale_101ab4070 + (unsigned long)(uint)(int)cVar6 * 4 + 0x3c) &
                0x100;
      }
      if (uVar7 == 0) goto switchD_100538fa3_caseD_22;
      *(char **)this = param_1;
      bVar13 = param_1[1];
      pcVar9 = param_1 + 1;
      goto joined_r0x0001005390b9;
    }
    pcVar9 = pcVar9 + 1;
    cVar6 = *pcVar9;
  }
  bVar13 = *param_1;
joined_r0x00010053912a:
  if (bVar13 == 0x2f) {
    pbVar18 = (byte *)param_1;
    if (((byte *)param_1)[1] == 0x2f) {
      pbVar1 = (byte *)param_1 + 2;
      pbVar16 = (byte *)0x0;
      while( true ) {
      }
      switch(bVar13) {
      case 0x21:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x3a:
      case 0x3b:
      case 0x3d:
      case 0x40:
      case 0x5b:
      case 0x5d:
      case 0x5f:
      case 0x7e:
        goto switchD_100538fa3_caseD_21;
      default:
        goto switchD_100538fa3_caseD_22;
      }
    }
    bVar13 = *pbVar18;
    param_1 = (char *)pbVar18;
    if (bVar13 != 0x2f) return;
  }
  else {
    cVar6 = is_path_character((int)(char)bVar13);
    pbVar18 = (byte *)param_1;
    if (cVar6 == '\0') {
      if (bVar13 == 0x3f) {
        param_1 = (char *)((byte *)param_1 + 1);
        *(char **)(this + 0x48) = param_1;
        while( true ) {
        }
        *(char **)(this + 0x50) = param_1;
        bVar13 = *param_1;
      }
      uVar24 = 0((int7)((unsigned long)pbVar18 >> 8),1);
      if (bVar13 == 0x23) {
        pbVar18 = (byte *)param_1 + 1;
        *(byte **)(this + 0x58) = pbVar18;
        bVar13 = ((byte *)param_1)[1];
        while (bVar13 != 0) {
          cVar6 = is_path_character((int)(char)bVar13);
          if ((bVar13 != 0x3f) && (cVar6 == '\0')) goto switchD_100538fa3_caseD_22;
          pbVar1 = pbVar18 + 1;
          pbVar18 = pbVar18 + 1;
          bVar13 = *pbVar1;
        }
        *(byte **)(this + 0x60) = pbVar18;
      }
      return;
    }
  }
  *(byte **)(this + 0x38) = pbVar18;
  bVar13 = *pbVar18;
  param_1 = (char *)pbVar18;
  while( true ) {
  }
switchD_100538fa3_caseD_22:
  uVar24 = 0;
  return uVar24 & 0xffffffff;
joined_r0x0001005390b9:
  pcVar5 = pcVar9;
  if (bVar13 == 0x3a) return;
  if (((&utility::details::is_alnum(unsigned_char)::is_alnum_table)[bVar13] == '\0') &&
     ((0x2e < (uint)(int)(char)bVar13 ||
      ((0x680000000000U >> ((unsigned long)(uint)(int)(char)bVar13 & 0x3f) & 1) == 0))))
  goto switchD_100538fa3_caseD_22;
  bVar13 = pcVar5[1];
  pcVar9 = pcVar5 + 1;
  param_1 = pcVar5;
  goto joined_r0x0001005390b9;
  *(char **)(this + 8) = pcVar5;
  param_1 = param_1 + 2;
  bVar13 = *param_1;
  goto joined_r0x00010053912a;
  while( true ) {
  }
  if (bVar13 == 0x3a) {
    uVar23 = uVar23 - 0xf;
    *(byte **)(this + 0x20) = pbVar1;
    *(byte **)(this + 0x28) = (byte *)param_1 + (long)pbVar17 + 2;
    if (0xffffffffffffffef < uVar23) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    if (uVar23 < 0x17) {
      uVar21 = local_58 >> 8;
      local_58 = 0((int7)uVar21,cVar6);
      pbVar10 = (byte *)((long)&local_58 + 1);
    }
    else {
      pbVar10 = (byte *)new char[uVar24 & 0xfffffffffffffff0];
      local_58 = uVar24 & 0xfffffffffffffff0 | 1;
      uStack_50 = uVar23;
      pbStack_48 = pbVar10;
    }
    pbVar18 = local_38;
    this = local_40;
    if (uVar24 != 0x10) {
      pbVar11 = (byte *)param_1 + (long)pbVar17 + 3;
      if ((0x1f < (unsigned long)((long)param_1 - (long)pbVar14)) &&
         ((local_38 <= pbVar10 || ((byte *)param_1 + (long)pbVar10 + -(long)pbVar14 <= pbVar11)))) {
        uVar21 = uVar23 & 0xffffffffffffffe0;
        uVar24 = (uVar21 - 0x20 >> 5) + 1;
        if (uVar21 - 0x20 < 0x60) {
          lVar12 = 0;
        }
        else {
          pbVar14 = (byte *)param_1 + (long)pbVar17 + 0x73;
          lVar15 = -(uVar24 & 0xfffffffffffffffc);
          lVar12 = 0;
          do {
            uVar2 = *(unsigned long long *)(pbVar14 + -0x68);
            uVar3 = *(unsigned long long *)(pbVar14 + -0x60);
            uVar4 = *(unsigned long long *)(pbVar14 + -0x58);
            *(unsigned long long *)(pbVar10 + lVar12) = *(unsigned long long *)(pbVar14 + -0x70);
            *(unsigned long long *)(pbVar10 + lVar12 + 8) = uVar2;
            *(unsigned long long *)(pbVar10 + lVar12 + 0x10) = uVar3;
            *(unsigned long long *)(pbVar10 + lVar12 + 0x10 + 8) = uVar4;
            uVar2 = *(unsigned long long *)(pbVar14 + -0x48);
            uVar3 = *(unsigned long long *)(pbVar14 + -0x40);
            uVar4 = *(unsigned long long *)(pbVar14 + -0x38);
            *(unsigned long long *)(pbVar10 + lVar12 + 0x20) = *(unsigned long long *)(pbVar14 + -0x50);
            *(unsigned long long *)(pbVar10 + lVar12 + 0x20 + 8) = uVar2;
            *(unsigned long long *)(pbVar10 + lVar12 + 0x30) = uVar3;
            *(unsigned long long *)(pbVar10 + lVar12 + 0x30 + 8) = uVar4;
            uVar2 = *(unsigned long long *)(pbVar14 + -0x28);
            uVar3 = *(unsigned long long *)(pbVar14 + -0x20);
            uVar4 = *(unsigned long long *)(pbVar14 + -0x18);
            *(unsigned long long *)(pbVar10 + lVar12 + 0x40) = *(unsigned long long *)(pbVar14 + -0x30);
            *(unsigned long long *)(pbVar10 + lVar12 + 0x40 + 8) = uVar2;
            *(unsigned long long *)(pbVar10 + lVar12 + 0x50) = uVar3;
            *(unsigned long long *)(pbVar10 + lVar12 + 0x50 + 8) = uVar4;
            uVar2 = *(unsigned long long *)(pbVar14 + -8);
            uVar3 = *(unsigned long long *)pbVar14;
            uVar4 = *(unsigned long long *)(pbVar14 + 8);
            *(unsigned long long *)(pbVar10 + lVar12 + 0x60) = *(unsigned long long *)(pbVar14 + -0x10);
            *(unsigned long long *)(pbVar10 + lVar12 + 0x60 + 8) = uVar2;
            *(unsigned long long *)(pbVar10 + lVar12 + 0x70) = uVar3;
            *(unsigned long long *)(pbVar10 + lVar12 + 0x70 + 8) = uVar4;
            lVar12 = lVar12 + 0x80;
            pbVar14 = pbVar14 + 0x80;
            lVar15 = lVar15 + 4;
          } while (lVar15 != 0);
        }
        if ((uVar24 & 3) != 0) {
          lVar15 = 0;
          do {
            pbVar14 = (byte *)param_1 + lVar15 + lVar12 + 0x13;
            uVar2 = *(unsigned long long *)(pbVar20 + -0x11 + (long)pbVar14 + 8);
            uVar3 = *(unsigned long long *)(pbVar17 + (long)pbVar14);
            uVar4 = *(unsigned long long *)(pbVar17 + (long)pbVar14 + 8);
            *(unsigned long long *)(pbVar10 + lVar15 + lVar12) =
                 *(unsigned long long *)(pbVar20 + -0x11 + (long)pbVar14);
            *(unsigned long long *)(pbVar10 + lVar15 + lVar12 + 8) = uVar2;
            *(unsigned long long *)(pbVar10 + lVar15 + lVar12 + 0x10) = uVar3;
            *(unsigned long long *)(pbVar10 + lVar15 + lVar12 + 0x10 + 8) = uVar4;
            lVar15 = lVar15 + 0x20;
          } while ((unsigned long)((byte)(((byte)(((byte)uVar23 & 0x60) - 0x20) >> 5) + 1) & 3) << 5 !=
                   lVar15);
        }
        pbVar10 = pbVar10 + uVar21;
        this = local_40;
        if (uVar23 == uVar21) return;
        pbVar11 = (byte *)param_1 + (uVar22 & 0xffffffffffffffe0) + (long)pbVar17 + 3;
      }
      this = local_40;
      lVar12 = 0;
      do {
        pbVar10[lVar12] = pbVar11[lVar12];
        lVar19 = lVar12 + 1;
        lVar15 = (-1 - (long)param_1) + lVar12;
        lVar12 = lVar19;
      } while (pbVar11 + lVar15 != pbVar16);
      pbVar10 = pbVar10 + lVar19;
    }
    *pbVar10 = 0;
    iVar8 = utility::conversions::details::scan_string<int>((string *)&local_58);
    *(int *)(this + 0x30) = iVar8;
    if ((local_58 & 1) != 0) {
      delete(pbStack_48);
    }
    pbVar16 = *(byte **)(this + 0x20);
  }
  else {
    *(byte **)(this + 0x20) = pbVar1;
    *(byte **)(this + 0x28) = pbVar18;
    pbVar16 = pbVar1;
  }
  bVar13 = *pbVar16;
  cVar6 = is_user_info_character((int)(char)bVar13);
  pbVar17 = pbVar16;
  if (cVar6 != '\0') {
    pbVar14 = *(byte **)(this + 0x28);
    pbVar18 = local_38;
    do {
      pbVar17 = pbVar14;
      local_38 = pbVar18;
      if (pbVar16 == pbVar14) break;
      bVar13 = pbVar16[1];
      cVar6 = is_user_info_character((int)(char)bVar13);
      pbVar16 = pbVar16 + 1;
      pbVar17 = pbVar16;
      pbVar18 = local_38;
    } while (cVar6 != '\0');
  }
  if (bVar13 == 0x40) {
    *(byte **)(this + 0x20) = pbVar17 + 1;
    *(byte **)(this + 0x10) = pbVar1;
    *(byte **)(this + 0x18) = pbVar17;
  }
  return;
}
}
