#include <ni/controller_editor/allocator_char16_t___.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std::deque<char16_t, std {

void allocator<char16_t> >::__add_back_capacity(unsigned long) {
unsigned long long *puVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  unsigned long long uVar4;
  unsigned long uVar5;
  char *pcVar6;
  void *pvVar7;
  long lVar8;
  unsigned long uVar9;
  long lVar10;
  unsigned long long *puVar11;
  char *pcVar12;
  deque<char16_t,// std code
  char *pcVar14;
  unsigned long uVar15;
  long lVar16;
  long lVar17;
  unsigned long uVar18;
  unsigned long uVar19;
  unsigned long uVar20;
  unsigned long uVar21;
  long lVar22;
  deque<char16_t,// std code
  deque<char16_t,// std code
  char *pcVar25;
  size_t sVar26;
  deque<char16_t,// std code
  char *pcVar28;
  char *pcVar29;
  unsigned long long *puVar30;
  wchar16 *local_58;
  unsigned long local_50;
  deque<char16_t,// std code
  char *local_40;
  deque<char16_t,// std code
  
  puVar30 = *(unsigned long long **)(this + 8);
  pdVar23 = *(deque<char16_t,// std code
  pdVar13 = pdVar23 + -(long)puVar30;
  uVar5 = (pdVar13 == (deque<char16_t,// std code
  uVar5 = ((uVar5 >> 0xb) + 1) - (unsigned long)((uVar5 & 0x7ff) == 0);
  local_50 = *(unsigned long *)(this + 0x20) >> 0xb;
  if (uVar5 < local_50) {
    local_50 = uVar5;
  }
  uVar5 = uVar5 - local_50;
  local_48 = this;
  if (uVar5 == 0) {
    *(unsigned long *)(this + 0x20) = *(unsigned long *)(this + 0x20) + local_50 * -0x800;
    if (local_50 != 0) {
      do {
        pcVar6 = (char *)*puVar30;
        pdVar24 = (deque<char16_t,// std code
        *(deque<char16_t,// std code
        if (pdVar23 == *(deque<char16_t,// std code
          pdVar27 = *(deque<char16_t,// std code
          if (pdVar24 < pdVar27 || (long)pdVar24 - (long)pdVar27 == 0) {
            uVar5 = (long)pdVar23 - (long)pdVar27 >> 2;
            if ((long)pdVar23 - (long)pdVar27 == 0) {
              uVar5 = 1;
            }
            local_40 = pcVar6;
            local_38 = pdVar27;
            if (0x1fffffffffffffff < uVar5) return;
            uVar21 = uVar5 >> 2;
            pvVar7 = new char[uVar5 * 8];
            pcVar6 = local_40;
            this = local_48;
            pdVar13 = (deque<char16_t,// std code
            lVar22 = (long)pdVar23 - (long)pdVar24;
            pdVar23 = pdVar13;
            if (lVar22 != 0) {
              pdVar23 = pdVar13 + lVar22;
              uVar9 = lVar22 - 8;
              pdVar27 = pdVar13;
              if ((0x17 < uVar9) &&
                 (((void *)((long)puVar30 + (uVar9 & 0xfffffffffffffff8) + 0x10) <=
                   (void *)((long)pvVar7 + uVar21 * 8) ||
                  ((deque<char16_t,// std code
                   ((long)pvVar7 + (uVar9 & 0xfffffffffffffff8) + uVar21 * 8 + 8) <= pdVar24)))) {
                uVar20 = (uVar9 >> 3) + 1;
                uVar18 = uVar20 & 0xfffffffffffffffc;
                uVar15 = (uVar18 - 4 >> 2) + 1;
                uVar9 = (unsigned long)((uint)uVar15 & 3);
                if (uVar18 - 4 < 0xc) {
                  lVar8 = 0;
                }
                else {
                  lVar10 = -(uVar15 & 0xfffffffffffffffc);
                  lVar8 = 0;
                  do {
                    uVar2 = (puVar30 + lVar8 + 1)[1];
                    uVar3 = puVar30[lVar8 + 3];
                    uVar4 = (puVar30 + lVar8 + 3)[1];
                    puVar11 = (unsigned long long *)((long)pvVar7 + lVar8 * 8 + uVar21 * 8);
                    *puVar11 = puVar30[lVar8 + 1];
                    puVar11[1] = uVar2;
                    puVar11 = (unsigned long long *)((long)pvVar7 + lVar8 * 8 + uVar21 * 8 + 0x10);
                    *puVar11 = uVar3;
                    puVar11[1] = uVar4;
                    uVar2 = (puVar30 + lVar8 + 5)[1];
                    uVar3 = puVar30[lVar8 + 7];
                    uVar4 = (puVar30 + lVar8 + 7)[1];
                    puVar11 = (unsigned long long *)((long)pvVar7 + lVar8 * 8 + uVar21 * 8 + 0x20);
                    *puVar11 = puVar30[lVar8 + 5];
                    puVar11[1] = uVar2;
                    puVar11 = (unsigned long long *)((long)pvVar7 + lVar8 * 8 + uVar21 * 8 + 0x30);
                    *puVar11 = uVar3;
                    puVar11[1] = uVar4;
                    uVar2 = (puVar30 + lVar8 + 9)[1];
                    uVar3 = puVar30[lVar8 + 0xb];
                    uVar4 = (puVar30 + lVar8 + 0xb)[1];
                    puVar11 = (unsigned long long *)((long)pvVar7 + lVar8 * 8 + uVar21 * 8 + 0x40);
                    *puVar11 = puVar30[lVar8 + 9];
                    puVar11[1] = uVar2;
                    puVar11 = (unsigned long long *)((long)pvVar7 + lVar8 * 8 + uVar21 * 8 + 0x50);
                    *puVar11 = uVar3;
                    puVar11[1] = uVar4;
                    uVar2 = (puVar30 + lVar8 + 0xd)[1];
                    uVar3 = puVar30[lVar8 + 0xf];
                    uVar4 = (puVar30 + lVar8 + 0xf)[1];
                    puVar11 = (unsigned long long *)((long)pvVar7 + lVar8 * 8 + uVar21 * 8 + 0x60);
                    *puVar11 = puVar30[lVar8 + 0xd];
                    puVar11[1] = uVar2;
                    puVar11 = (unsigned long long *)((long)pvVar7 + lVar8 * 8 + uVar21 * 8 + 0x70);
                    *puVar11 = uVar3;
                    puVar11[1] = uVar4;
                    lVar8 = lVar8 + 0x10;
                    lVar10 = lVar10 + 4;
                  } while (lVar10 != 0);
                }
                if (uVar9 != 0) {
                  lVar10 = uVar21 * 8 + lVar8 * 8;
                  lVar16 = 0;
                  do {
                    puVar1 = (unsigned long long *)((long)puVar30 + lVar16 + lVar8 * 8 + 8);
                    uVar2 = puVar1[1];
                    puVar11 = (unsigned long long *)((long)puVar30 + lVar16 + lVar8 * 8 + 0x18);
                    uVar3 = *puVar11;
                    uVar4 = puVar11[1];
                    puVar11 = (unsigned long long *)((long)pvVar7 + lVar16 + lVar10);
                    *puVar11 = *puVar1;
                    puVar11[1] = uVar2;
                    puVar11 = (unsigned long long *)((long)pvVar7 + lVar16 + lVar10 + 0x10);
                    *puVar11 = uVar3;
                    puVar11[1] = uVar4;
                    lVar16 = lVar16 + 0x20;
                  } while (uVar9 << 5 != lVar16);
                }
                if (uVar20 == uVar18) return;
                pdVar24 = pdVar24 + uVar18 * 8;
                pdVar27 = pdVar13 + uVar18 * 8;
              }
              lVar8 = 0;
              do {
                *(unsigned long long *)(pdVar27 + lVar8) = *(unsigned long long *)(pdVar24 + lVar8);
                lVar8 = lVar8 + 8;
              } while (((uVar21 * 8 + (lVar22 >> 3) * 8) - (long)pdVar27) + (long)pvVar7 != lVar8);
            }
            *(void **)local_48 = pvVar7;
            *(deque<char16_t,// std code
            *(deque<char16_t,// std code
            *(void **)(local_48 + 0x18) = (void *)((long)pvVar7 + uVar5 * 8);
            pdVar13 = local_38;
            if (local_38 != (deque<char16_t,// std code
              delete(local_38);
              pdVar23 = *(deque<char16_t,// std code
            }
          }
          else {
            lVar22 = (long)pdVar24 - (long)pdVar27 >> 3;
            lVar22 = (lVar22 - (lVar22 + 1 >> 0x3f)) + 1 >> 1;
            pdVar27 = pdVar24 + lVar22 * -8;
            sVar26 = (long)pdVar23 - (long)pdVar24;
            if (sVar26 != 0) {
              pdVar13 = pdVar27;
              _memmove(pdVar27,pdVar24,sVar26);
              pdVar24 = *(deque<char16_t,// std code
            }
            pdVar23 = pdVar27 + sVar26;
            *(deque<char16_t,// std code
            *(deque<char16_t,// std code
            this = local_48;
          }
        }
        *(char **)pdVar23 = pcVar6;
        pdVar23 = (deque<char16_t,// std code
        *(deque<char16_t,// std code
        local_50 = local_50 - 1;
        if (local_50 == 0) {
          return;
        }
        puVar30 = *(unsigned long long **)(this + 8);
      } while( true );
    }
  }
  else {
    lVar22 = (long)*(deque<char16_t,// std code
    pdVar13 = (deque<char16_t,// std code
    if ((unsigned long)((lVar22 >> 3) - (long)pdVar13) < uVar5) {
      pdVar23 = (deque<char16_t,// std code
      if (pdVar23 < pdVar13 + uVar5) {
        pdVar23 = pdVar13 + uVar5;
      }
      if (pdVar23 == (deque<char16_t,// std code
        pcVar6 = (char *)0x0;
      }
      else {
        if ((deque<char16_t,// std code
                    /* WARNING: Subroutine does not return */
          // std code
        }
        pcVar6 = (char *)new char[(long]pdVar23 * 8);
      }
      lVar22 = local_50 * -0x800;
      pcVar25 = pcVar6 + ((long)pdVar13 - local_50) * 8;
      local_38 = (deque<char16_t,// std code
      pcVar28 = pcVar25;
      do {
        pcVar14 = (char *)0x1000;
        local_40 = pcVar6;
        pvVar7 = new char[0x1000];
        pcVar29 = pcVar28;
        pcVar6 = local_40;
        if ((deque<char16_t,// std code
          if (pcVar28 < local_40 || (long)pcVar28 - (long)local_40 == 0) {
            uVar21 = (long)local_38 - (long)local_40 >> 2;
            if ((long)local_38 - (long)local_40 == 0) {
              uVar21 = 1;
            }
            if (0x1fffffffffffffff < uVar21) {
                    /* WARNING: Subroutine does not return */
              // std code
            }
            pcVar6 = (char *)new char[uVar21 * 8];
            uVar9 = uVar21 >> 2;
            pcVar29 = pcVar6 + uVar9 * 8;
            lVar8 = (long)local_38 - (long)pcVar28;
            pcVar25 = pcVar29;
            if (lVar8 != 0) {
              pcVar25 = pcVar29 + lVar8;
              uVar15 = lVar8 - 8;
              pcVar14 = pcVar29;
              if ((0x17 < uVar15) &&
                 ((pcVar28 + (uVar15 & 0xfffffffffffffff8) + 8 <= pcVar6 + uVar9 * 8 ||
                  (pcVar6 + (uVar15 & 0xfffffffffffffff8) + uVar9 * 8 + 8 <= pcVar28)))) {
                uVar19 = (uVar15 >> 3) + 1;
                uVar20 = uVar19 & 0x3ffffffffffffffc;
                uVar18 = (uVar20 - 4 >> 2) + 1;
                uVar15 = (unsigned long)((uint)uVar18 & 3);
                if (uVar20 - 4 < 0xc) {
                  lVar10 = 0;
                }
                else {
                  lVar16 = -(uVar18 & 0xfffffffffffffffc);
                  lVar10 = 0;
                  do {
                    uVar2 = *(unsigned long long *)(pcVar28 + lVar10 * 8 + 8);
                    uVar3 = *(unsigned long long *)(pcVar28 + lVar10 * 8 + 0x10);
                    uVar4 = *(unsigned long long *)(pcVar28 + lVar10 * 8 + 0x10 + 8);
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar9 * 8) =
                         *(unsigned long long *)(pcVar28 + lVar10 * 8);
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar9 * 8 + 8) = uVar2;
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar9 * 8 + 0x10) = uVar3;
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar9 * 8 + 0x10 + 8) = uVar4;
                    uVar2 = *(unsigned long long *)(pcVar28 + lVar10 * 8 + 0x20 + 8);
                    uVar3 = *(unsigned long long *)(pcVar28 + lVar10 * 8 + 0x30);
                    uVar4 = *(unsigned long long *)(pcVar28 + lVar10 * 8 + 0x30 + 8);
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar9 * 8 + 0x20) =
                         *(unsigned long long *)(pcVar28 + lVar10 * 8 + 0x20);
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar9 * 8 + 0x20 + 8) = uVar2;
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar9 * 8 + 0x30) = uVar3;
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar9 * 8 + 0x30 + 8) = uVar4;
                    uVar2 = *(unsigned long long *)(pcVar28 + lVar10 * 8 + 0x40 + 8);
                    uVar3 = *(unsigned long long *)(pcVar28 + lVar10 * 8 + 0x50);
                    uVar4 = *(unsigned long long *)(pcVar28 + lVar10 * 8 + 0x50 + 8);
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar9 * 8 + 0x40) =
                         *(unsigned long long *)(pcVar28 + lVar10 * 8 + 0x40);
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar9 * 8 + 0x40 + 8) = uVar2;
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar9 * 8 + 0x50) = uVar3;
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar9 * 8 + 0x50 + 8) = uVar4;
                    uVar2 = *(unsigned long long *)(pcVar28 + lVar10 * 8 + 0x60 + 8);
                    uVar3 = *(unsigned long long *)(pcVar28 + lVar10 * 8 + 0x70);
                    uVar4 = *(unsigned long long *)(pcVar28 + lVar10 * 8 + 0x70 + 8);
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar9 * 8 + 0x60) =
                         *(unsigned long long *)(pcVar28 + lVar10 * 8 + 0x60);
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar9 * 8 + 0x60 + 8) = uVar2;
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar9 * 8 + 0x70) = uVar3;
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar9 * 8 + 0x70 + 8) = uVar4;
                    lVar10 = lVar10 + 0x10;
                    lVar16 = lVar16 + 4;
                  } while (lVar16 != 0);
                }
                if (uVar15 != 0) {
                  lVar16 = uVar9 * 8 + lVar10 * 8;
                  lVar17 = 0;
                  do {
                    uVar2 = *(unsigned long long *)(pcVar28 + lVar17 + lVar10 * 8 + 8);
                    uVar3 = *(unsigned long long *)(pcVar28 + lVar17 + lVar10 * 8 + 0x10);
                    uVar4 = *(unsigned long long *)(pcVar28 + lVar17 + lVar10 * 8 + 0x10 + 8);
                    *(unsigned long long *)(pcVar6 + lVar17 + lVar16) =
                         *(unsigned long long *)(pcVar28 + lVar17 + lVar10 * 8);
                    *(unsigned long long *)(pcVar6 + lVar17 + lVar16 + 8) = uVar2;
                    *(unsigned long long *)(pcVar6 + lVar17 + lVar16 + 0x10) = uVar3;
                    *(unsigned long long *)(pcVar6 + lVar17 + lVar16 + 0x10 + 8) = uVar4;
                    lVar17 = lVar17 + 0x20;
                  } while (uVar15 << 5 != lVar17);
                }
                if (uVar19 == uVar20) return;
                pcVar28 = pcVar28 + uVar20 * 8;
                pcVar14 = pcVar29 + uVar20 * 8;
              }
              pcVar12 = (char *)0x0;
              do {
                *(unsigned long long *)(pcVar14 + (long)pcVar12) = *(unsigned long long *)(pcVar28 + (long)pcVar12);
                pcVar12 = pcVar12 + 8;
              } while (pcVar6 + ((uVar9 * 8 + (lVar8 >> 3) * 8) - (long)pcVar14) != pcVar12);
            }
            local_38 = (deque<char16_t,// std code
            pcVar14 = local_40;
            if (local_40 != (char *)0x0) {
              delete(local_40);
            }
          }
          else {
            lVar8 = (long)pcVar28 - (long)local_40 >> 3;
            pcVar29 = pcVar28 + ((lVar8 - (lVar8 + 1 >> 0x3f)) + 1U & 0x3ffffffffffffffe) * -4;
            sVar26 = (long)local_38 - (long)pcVar28;
            if (sVar26 != 0) {
              pcVar14 = pcVar29;
              _memmove(pcVar29,pcVar28,sVar26);
            }
            pcVar25 = pcVar29 + sVar26;
            pcVar6 = local_40;
          }
        }
        *(void **)pcVar25 = pvVar7;
        pcVar25 = pcVar25 + 8;
        uVar5 = uVar5 - 1;
        pcVar28 = pcVar29;
      } while (uVar5 != 0);
      puVar30 = *(unsigned long long **)(local_48 + 8);
      uVar21 = local_50;
      uVar5 = local_50;
      while (local_50 = uVar21, local_50 != 0) {
        if ((deque<char16_t,// std code
          if (pcVar29 < pcVar6 || (long)pcVar29 - (long)pcVar6 == 0) {
            uVar5 = (long)local_38 - (long)pcVar6 >> 2;
            if ((long)local_38 - (long)pcVar6 == 0) {
              uVar5 = 1;
            }
            local_40 = pcVar6;
            if (0x1fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
              // std code
            }
            pcVar6 = (char *)new char[uVar5 * 8];
            uVar21 = uVar5 >> 2;
            pcVar28 = pcVar6 + uVar21 * 8;
            lVar8 = (long)local_38 - (long)pcVar29;
            pcVar25 = pcVar28;
            if (lVar8 != 0) {
              pcVar25 = pcVar28 + lVar8;
              uVar9 = lVar8 - 8;
              pcVar14 = pcVar28;
              if ((0x17 < uVar9) &&
                 ((pcVar29 + (uVar9 & 0xfffffffffffffff8) + 8 <= pcVar6 + uVar21 * 8 ||
                  (pcVar6 + (uVar9 & 0xfffffffffffffff8) + uVar21 * 8 + 8 <= pcVar29)))) {
                uVar20 = (uVar9 >> 3) + 1;
                uVar18 = uVar20 & 0x3ffffffffffffffc;
                uVar15 = (uVar18 - 4 >> 2) + 1;
                uVar9 = (unsigned long)((uint)uVar15 & 3);
                if (uVar18 - 4 < 0xc) {
                  lVar10 = 0;
                }
                else {
                  lVar16 = -(uVar15 & 0xfffffffffffffffc);
                  lVar10 = 0;
                  do {
                    uVar2 = *(unsigned long long *)(pcVar29 + lVar10 * 8 + 8);
                    uVar3 = *(unsigned long long *)(pcVar29 + lVar10 * 8 + 0x10);
                    uVar4 = *(unsigned long long *)(pcVar29 + lVar10 * 8 + 0x10 + 8);
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8) =
                         *(unsigned long long *)(pcVar29 + lVar10 * 8);
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 8) = uVar2;
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x10) = uVar3;
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x10 + 8) = uVar4;
                    uVar2 = *(unsigned long long *)(pcVar29 + lVar10 * 8 + 0x20 + 8);
                    uVar3 = *(unsigned long long *)(pcVar29 + lVar10 * 8 + 0x30);
                    uVar4 = *(unsigned long long *)(pcVar29 + lVar10 * 8 + 0x30 + 8);
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x20) =
                         *(unsigned long long *)(pcVar29 + lVar10 * 8 + 0x20);
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x20 + 8) = uVar2;
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x30) = uVar3;
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x30 + 8) = uVar4;
                    uVar2 = *(unsigned long long *)(pcVar29 + lVar10 * 8 + 0x40 + 8);
                    uVar3 = *(unsigned long long *)(pcVar29 + lVar10 * 8 + 0x50);
                    uVar4 = *(unsigned long long *)(pcVar29 + lVar10 * 8 + 0x50 + 8);
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x40) =
                         *(unsigned long long *)(pcVar29 + lVar10 * 8 + 0x40);
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x40 + 8) = uVar2;
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x50) = uVar3;
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x50 + 8) = uVar4;
                    uVar2 = *(unsigned long long *)(pcVar29 + lVar10 * 8 + 0x60 + 8);
                    uVar3 = *(unsigned long long *)(pcVar29 + lVar10 * 8 + 0x70);
                    uVar4 = *(unsigned long long *)(pcVar29 + lVar10 * 8 + 0x70 + 8);
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x60) =
                         *(unsigned long long *)(pcVar29 + lVar10 * 8 + 0x60);
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x60 + 8) = uVar2;
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x70) = uVar3;
                    *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x70 + 8) = uVar4;
                    lVar10 = lVar10 + 0x10;
                    lVar16 = lVar16 + 4;
                  } while (lVar16 != 0);
                }
                if (uVar9 != 0) {
                  lVar16 = uVar21 * 8 + lVar10 * 8;
                  lVar17 = 0;
                  do {
                    uVar2 = *(unsigned long long *)(pcVar29 + lVar17 + lVar10 * 8 + 8);
                    uVar3 = *(unsigned long long *)(pcVar29 + lVar17 + lVar10 * 8 + 0x10);
                    uVar4 = *(unsigned long long *)(pcVar29 + lVar17 + lVar10 * 8 + 0x10 + 8);
                    *(unsigned long long *)(pcVar6 + lVar17 + lVar16) =
                         *(unsigned long long *)(pcVar29 + lVar17 + lVar10 * 8);
                    *(unsigned long long *)(pcVar6 + lVar17 + lVar16 + 8) = uVar2;
                    *(unsigned long long *)(pcVar6 + lVar17 + lVar16 + 0x10) = uVar3;
                    *(unsigned long long *)(pcVar6 + lVar17 + lVar16 + 0x10 + 8) = uVar4;
                    lVar17 = lVar17 + 0x20;
                  } while (uVar9 << 5 != lVar17);
                }
                if (uVar20 == uVar18) return;
                pcVar29 = pcVar29 + uVar18 * 8;
                pcVar14 = pcVar28 + uVar18 * 8;
              }
              pcVar12 = (char *)0x0;
              do {
                *(unsigned long long *)(pcVar14 + (long)pcVar12) = *(unsigned long long *)(pcVar29 + (long)pcVar12);
                pcVar12 = pcVar12 + 8;
              } while (pcVar6 + ((uVar21 * 8 + (lVar8 >> 3) * 8) - (long)pcVar14) != pcVar12);
            }
            local_38 = (deque<char16_t,// std code
            pcVar14 = local_40;
            pcVar29 = pcVar28;
            if (local_40 != (char *)0x0) {
              delete(local_40);
            }
          }
          else {
            lVar8 = (long)pcVar29 - (long)pcVar6 >> 3;
            pcVar28 = pcVar29 + ((lVar8 - (lVar8 + 1 >> 0x3f)) + 1U & 0x3ffffffffffffffe) * -4;
            sVar26 = (long)local_38 - (long)pcVar29;
            if (sVar26 != 0) {
              pcVar14 = pcVar28;
              _memmove(pcVar28,pcVar29,sVar26);
            }
            pcVar25 = pcVar28 + sVar26;
            pcVar29 = pcVar28;
          }
        }
        *(unsigned long long *)pcVar25 = *puVar30;
        pcVar25 = pcVar25 + 8;
        puVar30 = (unsigned long long *)(*(long *)(local_48 + 8) + 8);
        *(unsigned long long **)(local_48 + 8) = puVar30;
        uVar5 = local_50;
        uVar21 = local_50 - 1;
      }
      puVar11 = *(unsigned long long **)(local_48 + 0x10);
      local_50 = uVar5;
      if (puVar11 != puVar30) {
        do {
          if (pcVar29 == pcVar6) {
            if (pcVar25 < local_38) {
              lVar8 = (long)local_38 - (long)pcVar25 >> 3;
              pcVar29 = pcVar25 + ((lVar8 - (lVar8 + 1 >> 0x3f)) + 1U & 0xfffffffffffffffe) * 4;
              sVar26 = (long)pcVar25 - (long)pcVar6;
              pcVar25 = pcVar29;
              if (sVar26 != 0) {
                pcVar29 = pcVar29 + -sVar26;
                pcVar14 = pcVar29;
                _memmove(pcVar29,pcVar6,sVar26);
              }
            }
            else {
              uVar5 = (long)local_38 - (long)pcVar6 >> 2;
              if ((long)local_38 - (long)pcVar6 == 0) {
                uVar5 = 1;
              }
              local_40 = pcVar6;
              if (0x1fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
                // std code
              }
              pcVar6 = (char *)new char[uVar5 * 8];
              uVar21 = uVar5 + 3 >> 2;
              pcVar29 = pcVar6 + uVar21 * 8;
              lVar8 = (long)pcVar25 - (long)local_40;
              pcVar25 = pcVar29;
              if (lVar8 != 0) {
                pcVar25 = pcVar29 + lVar8;
                uVar9 = lVar8 - 8;
                pcVar14 = pcVar29;
                pcVar28 = local_40;
                if ((0x17 < uVar9) &&
                   ((local_40 + (uVar9 & 0xfffffffffffffff8) + 8 <= pcVar6 + uVar21 * 8 ||
                    (pcVar6 + (uVar9 & 0xfffffffffffffff8) + uVar21 * 8 + 8 <= local_40)))) {
                  uVar20 = (uVar9 >> 3) + 1;
                  uVar18 = uVar20 & 0x3ffffffffffffffc;
                  uVar15 = (uVar18 - 4 >> 2) + 1;
                  uVar9 = (unsigned long)((uint)uVar15 & 3);
                  if (uVar18 - 4 < 0xc) {
                    lVar10 = 0;
                  }
                  else {
                    lVar16 = -(uVar15 & 0xfffffffffffffffc);
                    lVar10 = 0;
                    do {
                      uVar2 = *(unsigned long long *)(local_40 + lVar10 * 8 + 8);
                      uVar3 = *(unsigned long long *)(local_40 + lVar10 * 8 + 0x10);
                      uVar4 = *(unsigned long long *)(local_40 + lVar10 * 8 + 0x10 + 8);
                      *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8) =
                           *(unsigned long long *)(local_40 + lVar10 * 8);
                      *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 8) = uVar2;
                      *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x10) = uVar3;
                      *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x10 + 8) = uVar4;
                      uVar2 = *(unsigned long long *)(local_40 + lVar10 * 8 + 0x20 + 8);
                      uVar3 = *(unsigned long long *)(local_40 + lVar10 * 8 + 0x30);
                      uVar4 = *(unsigned long long *)(local_40 + lVar10 * 8 + 0x30 + 8);
                      *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x20) =
                           *(unsigned long long *)(local_40 + lVar10 * 8 + 0x20);
                      *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x20 + 8) = uVar2;
                      *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x30) = uVar3;
                      *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x30 + 8) = uVar4;
                      uVar2 = *(unsigned long long *)(local_40 + lVar10 * 8 + 0x40 + 8);
                      uVar3 = *(unsigned long long *)(local_40 + lVar10 * 8 + 0x50);
                      uVar4 = *(unsigned long long *)(local_40 + lVar10 * 8 + 0x50 + 8);
                      *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x40) =
                           *(unsigned long long *)(local_40 + lVar10 * 8 + 0x40);
                      *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x40 + 8) = uVar2;
                      *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x50) = uVar3;
                      *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x50 + 8) = uVar4;
                      uVar2 = *(unsigned long long *)(local_40 + lVar10 * 8 + 0x60 + 8);
                      uVar3 = *(unsigned long long *)(local_40 + lVar10 * 8 + 0x70);
                      uVar4 = *(unsigned long long *)(local_40 + lVar10 * 8 + 0x70 + 8);
                      *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x60) =
                           *(unsigned long long *)(local_40 + lVar10 * 8 + 0x60);
                      *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x60 + 8) = uVar2;
                      *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x70) = uVar3;
                      *(unsigned long long *)(pcVar6 + lVar10 * 8 + uVar21 * 8 + 0x70 + 8) = uVar4;
                      lVar10 = lVar10 + 0x10;
                      lVar16 = lVar16 + 4;
                    } while (lVar16 != 0);
                  }
                  if (uVar9 != 0) {
                    lVar16 = uVar21 * 8 + lVar10 * 8;
                    lVar17 = 0;
                    do {
                      uVar2 = *(unsigned long long *)(local_40 + lVar17 + lVar10 * 8 + 8);
                      uVar3 = *(unsigned long long *)(local_40 + lVar17 + lVar10 * 8 + 0x10);
                      uVar4 = *(unsigned long long *)(local_40 + lVar17 + lVar10 * 8 + 0x10 + 8);
                      *(unsigned long long *)(pcVar6 + lVar17 + lVar16) =
                           *(unsigned long long *)(local_40 + lVar17 + lVar10 * 8);
                      *(unsigned long long *)(pcVar6 + lVar17 + lVar16 + 8) = uVar2;
                      *(unsigned long long *)(pcVar6 + lVar17 + lVar16 + 0x10) = uVar3;
                      *(unsigned long long *)(pcVar6 + lVar17 + lVar16 + 0x10 + 8) = uVar4;
                      lVar17 = lVar17 + 0x20;
                    } while (uVar9 << 5 != lVar17);
                  }
                  if (uVar20 == uVar18) return;
                  pcVar14 = pcVar29 + uVar18 * 8;
                  pcVar28 = local_40 + uVar18 * 8;
                }
                pcVar12 = (char *)0x0;
                do {
                  *(unsigned long long *)(pcVar14 + (long)pcVar12) =
                       *(unsigned long long *)(pcVar28 + (long)pcVar12);
                  pcVar12 = pcVar12 + 8;
                } while (pcVar6 + ((uVar21 * 8 + (lVar8 >> 3) * 8) - (long)pcVar14) != pcVar12);
              }
              local_38 = (deque<char16_t,// std code
              pcVar14 = local_40;
              if (local_40 != (char *)0x0) {
                delete(local_40);
              }
            }
          }
          puVar11 = puVar11 + -1;
          *(unsigned long long *)(pcVar29 + -8) = *puVar11;
          pcVar29 = pcVar29 + -8;
        } while (puVar11 != *(unsigned long long **)(local_48 + 8));
      }
      pvVar7 = *(void **)local_48;
      *(char **)local_48 = pcVar6;
      *(char **)(local_48 + 8) = pcVar29;
      *(char **)(local_48 + 0x10) = pcVar25;
      *(deque<char16_t,// std code
      *(long *)(local_48 + 0x20) = *(long *)(local_48 + 0x20) + lVar22;
      if (pvVar7 != (void *)0x0) {
        delete(pvVar7);
        return;
      }
    }
    else {
      if (*(deque<char16_t,// std code
        do {
          local_58 = (wchar16 *)new char[0x1000];
          pdVar13 = this;
          __split_buffer<char16_t*,// std code
                    ((__split_buffer<char16_t*,// std code
          if (uVar5 == 1) {
            lVar22 = *(long *)(this + 0x20);
            return;
          }
          uVar5 = uVar5 - 1;
        } while (*(long *)(this + 0x18) != *(long *)(this + 0x10));
      }
      uVar21 = uVar5;
      do {
        local_58 = (wchar16 *)new char[0x1000];
        pdVar13 = this;
        __split_buffer<char16_t*,// std code
                  ((__split_buffer<char16_t*,// std code
        lVar22 = (*(long *)(this + 0x20) -
                 (unsigned long)(*(long *)(this + 0x10) - *(long *)(this + 8) == 8)) + 0x800;
        *(long *)(this + 0x20) = lVar22;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
      local_50 = local_50 + uVar5;
      *(unsigned long *)(this + 0x20) = lVar22 + local_50 * -0x800;
      if (local_50 != 0) {
        pdVar23 = *(deque<char16_t,// std code
        do {
          puVar30 = *(unsigned long long **)(this + 8);
          pcVar6 = (char *)*puVar30;
          pdVar24 = (deque<char16_t,// std code
          *(deque<char16_t,// std code
          if (pdVar23 == *(deque<char16_t,// std code
            pdVar27 = *(deque<char16_t,// std code
            if (pdVar24 < pdVar27 || (long)pdVar24 - (long)pdVar27 == 0) {
              uVar5 = (long)pdVar23 - (long)pdVar27 >> 2;
              if ((long)pdVar23 - (long)pdVar27 == 0) {
                uVar5 = 1;
              }
              local_40 = pcVar6;
              local_38 = pdVar27;
              if (0x1fffffffffffffff < uVar5) return;
              uVar21 = uVar5 >> 2;
              pvVar7 = new char[uVar5 * 8];
              pcVar6 = local_40;
              this = local_48;
              pdVar13 = (deque<char16_t,// std code
              lVar22 = (long)pdVar23 - (long)pdVar24;
              pdVar23 = pdVar13;
              if (lVar22 != 0) {
                pdVar23 = pdVar13 + lVar22;
                uVar9 = lVar22 - 8;
                pdVar27 = pdVar13;
                if ((0x17 < uVar9) &&
                   (((void *)((long)puVar30 + (uVar9 & 0xfffffffffffffff8) + 0x10) <=
                     (void *)((long)pvVar7 + uVar21 * 8) ||
                    ((deque<char16_t,// std code
                     ((long)pvVar7 + (uVar9 & 0xfffffffffffffff8) + uVar21 * 8 + 8) <= pdVar24)))) {
                  uVar20 = (uVar9 >> 3) + 1;
                  uVar18 = uVar20 & 0xfffffffffffffffc;
                  uVar15 = (uVar18 - 4 >> 2) + 1;
                  uVar9 = (unsigned long)((uint)uVar15 & 3);
                  if (uVar18 - 4 < 0xc) {
                    lVar8 = 0;
                  }
                  else {
                    lVar10 = -(uVar15 & 0xfffffffffffffffc);
                    lVar8 = 0;
                    do {
                      uVar2 = (puVar30 + lVar8 + 1)[1];
                      uVar3 = puVar30[lVar8 + 3];
                      uVar4 = (puVar30 + lVar8 + 3)[1];
                      puVar11 = (unsigned long long *)((long)pvVar7 + lVar8 * 8 + uVar21 * 8);
                      *puVar11 = puVar30[lVar8 + 1];
                      puVar11[1] = uVar2;
                      puVar11 = (unsigned long long *)((long)pvVar7 + lVar8 * 8 + uVar21 * 8 + 0x10);
                      *puVar11 = uVar3;
                      puVar11[1] = uVar4;
                      uVar2 = (puVar30 + lVar8 + 5)[1];
                      uVar3 = puVar30[lVar8 + 7];
                      uVar4 = (puVar30 + lVar8 + 7)[1];
                      puVar11 = (unsigned long long *)((long)pvVar7 + lVar8 * 8 + uVar21 * 8 + 0x20);
                      *puVar11 = puVar30[lVar8 + 5];
                      puVar11[1] = uVar2;
                      puVar11 = (unsigned long long *)((long)pvVar7 + lVar8 * 8 + uVar21 * 8 + 0x30);
                      *puVar11 = uVar3;
                      puVar11[1] = uVar4;
                      uVar2 = (puVar30 + lVar8 + 9)[1];
                      uVar3 = puVar30[lVar8 + 0xb];
                      uVar4 = (puVar30 + lVar8 + 0xb)[1];
                      puVar11 = (unsigned long long *)((long)pvVar7 + lVar8 * 8 + uVar21 * 8 + 0x40);
                      *puVar11 = puVar30[lVar8 + 9];
                      puVar11[1] = uVar2;
                      puVar11 = (unsigned long long *)((long)pvVar7 + lVar8 * 8 + uVar21 * 8 + 0x50);
                      *puVar11 = uVar3;
                      puVar11[1] = uVar4;
                      uVar2 = (puVar30 + lVar8 + 0xd)[1];
                      uVar3 = puVar30[lVar8 + 0xf];
                      uVar4 = (puVar30 + lVar8 + 0xf)[1];
                      puVar11 = (unsigned long long *)((long)pvVar7 + lVar8 * 8 + uVar21 * 8 + 0x60);
                      *puVar11 = puVar30[lVar8 + 0xd];
                      puVar11[1] = uVar2;
                      puVar11 = (unsigned long long *)((long)pvVar7 + lVar8 * 8 + uVar21 * 8 + 0x70);
                      *puVar11 = uVar3;
                      puVar11[1] = uVar4;
                      lVar8 = lVar8 + 0x10;
                      lVar10 = lVar10 + 4;
                    } while (lVar10 != 0);
                  }
                  if (uVar9 != 0) {
                    lVar10 = uVar21 * 8 + lVar8 * 8;
                    lVar16 = 0;
                    do {
                      puVar1 = (unsigned long long *)((long)puVar30 + lVar16 + lVar8 * 8 + 8);
                      uVar2 = puVar1[1];
                      puVar11 = (unsigned long long *)((long)puVar30 + lVar16 + lVar8 * 8 + 0x18);
                      uVar3 = *puVar11;
                      uVar4 = puVar11[1];
                      puVar11 = (unsigned long long *)((long)pvVar7 + lVar16 + lVar10);
                      *puVar11 = *puVar1;
                      puVar11[1] = uVar2;
                      puVar11 = (unsigned long long *)((long)pvVar7 + lVar16 + lVar10 + 0x10);
                      *puVar11 = uVar3;
                      puVar11[1] = uVar4;
                      lVar16 = lVar16 + 0x20;
                    } while (uVar9 << 5 != lVar16);
                  }
                  if (uVar20 == uVar18) return;
                  pdVar24 = pdVar24 + uVar18 * 8;
                  pdVar27 = pdVar13 + uVar18 * 8;
                }
                lVar8 = 0;
                do {
                  *(unsigned long long *)(pdVar27 + lVar8) = *(unsigned long long *)(pdVar24 + lVar8);
                  lVar8 = lVar8 + 8;
                } while ((((lVar22 >> 3) * 8 + uVar21 * 8) - (long)pdVar27) + (long)pvVar7 != lVar8)
                ;
              }
              *(void **)local_48 = pvVar7;
              *(deque<char16_t,// std code
              *(deque<char16_t,// std code
              *(void **)(local_48 + 0x18) = (void *)((long)pvVar7 + uVar5 * 8);
              pdVar13 = local_38;
              if (local_38 != (deque<char16_t,// std code
                delete(local_38);
                pdVar23 = *(deque<char16_t,// std code
              }
            }
            else {
              lVar22 = (long)pdVar24 - (long)pdVar27 >> 3;
              lVar22 = (lVar22 - (lVar22 + 1 >> 0x3f)) + 1 >> 1;
              pdVar27 = pdVar24 + lVar22 * -8;
              sVar26 = (long)pdVar23 - (long)pdVar24;
              if (sVar26 != 0) {
                pdVar13 = pdVar27;
                _memmove(pdVar27,pdVar24,sVar26);
                pdVar24 = *(deque<char16_t,// std code
              }
              pdVar23 = pdVar27 + sVar26;
              *(deque<char16_t,// std code
              *(deque<char16_t,// std code
              this = local_48;
            }
          }
          *(char **)pdVar23 = pcVar6;
          pdVar23 = (deque<char16_t,// std code
          *(deque<char16_t,// std code
          local_50 = local_50 - 1;
        } while (local_50 != 0);
      }
    }
  }
  return;
}
}
