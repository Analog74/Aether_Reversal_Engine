#include <ni/controller_editor/setSelectedAssignmentMinValue_int__NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void setSelectedAssignmentMinValue(3 param_3, int, NI::AssignmentActionType {
long lVar1;
  uint uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned long in_RAX;
  Assignment *pAVar5;
  long lVar6;
  unsigned long long uStack_38;
  
  uStack_38 = in_RAX;
  uVar2 = (**(code **)(*(long *)this + 0x140))();
  lVar1 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar2 * 0x18);
  lVar6 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar2 * 0x18);
  param_3 = param_3 & 0xff;
  if (lVar1 != lVar6) {
    if (param_1 < 0) {
      lVar6 = lVar6 - lVar1;
      pAVar5 = (Assignment *)(param_3 * 0xa8 + lVar1);
      do {
        *(unsigned int *)(pAVar5 + 0x8c) = 0;
        iVar3 = NHL2::Assignment::boundValueToMinMax(pAVar5,*(int *)(pAVar5 + 0x7c));
        NHL2::Assignment::setMidiValue(pAVar5,iVar3,true);
        pAVar5 = pAVar5 + 0x1f8;
        lVar6 = lVar6 + -0x1f8;
      } while (lVar6 != 0);
    }
    else if(3 param_3, 1 param_1, param_1 < 0x4000 {
      pAVar5 = (Assignment *(param_3 * 0xa8 + lVar1);
      lVar6 = lVar6 - lVar1;
      do {
        *(int *)(pAVar5 + 0x8c) = param_1;
        iVar3 = *(int *)(pAVar5 + 0x84);
        if ((((1 < iVar3 - 0x12U) && (iVar3 != 0xe0)) && (iVar3 != 0xf2)) && (0x7f < param_1)) {
          *(unsigned int *)(pAVar5 + 0x8c) = 0x7f;
        }
        iVar3 = NHL2::Assignment::boundValueToMinMax(pAVar5,*(int *)(pAVar5 + 0x7c));
        NHL2::Assignment::setMidiValue(pAVar5,iVar3,true);
        pAVar5 = pAVar5 + 0x1f8;
        lVar6 = lVar6 + -0x1f8;
      } while (lVar6 != 0);
    }
    else {
      lVar6 = lVar6 - lVar1;
      pAVar5 = (Assignment *)(param_3 * 0xa8 + lVar1);
      do {
        *(int *)(pAVar5 + 0x8c) = param_1;
        iVar3 = *(int *)(pAVar5 + 0x84);
        uVar4 = 0x3fff;
        if (((iVar3 - 0x12U < 2) || (iVar3 == 0xe0)) ||
           ((iVar3 == 0xf2 || (uVar4 = 0x7f, 0x7f < param_1)))) {
          *(unsigned int *)(pAVar5 + 0x8c) = uVar4;
        }
        iVar3 = NHL2::Assignment::boundValueToMinMax(pAVar5,*(int *)(pAVar5 + 0x7c));
        NHL2::Assignment::setMidiValue(pAVar5,iVar3,true);
        pAVar5 = pAVar5 + 0x1f8;
        lVar6 = lVar6 + -0x1f8;
      } while (lVar6 != 0);
    }
  }
  IAssignmentSupport::updateSelectedAssignments((IAssignmentSupport *)this,param_3);
  uStack_38 = uStack_38 & 0xffffffffffffff;
  nod::signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)>::operator()
            ((signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)> *)
             (this + 0xf0),(SelectionContentUpdateScope *)((long)&uStack_38 + 7));
  return;
}
}
