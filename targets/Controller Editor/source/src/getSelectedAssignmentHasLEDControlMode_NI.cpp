#include <ni/controller_editor/getSelectedAssignmentHasLEDControlMode_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void getSelectedAssignmentHasLEDControlMode(NI::AssignmentActionType) const {
Assignment *pAVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  Assignment *pAVar9;
  
  uVar5 = (**(code **)(*(long *)this + 0x210))();
  uVar8 = uVar5 >> 8;
  if ((char)uVar5 == '\0') {
    bVar2 = 0;
  }
  else if(2 param_2, (char(uVar5 >> 8) == '\x02') {
    bVar2 = (byte)uVar5;
    uVar8 = 2;
  }
  else {
    uVar6 = (**(code **)(*(long *)this + 0x140))(this);
    pAVar9 = *(Assignment **)(*(long *)(this + 0x2a8) + (unsigned long)uVar6 * 0x18);
    pAVar1 = *(Assignment **)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar6 * 0x18);
    if (pAVar9 == pAVar1) {
      bVar2 = (byte)uVar5;
    }
    else if(2 param_2, param_2 == 1 {
      lVar7 = (unsigned long)param_2 * 0xa8;
      uVar6 = uVar8;
      do {
        uVar8 = uVar6;
        cVar4 = (char)uVar8;
        uVar6 = uVar8;
        if ((*(int *)(pAVar9 + lVar7 + 0x60) == 6) && (pAVar9[0xa2] == (Assignment)0x0)) {
          cVar3 = NHL2::Assignment::hasLEDControlMode(pAVar9);
          if (cVar3 == '\0') {
            if (cVar4 != '\0') {
              if (cVar4 != '\x01') return;
              if ((char)uVar5 != '\0') return;
              uVar6 = 0;
            }
          }
          else {
            uVar6 = 1;
            if (cVar4 != '\0') {
              if (cVar4 != '\x01') return;
              if ((char)uVar5 != '\x01') return;
            }
          }
        }
        else {
          cVar3 = NHL2::Assignment::hasLEDControlMode(pAVar9 + lVar7);
          if (cVar3 != '\0') return;
          if (cVar4 != '\0') {
            if (cVar4 == '\x01') return;
            return;
          }
        }
        uVar5 = uVar6;
        bVar2 = (byte)uVar5;
        pAVar9 = pAVar9 + 0x1f8;
        uVar8 = 1;
        uVar6 = 1;
      } while (pAVar1 != pAVar9);
    }
    else {
      lVar7 = (long)pAVar1 - (long)pAVar9;
      pAVar9 = pAVar9 + (unsigned long)param_2 * 0xa8;
      uVar6 = uVar8;
      do {
        uVar8 = uVar6;
        cVar4 = NHL2::Assignment::hasLEDControlMode(pAVar9);
        cVar3 = (char)uVar8;
        if (cVar4 == '\0') {
          uVar6 = uVar8;
          if (cVar3 != '\0') {
            if (cVar3 != '\x01') return;
            if ((char)uVar5 != '\0') return;
            uVar6 = 0;
          }
        }
        else {
          uVar6 = 1;
          if (cVar3 != '\0') {
            if (cVar3 != '\x01') return;
            if ((char)uVar5 != '\x01') return;
          }
        }
        uVar5 = uVar6;
        bVar2 = (byte)uVar5;
        pAVar9 = pAVar9 + 0x1f8;
        uVar8 = 1;
        lVar7 = lVar7 + -0x1f8;
        uVar6 = 1;
      } while (lVar7 != 0);
    }
  }
  return (uint)bVar2 | (uVar8 & 0xff) << 8;
}
}
