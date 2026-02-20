#include <ni/controller_editor/getGuiElementRectForAssignment_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ControllerWidget {

void getGuiElementRectForAssignment(std::string const&) const {
long *plVar1;
  long *plVar2;
  long lVar3;
  unsigned int in_ECX;
  unsigned int uVar4;
  unsigned long uVar5;
  unsigned long uVar6;
  unsigned long long uVar7;
  unsigned char auVar8 [16];
  unsigned char auVar9 [16];
  unsigned char auVar10 [16];
  long local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  IControllerWidget::findAssignableWidget((string *)&local_40);
  if (local_40 == (long *)0x0) {
    uVar7 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    (**(code **)(*(long *)param_1 + 0xd8))(&local_50,param_1);
    plVar2 = local_38;
    if (local_38 != (long *)0x0) {
      LOCK();
      local_38[1] = local_38[1] + 1;
      UNLOCK();
    }
    if (((local_40 == (long *)0x0) || (local_50 == 0)) || ((*(byte *)(local_50 + 0x1e8) & 8) == 0))
    {
      uVar7 = 0;
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = *(unsigned long *)(local_50 + 0x150);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar6;
      auVar9._0_4_ = -(uint)((int)*(unsigned long long *)(local_50 + 0x178) + (int)uVar6 == 0x12);
      auVar9._4_4_ = -(uint)((int)((unsigned long)*(unsigned long long *)(local_50 + 0x178) >> 0x20) +
                             (int)(uVar6 >> 0x20) == 0x12);
      auVar9._8_4_ = 0xffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar8 = pmovsxdq(auVar8,auVar9);
      uVar4 = movmskpd(in_ECX,auVar8);
      if ((char)uVar4 == '\x03') {
        (**(code **)(**(long **)(local_50 + 0x138) + 0x50))();
      }
      auVar8 = (**(code **)(*local_40 + 0xd0))(local_40);
      uVar6 = (unsigned long)(uint)-*(int *)(local_50 + 0x150) + auVar8._0_8_ +
              (unsigned long)(uint)-*(int *)(local_50 + 400);
      uVar5 = (unsigned long)(uint)((auVar8._4_4_ - *(int *)(local_50 + 0x154)) - *(int *)(local_50 + 0x194)
                           );
      uVar7 = CONCAT44((auVar8._12_4_ - *(int *)(local_50 + 0x154)) - *(int *)(local_50 + 0x194),
                       (auVar8._8_4_ - *(int *)(local_50 + 0x150)) - *(int *)(local_50 + 400));
    }
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        // std code
      }
    }
    if (local_48 != (long *)0x0) {
      LOCK();
      plVar2 = local_48 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
        // std code
      }
    }
  }
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_38 + 0x10))(local_38);
      // std code
    }
  }
  auVar10._0_8_ = uVar6 & 0xffffffff | uVar5 << 0x20;
  auVar10._8_8_ = uVar7;
  return auVar10;
}
}
