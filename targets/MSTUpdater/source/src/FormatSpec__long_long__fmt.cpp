#include <ni/controller_editor/FormatSpec__long_long__fmt.hpp>
namespace void fmt::BasicWriter<char>::write_int<long long, fmt {

void FormatSpec>(long long, fmt::FormatSpec) {
bool bVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  unsigned long long uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  unsigned long uVar8;
  char *pcVar9;
  long lVar10;
  size_t sVar11;
  unsigned long uVar12;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  byte *pbVar16;
  long lVar17;
  char *pcVar18;
  int iVar19;
  char *pcVar20;
  unsigned long uVar21;
  char *pcVar22;
  unsigned long uVar23;
  uint uVar24;
  long lVar25;
  char *pcVar26;
  uint uVar27;
  uint uVar28;
  unsigned long in_stack_00000010;
  unsigned long long in_stack_00000018;
  unsigned int local_34;
  
  local_34 = 0;
  if ((long)param_2 < 0) {
    local_34 = 0x2d;
    param_2 = -param_2;
LAB_1001a7b73:
    uVar23 = 1;
  }
  else {
    uVar23 = 0;
    if ((in_stack_00000010 & 0x100000000) != 0) {
      bVar5 = 0x2b;
      if ((in_stack_00000010 & 0x200000000) == 0) {
        bVar5 = 0x20;
      }
      local_34 = (uint)bVar5;
      goto LAB_1001a7b73;
    }
  }
  uVar24 = (uint)uVar23;
  switch(in_stack_00000018._4_1_) {
  case 'B':
  case 'b':
    if ((in_stack_00000010 & 0x800000000) != 0) {
      *(unsigned char *)((long)&local_34 + uVar23) = 0x30;
      *(char *)((long)&local_34 + uVar23 + 1) = in_stack_00000018._4_1_;
      uVar23 = (unsigned long)(uVar24 | 2);
    }
    uVar24 = 0;
    uVar8 = param_2;
    do {
      uVar24 = uVar24 + 1;
      uVar8 = uVar8 >> 1;
    } while (uVar8 != 0);
    pbVar16 = (byte *)prepare_int_buffer<fmt::FormatSpec>
                                (param_1,uVar24,(FormatSpec *)&stack0x00000008,(char *)&local_34,
                                 (uint)uVar23);
    do {
      *pbVar16 = (byte)param_2 & 1 | 0x30;
      pbVar16 = pbVar16 + -1;
      param_2 = param_2 >> 1;
    } while (param_2 != 0);
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
switchD_1001a7b9c_caseD_43:
    cVar6 = FormatSpec::flag((FormatSpec *)&stack0x00000008,0x10);
    pcVar9 = "integer";
    if (cVar6 != '\0') {
      pcVar9 = "char";
    }
                    /* WARNING: Subroutine does not return */
    internal::report_unknown_type(in_stack_00000018._4_1_,pcVar9);
  case 'X':
  case 'x':
    if ((in_stack_00000010 & 0x800000000) != 0) {
      *(unsigned char *)((long)&local_34 + uVar23) = 0x30;
      *(char *)((long)&local_34 + uVar23 + 1) = in_stack_00000018._4_1_;
      uVar23 = (unsigned long)(uVar24 | 2);
    }
    uVar24 = 0;
    uVar8 = param_2;
    do {
      uVar24 = uVar24 + 1;
      uVar8 = uVar8 >> 4;
    } while (uVar8 != 0);
    pcVar9 = prepare_int_buffer<fmt::FormatSpec>
                       (param_1,uVar24,(FormatSpec *)&stack0x00000008,(char *)&local_34,(uint)uVar23
                       );
    pcVar20 = "0123456789ABCDEF";
    if (in_stack_00000018._4_1_ == 'x') {
      pcVar20 = "0123456789abcdef";
    }
    do {
      *pcVar9 = pcVar20[(uint)param_2 & 0xf];
      pcVar9 = pcVar9 + -1;
      param_2 = param_2 >> 4;
    } while (param_2 != 0);
    break;
  case 'n':
    lVar10 = 0x3f;
    if ((param_2 | 1) != 0) {
      for (; (param_2 | 1) >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar27 = ((uint)lVar10 ^ 0xffffffc0) * 0x4d1 + 0x13911 >> 0xc;
    uVar28 = 0;
    uVar23 = *(unsigned long *)(&internal::BasicData<void>::POWERS_OF_10_64 + (unsigned long)uVar27 * 8);
    uVar7 = 0xffffffff;
    if (uVar23 <= param_2) {
      uVar7 = uVar28;
    }
    lVar10 = _localeconv();
    pcVar20 = *(char **)(lVar10 + 8);
    sVar11 = strlen(pcVar20);
    pcVar9 = prepare_int_buffer<fmt::FormatSpec>
                       (param_1,(int)sVar11 * ((uVar27 - (param_2 < uVar23)) / 3) + 1 +
                                uVar7 + uVar27,&stack0x00000008,(char *)&local_34,uVar24);
    pcVar9 = pcVar9 + 1;
    if (99 < param_2) {
      lVar10 = -sVar11;
      if (sVar11 == 0) {
        uVar28 = 0;
        uVar23 = param_2;
        do {
          param_2 = uVar23 / 100;
          pcVar9[-1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                       [(uVar23 % 100) * 2];
          pcVar18 = pcVar9 + -1;
          if (uVar28 + 1 == ((uVar28 + 1) / 3) * 3) {
            pcVar18 = pcVar9 + lVar10 + -1;
          }
          pcVar18[-1] = (&internal::BasicData<void>::DIGITS)[(uVar23 % 100) * 2];
          uVar28 = uVar28 + 2;
          pcVar9 = pcVar18 + -1;
          if (uVar28 == (uVar28 / 3) * 3) {
            pcVar9 = pcVar18 + lVar10 + -1;
          }
          bVar1 = 9999 < uVar23;
          uVar23 = param_2;
        } while (bVar1);
      }
      else {
        pcVar18 = pcVar20 + sVar11;
        uVar23 = sVar11 - 0x20;
        uVar21 = sVar11 & 0xffffffffffffffe0;
        uVar12 = (unsigned long)(((uint)(uVar23 >> 5) & 0x7ffffff) + 1 & 3);
        lVar17 = -sVar11;
        uVar28 = 0;
        uVar8 = param_2;
        do {
          param_2 = uVar8 / 100;
          pcVar14 = pcVar9 + -1;
          pcVar9[-1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                       [(uVar8 % 100) * 2];
          pcVar15 = pcVar14;
          if ((uVar28 | 1) == ((uVar28 | 1) / 3) * 3) {
            pcVar15 = pcVar14 + lVar10;
            pcVar22 = pcVar15;
            pcVar26 = pcVar20;
            if (((0x1f < sVar11) && (uVar21 != 0)) && ((pcVar18 <= pcVar15 || (pcVar14 <= pcVar20)))
               ) {
              if (uVar12 == 0) {
                lVar13 = 0;
              }
              else {
                lVar13 = 0;
                lVar25 = -uVar12;
                do {
                  uVar2 = *(unsigned long long *)(pcVar20 + lVar13 + 8);
                  uVar3 = *(unsigned long long *)(pcVar20 + lVar13 + 0x10);
                  uVar4 = *(unsigned long long *)(pcVar20 + lVar13 + 0x10 + 8);
                  *(unsigned long long *)(pcVar9 + lVar13 + lVar17 + -1) = *(unsigned long long *)(pcVar20 + lVar13)
                  ;
                  *(unsigned long long *)(pcVar9 + lVar13 + lVar17 + -1 + 8) = uVar2;
                  *(unsigned long long *)(pcVar9 + lVar13 + lVar17 + 0xf) = uVar3;
                  *(unsigned long long *)(pcVar9 + lVar13 + lVar17 + 0xf + 8) = uVar4;
                  lVar13 = lVar13 + 0x20;
                  lVar25 = lVar25 + 1;
                } while (lVar25 != 0);
              }
              if (0x5f < uVar23) {
                lVar25 = uVar21 - lVar13;
                pcVar9 = pcVar9 + lVar13 + (0x6f - sVar11);
                pcVar14 = pcVar20 + lVar13 + 0x70;
                do {
                  uVar2 = *(unsigned long long *)(pcVar14 + -0x68);
                  uVar3 = *(unsigned long long *)(pcVar14 + -0x60);
                  uVar4 = *(unsigned long long *)(pcVar14 + -0x58);
                  *(unsigned long long *)(pcVar9 + -0x70) = *(unsigned long long *)(pcVar14 + -0x70);
                  *(unsigned long long *)(pcVar9 + -0x68) = uVar2;
                  *(unsigned long long *)(pcVar9 + -0x60) = uVar3;
                  *(unsigned long long *)(pcVar9 + -0x58) = uVar4;
                  uVar2 = *(unsigned long long *)(pcVar14 + -0x48);
                  uVar3 = *(unsigned long long *)(pcVar14 + -0x40);
                  uVar4 = *(unsigned long long *)(pcVar14 + -0x38);
                  *(unsigned long long *)(pcVar9 + -0x50) = *(unsigned long long *)(pcVar14 + -0x50);
                  *(unsigned long long *)(pcVar9 + -0x48) = uVar2;
                  *(unsigned long long *)(pcVar9 + -0x40) = uVar3;
                  *(unsigned long long *)(pcVar9 + -0x38) = uVar4;
                  uVar2 = *(unsigned long long *)(pcVar14 + -0x28);
                  uVar3 = *(unsigned long long *)(pcVar14 + -0x20);
                  uVar4 = *(unsigned long long *)(pcVar14 + -0x18);
                  *(unsigned long long *)(pcVar9 + -0x30) = *(unsigned long long *)(pcVar14 + -0x30);
                  *(unsigned long long *)(pcVar9 + -0x28) = uVar2;
                  *(unsigned long long *)(pcVar9 + -0x20) = uVar3;
                  *(unsigned long long *)(pcVar9 + -0x18) = uVar4;
                  uVar2 = *(unsigned long long *)(pcVar14 + -8);
                  uVar3 = *(unsigned long long *)pcVar14;
                  uVar4 = *(unsigned long long *)(pcVar14 + 8);
                  *(unsigned long long *)(pcVar9 + -0x10) = *(unsigned long long *)(pcVar14 + -0x10);
                  *(unsigned long long *)(pcVar9 + -8) = uVar2;
                  *(unsigned long long *)pcVar9 = uVar3;
                  *(unsigned long long *)(pcVar9 + 8) = uVar4;
                  pcVar9 = pcVar9 + 0x80;
                  pcVar14 = pcVar14 + 0x80;
                  lVar25 = lVar25 + -0x80;
                } while (lVar25 != 0);
              }
              if (sVar11 == uVar21) goto LAB_1001a7fbc;
              pcVar22 = pcVar15 + uVar21;
              pcVar26 = pcVar20 + uVar21;
            }
            do {
              *pcVar22 = *pcVar26;
              pcVar26 = pcVar26 + 1;
              pcVar22 = pcVar22 + 1;
            } while (pcVar18 != pcVar26);
          }
LAB_1001a7fbc:
          pcVar14 = pcVar15 + -1;
          pcVar15[-1] = (&internal::BasicData<void>::DIGITS)[(uVar8 % 100) * 2];
          uVar28 = uVar28 + 2;
          pcVar9 = pcVar14;
          if (uVar28 == (uVar28 / 3) * 3) {
            pcVar9 = pcVar14 + lVar10;
            pcVar22 = pcVar9;
            pcVar26 = pcVar20;
            if (((0x1f < sVar11) && (uVar21 != 0)) && ((pcVar18 <= pcVar9 || (pcVar14 <= pcVar20))))
            {
              if (uVar12 == 0) {
                lVar13 = 0;
              }
              else {
                lVar13 = 0;
                lVar25 = -uVar12;
                do {
                  uVar2 = *(unsigned long long *)(pcVar20 + lVar13 + 8);
                  uVar3 = *(unsigned long long *)(pcVar20 + lVar13 + 0x10);
                  uVar4 = *(unsigned long long *)(pcVar20 + lVar13 + 0x10 + 8);
                  *(unsigned long long *)(pcVar15 + lVar13 + lVar17 + -1) =
                       *(unsigned long long *)(pcVar20 + lVar13);
                  *(unsigned long long *)(pcVar15 + lVar13 + lVar17 + -1 + 8) = uVar2;
                  *(unsigned long long *)(pcVar15 + lVar13 + lVar17 + 0xf) = uVar3;
                  *(unsigned long long *)(pcVar15 + lVar13 + lVar17 + 0xf + 8) = uVar4;
                  lVar13 = lVar13 + 0x20;
                  lVar25 = lVar25 + 1;
                } while (lVar25 != 0);
              }
              if (0x5f < uVar23) {
                lVar25 = uVar21 - lVar13;
                pcVar15 = pcVar15 + lVar13 + (0x6f - sVar11);
                pcVar14 = pcVar20 + lVar13 + 0x70;
                do {
                  uVar2 = *(unsigned long long *)(pcVar14 + -0x68);
                  uVar3 = *(unsigned long long *)(pcVar14 + -0x60);
                  uVar4 = *(unsigned long long *)(pcVar14 + -0x58);
                  *(unsigned long long *)(pcVar15 + -0x70) = *(unsigned long long *)(pcVar14 + -0x70);
                  *(unsigned long long *)(pcVar15 + -0x68) = uVar2;
                  *(unsigned long long *)(pcVar15 + -0x60) = uVar3;
                  *(unsigned long long *)(pcVar15 + -0x58) = uVar4;
                  uVar2 = *(unsigned long long *)(pcVar14 + -0x48);
                  uVar3 = *(unsigned long long *)(pcVar14 + -0x40);
                  uVar4 = *(unsigned long long *)(pcVar14 + -0x38);
                  *(unsigned long long *)(pcVar15 + -0x50) = *(unsigned long long *)(pcVar14 + -0x50);
                  *(unsigned long long *)(pcVar15 + -0x48) = uVar2;
                  *(unsigned long long *)(pcVar15 + -0x40) = uVar3;
                  *(unsigned long long *)(pcVar15 + -0x38) = uVar4;
                  uVar2 = *(unsigned long long *)(pcVar14 + -0x28);
                  uVar3 = *(unsigned long long *)(pcVar14 + -0x20);
                  uVar4 = *(unsigned long long *)(pcVar14 + -0x18);
                  *(unsigned long long *)(pcVar15 + -0x30) = *(unsigned long long *)(pcVar14 + -0x30);
                  *(unsigned long long *)(pcVar15 + -0x28) = uVar2;
                  *(unsigned long long *)(pcVar15 + -0x20) = uVar3;
                  *(unsigned long long *)(pcVar15 + -0x18) = uVar4;
                  uVar2 = *(unsigned long long *)(pcVar14 + -8);
                  uVar3 = *(unsigned long long *)pcVar14;
                  uVar4 = *(unsigned long long *)(pcVar14 + 8);
                  *(unsigned long long *)(pcVar15 + -0x10) = *(unsigned long long *)(pcVar14 + -0x10);
                  *(unsigned long long *)(pcVar15 + -8) = uVar2;
                  *(unsigned long long *)pcVar15 = uVar3;
                  *(unsigned long long *)(pcVar15 + 8) = uVar4;
                  pcVar15 = pcVar15 + 0x80;
                  pcVar14 = pcVar14 + 0x80;
                  lVar25 = lVar25 + -0x80;
                } while (lVar25 != 0);
              }
              if (sVar11 == uVar21) goto LAB_1001a80f3;
              pcVar22 = pcVar9 + uVar21;
              pcVar26 = pcVar20 + uVar21;
            }
            do {
              *pcVar22 = *pcVar26;
              pcVar26 = pcVar26 + 1;
              pcVar22 = pcVar22 + 1;
            } while (pcVar18 != pcVar26);
          }
LAB_1001a80f3:
          bVar1 = 9999 < uVar8;
          uVar8 = param_2;
        } while (bVar1);
      }
    }
    if (param_2 < 10) {
      pcVar9[-1] = (char)param_2 + '0';
      return;
    }
    lVar10 = (param_2 & 0x7fffffff) * 2;
    pcVar18 = pcVar9 + -1;
    pcVar9[-1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 [lVar10];
    pcVar14 = pcVar18;
    if ((uVar28 + 1 == ((uVar28 + 1) / 3) * 3) && (pcVar14 = pcVar18 + -sVar11, sVar11 != 0)) {
      pcVar15 = pcVar20 + sVar11;
      pcVar22 = pcVar14;
      if (((0x1f < sVar11) && (uVar23 = sVar11 & 0xffffffffffffffe0, uVar23 != 0)) &&
         ((pcVar15 <= pcVar14 || (pcVar18 <= pcVar20)))) {
        uVar24 = ((uint)(uVar23 - 0x20 >> 5) & 0x7ffffff) + 1;
        if ((uVar24 & 3) == 0) {
          lVar17 = 0;
        }
        else {
          lVar13 = -((unsigned long)uVar24 & 3);
          lVar17 = 0;
          do {
            uVar2 = *(unsigned long long *)(pcVar20 + lVar17 + 8);
            uVar3 = *(unsigned long long *)(pcVar20 + lVar17 + 0x10);
            uVar4 = *(unsigned long long *)(pcVar20 + lVar17 + 0x10 + 8);
            *(unsigned long long *)(pcVar9 + lVar17 + -sVar11 + -1) = *(unsigned long long *)(pcVar20 + lVar17);
            *(unsigned long long *)(pcVar9 + lVar17 + -sVar11 + -1 + 8) = uVar2;
            *(unsigned long long *)(pcVar9 + lVar17 + -sVar11 + 0xf) = uVar3;
            *(unsigned long long *)(pcVar9 + lVar17 + -sVar11 + 0xf + 8) = uVar4;
            lVar17 = lVar17 + 0x20;
            lVar13 = lVar13 + 1;
          } while (lVar13 != 0);
        }
        if (0x5f < uVar23 - 0x20) {
          lVar13 = uVar23 - lVar17;
          pcVar9 = pcVar9 + ((lVar17 + 0x6f) - sVar11);
          pcVar18 = pcVar20 + lVar17 + 0x70;
          do {
            uVar2 = *(unsigned long long *)(pcVar18 + -0x68);
            uVar3 = *(unsigned long long *)(pcVar18 + -0x60);
            uVar4 = *(unsigned long long *)(pcVar18 + -0x58);
            *(unsigned long long *)(pcVar9 + -0x70) = *(unsigned long long *)(pcVar18 + -0x70);
            *(unsigned long long *)(pcVar9 + -0x68) = uVar2;
            *(unsigned long long *)(pcVar9 + -0x60) = uVar3;
            *(unsigned long long *)(pcVar9 + -0x58) = uVar4;
            uVar2 = *(unsigned long long *)(pcVar18 + -0x48);
            uVar3 = *(unsigned long long *)(pcVar18 + -0x40);
            uVar4 = *(unsigned long long *)(pcVar18 + -0x38);
            *(unsigned long long *)(pcVar9 + -0x50) = *(unsigned long long *)(pcVar18 + -0x50);
            *(unsigned long long *)(pcVar9 + -0x48) = uVar2;
            *(unsigned long long *)(pcVar9 + -0x40) = uVar3;
            *(unsigned long long *)(pcVar9 + -0x38) = uVar4;
            uVar2 = *(unsigned long long *)(pcVar18 + -0x28);
            uVar3 = *(unsigned long long *)(pcVar18 + -0x20);
            uVar4 = *(unsigned long long *)(pcVar18 + -0x18);
            *(unsigned long long *)(pcVar9 + -0x30) = *(unsigned long long *)(pcVar18 + -0x30);
            *(unsigned long long *)(pcVar9 + -0x28) = uVar2;
            *(unsigned long long *)(pcVar9 + -0x20) = uVar3;
            *(unsigned long long *)(pcVar9 + -0x18) = uVar4;
            uVar2 = *(unsigned long long *)(pcVar18 + -8);
            uVar3 = *(unsigned long long *)pcVar18;
            uVar4 = *(unsigned long long *)(pcVar18 + 8);
            *(unsigned long long *)(pcVar9 + -0x10) = *(unsigned long long *)(pcVar18 + -0x10);
            *(unsigned long long *)(pcVar9 + -8) = uVar2;
            *(unsigned long long *)pcVar9 = uVar3;
            *(unsigned long long *)(pcVar9 + 8) = uVar4;
            pcVar9 = pcVar9 + 0x80;
            pcVar18 = pcVar18 + 0x80;
            lVar13 = lVar13 + -0x80;
          } while (lVar13 != 0);
        }
        if (sVar11 == uVar23) goto LAB_1001a83a4;
        pcVar20 = pcVar20 + uVar23;
        pcVar22 = pcVar14 + uVar23;
      }
      do {
        *pcVar22 = *pcVar20;
        pcVar20 = pcVar20 + 1;
        pcVar22 = pcVar22 + 1;
      } while (pcVar15 != pcVar20);
    }
LAB_1001a83a4:
    pcVar14[-1] = (&internal::BasicData<void>::DIGITS)[lVar10];
    break;
  case 'o':
    if ((in_stack_00000010 & 0x800000000) != 0) {
      *(unsigned char *)((long)&local_34 + uVar23) = 0x30;
      uVar23 = (unsigned long)(uVar24 + 1);
    }
    uVar24 = 0;
    uVar8 = param_2;
    do {
      uVar24 = uVar24 + 1;
      uVar8 = uVar8 >> 3;
    } while (uVar8 != 0);
    pbVar16 = (byte *)prepare_int_buffer<fmt::FormatSpec>
                                (param_1,uVar24,(FormatSpec *)&stack0x00000008,(char *)&local_34,
                                 (uint)uVar23);
    do {
      *pbVar16 = (byte)param_2 & 7 | 0x30;
      pbVar16 = pbVar16 + -1;
      param_2 = param_2 >> 3;
    } while (param_2 != 0);
    break;
  default:
    if (in_stack_00000018._4_1_ != '\0') goto switchD_1001a7b9c_caseD_43;
  case 'd':
    lVar10 = 0x3f;
    if ((param_2 | 1) != 0) {
      for (; (param_2 | 1) >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar7 = ((uint)lVar10 ^ 0xffffffc0) * 0x4d1 + 0x13911 >> 0xc;
    iVar19 = -1;
    if (*(unsigned long *)(&internal::BasicData<void>::POWERS_OF_10_64 + (unsigned long)uVar7 * 8) <= param_2) {
      iVar19 = 0;
    }
    pcVar9 = prepare_int_buffer<fmt::FormatSpec>
                       (param_1,uVar7 + 1 + iVar19,(FormatSpec *)&stack0x00000008,(char *)&local_34,
                        uVar24);
    pcVar9 = pcVar9 + 1;
    uVar23 = param_2;
    if (99 < param_2) {
      do {
        param_2 = uVar23 / 100;
        pcVar9[-1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                     [(uVar23 % 100) * 2];
        pcVar9[-2] = (&internal::BasicData<void>::DIGITS)[(uVar23 % 100) * 2];
        pcVar9 = pcVar9 + -2;
        bVar1 = 9999 < uVar23;
        uVar23 = param_2;
      } while (bVar1);
    }
    if (param_2 < 10) {
      pcVar9[-1] = (char)param_2 + '0';
    }
    else {
      lVar10 = (param_2 & 0x7fffffff) * 2;
      cVar6 = (&internal::BasicData<void>::DIGITS)[lVar10];
      pcVar9[-1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   [lVar10];
      pcVar9[-2] = cVar6;
    }
  }
  return;
}
}
