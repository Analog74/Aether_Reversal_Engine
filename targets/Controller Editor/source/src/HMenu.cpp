#include <ni/controller_editor/HMenu.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void HMenu::destroyItemAt(int param_1) {
}

void HMenu::enableItemId(int, bool) {
long lVar1;
  
  lVar1 = (*(code *)PTR__objc_msgSend_101ab46d8)
                    (*(unsigned long long *)(this + 8),"itemWithTag:",(long)param_1);
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_101ab46d8)(lVar1,"setEnabled:",param_2);
    return;
  }
  return;
}

void HMenu::getItemCount() const {
(*(code *)PTR__objc_msgSend_101ab46d8)(*(unsigned long long *)(this + 8),"numberOfItems");
  return;
}

void HMenu::getItemEnabledId(int) const {
char cVar1;
  long lVar2;
  
  lVar2 = (*(code *)PTR__objc_msgSend_101ab46d8)
                    (*(unsigned long long *)(this + 8),"itemWithTag:",(long)param_1);
  if (lVar2 != 0) {
    cVar1 = (*(code *)PTR__objc_msgSend_101ab46d8)(lVar2,"isEnabled");
    return cVar1 != '\0';
  }
  return false;
}

void HMenu::globalDeinit() {
s_bInit._0_1_ = 0;
  return;
}

void HMenu::globalInit() {
s_bInit._0_1_ = 1;
  return 1;
}

HMenu::HMenu() {
*(void ***)this = &PTR__HMenu_101b23868;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned int *)(this + 0x10) = 0;
  
}

void HMenu::insertSeparatorAt(int param_1) {
}

HMenu::~HMenu() {
delete(this);
  return;
}
}
