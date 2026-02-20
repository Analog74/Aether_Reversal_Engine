#include <ni/controller_editor/MenuItem.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::COCOA {

void MenuItem::onItemClicked(objc_object*, objc_selector*, objc_object*) {
unsigned long long uVar1;
  void *puVar2;
  int local_20 [2];
  
  local_20[0] = (*(code *)PTR__objc_msgSend_101ab46d8)(param_1,"tag");
  puVar2 = PTR__objc_msgSend_101ab46d8;
  if (local_20[0] != 0) {
    uVar1 = (*(code *)PTR__objc_msgSend_101ab46d8)(param_1,"menu");
    (*(code *)puVar2)(uVar1,"performSelector:withObject:withObject:","processUIAEvent:withData:",
                      0x4b0,local_20);
  }
  return;
}

void MenuItem::validateMenuItem(objc_object*, objc_selector*, NSMenuItem*) {
void *puVar1;
  unsigned char uVar2;
  int iVar3;
  unsigned long long uVar4;
  long lVar5;
  HMenu local_58 [8];
  unsigned long long local_50;
  int local_40 [2];
  HMenu *local_38;
  
  iVar3 = (*(code *)PTR__objc_msgSend_101ab46d8)(param_3,"tag");
  if (iVar3 != 0) {
    HMenu::HMenu(local_58);
    puVar1 = PTR__objc_msgSend_101ab46d8;
    local_50 = (*(code *)PTR__objc_msgSend_101ab46d8)(param_3,"menu");
    local_38 = local_58;
    local_40[0] = iVar3;
    uVar4 = (*(code *)puVar1)(param_1,"menu");
    lVar5 = (*(code *)puVar1)(uVar4,"performSelector:withObject:withObject:",
                              "processUIAEvent:withData:",0x4b1,local_40);
    if (lVar5 != 0) {
      uVar2 = HMenu::getItemEnabledId(local_58,iVar3);
      return uVar2;
    }
  }
  return 1;
}
}
