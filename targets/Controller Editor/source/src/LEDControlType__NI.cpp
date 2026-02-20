#include <ni/controller_editor/LEDControlType__NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model::setSelectedAssignmentLEDControlType(NI {

void LEDControlType, NI::AssignmentActionType) {
uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  SelectionContentUpdateScope local_29;
  
  uVar6 = (**(code **)(*(long *)this + 0x140))();
  lVar7 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar6 * 0x18);
  lVar2 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar6 * 0x18);
  if (lVar7 != lVar2) {
    bVar10 = param_2 != 0;
    uVar6 = (uint)bVar10;
    if (param_2 == 2) {
      lVar9 = (param_3 & 0xff) * 0xa8;
      do {
        uVar8 = *(uint *)(lVar7 + 0x60 + lVar9);
        if (uVar8 < 2) {
          *(void2 *)(lVar7 + 0x16 + lVar9) = 3;
        }
        if (((uVar8 & 0xfffffffe) == 2) ||
           (uVar1 = *(uint *)(lVar7 + 0x70 + lVar9), (uVar1 & 0x21) == 0x21)) {
          *(uint *)(lVar7 + 0xc + lVar9) = uVar6;
        }
        else if(2 param_2, 2 param_2, uVar8 - 5 < 2 {
          *(uint *(lVar7 + 0x14 + lVar9) = uVar6;
        }
        else if(2 param_2, 2 param_2, (uVar8 == 0 &&
                (((uVar1 & 8 != 0 || (((uVar1 & 2) != 0 && (*(int *)(lVar7 + 4 + lVar9) == 1))))))
        {
          *(ushort *)(lVar7 + 0x14 + lVar9) =
               (ushort)bVar10 | (ushort)*(unsigned int *)(lVar7 + 0x14 + lVar9) & 0xfffe;
        }
        lVar7 = lVar7 + 0x1f8;
      } while (lVar2 != lVar7);
    }
    else {
      lVar9 = (param_3 & 0xff) * 0xa8;
      do {
        uVar8 = *(uint *)(lVar7 + 0x60 + lVar9);
        if (((uVar8 & 0xfffffffe) == 2) ||
           (uVar1 = *(uint *)(lVar7 + 0x70 + lVar9), (uVar1 & 0x21) == 0x21)) {
          *(uint *)(lVar7 + 0xc + lVar9) = uVar6;
        }
        else if(2 param_2, 2 param_2, uVar8 - 5 < 2 {
          *(uint *(lVar7 + 0x14 + lVar9) = uVar6;
        }
        else if(2 param_2, 2 param_2, (uVar8 == 0 &&
                (((uVar1 & 8 != 0 || (((uVar1 & 2) != 0 && (*(int *)(lVar7 + 4 + lVar9) == 1))))))
        {
          *(ushort *)(lVar7 + 0x14 + lVar9) =
               (ushort)bVar10 | (ushort)*(unsigned int *)(lVar7 + 0x14 + lVar9) & 0xfffe;
        }
        if (param_2 != 2) {
          if (param_2 == 1) {
            plVar3 = *(long **)(lVar7 + 0x18 + lVar9);
            plVar4 = *(long **)(lVar7 + 0x20 + lVar9);
            if ((((plVar4 != plVar3) && (piVar5 = (int *)*plVar3, piVar5[0x18] == 7)) &&
                (*piVar5 == 0)) && ((piVar5[2] == 1 && ((piVar5[3] & 0xfffffffeU) == 2)))) {
              piVar5[3] = 0;
              while (plVar3 = plVar3 + 1, plVar3 != plVar4) {
                *(unsigned int *)(*plVar3 + 0xc) = 0;
              }
              uVar8 = *(uint *)(lVar7 + lVar9 + 0x60);
            }
          }
          if ((uVar8 < 2) && (*(short *)(lVar7 + lVar9 + 0x16) == 3)) {
            *(void2 *)(lVar7 + lVar9 + 0x16) = 0;
          }
        }
        lVar7 = lVar7 + 0x1f8;
      } while (lVar7 != lVar2);
    }
  }
  IAssignmentSupport::updateSelectedAssignments((IAssignmentSupport *)this);
  local_29 = (SelectionContentUpdateScope)0x1;
  nod::signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)>::operator()
            ((signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)> *)
             (this + 0xf0),&local_29);
  return;
}
}
