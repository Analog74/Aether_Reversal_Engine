#include <ni/controller_editor/format_fmt.hpp>
namespace fmt::PrintfFormatter<char, fmt::PrintfArgFormatter<char> > {

void format(fmt::BasicCStringRef<char>) {
unsigned long uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned long long uVar6;
  unsigned long long uVar7;
  unsigned long long uVar8;
  int iVar9;
  char *pcVar10;
  FormatError *pFVar11;
  long lVar12;
  char *pcVar13;
  unsigned long long *puVar14;
  long lVar15;
  char cVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  char *pcVar21;
  unsigned long long *puVar22;
  ArgVisitor<fmt::internal::ArgConverter<long>,void> *this_00;
  char *pcVar23;
  unsigned long uVar24;
  char *pcVar25;
  unsigned long uVar26;
  Arg *local_118;
  int local_110;
  Arg *local_108;
  int local_100;
  Arg *local_f8;
  int local_f0;
  Arg *local_e8;
  int local_e0;
  Arg *local_d8;
  int local_d0;
  Arg *local_c8;
  int local_c0;
  Arg *local_b8;
  int local_b0;
  unsigned long long local_a8;
  unsigned long long *local_a0;
  PrintfFormatter<char,fmt::PrintfArgFormatter<char>> *local_98;
  unsigned long long *local_90;
  unsigned long long local_88;
  unsigned long uStack_80;
  uint local_78;
  char local_74;
  ArgVisitor<fmt::internal::PrecisionHandler,int> local_68 [8];
  char *local_60;
  uint local_58;
  unsigned int uStack_54;
  int local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1002272e0;
  pcVar13 = param_2;
  while (local_60 = pcVar13, pcVar21 = local_60, *local_60 != '\0') {
    pcVar13 = local_60 + 1;
    if (*local_60 == '%') {
      if (*pcVar13 == '%') {
        if (param_2 != pcVar13) {
          uVar26 = (long)pcVar13 - (long)param_2;
          puVar22 = *(unsigned long long **)(*(long *)(this + 0x18) + 8);
          lVar15 = puVar22[2];
          uVar1 = lVar15 + uVar26;
          local_98 = this;
          local_60 = pcVar13;
          if ((unsigned long)puVar22[3] < uVar1) {
            local_90 = puVar22;
            (**(code **)*puVar22)();
            lVar15 = local_90[2];
            puVar22 = local_90;
          }
          if (uVar26 != 0) {
            lVar19 = puVar22[1];
            pcVar10 = (char *)(lVar19 + lVar15);
            if (((0x1f < uVar26) && (uVar24 = uVar26 & 0xffffffffffffffe0, uVar24 != 0)) &&
               ((pcVar13 <= pcVar10 || (pcVar13 + ((long)pcVar10 - (long)param_2) <= param_2)))) {
              uVar17 = ((uint)(uVar26 - 0x20 >> 5) & 0x7ffffff) + 1;
              if ((uVar17 & 3) == 0) {
                lVar12 = 0;
              }
              else {
                lVar20 = lVar19 + 0x10 + lVar15;
                lVar18 = -((unsigned long)uVar17 & 3);
                lVar12 = 0;
                do {
                  pcVar13 = param_2 + lVar12;
                  uVar3 = *(unsigned int *)(pcVar13 + 4);
                  uVar4 = *(unsigned int *)(pcVar13 + 8);
                  uVar5 = *(unsigned int *)(pcVar13 + 0xc);
                  uVar6 = *(unsigned long long *)(param_2 + lVar12 + 0x10);
                  uVar7 = *(unsigned long long *)(param_2 + lVar12 + 0x10 + 8);
                  puVar2 = (unsigned int *)(lVar20 + -0x10 + lVar12);
                  *puVar2 = *(unsigned int *)pcVar13;
                  puVar2[1] = uVar3;
                  puVar2[2] = uVar4;
                  puVar2[3] = uVar5;
                  puVar14 = (unsigned long long *)(lVar20 + lVar12);
                  *puVar14 = uVar6;
                  puVar14[1] = uVar7;
                  lVar12 = lVar12 + 0x20;
                  lVar18 = lVar18 + 1;
                } while (lVar18 != 0);
              }
              if (0x5f < uVar26 - 0x20) {
                lVar20 = uVar24 - lVar12;
                puVar14 = (unsigned long long *)(lVar19 + 0x70 + lVar15 + lVar12);
                pcVar13 = param_2 + lVar12 + 0x70;
                do {
                  uVar6 = *(unsigned long long *)(pcVar13 + -0x68);
                  uVar7 = *(unsigned long long *)(pcVar13 + -0x60);
                  uVar8 = *(unsigned long long *)(pcVar13 + -0x58);
                  puVar14[-0xe] = *(unsigned long long *)(pcVar13 + -0x70);
                  puVar14[-0xd] = uVar6;
                  puVar14[-0xc] = uVar7;
                  puVar14[-0xb] = uVar8;
                  uVar6 = *(unsigned long long *)(pcVar13 + -0x48);
                  uVar7 = *(unsigned long long *)(pcVar13 + -0x40);
                  uVar8 = *(unsigned long long *)(pcVar13 + -0x38);
                  puVar14[-10] = *(unsigned long long *)(pcVar13 + -0x50);
                  puVar14[-9] = uVar6;
                  puVar14[-8] = uVar7;
                  puVar14[-7] = uVar8;
                  uVar6 = *(unsigned long long *)(pcVar13 + -0x28);
                  uVar7 = *(unsigned long long *)(pcVar13 + -0x20);
                  uVar8 = *(unsigned long long *)(pcVar13 + -0x18);
                  puVar14[-6] = *(unsigned long long *)(pcVar13 + -0x30);
                  puVar14[-5] = uVar6;
                  puVar14[-4] = uVar7;
                  puVar14[-3] = uVar8;
                  uVar3 = *(unsigned int *)(pcVar13 + -0xc);
                  uVar4 = *(unsigned int *)(pcVar13 + -8);
                  uVar5 = *(unsigned int *)(pcVar13 + -4);
                  uVar6 = *(unsigned long long *)pcVar13;
                  uVar7 = *(unsigned long long *)(pcVar13 + 8);
                  *(unsigned int *)(puVar14 + -2) = *(unsigned int *)(pcVar13 + -0x10);
                  *(unsigned int *)((long)puVar14 + -0xc) = uVar3;
                  *(unsigned int *)(puVar14 + -1) = uVar4;
                  *(unsigned int *)((long)puVar14 + -4) = uVar5;
                  *puVar14 = uVar6;
                  puVar14[1] = uVar7;
                  puVar14 = puVar14 + 0x10;
                  pcVar13 = pcVar13 + 0x80;
                  lVar20 = lVar20 + -0x80;
                } while (lVar20 != 0);
              }
              if (uVar26 == uVar24) goto LAB_1001ad833;
              param_2 = param_2 + uVar24;
              pcVar10 = pcVar10 + uVar24;
            }
            param_2 = param_2 + -1;
            do {
              pcVar13 = param_2 + 1;
              param_2 = param_2 + 1;
              *pcVar10 = *pcVar13;
              pcVar10 = pcVar10 + 1;
            } while (pcVar21 != param_2);
          }
LAB_1001ad833:
          puVar22[2] = uVar1;
          param_2 = local_60;
          this = local_98;
        }
        param_2 = param_2 + 1;
        pcVar13 = param_2;
      }
      else {
        if (param_2 + 1 != pcVar13) {
          lVar19 = (long)local_60 - (long)param_2;
          puVar22 = *(unsigned long long **)(*(long *)(this + 0x18) + 8);
          lVar15 = puVar22[2];
          uVar1 = lVar15 + lVar19;
          local_98 = this;
          local_60 = pcVar13;
          if ((unsigned long)puVar22[3] < uVar1) {
            local_90 = puVar22;
            (**(code **)*puVar22)(puVar22,uVar1);
            lVar15 = local_90[2];
            puVar22 = local_90;
          }
          if (lVar19 != 0) {
            lVar19 = puVar22[1];
            pcVar10 = (char *)(lVar19 + lVar15);
            pcVar25 = pcVar13 + (-1 - (long)param_2);
            if ((((char *)0x1f < pcVar25) &&
                (pcVar23 = (char *)((unsigned long)pcVar25 & 0xffffffffffffffe0), pcVar23 != (char *)0x0))
               && ((pcVar21 <= pcVar10 || (pcVar21 + (lVar15 - (long)param_2) + lVar19 <= param_2)))
               ) {
              uVar17 = ((uint)((unsigned long)(pcVar13 + (-0x21 - (long)param_2)) >> 5) & 0x7ffffff) + 1;
              if ((uVar17 & 3) == 0) {
                lVar12 = 0;
              }
              else {
                lVar20 = lVar19 + 0x10 + lVar15;
                lVar18 = -((unsigned long)uVar17 & 3);
                lVar12 = 0;
                do {
                  uVar6 = *(unsigned long long *)(param_2 + lVar12 + 8);
                  uVar7 = *(unsigned long long *)(param_2 + lVar12 + 0x10);
                  uVar8 = *(unsigned long long *)(param_2 + lVar12 + 0x10 + 8);
                  puVar14 = (unsigned long long *)(lVar20 + -0x10 + lVar12);
                  *puVar14 = *(unsigned long long *)(param_2 + lVar12);
                  puVar14[1] = uVar6;
                  puVar14 = (unsigned long long *)(lVar20 + lVar12);
                  *puVar14 = uVar7;
                  puVar14[1] = uVar8;
                  lVar12 = lVar12 + 0x20;
                  lVar18 = lVar18 + 1;
                } while (lVar18 != 0);
              }
              if ((char *)0x5f < pcVar13 + (-0x21 - (long)param_2)) {
                lVar20 = (long)pcVar23 - lVar12;
                puVar14 = (unsigned long long *)(lVar19 + 0x70 + lVar15 + lVar12);
                pcVar21 = param_2 + lVar12 + 0x70;
                do {
                  uVar6 = *(unsigned long long *)(pcVar21 + -0x68);
                  uVar7 = *(unsigned long long *)(pcVar21 + -0x60);
                  uVar8 = *(unsigned long long *)(pcVar21 + -0x58);
                  puVar14[-0xe] = *(unsigned long long *)(pcVar21 + -0x70);
                  puVar14[-0xd] = uVar6;
                  puVar14[-0xc] = uVar7;
                  puVar14[-0xb] = uVar8;
                  uVar6 = *(unsigned long long *)(pcVar21 + -0x48);
                  uVar7 = *(unsigned long long *)(pcVar21 + -0x40);
                  uVar8 = *(unsigned long long *)(pcVar21 + -0x38);
                  puVar14[-10] = *(unsigned long long *)(pcVar21 + -0x50);
                  puVar14[-9] = uVar6;
                  puVar14[-8] = uVar7;
                  puVar14[-7] = uVar8;
                  uVar6 = *(unsigned long long *)(pcVar21 + -0x28);
                  uVar7 = *(unsigned long long *)(pcVar21 + -0x20);
                  uVar8 = *(unsigned long long *)(pcVar21 + -0x18);
                  puVar14[-6] = *(unsigned long long *)(pcVar21 + -0x30);
                  puVar14[-5] = uVar6;
                  puVar14[-4] = uVar7;
                  puVar14[-3] = uVar8;
                  uVar6 = *(unsigned long long *)(pcVar21 + -8);
                  uVar7 = *(unsigned long long *)pcVar21;
                  uVar8 = *(unsigned long long *)(pcVar21 + 8);
                  puVar14[-2] = *(unsigned long long *)(pcVar21 + -0x10);
                  puVar14[-1] = uVar6;
                  *puVar14 = uVar7;
                  puVar14[1] = uVar8;
                  puVar14 = puVar14 + 0x10;
                  pcVar21 = pcVar21 + 0x80;
                  lVar20 = lVar20 + -0x80;
                } while (lVar20 != 0);
              }
              if (pcVar25 == pcVar23) goto LAB_1001ad8e7;
              param_2 = param_2 + (long)pcVar23;
              pcVar10 = pcVar10 + (long)pcVar23;
            }
            do {
              *pcVar10 = *param_2;
              pcVar10 = pcVar10 + 1;
              pcVar21 = param_2 + 2;
              param_2 = param_2 + 1;
            } while (pcVar21 != pcVar13);
          }
LAB_1001ad8e7:
          puVar22[2] = uVar1;
          this = local_98;
          pcVar13 = local_60;
        }
        local_60 = pcVar13;
        local_78 = 0xffffffff;
        local_74 = 0;
        local_88 = 0x2000000000;
        uStack_80 = 2;
        parse_header(this,&local_60,(FormatSpec *)&local_88);
        uVar17 = local_78;
        if (*local_60 == '.') {
          cVar16 = local_60[1];
          if ((byte)(cVar16 - 0x30U) < 10) {
            uVar17 = 0;
            pcVar13 = local_60 + 2;
            local_60 = local_60 + 1;
            do {
              pcVar21 = pcVar13;
              if (0xccccccc < uVar17) goto LAB_1001adec8;
              uVar17 = cVar16 + -0x30 + uVar17 * 10;
              cVar16 = *pcVar21;
              pcVar13 = pcVar21 + 1;
              local_60 = pcVar21;
            } while ((byte)(cVar16 - 0x30U) < 10);
            if ((int)uVar17 < 0) {
LAB_1001adec8:
              pFVar11 = (FormatError *)___cxa_allocate_exception(0x10);
              FormatError::FormatError(pFVar11,"number is too big");
              goto LAB_1001adee4;
            }
          }
          else if (cVar16 == '*') {
            local_60 = local_60 + 2;
            get_arg((char *)&local_58,(uint)this);
            uVar17 = ArgVisitor<fmt::internal::PrecisionHandler,int>::visit
                               (local_68,(Arg *)&local_58);
          }
          else {
            local_78 = 0;
            uVar17 = local_78;
            local_60 = local_60 + 1;
          }
        }
        local_78 = uVar17;
        get_arg((char *)&local_58,(uint)this);
        if ((uStack_80 & 0x800000000) != 0) {
          switch(local_48) {
          case 2:
          case 3:
          case 6:
          case 7:
            if (local_58 == 0) {
LAB_1001ada1d:
              uStack_80 = uStack_80 & 0xfffffff7ffffffff;
            }
            break;
          case 4:
          case 5:
            if (CONCAT44(uStack_54,local_58) == 0) goto LAB_1001ada1d;
          }
        }
        if (local_88._4_4_ == 0x30) {
          if (local_48 < 10) {
            uStack_80 = CONCAT44(uStack_80._4_4_,4);
          }
          else {
            local_88 = CONCAT44(0x20,(unsigned int)local_88);
          }
        }
        pcVar13 = local_60 + 1;
        switch(*local_60) {
        case 'L':
          break;
        default:
          pcVar13 = local_60;
          if (local_48 - 2U < 6) {
            cVar16 = *local_60;
            iVar9 = (int)cVar16;
            switch(local_48) {
            case 2:
              if ((iVar9 - 100U < 0x10) && ((0x8021U >> (iVar9 - 100U & 0x1f) & 1) != 0)) {
                local_48 = 2;
              }
              else {
LAB_1001add10:
                local_48 = 3;
              }
              break;
            case 3:
              if ((cVar16 == 's') || (cVar16 != 'd' && cVar16 != 'i')) goto LAB_1001add10;
              local_48 = 2;
              break;
            case 4:
              if ((iVar9 - 100U < 0x10) && ((0x8021U >> (iVar9 - 100U & 0x1f) & 1) != 0)) {
                local_48 = 4;
              }
              else {
                local_48 = 5;
              }
              break;
            case 5:
              if ((cVar16 == 's') || (cVar16 != 'd' && cVar16 != 'i')) {
                local_48 = 5;
              }
              else {
                local_48 = 4;
              }
              break;
            case 6:
              if (iVar9 == 100) {
LAB_1001adc79:
                local_58 = (uint)(local_58 != 0);
                local_48 = 2;
              }
              else if (iVar9 != 0x73) {
                if (iVar9 == 0x69) goto LAB_1001adc79;
                local_58 = (uint)(local_58 != 0);
                local_48 = 3;
              }
              break;
            case 7:
              if (iVar9 != 100) {
                if (iVar9 == 0x73) break;
                if (iVar9 != 0x69) goto LAB_1001add10;
              }
              local_48 = 2;
            }
          }
          break;
        case 'h':
          if (*pcVar13 == 0x68) {
            local_110 = (int)local_60[2];
            local_118 = (Arg *)&local_58;
            local_60 = local_60 + 2;
            ArgVisitor<fmt::internal::ArgConverter<signed_char>,void>::visit
                      ((ArgVisitor<fmt::internal::ArgConverter<signed_char>,void> *)&local_118,
                       (Arg *)&local_58);
            pcVar13 = local_60;
          }
          else {
            local_108 = (Arg *)&local_58;
            local_100 = (int)*pcVar13;
            local_60 = pcVar13;
            ArgVisitor<fmt::internal::ArgConverter<short>,void>::visit
                      ((ArgVisitor<fmt::internal::ArgConverter<short>,void> *)&local_108,
                       (Arg *)&local_58);
            pcVar13 = local_60;
          }
          break;
        case 'j':
          local_d0 = (int)*pcVar13;
          this_00 = (ArgVisitor<fmt::internal::ArgConverter<long>,void> *)&local_d8;
          local_d8 = (Arg *)&local_58;
          goto LAB_1001adbac;
        case 'l':
          if (*pcVar13 != 0x6c) {
            this_00 = (ArgVisitor<fmt::internal::ArgConverter<long>,void> *)&local_e8;
            local_e8 = (Arg *)&local_58;
            local_e0 = (int)*pcVar13;
            goto LAB_1001adbac;
          }
          local_f0 = (int)local_60[2];
          local_f8 = (Arg *)&local_58;
          local_60 = local_60 + 2;
          ArgVisitor<fmt::internal::ArgConverter<long_long>,void>::visit
                    ((ArgVisitor<fmt::internal::ArgConverter<long_long>,void> *)&local_f8,
                     (Arg *)&local_58);
          pcVar13 = local_60;
          break;
        case 't':
          local_b0 = (int)*pcVar13;
          this_00 = (ArgVisitor<fmt::internal::ArgConverter<long>,void> *)&local_b8;
          local_b8 = (Arg *)&local_58;
LAB_1001adbac:
          local_60 = pcVar13;
          ArgVisitor<fmt::internal::ArgConverter<long>,void>::visit(this_00,(Arg *)&local_58);
          pcVar13 = local_60;
          break;
        case 'z':
          local_c0 = (int)*pcVar13;
          local_c8 = (Arg *)&local_58;
          local_60 = pcVar13;
          ArgVisitor<fmt::internal::ArgConverter<unsigned_long>,void>::visit
                    ((ArgVisitor<fmt::internal::ArgConverter<unsigned_long>,void> *)&local_c8,
                     (Arg *)&local_58);
          pcVar13 = local_60;
        }
        local_60 = pcVar13;
        if (*local_60 == '\0') {
          pFVar11 = (FormatError *)___cxa_allocate_exception(0x10);
          FormatError::FormatError(pFVar11,"invalid format string");
LAB_1001adee4:
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(pFVar11,&FormatError::typeinfo,FormatError::~FormatError);
        }
        param_2 = local_60 + 1;
        local_74 = *local_60;
        if (local_74 == 's') {
          if (local_48 - 2U < 0xd) {
            local_74 = (&0)[(int)(local_48 - 2U)];
          }
          else {
            local_74 = '\0';
          }
        }
        if (local_48 < 8) {
          if (local_74 == 'c') {
            switch(local_48) {
            case 2:
            case 3:
            case 4:
            case 5:
            case 7:
              local_58 = (uint)(char)local_58._0_1_;
              break;
            case 6:
              local_58 = (uint)(local_58 != 0);
              break;
            default:
              goto switchD_1001adc25_default;
            }
            local_48 = 7;
          }
          else if ((local_74 == 'u') || (local_74 == 'i')) {
            local_74 = 'd';
          }
        }
switchD_1001adc25_default:
        local_a8 = *(unsigned long long *)(this + 0x18);
        local_a0 = &local_88;
        local_60 = param_2;
        ArgVisitor<fmt::PrintfArgFormatter<char>,void>::visit
                  ((ArgVisitor<fmt::PrintfArgFormatter<char>,void> *)&local_a8,(Arg *)&local_58);
        pcVar13 = local_60;
      }
    }
  }
  if (param_2 == local_60) goto LAB_1001adea6;
  uVar26 = (long)local_60 - (long)param_2;
  puVar22 = *(unsigned long long **)(*(long *)(this + 0x18) + 8);
  lVar15 = puVar22[2];
  uVar1 = lVar15 + uVar26;
  if ((unsigned long)puVar22[3] < uVar1) {
    (**(code **)*puVar22)(puVar22,uVar1);
    lVar15 = puVar22[2];
  }
  if (uVar26 != 0) {
    lVar19 = puVar22[1];
    pcVar13 = (char *)(lVar19 + lVar15);
    if (((0x1f < uVar26) && (uVar24 = uVar26 & 0xffffffffffffffe0, uVar24 != 0)) &&
       ((pcVar21 <= pcVar13 || (pcVar21 + (lVar15 - (long)param_2) + lVar19 <= param_2)))) {
      uVar17 = ((uint)(uVar24 - 0x20 >> 5) & 0x7ffffff) + 1;
      if ((uVar17 & 3) == 0) {
        lVar12 = 0;
      }
      else {
        lVar20 = lVar19 + 0x10 + lVar15;
        lVar18 = -((unsigned long)uVar17 & 3);
        lVar12 = 0;
        do {
          pcVar10 = param_2 + lVar12;
          uVar3 = *(unsigned int *)(pcVar10 + 4);
          uVar4 = *(unsigned int *)(pcVar10 + 8);
          uVar5 = *(unsigned int *)(pcVar10 + 0xc);
          uVar6 = *(unsigned long long *)(param_2 + lVar12 + 0x10);
          uVar7 = *(unsigned long long *)(param_2 + lVar12 + 0x10 + 8);
          puVar2 = (unsigned int *)(lVar20 + -0x10 + lVar12);
          *puVar2 = *(unsigned int *)pcVar10;
          puVar2[1] = uVar3;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          puVar14 = (unsigned long long *)(lVar20 + lVar12);
          *puVar14 = uVar6;
          puVar14[1] = uVar7;
          lVar12 = lVar12 + 0x20;
          lVar18 = lVar18 + 1;
        } while (lVar18 != 0);
      }
      if (0x5f < uVar24 - 0x20) {
        lVar20 = uVar24 - lVar12;
        puVar14 = (unsigned long long *)(lVar19 + 0x70 + lVar15 + lVar12);
        pcVar10 = param_2 + lVar12 + 0x70;
        do {
          uVar6 = *(unsigned long long *)(pcVar10 + -0x68);
          uVar7 = *(unsigned long long *)(pcVar10 + -0x60);
          uVar8 = *(unsigned long long *)(pcVar10 + -0x58);
          puVar14[-0xe] = *(unsigned long long *)(pcVar10 + -0x70);
          puVar14[-0xd] = uVar6;
          puVar14[-0xc] = uVar7;
          puVar14[-0xb] = uVar8;
          uVar6 = *(unsigned long long *)(pcVar10 + -0x48);
          uVar7 = *(unsigned long long *)(pcVar10 + -0x40);
          uVar8 = *(unsigned long long *)(pcVar10 + -0x38);
          puVar14[-10] = *(unsigned long long *)(pcVar10 + -0x50);
          puVar14[-9] = uVar6;
          puVar14[-8] = uVar7;
          puVar14[-7] = uVar8;
          uVar6 = *(unsigned long long *)(pcVar10 + -0x28);
          uVar7 = *(unsigned long long *)(pcVar10 + -0x20);
          uVar8 = *(unsigned long long *)(pcVar10 + -0x18);
          puVar14[-6] = *(unsigned long long *)(pcVar10 + -0x30);
          puVar14[-5] = uVar6;
          puVar14[-4] = uVar7;
          puVar14[-3] = uVar8;
          uVar3 = *(unsigned int *)(pcVar10 + -0xc);
          uVar4 = *(unsigned int *)(pcVar10 + -8);
          uVar5 = *(unsigned int *)(pcVar10 + -4);
          uVar6 = *(unsigned long long *)pcVar10;
          uVar7 = *(unsigned long long *)(pcVar10 + 8);
          *(unsigned int *)(puVar14 + -2) = *(unsigned int *)(pcVar10 + -0x10);
          *(unsigned int *)((long)puVar14 + -0xc) = uVar3;
          *(unsigned int *)(puVar14 + -1) = uVar4;
          *(unsigned int *)((long)puVar14 + -4) = uVar5;
          *puVar14 = uVar6;
          puVar14[1] = uVar7;
          puVar14 = puVar14 + 0x10;
          pcVar10 = pcVar10 + 0x80;
          lVar20 = lVar20 + -0x80;
        } while (lVar20 != 0);
      }
      if (uVar26 == uVar24) goto LAB_1001adea2;
      param_2 = param_2 + uVar24;
      pcVar13 = pcVar13 + uVar24;
    }
    do {
      *pcVar13 = *param_2;
      param_2 = param_2 + 1;
      pcVar13 = pcVar13 + 1;
    } while (param_2 != pcVar21);
  }
LAB_1001adea2:
  puVar22[2] = uVar1;
LAB_1001adea6:
  if (*(long *)PTR____stack_chk_guard_1002272e0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
