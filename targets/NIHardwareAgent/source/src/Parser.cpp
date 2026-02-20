#include <ni/controller_editor/Parser.hpp>
namespace NI::NHL2::MIDI {

void Parser::parseData(unsigned char const*, unsigned long, bool) {
Parser *pPVar1;
  Parser *pPVar2;
  char *pcVar3;
  long *plVar4;
  Parser *pPVar5;
  int iVar6;
  void *pvVar7;
  Parser *pPVar8;
  unsigned long uVar9;
  void7 in_register_00000009;
  Parser *pPVar10;
  Parser *pPVar11;
  unsigned long uVar12;
  char *pcVar13;
  void *pvVar14;
  Parser PVar15;
  uint uVar16;
  size_t sVar17;
  Parser *pPVar18;
  unsigned long uVar19;
  char cVar20;
  uint local_68 [2];
  void *local_60;
  Parser *local_58;
  uint local_4c;
  unsigned long local_48;
  Parser *local_40;
  Parser *local_38;
  
  if (param_2 != 0) {
    local_4c = (uint)0(in_register_00000009,param_3);
    uVar9 = 0(in_register_00000009,param_3) & 0xffffffff;
    pPVar8 = this + 0x70;
    pPVar1 = this + 0x80;
    pPVar2 = this + 0x88;
    local_40 = this;
    local_38 = pPVar8;
    do {
      PVar15 = (Parser)*param_1;
      uVar16 = (uint)(byte)PVar15;
      if (0xf7 < (byte)PVar15) {
        if (((((char)uVar9 != '\0') && ((*(uint *)this >> ((byte)PVar15 & 0xf) & 1) == 0)) &&
            ((byte)((char)PVar15 + 8U) < 8)) &&
           (((byte)((char)PVar15 + 8U) != 5 &&
            (plVar4 = *(long **)(this + 0x30), plVar4 != (long *)0x0)))) {
          local_68[0] = (uint)(byte)PVar15;
          (**(code **)(*plVar4 + 0x30))(plVar4,local_68);
          pPVar8 = local_38;
          this = local_40;
        }
        goto switchD_1001b1df7_caseD_0;
      }
      if (*pPVar8 == (Parser)0xf0) {
        if ((char)PVar15 < '\0') {
          *pPVar8 = (Parser)0x0;
          if (PVar15 == (Parser)0xf7) {
            if ((1 < *(uint *)(this + 0x74)) &&
               ((3 < *(uint *)(this + 0x74) || (pPVar8[1] != (Parser)0x0)))) {
              if (((char)uVar9 != '\0') &&
                 ((-1 < (char)*this && (plVar4 = *(long **)(this + 0x60), plVar4 != (long *)0x0))))
              {
                (**(code **)(*plVar4 + 0x30))(plVar4,pPVar1);
                pPVar8 = local_38;
                this = local_40;
              }
              *(unsigned long long *)(this + 0x90) = *(unsigned long long *)(this + 0x88);
            }
            goto switchD_1001b1df7_caseD_0;
          }
          if (Logging::detail::__reportLevelAsUInt < 2) {
            pcVar13 = Logging::allowedCategories;
            uVar9 = 0;
            pvVar14 = (void *)(unsigned long)(byte)PVar15;
            local_48 = param_2;
            if (0 == 0) {
              uVar19 = 0;
              uVar16 = (uint)(byte)PVar15;
            }
            else {
              do {
                while( true ) {
                  local_60 = pvVar14;
                  uVar19 = uVar9 >> 1;
                  iVar6 = // std code
                  pvVar14 = local_60;
                  if (-1 < iVar6) break;
                  uVar9 = ~uVar19 + uVar9;
                  pcVar13 = pcVar13 + uVar19 * 0x18 + 0x18;
                  if (uVar9 == 0) goto LAB_1001b1e7f;
                }
                uVar9 = uVar19;
              } while (uVar19 != 0);
LAB_1001b1e7f:
              uVar19 = 0;
              pPVar8 = local_38;
              this = local_40;
              uVar16 = (uint)local_60;
            }
            pcVar3 = Logging::allowedCategories + uVar19 * 0x18;
            uVar9 = (unsigned long)local_4c;
            if ((pcVar13 != pcVar3) &&
               (iVar6 = // std code
               this = local_40, 0 < iVar6)) {
              pcVar13 = pcVar3;
            }
            param_2 = local_48;
            if (pcVar13 != Logging::allowedCategories + uVar19 * 0x18) {
              Logging::detail::__trace__msg(1,"%s: Cancelled invalid SysEx message.\n","MIDIParser")
              ;
              pPVar8 = local_38;
              this = local_40;
            }
          }
          goto LAB_1001b20b0;
        }
        uVar16 = *(uint *)(this + 0x74);
        if (uVar16 - 2 < 2) {
          if (pPVar8[1] == (Parser)0x0) {
            *(uint *)(this + 0x80) =
                 *(uint *)(this + 0x80) + ((uint)(byte)PVar15 << ((char)uVar16 * -8 + 0x18U & 0x1f))
            ;
            *(uint *)(this + 0x74) = uVar16 + 1;
            this[(unsigned long)uVar16 + 0x70] = PVar15;
            goto switchD_1001b1df7_caseD_0;
          }
LAB_1001b1d89:
          *(uint *)(this + 0x74) = uVar16 + 1;
          pPVar10 = *(Parser **)(this + 0x90);
          pPVar11 = *(Parser **)(this + 0x98);
          local_48 = param_2;
          if (pPVar10 == pPVar11) {
            pvVar14 = *(void **)(this + 0x88);
            pPVar5 = (Parser *)((long)(pPVar11 + -(long)pvVar14) * 2);
            pPVar18 = pPVar10;
            if (pPVar11 + -(long)pvVar14 < pPVar5) {
              sVar17 = (long)pPVar10 - (long)pvVar14;
              local_60 = pvVar14;
              local_58 = pPVar5;
              pPVar8 = (Parser *)new((unsigned long)pPVar5);
              pPVar10 = pPVar8 + sVar17;
              pPVar11 = pPVar8 + (long)local_58;
              if (0 < (long)sVar17) {
                local_58 = pPVar8;
                memcpy(pPVar8,local_60,sVar17);
                pPVar8 = local_58;
              }
              *(Parser **)(local_40 + 0x88) = pPVar8;
              *(Parser **)(local_40 + 0x90) = pPVar10;
              *(Parser **)(local_40 + 0x98) = pPVar11;
              pPVar8 = local_38;
              this = local_40;
              if (local_60 != (void *)0x0) {
                delete(local_60);
                pPVar10 = *(Parser **)(local_40 + 0x90);
                pPVar11 = *(Parser **)(local_40 + 0x98);
                pPVar8 = local_38;
                this = local_40;
              }
              goto LAB_1001b1dae;
            }
          }
          else {
LAB_1001b1dae:
            pPVar18 = pPVar11;
            if (pPVar10 != pPVar11) {
              *pPVar10 = PVar15;
              *(Parser **)(this + 0x90) = pPVar10 + 1;
              param_2 = local_48;
              goto switchD_1001b1df7_caseD_0;
            }
          }
          pvVar14 = *(void **)pPVar2;
          uVar19 = (long)pPVar18 - (long)pvVar14;
          uVar9 = uVar19 + 1;
          if ((long)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            // std code
          }
          uVar12 = uVar19 * 2;
          if (uVar19 * 2 < uVar9) {
            uVar12 = uVar9;
          }
          if (0x3ffffffffffffffe < uVar19) {
            uVar12 = 0x7fffffffffffffff;
          }
          if (uVar12 == 0) {
            pvVar7 = (void *)0x0;
          }
          else {
            pvVar7 = new(uVar12);
            pPVar8 = local_38;
            this = local_40;
          }
          *(Parser *)((long)pvVar7 + uVar19) = PVar15;
          if (0 < (long)uVar19) {
            memcpy(pvVar7,pvVar14,uVar19);
            pPVar8 = local_38;
            this = local_40;
          }
          *(void **)(this + 0x88) = pvVar7;
          *(unsigned long *)(this + 0x90) = (long)pvVar7 + uVar19 + 1;
          *(unsigned long *)(this + 0x98) = uVar12 + (long)pvVar7;
          uVar9 = (unsigned long)local_4c;
          param_2 = local_48;
          if (pvVar14 != (void *)0x0) {
LAB_1001b201c:
            delete(pvVar14);
            pPVar8 = local_38;
            this = local_40;
          }
        }
        else {
          if (uVar16 == 0) goto switchD_1001b1df7_caseD_0;
          if (uVar16 != 1) goto LAB_1001b1d89;
          *(uint *)(this + 0x74) = 2;
          this[0x71] = PVar15;
          *(uint *)(this + 0x80) = (uint)(byte)PVar15 << 0x10;
          pvVar14 = *(void **)(this + 0x88);
          *(void **)(this + 0x90) = pvVar14;
          if ((unsigned long)(*(long *)(this + 0x98) - (long)pvVar14) < 0x400) {
            pvVar7 = new(0x400);
            *(void **)(local_40 + 0x88) = pvVar7;
            *(void **)(local_40 + 0x90) = pvVar7;
            *(long *)(local_40 + 0x98) = (long)pvVar7 + 0x400;
            pPVar8 = local_38;
            this = local_40;
            if (pvVar14 == (void *)0x0) goto switchD_1001b1df7_caseD_0;
            goto LAB_1001b201c;
          }
        }
      }
      else {
LAB_1001b20b0:
        PVar15 = SUB41(uVar16,0);
        cVar20 = (char)uVar9;
        if ((byte)PVar15 < 0xf0) {
          if ((char)PVar15 < '\0') {
            this[0x70] = PVar15;
            *(unsigned long long *)(this + 0x74) = 1;
            uVar16 = (uVar16 & 0xfffffff0) - 0x80 >> 4;
            if (uVar16 < 7) {
              if ((0x4fU >> (uVar16 & 0x1f) & 1) == 0) goto switchD_1001b1df7_caseD_1;
switchD_1001b1df7_caseD_2:
              *(uint *)(this + 0x78) = 2;
            }
            else if ((cVar20 != '\0') && (*(long **)(this + 0x30) != (long *)0x0)) {
              (**(code **)(**(long **)(this + 0x30) + 0x30))();
              pPVar8 = local_38;
              this = local_40;
            }
          }
          else if (((*pPVar8 != (Parser)0x0) && (*(uint *)(this + 0x78) != 0)) &&
                  ((unsigned long)*(uint *)(this + 0x74) < 3)) {
            this[(unsigned long)*(uint *)(this + 0x74) + 0x70] = PVar15;
            pPVar10 = this + 0x78;
            *(uint *)pPVar10 = *(uint *)pPVar10 - 1;
            if (*(uint *)pPVar10 == 0) {
              PVar15 = *pPVar8;
              if ((byte)PVar15 < 0xf0) {
                *(uint *)(this + 0x78) = *(uint *)(this + 0x74);
                *(uint *)(this + 0x74) = 1;
              }
              if ((cVar20 != '\0') && (*(long **)(this + 0x30) != (long *)0x0)) {
                (**(code **)(**(long **)(this + 0x30) + 0x30))();
                PVar15 = *local_38;
                pPVar8 = local_38;
                this = local_40;
              }
              if (0xef < (byte)PVar15) goto LAB_1001b21b5;
            }
            else {
              *(uint *)(this + 0x74) = *(uint *)(this + 0x74) + 1;
            }
          }
        }
        else {
          *(uint *)(this + 0x70) = 0;
          if ((*(uint *)this >> ((byte)PVar15 & 0xf) & 1) == 0) {
            this[0x70] = PVar15;
            *(unsigned long long *)(this + 0x74) = 1;
            switch(uVar16 + 0x10 & 0xff) {
            case 0:
              break;
            case 1:
            case 3:
switchD_1001b1df7_caseD_1:
              *(uint *)(this + 0x78) = 1;
              break;
            case 2:
              goto switchD_1001b1df7_caseD_2;
            default:
              *pPVar8 = (Parser)0x0;
              break;
            case 6:
              if ((cVar20 != '\0') && (*(long **)(this + 0x30) != (long *)0x0)) {
                (**(code **)(**(long **)(this + 0x30) + 0x30))();
                pPVar8 = local_38;
                this = local_40;
              }
LAB_1001b21b5:
              *(unsigned int *)pPVar8 = 0;
            }
          }
        }
      }
switchD_1001b1df7_caseD_0:
      param_1 = (uchar *)((Parser *)param_1 + 1);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

void Parser::setIgnoreMask(unsigned int) {
*(uint *)this = param_1;
  return;
}
}
