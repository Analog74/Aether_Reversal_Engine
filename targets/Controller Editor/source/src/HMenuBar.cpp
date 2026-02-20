#include <ni/controller_editor/HMenuBar.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void HMenuBar::getApplicationMenu() {
void *puVar1;
  void *puVar2;
  long lVar3;
  unsigned long long uVar4;
  unsigned long long uVar5;
  unsigned long long uVar6;
  
  if (getApplicationMenu()::s_pAppMenu == 0) {
    getApplicationMenu()::s_pAppMenu = COCOA::Menu::create((EventTarget *)0x0);
    puVar2 = PTR__objc_msgSend_101ab46d8;
    (*(code *)PTR__objc_msgSend_101ab46d8)(getApplicationMenu()::s_pAppMenu,"setTitle:",&cf_Apple);
    uVar4 = (*(code *)puVar2)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar4 = (*(code *)puVar2)(uVar4,"objectForInfoDictionaryKey:",&cf_CFBundleName);
    uVar5 = COCOA::MenuItem::create();
    uVar6 = (*(code *)puVar2)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar6 = (*(code *)puVar2)(uVar6,"localizedStringForKey:value:table:",&cf_About,&cf___,0);
    uVar6 = (*(code *)puVar2)(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_____,uVar6,uVar4);
    (*(code *)puVar2)(uVar5,"setTitle:",uVar6);
    (*(code *)puVar2)(uVar5,"setTag:",0x61626f75);
    (*(code *)puVar2)(getApplicationMenu()::s_pAppMenu,"addItem:",uVar5);
    lVar3 = getApplicationMenu()::s_pAppMenu;
    uVar5 = (*(code *)puVar2)(&_OBJC_CLASS___NSMenuItem,"separatorItem");
    (*(code *)puVar2)(lVar3,"addItem:",uVar5);
    lVar3 = getApplicationMenu()::s_pAppMenu;
    uVar5 = (*(code *)puVar2)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar5 = (*(code *)puVar2)(uVar5,"localizedStringForKey:value:table:",&cf_Services,&cf___,0);
    uVar5 = (*(code *)puVar2)(lVar3,"addItemWithTitle:action:keyEquivalent:",uVar5,0,&cf___);
    uVar6 = _objc_alloc(&_OBJC_CLASS___NSMenu);
    uVar6 = (*(code *)puVar2)(uVar6,"initWithTitle:",&cf_Services);
    uVar6 = _objc_autorelease(uVar6);
    (*(code *)puVar2)(getApplicationMenu()::s_pAppMenu,"setSubmenu:forItem:",uVar6,uVar5);
    (*(code *)puVar2)(*(unsigned long long *)PTR__NSApp_101ab4018,"setServicesMenu:",uVar6);
    lVar3 = getApplicationMenu()::s_pAppMenu;
    uVar5 = (*(code *)puVar2)(&_OBJC_CLASS___NSMenuItem,"separatorItem");
    (*(code *)puVar2)(lVar3,"addItem:",uVar5);
    lVar3 = getApplicationMenu()::s_pAppMenu;
    uVar5 = (*(code *)puVar2)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar5 = (*(code *)puVar2)(uVar5,"localizedStringForKey:value:table:",&cf_Hide,&cf___,0);
    uVar5 = (*(code *)puVar2)(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_____,uVar5,uVar4);
    uVar5 = (*(code *)puVar2)(lVar3,"addItemWithTitle:action:keyEquivalent:",uVar5,"hide:",&cf_h);
    puVar1 = PTR__NSApp_101ab4018;
    (*(code *)puVar2)(uVar5,"setTarget:",*(unsigned long long *)PTR__NSApp_101ab4018);
    lVar3 = getApplicationMenu()::s_pAppMenu;
    uVar5 = (*(code *)puVar2)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar5 = (*(code *)puVar2)(uVar5,"localizedStringForKey:value:table:",&cf_HideOthers,&cf___,0);
    uVar5 = (*(code *)puVar2)(lVar3,"addItemWithTitle:action:keyEquivalent:",uVar5,
                              "hideOtherApplications:",&cf_h);
    (*(code *)puVar2)(uVar5,"setKeyEquivalentModifierMask:",0x180000);
    (*(code *)puVar2)(uVar5,"setTarget:",*(unsigned long long *)puVar1);
    lVar3 = getApplicationMenu()::s_pAppMenu;
    uVar5 = (*(code *)puVar2)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar5 = (*(code *)puVar2)(uVar5,"localizedStringForKey:value:table:",&cf_ShowAll,&cf___,0);
    uVar5 = (*(code *)puVar2)(lVar3,"addItemWithTitle:action:keyEquivalent:",uVar5,
                              "unhideAllApplications:",&cf___);
    (*(code *)puVar2)(uVar5,"setTarget:",*(unsigned long long *)puVar1);
    lVar3 = getApplicationMenu()::s_pAppMenu;
    uVar5 = (*(code *)puVar2)(&_OBJC_CLASS___NSMenuItem,"separatorItem");
    (*(code *)puVar2)(lVar3,"addItem:",uVar5);
    uVar5 = COCOA::MenuItem::create();
    uVar6 = (*(code *)puVar2)(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar6 = (*(code *)puVar2)(uVar6,"localizedStringForKey:value:table:",&cf_Quit,&cf___,0);
    uVar4 = (*(code *)puVar2)(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_____,uVar6,uVar4);
    (*(code *)puVar2)(uVar5,"setTitle:",uVar4);
    (*(code *)puVar2)(uVar5,"setTag:",0x71756974);
    (*(code *)puVar2)(uVar5,"setKeyEquivalent:",&cf_q);
    (*(code *)puVar2)(getApplicationMenu()::s_pAppMenu,"addItem:",uVar5);
  }
  HMenu::HMenu((HMenu *)this);
  *(long *)(this + 8) = getApplicationMenu()::s_pAppMenu;
  return this;
}

HMenuBar::HMenuBar() {
HMenu::HMenu((HMenu *)this);
  *(void ***)this = &PTR__HMenuBar_101b23830;
  
}

HMenuBar::~HMenuBar() {
delete(this);
  return;
}
}
