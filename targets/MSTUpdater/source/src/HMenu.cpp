#include <ni/controller_editor/HMenu.hpp>
namespace NI::UIA {

void HMenu::getItemEnabledId(int) const {
char cVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = (*(code *)PTR__objc_msgSend_100227360)
                    (*(unsigned long long *)(this + 8),"itemWithTag:",(long)param_1);
  if (lVar2 == 0) {
    bVar3 = false;
  }
  else {
    cVar1 = (*(code *)PTR__objc_msgSend_100227360)(lVar2,"isEnabled");
    bVar3 = cVar1 != '\0';
  }
  return bVar3;
}

HMenu::HMenu() {
*(void ***)this = &PTR__HMenu_100237238;
  *(unsigned long long *)(this + 8) = 0;
  
}

HMenu::~HMenu() {
delete(this);
  return;
}
}
