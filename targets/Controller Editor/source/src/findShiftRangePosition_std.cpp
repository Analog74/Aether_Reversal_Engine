#include <ni/controller_editor/findShiftRangePosition_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IAssignmentSupport {

void findShiftRangePosition(std::string const&) const {
byte bVar1;
  byte *pbVar2;
  int iVar3;
  unsigned long uVar4;
  long lVar5;
  byte *pbVar6;
  size_t sVar7;
  string *psVar8;
  IAssignmentSupport *pIVar9;
  byte *pbVar10;
  size_t sVar11;
  unsigned char auVar12 [16];
  IAssignmentSupport *local_38;
  
  pIVar9 = *(IAssignmentSupport **)(this + 0x2f8);
  local_38 = this + 0x2f0;
  if (pIVar9 != local_38) {
    if (((byte)*param_1 & 1) == 0) {
      sVar11 = (size_t)((byte)*param_1 >> 1);
      psVar8 = param_1 + 1;
    }
    else {
      sVar11 = *(size_t *)(param_1 + 8);
      psVar8 = *(string **)(param_1 + 0x10);
    }
    if (sVar11 == 0) {
      lVar5 = 0;
      do {
        pbVar6 = *(byte **)(pIVar9 + 0x10);
        pbVar2 = *(byte **)(pIVar9 + 0x18);
        pbVar10 = pbVar6;
        if (pbVar6 == pbVar2) {
          if (pbVar10 != pbVar2) return;
        }
        else {
          do {
            if ((*pbVar10 & 1) == 0) {
              if (*pbVar10 >> 1 == 0) return;
            }
            else if(1 param_1, 1 param_1, *(long *(pbVar10 + 8 == 0) return;
            pbVar10 = pbVar10 + 0x18;
          } while (pbVar10 != pbVar2);
        }
        pIVar9 = *(IAssignmentSupport **)(pIVar9 + 8);
      } while (pIVar9 != local_38);
      return;
    }
    do {
      pbVar6 = *(byte **)(pIVar9 + 0x10);
      pbVar2 = *(byte **)(pIVar9 + 0x18);
      pbVar10 = pbVar6;
      if (pbVar6 == pbVar2) {
        if (pbVar10 != pbVar2) return;
      }
      else {
        do {
          bVar1 = *pbVar10;
          sVar7 = (unsigned long)(bVar1 >> 1);
          if ((bVar1 & 1) != 0) {
            sVar7 = *(size_t *)(pbVar10 + 8);
          }
          if (sVar7 == sVar11) {
            if ((bVar1 & 1) == 0) {
              uVar4 = 0;
              while (*(string *)(pbVar10 + uVar4 + 1) == psVar8[uVar4]) {
                uVar4 = uVar4 + 1;
                if (bVar1 >> 1 == uVar4) return;
              }
            }
            else {
              iVar3 = _memcmp(*(void **)(pbVar10 + 0x10),psVar8,sVar11);
              if (iVar3 == 0) return;
            }
          }
          pbVar10 = pbVar10 + 0x18;
        } while (pbVar10 != pbVar2);
      }
      pIVar9 = *(IAssignmentSupport **)(pIVar9 + 8);
    } while (pIVar9 != local_38);
  }
  lVar5 = 0;
  return;
  lVar5 = ((long)pbVar10 - (long)pbVar6 >> 3) * -0x5555555555555555;
  local_38 = pIVar9;
  auVar12._8_8_ = lVar5;
  auVar12._0_8_ = local_38;
  return auVar12;
}
}
