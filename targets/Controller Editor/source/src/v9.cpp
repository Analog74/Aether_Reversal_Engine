#include <ni/controller_editor/v9.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace fmt::v9::basic_format_context<fmt::v9::appender, char>::arg(fmt {

void v9::basic_string_view<char>) {
unsigned int *puVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  long *plVar6;
  size_t sVar7;
  unsigned long uVar8;
  long lVar9;
  unsigned long uVar10;
  uint *puVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  
  uVar10 = *(unsigned long *)(param_2 + 8);
  if ((uVar10 >> 0x3e & 1) != 0) {
    if ((long)uVar10 < 0) {
      lVar3 = *(long *)(param_2 + 0x10);
      plVar6 = (long *)(lVar3 + -0x20);
      lVar9 = *(long *)(lVar3 + -0x18);
    }
    else {
      lVar3 = *(long *)(param_2 + 0x10);
      plVar6 = (long *)(lVar3 + -0x10);
      lVar9 = *(long *)(lVar3 + -8);
    }
    if (lVar9 != 0) {
      puVar11 = (uint *)(*plVar6 + 8);
      do {
        pcVar4 = *(char **)(puVar11 + -2);
        sVar7 = strlen(pcVar4);
        uVar8 = param_4;
        if (sVar7 < param_4) {
          uVar8 = sVar7;
        }
        if (uVar8 == 0) {
          if (sVar7 == param_4) return;
        }
        else {
          iVar5 = _memcmp(pcVar4,param_3,uVar8);
          if ((sVar7 == param_4) && (iVar5 == 0)) {
            uVar2 = *puVar11;
            if (-1 < (int)uVar2) {
              param_1[4] = 0;
              if ((long)uVar10 < 0) {
                if ((int)uVar10 <= (int)uVar2) {
                  return;
                }
                lVar9 = (unsigned long)uVar2 * 0x20;
                param_1[4] = *(unsigned int *)(lVar3 + 0x10 + lVar9);
                puVar1 = (unsigned int *)(lVar3 + lVar9);
                uVar12 = *puVar1;
                uVar13 = puVar1[1];
                uVar14 = puVar1[2];
                uVar15 = puVar1[3];
              }
              else {
                if (0xe < (int)uVar2) {
                  return;
                }
                uVar10 = uVar10 >> ((char)uVar2 * '\x04' & 0x3fU);
                param_1[4] = (uint)uVar10 & 0xf;
                if ((uVar10 & 0xf) == 0) {
                  return;
                }
                puVar1 = (unsigned int *)(lVar3 + (unsigned long)uVar2 * 0x10);
                uVar12 = *puVar1;
                uVar13 = puVar1[1];
                uVar14 = puVar1[2];
                uVar15 = puVar1[3];
              }
              *param_1 = uVar12;
              param_1[1] = uVar13;
              param_1[2] = uVar14;
              param_1[3] = uVar15;
              return;
            }
            break;
          }
        }
        puVar11 = puVar11 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  param_1[4] = 0;
  return;
}
}
