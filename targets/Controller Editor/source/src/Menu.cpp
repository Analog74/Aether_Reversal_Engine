#include <ni/controller_editor/Menu.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::COCOA {

void Menu::initWithUIAEventTarget(objc_object*, objc_selector*, objc_object*) {
unsigned long long uVar1;
  objc_object *local_28;
  unsigned long long local_20;
  
  local_28 = param_1;
  uVar1 = _objc_opt_class();
  local_20 = _class_getSuperclass(uVar1);
  GP::OBJC::setIvarPtr(param_1,"pUIAEventTarget",param_3);
  _objc_msgSendSuper(&local_28,"init");
  return param_1;
}

void Menu::menuWillOpen(objc_object*, objc_selector*, NSMenu*) {
HMenu local_48 [8];
  NSMenu *local_40;
  unsigned int local_30 [2];
  HMenu *local_28;
  
  HMenu::HMenu(local_48);
  local_30[0] = 0xffffffff;
  local_40 = param_3;
  local_28 = local_48;
  (*(code *)PTR__objc_msgSend_101ab46d8)
            (param_1,"performSelector:withObject:withObject:","processUIAEvent:withData:",0x4b2,
             local_30);
  return;
}

void Menu::setUIAEventTarget(objc_object*, objc_selector*, objc_object*) {
GP::OBJC::setIvarPtr(param_1,"pUIAEventTarget",param_3);
  return;
}
}
