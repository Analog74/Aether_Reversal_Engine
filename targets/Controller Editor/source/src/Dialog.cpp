#include <ni/controller_editor/Dialog.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::COCOA::DialogImpl::runModal(NI::UIA {

void Dialog::CreateData const&, bool) {
void *pvVar1;
  int iVar2;
  uint uVar3;
  void7 in_register_00000011;
  unsigned long long unaff_RBX;
  unsigned long uVar4;
  int iVar5;
  long lVar6;
  DisplayManager local_c8 [40];
  DialogImpl *local_a0;
  unsigned long local_98;
  unsigned int uStack_90;
  int local_8c;
  int iStack_88;
  unsigned long long uStack_84;
  void *local_78;
  void *pvStack_70;
  long local_68;
  unsigned long long local_60;
  unsigned long long uStack_58;
  unsigned int local_4c;
  int local_48;
  int iStack_44;
  unsigned long long uStack_40;
  
  uVar3 = *(uint *)param_1;
  if ((uVar3 & 3) == 1) {
    local_4c = (unsigned int)0(in_register_00000011,param_2);
    local_98 = *(unsigned long *)param_1;
    uStack_84 = *(unsigned long long *)(param_1 + 0x14);
    iStack_88 = (int)((unsigned long)*(unsigned long long *)(param_1 + 0xc) >> 0x20);
    uStack_90 = (unsigned int)*(unsigned long long *)(param_1 + 8);
    local_8c = (int)((unsigned long)*(unsigned long long *)(param_1 + 8) >> 0x20);
    local_78 = (void *)0x0;
    pvStack_70 = (void *)0x0;
    local_68 = 0;
    pvVar1 = *(void **)(param_1 + 0x20);
    uVar4 = *(long *)(param_1 + 0x28) - (long)pvVar1;
    if (uVar4 != 0) {
      if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      local_a0 = this;
      local_78 = new char[uVar4];
      lVar6 = (long)local_78 + uVar4;
      local_68 = lVar6;
      memcpy(local_78,pvVar1,uVar4);
      this = local_a0;
      pvStack_70 = (void *)lVar6;
    }
    local_60 = *(unsigned long long *)(param_1 + 0x38);
    uStack_58 = *(unsigned long long *)(param_1 + 0x40);
    local_48 = 0;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((uVar3 & 0x40) == 0) {
      UIA::Window::getDesktopWorkspaceRect((Rect *)&local_48);
      iVar5 = ((((int)uStack_40 - local_48) - *(int *)(param_1 + 0x14)) + *(int *)(param_1 + 0xc)) /
              2 + local_48;
      iVar2 = (((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x18)) - iStack_44) + uStack_40._4_4_
              ) / 2 + iStack_44;
      uStack_84 = CONCAT44(uStack_84._4_4_ + (iVar2 - iStack_88),(int)uStack_84 + (iVar5 - local_8c)
                          );
      local_98 = local_98 | 10;
      local_8c = iVar5;
      iStack_88 = iVar2;
    }
    else {
      WindowBase::getRect(*(WindowBase **)(param_1 + 0x40),(Rect *)&local_48,true);
      local_48 = (((int)uStack_40 - local_48) - (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc))
                 ) / 2 + local_48;
      iStack_44 = ((uStack_40._4_4_ - iStack_44) -
                  (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10))) / 2 + iStack_44;
      uStack_40 = CONCAT44(iStack_44 + (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10)),
                           local_48 + (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc)));
      DisplayManager::centerRectOnNearestDisplay(local_c8,(Rect *)&local_48,true);
      iVar2 = local_48 - local_8c;
      iVar5 = iStack_44 - iStack_88;
      local_8c = local_48;
      iStack_88 = iStack_44;
      uStack_84 = CONCAT44(uStack_84._4_4_ + iVar5,(int)uStack_84 + iVar2);
      local_98 = local_98 & 0xfffffffffffffff5 | 2;
    }
    uVar3 = runModal(this,(CreateData *)&local_98,SUB41(local_4c,0));
    uVar4 = (unsigned long)uVar3;
    if (local_78 != (void *)0x0) {
      pvStack_70 = local_78;
      delete(local_78);
    }
  }
  else {
    if (param_2 param_1) {
    }
    else {
      (**(code **)(*(long *)this + 0x1f0))(this,param_1,2);
    }
    (**(code **)(*(long *)this + 0x48))(this,1);
    (**(code **)(*(long *)this + 0xa0))(this);
    (**(code **)(*(long *)this + 0x178))(this);
    this[0x90] = (DialogImpl)0x1;
    lVar6 = (*(code *)PTR__objc_msgSend_101ab46d8)
                      (*(unsigned long long *)PTR__NSApp_101ab4018,"runModalForWindow:",
                       *(unsigned long long *)(this + 0x20));
    uVar4 = 0((int7)((unsigned long)unaff_RBX >> 8),lVar6 != -0x3e9);
  }
  return uVar4 & 0xffffffff;
}
}
