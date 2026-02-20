#include <ni/controller_editor/MenuItem.hpp>
namespace NI::UIA::COCOA {

void MenuItem::onItemClicked(objc_object*, objc_selector*, objc_object*) {
unsigned long long uVar1;
  void *puVar2;
  int local_20 [2];
  
  local_20[0] = (*(code *)PTR__objc_msgSend_100227360)(param_1,"tag");
  puVar2 = PTR__objc_msgSend_100227360;
  if (local_20[0] != 0) {
    uVar1 = (*(code *)PTR__objc_msgSend_100227360)(param_1,"menu");
    (*(code *)puVar2)(uVar1,"performSelector:withObject:withObject:","processUIAEvent:withData:",
                      0x4b0,local_20);
  }
  return;
}

void MenuItem::validateMenuItem(objc_object*, objc_selector*, NSMenuItem*) {
unsigned char uVar1;
  int iVar2;
  unsigned long long uVar3;
  long lVar4;
  HMenu local_50 [8];
  unsigned long long local_48;
  int local_40 [2];
  HMenu *local_38;
  
  iVar2 = (*(code *)PTR__objc_msgSend_100227360)(param_3,"tag");
  uVar1 = 1;
  if (iVar2 != 0) {
    HMenu::HMenu(local_50);
    local_48 = (*(code *)PTR__objc_msgSend_100227360)(param_3,"menu");
    local_40[0] = iVar2;
    local_38 = local_50;
    uVar3 = (*(code *)PTR__objc_msgSend_100227360)(param_1,"menu");
    lVar4 = (*(code *)PTR__objc_msgSend_100227360)
                      (uVar3,"performSelector:withObject:withObject:","processUIAEvent:withData:",
                       0x4b1,local_40);
    uVar1 = 1;
    if (lVar4 != 0) {
      uVar1 = HMenu::getItemEnabledId(local_50,iVar2);
    }
  }
  return uVar1;
}
}
