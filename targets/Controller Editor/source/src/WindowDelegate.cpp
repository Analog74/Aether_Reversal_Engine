#include <ni/controller_editor/WindowDelegate.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::COCOA {

void WindowDelegate::allocInstance() {
_objc_alloc(NICocoaWindowDelegateClass);
  return;
}

void WindowDelegate::windowDidResize(objc_object*, objc_selector*, NSNotification*) {
long *plVar1;
  unsigned int local_10 [2];
  
  plVar1 = (long *)GP::OBJC::getIvarPtr(param_1,"pImpl");
  if (plVar1 != (long *)0x0) {
    local_10[0] = 0;
    (**(code **)(*plVar1 + 0x1c0))(plVar1,0xf4243,local_10,0);
  }
  return;
}

void WindowDelegate::windowShouldClose(objc_object*, objc_selector*, objc_object*) {
long *plVar1;
  DialogImpl *this;
  unsigned char uVar2;
  char local_20 [8];
  
  plVar1 = (long *)GP::OBJC::getIvarPtr(param_1,"pImpl");
  if (plVar1 == (long *)0x0) {
    uVar2 = 1;
  }
  else {
    local_20[0] = '\x01';
    uVar2 = 0;
    (**(code **)(*plVar1 + 0x1c0))(plVar1,0xf424c,local_20,0);
    if ((local_20[0] != '\0') && (uVar2 = 1, (char)plVar1[7] != '\0')) {
      this = (DialogImpl *)___dynamic_cast(plVar1,&WindowImpl::typeinfo,&DialogImpl::typeinfo,0);
      if (this != (DialogImpl *)0x0) {
        DialogImpl::stopModal(this);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

void WindowDelegate::windowWillClose(objc_object*, objc_selector*, NSNotification*) {
int iVar1;
  WindowImpl *this;
  unsigned char local_20 [8];
  
  this = (WindowImpl *)GP::OBJC::getIvarPtr(param_1,"pImpl");
  if (this != (WindowImpl *)0x0) {
    if (windowWillClose(objc_object*,objc_selector*,NSNotification*)::gInClose == '\0') {
      iVar1 = ___cxa_guard_acquire
                        (&windowWillClose(objc_object*,objc_selector*,NSNotification*)::gInClose);
      if (iVar1 != 0) {
        __ZZN2NI3UIA5COCOA14WindowDelegateL15windowWillCloseEP11objc_objectP13objc_selectorP14NSNotificationE8gInClose_0
             = 0;
        ___cxa_guard_release
                  (&windowWillClose(objc_object*,objc_selector*,NSNotification*)::gInClose);
      }
    }
    if (__ZZN2NI3UIA5COCOA14WindowDelegateL15windowWillCloseEP11objc_objectP13objc_selectorP14NSNotificationE8gInClose_0
        < 1) {
      __ZZN2NI3UIA5COCOA14WindowDelegateL15windowWillCloseEP11objc_objectP13objc_selectorP14NSNotificationE8gInClose_0
           = __ZZN2NI3UIA5COCOA14WindowDelegateL15windowWillCloseEP11objc_objectP13objc_selectorP14NSNotificationE8gInClose_0
             + 1;
      if (this[0x38] == (WindowImpl)0x0) {
        (**(code **)(*(long *)this + 0x1c0))(this,0xf4241,local_20,0);
        GP::OBJC::setIvarPtr(param_1,"pImpl",(objc_object *)0x0);
        WindowImpl::detachDelegate(this);
        (**(code **)(*(long *)this + 0x1e8))(this);
      }
      else {
        GP::OBJC::setIvarPtr(param_1,"pImpl",(objc_object *)0x0);
        WindowImpl::detachDelegate(this);
      }
      (*(code *)PTR__objc_release_101ab46e0)(param_1);
      __ZZN2NI3UIA5COCOA14WindowDelegateL15windowWillCloseEP11objc_objectP13objc_selectorP14NSNotificationE8gInClose_0
           = __ZZN2NI3UIA5COCOA14WindowDelegateL15windowWillCloseEP11objc_objectP13objc_selectorP14NSNotificationE8gInClose_0
             + -1;
    }
  }
  return;
}
}
