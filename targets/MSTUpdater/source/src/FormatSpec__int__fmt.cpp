#include <ni/controller_editor/FormatSpec__int__fmt.hpp>
namespace void fmt::BasicWriter<char>::write_int<int, fmt {

void FormatSpec>(int, fmt::FormatSpec) {
unsigned long long uVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  unsigned long uVar8;
  char *pcVar9;
  long lVar10;
  size_t sVar11;
  long lVar12;
  byte *pbVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  char *pcVar20;
  unsigned long uVar21;
  unsigned long uVar22;
  long lVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  uint uVar27;
  uint uVar28;
  unsigned long uVar29;
  unsigned long in_stack_00000010;
  unsigned long long in_stack_00000018;
  unsigned int local_34;
  
  uVar21 = (unsigned long)param_2;
  local_34 = 0;
  if ((int)param_2 < 0) {
    local_34 = 0x2d;
    uVar21 = (unsigned long)-param_2;
LAB_1001a5bf1:
    uVar29 = 1;
  }
  else {
    uVar29 = 0;
    if ((in_stack_00000010 & 0x100000000) != 0) {
      bVar4 = 0x2b;
      if ((in_stack_00000010 & 0x200000000) == 0) {
        bVar4 = 0x20;
      }
      local_34 = (uint)bVar4;
      goto LAB_1001a5bf1;
    }
  }
  uVar18 = (uint)uVar21;
  uVar6 = (uint)uVar29;
  switch(in_stack_00000018._4_1_) {
  case 'B':
  case 'b':
    if ((in_stack_00000010 & 0x800000000) != 0) {
      *(unsigned char *)((long)&local_34 + uVar29) = 0x30;
      *(char *)((long)&local_34 + uVar29 + 1) = in_stack_00000018._4_1_;
      uVar29 = (unsigned long)(uVar6 | 2);
    }
    uVar18 = 0;
    uVar8 = uVar21;
    do {
      uVar18 = uVar18 + 1;
      uVar6 = (uint)uVar8 >> 1;
      uVar8 = (unsigned long)uVar6;
    } while (uVar6 != 0);
    pbVar13 = (byte *)prepare_int_buffer<fmt::FormatSpec>
                                (param_1,uVar18,(FormatSpec *)&stack0x00000008,(char *)&local_34,
                                 (uint)uVar29);
    do {
      *pbVar13 = (byte)uVar21 & 1 | 0x30;
      pbVar13 = pbVar13 + -1;
      uVar18 = (uint)uVar21 >> 1;
      uVar21 = (unsigned long)uVar18;
    } while (uVar18 != 0);
    break;
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'G':
  case 'H':
  case 'I':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
  case 'N':
  case 'O':
  case 'P':
  case 'Q':
  case 'R':
  case 'S':
  case 'T':
  case 'U':
  case 'V':
  case 'W':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'a':
  case 'c':
  case 'e':
  case 'f':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
  case 'l':
  case 'm':
  case 'p':
  case 'q':
  case 'r':
  case 's':
  case 't':
  case 'u':
  case 'v':
  case 'w':
switchD_1001a5c1b_caseD_43:
    cVar5 = FormatSpec::flag((FormatSpec *)&stack0x00000008,0x10);
    pcVar9 = "integer";
    if (cVar5 != '\0') {
      pcVar9 = "char";
    }
                    /* WARNING: Subroutine does not return */
    internal::report_unknown_type(in_stack_00000018._4_1_,pcVar9);
  case 'X':
  case 'x':
    if ((in_stack_00000010 & 0x800000000) != 0) {
      *(unsigned char *)((long)&local_34 + uVar29) = 0x30;
      *(char *)((long)&local_34 + uVar29 + 1) = in_stack_00000018._4_1_;
      uVar29 = (unsigned long)(uVar6 | 2);
    }
    uVar18 = 0;
    uVar8 = uVar21;
    do {
      uVar18 = uVar18 + 1;
      uVar6 = (uint)uVar8 >> 4;
      uVar8 = (unsigned long)uVar6;
    } while (uVar6 != 0);
    pcVar9 = prepare_int_buffer<fmt::FormatSpec>
                       (param_1,uVar18,(FormatSpec *)&stack0x00000008,(char *)&local_34,(uint)uVar29
                       );
    pcVar15 = "0123456789ABCDEF";
    if (in_stack_00000018._4_1_ == 'x') {
      pcVar15 = "0123456789abcdef";
    }
    do {
      *pcVar9 = pcVar15[(uint)uVar21 & 0xf];
      pcVar9 = pcVar9 + -1;
      uVar18 = (uint)uVar21 >> 4;
      uVar21 = (unsigned long)uVar18;
    } while (uVar18 != 0);
    break;
  case 'n':
    uVar7 = 0x1f;
    if ((uVar18 | 1) != 0) {
      for (; (uVar18 | 1) >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    uVar27 = (uVar7 ^ 0xffffffe0) * 0x4d1 + 0x9ef1 >> 0xc;
    uVar28 = 0;
    uVar7 = (&internal::BasicData<void>::POWERS_OF_10_32)[uVar27];
    iVar14 = -1;
    if (uVar7 <= uVar18) {
      iVar14 = 0;
    }
    lVar10 = _localeconv();
    pcVar15 = *(char **)(lVar10 + 8);
    sVar11 = strlen(pcVar15);
    pcVar9 = prepare_int_buffer<fmt::FormatSpec>
                       (param_1,(int)sVar11 * ((uVar27 - (uVar18 < uVar7)) / 3) + 1 +
                                iVar14 + uVar27,&stack0x00000008,(char *)&local_34,uVar6);
    pcVar9 = pcVar9 + 1;
    if (99 < uVar18) {
      lVar10 = -sVar11;
      if (sVar11 == 0) {
        uVar28 = 0;
        do {
          uVar7 = (uint)uVar21;
          uVar18 = (uint)(uVar21 / 100);
          uVar21 = uVar21 / 100;
          uVar6 = uVar7 + (int)uVar21 * -100;
          pcVar9[-1] = (&internal::BasicData<void>::DIGITS)[uVar6 * 2 | 1];
          pcVar16 = pcVar9 + -1;
          if (uVar28 + 1 == ((uVar28 + 1) / 3) * 3) {
            pcVar16 = pcVar9 + lVar10 + -1;
          }
          pcVar16[-1] = (&internal::BasicData<void>::DIGITS)[(unsigned long)uVar6 * 2];
          uVar28 = uVar28 + 2;
          pcVar9 = pcVar16 + -1;
          if (uVar28 == (uVar28 / 3) * 3) {
            pcVar9 = pcVar16 + lVar10 + -1;
          }
        } while (9999 < uVar7);
      }
      else {
        pcVar16 = pcVar15 + sVar11;
        uVar29 = sVar11 - 0x20;
        uVar22 = sVar11 & 0xffffffffffffffe0;
        uVar8 = (unsigned long)(((uint)(uVar29 >> 5) & 0x7ffffff) + 1 & 3);
        lVar17 = -sVar11;
        uVar28 = 0;
        do {
          uVar6 = (uint)uVar21;
          uVar18 = (uint)(uVar21 / 100);
          lVar12 = (unsigned long)(uVar6 + (int)(uVar21 / 100) * -100) * 2;
          pcVar24 = pcVar9 + -1;
          pcVar9[-1] = (&internal::BasicData<void>::DIGITS)[(int)lVar12 + 1];
          pcVar26 = pcVar24;
          if ((uVar28 | 1) == ((uVar28 | 1) / 3) * 3) {
            pcVar26 = pcVar24 + lVar10;
            pcVar20 = pcVar15;
            pcVar25 = pcVar26;
            if (((0x1f < sVar11) && (uVar22 != 0)) && ((pcVar16 <= pcVar26 || (pcVar24 <= pcVar15)))
               ) {
              if (uVar8 == 0) {
                lVar23 = 0;
              }
              else {
                lVar23 = 0;
                lVar19 = -uVar8;
                do {
                  uVar1 = *(unsigned long long *)(pcVar15 + lVar23 + 8);
                  uVar2 = *(unsigned long long *)(pcVar15 + lVar23 + 0x10);
                  uVar3 = *(unsigned long long *)(pcVar15 + lVar23 + 0x10 + 8);
                  *(unsigned long long *)(pcVar9 + lVar23 + lVar17 + -1) = *(unsigned long long *)(pcVar15 + lVar23)
                  ;
                  *(unsigned long long *)(pcVar9 + lVar23 + lVar17 + -1 + 8) = uVar1;
                  *(unsigned long long *)(pcVar9 + lVar23 + lVar17 + 0xf) = uVar2;
                  *(unsigned long long *)(pcVar9 + lVar23 + lVar17 + 0xf + 8) = uVar3;
                  lVar23 = lVar23 + 0x20;
                  lVar19 = lVar19 + 1;
                } while (lVar19 != 0);
              }
              if (0x5f < uVar29) {
                lVar19 = uVar22 - lVar23;
                pcVar9 = pcVar9 + lVar23 + (0x6f - sVar11);
                pcVar24 = pcVar15 + lVar23 + 0x70;
                do {
                  uVar1 = *(unsigned long long *)(pcVar24 + -0x68);
                  uVar2 = *(unsigned long long *)(pcVar24 + -0x60);
                  uVar3 = *(unsigned long long *)(pcVar24 + -0x58);
                  *(unsigned long long *)(pcVar9 + -0x70) = *(unsigned long long *)(pcVar24 + -0x70);
                  *(unsigned long long *)(pcVar9 + -0x68) = uVar1;
                  *(unsigned long long *)(pcVar9 + -0x60) = uVar2;
                  *(unsigned long long *)(pcVar9 + -0x58) = uVar3;
                  uVar1 = *(unsigned long long *)(pcVar24 + -0x48);
                  uVar2 = *(unsigned long long *)(pcVar24 + -0x40);
                  uVar3 = *(unsigned long long *)(pcVar24 + -0x38);
                  *(unsigned long long *)(pcVar9 + -0x50) = *(unsigned long long *)(pcVar24 + -0x50);
                  *(unsigned long long *)(pcVar9 + -0x48) = uVar1;
                  *(unsigned long long *)(pcVar9 + -0x40) = uVar2;
                  *(unsigned long long *)(pcVar9 + -0x38) = uVar3;
                  uVar1 = *(unsigned long long *)(pcVar24 + -0x28);
                  uVar2 = *(unsigned long long *)(pcVar24 + -0x20);
                  uVar3 = *(unsigned long long *)(pcVar24 + -0x18);
                  *(unsigned long long *)(pcVar9 + -0x30) = *(unsigned long long *)(pcVar24 + -0x30);
                  *(unsigned long long *)(pcVar9 + -0x28) = uVar1;
                  *(unsigned long long *)(pcVar9 + -0x20) = uVar2;
                  *(unsigned long long *)(pcVar9 + -0x18) = uVar3;
                  uVar1 = *(unsigned long long *)(pcVar24 + -8);
                  uVar2 = *(unsigned long long *)pcVar24;
                  uVar3 = *(unsigned long long *)(pcVar24 + 8);
                  *(unsigned long long *)(pcVar9 + -0x10) = *(unsigned long long *)(pcVar24 + -0x10);
                  *(unsigned long long *)(pcVar9 + -8) = uVar1;
                  *(unsigned long long *)pcVar9 = uVar2;
                  *(unsigned long long *)(pcVar9 + 8) = uVar3;
                  pcVar9 = pcVar9 + 0x80;
                  pcVar24 = pcVar24 + 0x80;
                  lVar19 = lVar19 + -0x80;
                } while (lVar19 != 0);
              }
              if (sVar11 == uVar22) goto LAB_1001a5ff9;
              pcVar25 = pcVar26 + uVar22;
              pcVar20 = pcVar15 + uVar22;
            }
            do {
              *pcVar25 = *pcVar20;
              pcVar20 = pcVar20 + 1;
              pcVar25 = pcVar25 + 1;
            } while (pcVar16 != pcVar20);
          }
LAB_1001a5ff9:
          pcVar24 = pcVar26 + -1;
          pcVar26[-1] = (&internal::BasicData<void>::DIGITS)[lVar12];
          uVar28 = uVar28 + 2;
          pcVar9 = pcVar24;
          if (uVar28 == (uVar28 / 3) * 3) {
            pcVar9 = pcVar24 + lVar10;
            pcVar20 = pcVar15;
            pcVar25 = pcVar9;
            if (((0x1f < sVar11) && (uVar22 != 0)) && ((pcVar16 <= pcVar9 || (pcVar24 <= pcVar15))))
            {
              if (uVar8 == 0) {
                lVar12 = 0;
              }
              else {
                lVar12 = 0;
                lVar23 = -uVar8;
                do {
                  uVar1 = *(unsigned long long *)(pcVar15 + lVar12 + 8);
                  uVar2 = *(unsigned long long *)(pcVar15 + lVar12 + 0x10);
                  uVar3 = *(unsigned long long *)(pcVar15 + lVar12 + 0x10 + 8);
                  *(unsigned long long *)(pcVar26 + lVar12 + lVar17 + -1) =
                       *(unsigned long long *)(pcVar15 + lVar12);
                  *(unsigned long long *)(pcVar26 + lVar12 + lVar17 + -1 + 8) = uVar1;
                  *(unsigned long long *)(pcVar26 + lVar12 + lVar17 + 0xf) = uVar2;
                  *(unsigned long long *)(pcVar26 + lVar12 + lVar17 + 0xf + 8) = uVar3;
                  lVar12 = lVar12 + 0x20;
                  lVar23 = lVar23 + 1;
                } while (lVar23 != 0);
              }
              if (0x5f < uVar29) {
                lVar23 = uVar22 - lVar12;
                pcVar26 = pcVar26 + lVar12 + (0x6f - sVar11);
                pcVar24 = pcVar15 + lVar12 + 0x70;
                do {
                  uVar1 = *(unsigned long long *)(pcVar24 + -0x68);
                  uVar2 = *(unsigned long long *)(pcVar24 + -0x60);
                  uVar3 = *(unsigned long long *)(pcVar24 + -0x58);
                  *(unsigned long long *)(pcVar26 + -0x70) = *(unsigned long long *)(pcVar24 + -0x70);
                  *(unsigned long long *)(pcVar26 + -0x68) = uVar1;
                  *(unsigned long long *)(pcVar26 + -0x60) = uVar2;
                  *(unsigned long long *)(pcVar26 + -0x58) = uVar3;
                  uVar1 = *(unsigned long long *)(pcVar24 + -0x48);
                  uVar2 = *(unsigned long long *)(pcVar24 + -0x40);
                  uVar3 = *(unsigned long long *)(pcVar24 + -0x38);
                  *(unsigned long long *)(pcVar26 + -0x50) = *(unsigned long long *)(pcVar24 + -0x50);
                  *(unsigned long long *)(pcVar26 + -0x48) = uVar1;
                  *(unsigned long long *)(pcVar26 + -0x40) = uVar2;
                  *(unsigned long long *)(pcVar26 + -0x38) = uVar3;
                  uVar1 = *(unsigned long long *)(pcVar24 + -0x28);
                  uVar2 = *(unsigned long long *)(pcVar24 + -0x20);
                  uVar3 = *(unsigned long long *)(pcVar24 + -0x18);
                  *(unsigned long long *)(pcVar26 + -0x30) = *(unsigned long long *)(pcVar24 + -0x30);
                  *(unsigned long long *)(pcVar26 + -0x28) = uVar1;
                  *(unsigned long long *)(pcVar26 + -0x20) = uVar2;
                  *(unsigned long long *)(pcVar26 + -0x18) = uVar3;
                  uVar1 = *(unsigned long long *)(pcVar24 + -8);
                  uVar2 = *(unsigned long long *)pcVar24;
                  uVar3 = *(unsigned long long *)(pcVar24 + 8);
                  *(unsigned long long *)(pcVar26 + -0x10) = *(unsigned long long *)(pcVar24 + -0x10);
                  *(unsigned long long *)(pcVar26 + -8) = uVar1;
                  *(unsigned long long *)pcVar26 = uVar2;
                  *(unsigned long long *)(pcVar26 + 8) = uVar3;
                  pcVar26 = pcVar26 + 0x80;
                  pcVar24 = pcVar24 + 0x80;
                  lVar23 = lVar23 + -0x80;
                } while (lVar23 != 0);
              }
              if (sVar11 == uVar22) goto LAB_1001a6143;
              pcVar25 = pcVar9 + uVar22;
              pcVar20 = pcVar15 + uVar22;
            }
            do {
              *pcVar25 = *pcVar20;
              pcVar20 = pcVar20 + 1;
              pcVar25 = pcVar25 + 1;
            } while (pcVar16 != pcVar20);
          }
LAB_1001a6143:
          uVar21 = uVar21 / 100;
        } while (9999 < uVar6);
      }
    }
    if (uVar18 < 10) {
      pcVar9[-1] = (char)uVar18 + '0';
      return;
    }
    pcVar16 = pcVar9 + -1;
    pcVar9[-1] = (&internal::BasicData<void>::DIGITS)[uVar18 * 2 + 1];
    pcVar24 = pcVar16;
    if ((uVar28 + 1 == ((uVar28 + 1) / 3) * 3) && (pcVar24 = pcVar16 + -sVar11, sVar11 != 0)) {
      pcVar26 = pcVar15 + sVar11;
      pcVar25 = pcVar24;
      if (((0x1f < sVar11) && (uVar21 = sVar11 & 0xffffffffffffffe0, uVar21 != 0)) &&
         ((pcVar26 <= pcVar24 || (pcVar16 <= pcVar15)))) {
        uVar6 = ((uint)(uVar21 - 0x20 >> 5) & 0x7ffffff) + 1;
        if ((uVar6 & 3) == 0) {
          lVar10 = 0;
        }
        else {
          lVar17 = -((unsigned long)uVar6 & 3);
          lVar10 = 0;
          do {
            uVar1 = *(unsigned long long *)(pcVar15 + lVar10 + 8);
            uVar2 = *(unsigned long long *)(pcVar15 + lVar10 + 0x10);
            uVar3 = *(unsigned long long *)(pcVar15 + lVar10 + 0x10 + 8);
            *(unsigned long long *)(pcVar9 + lVar10 + -sVar11 + -1) = *(unsigned long long *)(pcVar15 + lVar10);
            *(unsigned long long *)(pcVar9 + lVar10 + -sVar11 + -1 + 8) = uVar1;
            *(unsigned long long *)(pcVar9 + lVar10 + -sVar11 + 0xf) = uVar2;
            *(unsigned long long *)(pcVar9 + lVar10 + -sVar11 + 0xf + 8) = uVar3;
            lVar10 = lVar10 + 0x20;
            lVar17 = lVar17 + 1;
          } while (lVar17 != 0);
        }
        if (0x5f < uVar21 - 0x20) {
          lVar17 = uVar21 - lVar10;
          pcVar9 = pcVar9 + ((lVar10 + 0x6f) - sVar11);
          pcVar16 = pcVar15 + lVar10 + 0x70;
          do {
            uVar1 = *(unsigned long long *)(pcVar16 + -0x68);
            uVar2 = *(unsigned long long *)(pcVar16 + -0x60);
            uVar3 = *(unsigned long long *)(pcVar16 + -0x58);
            *(unsigned long long *)(pcVar9 + -0x70) = *(unsigned long long *)(pcVar16 + -0x70);
            *(unsigned long long *)(pcVar9 + -0x68) = uVar1;
            *(unsigned long long *)(pcVar9 + -0x60) = uVar2;
            *(unsigned long long *)(pcVar9 + -0x58) = uVar3;
            uVar1 = *(unsigned long long *)(pcVar16 + -0x48);
            uVar2 = *(unsigned long long *)(pcVar16 + -0x40);
            uVar3 = *(unsigned long long *)(pcVar16 + -0x38);
            *(unsigned long long *)(pcVar9 + -0x50) = *(unsigned long long *)(pcVar16 + -0x50);
            *(unsigned long long *)(pcVar9 + -0x48) = uVar1;
            *(unsigned long long *)(pcVar9 + -0x40) = uVar2;
            *(unsigned long long *)(pcVar9 + -0x38) = uVar3;
            uVar1 = *(unsigned long long *)(pcVar16 + -0x28);
            uVar2 = *(unsigned long long *)(pcVar16 + -0x20);
            uVar3 = *(unsigned long long *)(pcVar16 + -0x18);
            *(unsigned long long *)(pcVar9 + -0x30) = *(unsigned long long *)(pcVar16 + -0x30);
            *(unsigned long long *)(pcVar9 + -0x28) = uVar1;
            *(unsigned long long *)(pcVar9 + -0x20) = uVar2;
            *(unsigned long long *)(pcVar9 + -0x18) = uVar3;
            uVar1 = *(unsigned long long *)(pcVar16 + -8);
            uVar2 = *(unsigned long long *)pcVar16;
            uVar3 = *(unsigned long long *)(pcVar16 + 8);
            *(unsigned long long *)(pcVar9 + -0x10) = *(unsigned long long *)(pcVar16 + -0x10);
            *(unsigned long long *)(pcVar9 + -8) = uVar1;
            *(unsigned long long *)pcVar9 = uVar2;
            *(unsigned long long *)(pcVar9 + 8) = uVar3;
            pcVar9 = pcVar9 + 0x80;
            pcVar16 = pcVar16 + 0x80;
            lVar17 = lVar17 + -0x80;
          } while (lVar17 != 0);
        }
        if (sVar11 == uVar21) goto LAB_1001a63c4;
        pcVar15 = pcVar15 + uVar21;
        pcVar25 = pcVar24 + uVar21;
      }
      do {
        *pcVar25 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar25 = pcVar25 + 1;
      } while (pcVar26 != pcVar15);
    }
LAB_1001a63c4:
    pcVar24[-1] = (&internal::BasicData<void>::DIGITS)[uVar18 * 2];
    break;
  case 'o':
    if ((in_stack_00000010 & 0x800000000) != 0) {
      *(unsigned char *)((long)&local_34 + uVar29) = 0x30;
      uVar29 = (unsigned long)(uVar6 + 1);
    }
    uVar18 = 0;
    uVar8 = uVar21;
    do {
      uVar18 = uVar18 + 1;
      uVar6 = (uint)uVar8 >> 3;
      uVar8 = (unsigned long)uVar6;
    } while (uVar6 != 0);
    pbVar13 = (byte *)prepare_int_buffer<fmt::FormatSpec>
                                (param_1,uVar18,(FormatSpec *)&stack0x00000008,(char *)&local_34,
                                 (uint)uVar29);
    do {
      *pbVar13 = (byte)uVar21 & 7 | 0x30;
      pbVar13 = pbVar13 + -1;
      uVar18 = (uint)uVar21 >> 3;
      uVar21 = (unsigned long)uVar18;
    } while (uVar18 != 0);
    break;
  default:
    if (in_stack_00000018._4_1_ != '\0') goto switchD_1001a5c1b_caseD_43;
  case 'd':
    uVar7 = 0x1f;
    if ((uVar18 | 1) != 0) {
      for (; (uVar18 | 1) >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    uVar7 = (uVar7 ^ 0xffffffe0) * 0x4d1 + 0x9ef1 >> 0xc;
    iVar14 = -1;
    if ((uint)(&internal::BasicData<void>::POWERS_OF_10_32)[uVar7] <= uVar18) {
      iVar14 = 0;
    }
    pcVar9 = prepare_int_buffer<fmt::FormatSpec>
                       (param_1,uVar7 + 1 + iVar14,(FormatSpec *)&stack0x00000008,(char *)&local_34,
                        uVar6);
    pcVar9 = pcVar9 + 1;
    if (99 < uVar18) {
      do {
        uVar6 = (uint)uVar21;
        uVar18 = (uint)(uVar21 / 100);
        uVar21 = uVar21 / 100;
        uVar7 = uVar6 + (int)uVar21 * -100;
        pcVar9[-1] = (&internal::BasicData<void>::DIGITS)[uVar7 * 2 | 1];
        pcVar9[-2] = (&internal::BasicData<void>::DIGITS)[(unsigned long)uVar7 * 2];
        pcVar9 = pcVar9 + -2;
      } while (9999 < uVar6);
    }
    if (uVar18 < 10) {
      pcVar9[-1] = (char)uVar18 + '0';
    }
    else {
      pcVar9[-1] = (&internal::BasicData<void>::DIGITS)[uVar18 * 2 + 1];
      pcVar9[-2] = (&internal::BasicData<void>::DIGITS)[uVar18 * 2];
    }
  }
  return;
}
}
