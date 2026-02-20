#include <ni/controller_editor/WindowImplBase.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::COCOA {

void WindowImplBase::activate() {
if (*(long *)(this + 0x20) != 0) {
    (*(code *)PTR__objc_msgSend_101ab46d8)(*(long *)(this + 0x20),"orderFront:",0);
    return;
  }
  return;
}

void WindowImplBase::attachDCTo(CGContext* param_1) {
}

void WindowImplBase::detachDC() {
DeviceContextImpl::detachOSHandle(*(DeviceContextImpl **)(this + 0x30));
  return;
}

void WindowImplBase::devicePixelRatio() const {
double dVar1;
  
  if (this[0x80] != (WindowImplBase)0x0) {
    dVar1 = (double)(*(code *)PTR__objc_msgSend_101ab46d8)
                              (0x3ff0000000000000,0,*(unsigned long long *)(this + 0x18),
                               "convertSizeToBacking:");
    return (float)dVar1;
  }
  return 1.0;
}

void WindowImplBase::getBackingScaleFactor() const {
/* WARNING: Could not recover jumptable at 0x0001005d0458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x130))();
  return;
}

void WindowImplBase::getLastMouseButtonDown() const {
return *(unsigned int *)(this + 0x3c);
}

void WindowImplBase::getPosition(bool) const {
void *puVar1;
  long lVar2;
  unsigned long long uVar3;
  long lVar4;
  char in_SIL;
  void7 in_register_00000039;
  unsigned long long in_R8;
  unsigned long long in_R9;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned long long local_c8;
  unsigned long long uStack_c0;
  unsigned long long local_b8;
  unsigned long long uStack_b0;
  unsigned long long local_a8;
  unsigned long long uStack_a0;
  unsigned long long local_98;
  unsigned long long uStack_90;
  unsigned long long local_88;
  unsigned long long uStack_80;
  unsigned long long local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_50;
  double local_48;
  double dStack_40;
  unsigned long long local_38;
  double dStack_30;
  double local_28;
  
  lVar4 = *(long *)(0(in_register_00000039,param_1) + 0x20);
  if (lVar4 != 0) {
    _objc_msgSend_stret(&local_48,lVar4,"frame");
    if (in_SIL == '\0') {
      dStack_60 = dStack_40;
    }
    else {
      _objc_msgSend_stret(&local_48,lVar4,"contentRectForFrameRect:");
      dStack_60 = 0.0;
    }
    local_50 = dStack_40;
    local_28 = dStack_30;
    local_68 = local_48;
    return;
  }
  lVar4 = *(long *)(0(in_register_00000039,param_1) + 0x18);
  lVar2 = (*(code *)PTR__objc_msgSend_101ab46d8)(lVar4,"window");
  if (lVar2 == 0) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_48 = 0.0;
    dStack_40 = 0.0;
    local_38 = 0;
    dStack_30 = 0.0;
    if (lVar4 == 0) return;
    _objc_msgSend_stret(&local_a8,lVar4,"frame");
    uVar3 = (*(code *)PTR__objc_msgSend_101ab46d8)(lVar4,"superview");
    _objc_msgSend_stret(&local_88,lVar4,"convertRect:toView:",uVar3,in_R8,in_R9,(unsigned int)local_a8
                        ,(unsigned int)uStack_a0,(unsigned int)local_98,(unsigned int)uStack_90);
    uVar5 = (unsigned int)local_88;
    uVar6 = (unsigned int)((unsigned long)local_88 >> 0x20);
    uVar7 = (unsigned int)uStack_80;
    uVar8 = (unsigned int)((unsigned long)uStack_80 >> 0x20);
    local_28 = dStack_70;
  }
  else {
    _objc_msgSend_stret(&local_c8,lVar2,"frame");
    _objc_msgSend_stret(&local_48,lVar2,"contentRectForFrameRect:");
    if (lVar4 != 0) return;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    (*(code *)PTR__objc_msgSend_101ab46d8)(0,"superview");
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_28 = 0.0;
    uVar7 = 0;
    uVar8 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  local_68 = (double)CONCAT44(uVar6,uVar5) + local_48;
  dStack_60 = 0.0;
  local_50 = (double)CONCAT44(uVar8,uVar7) + dStack_40;
  dStack_70 = local_28;
  puVar1 = PTR__objc_msgSend_101ab46d8;
  uVar3 = (*(code *)PTR__objc_msgSend_101ab46d8)(&_OBJC_CLASS___NSScreen,"screens");
  lVar4 = (*(code *)puVar1)(uVar3,"objectAtIndex:",0);
  if (lVar4 == 0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    _objc_msgSend_stret(&local_48,lVar4,"frame");
    uVar7 = SUB84(dStack_40,0);
    uVar8 = (unsigned int)((unsigned long)dStack_40 >> 0x20);
    uVar5 = SUB84(dStack_30,0);
    uVar6 = (unsigned int)((unsigned long)dStack_30 >> 0x20);
  }
  return CONCAT44((int)(((double)(float)((double)CONCAT44(uVar6,uVar5) +
                                        (double)CONCAT44(uVar8,uVar7)) - local_28) - local_50),
                  (int)local_68);
}

void WindowImplBase::getSize(bool) const {
long lVar1;
  unsigned char local_38 [16];
  unsigned int local_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  lVar1 = *(long *)(this + 0x20);
  if (lVar1 == 0) {
    if (*(long *)(this + 0x18) == 0) {
      local_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
    }
    else {
      _objc_msgSend_stret(local_38,*(long *)(this + 0x18),"frame");
    }
  }
  else {
    _objc_msgSend_stret(local_38,lVar1,"frame");
    if (param_1 param_1) {
    }
  }
  return CONCAT44((int)(double)CONCAT44(uStack_1c,uStack_20),
                  (int)(double)CONCAT44(uStack_24,local_28));
}

void WindowImplBase::hasViewMovedToWindowListener() const {
return *(long *)(this + 0x70) != 0;
}

void WindowImplBase::idealSize() {
long lVar1;
  char cVar2;
  
  lVar1 = *(long *)(this + 0x20);
  if (lVar1 != 0) {
    cVar2 = (*(code *)PTR__objc_msgSend_101ab46d8)(lVar1,"isMiniaturized");
    if (cVar2 == '\0') {
      cVar2 = (*(code *)PTR__objc_msgSend_101ab46d8)(lVar1,"isZoomed");
      if (cVar2 == '\0') {
        (*(code *)PTR__objc_msgSend_101ab46d8)(lVar1,"zoom:",0);
        return;
      }
    }
  }
  return;
}

void WindowImplBase::invalidate() {
void *puVar1;
  unsigned long long uVar2;
  
  puVar1 = PTR__objc_msgSend_101ab46d8;
  if (*(long *)(this + 0x18) != 0) {
    (*(code *)PTR__objc_msgSend_101ab46d8)(*(long *)(this + 0x18),"setNeedsDisplay:",1);
    return;
  }
  if (*(long *)(this + 0x20) != 0) {
    uVar2 = (*(code *)PTR__objc_msgSend_101ab46d8)(*(long *)(this + 0x20),"contentView");
    (*(code *)puVar1)(uVar2,"setNeedsDisplay:",1);
    return;
  }
  return;
}

void WindowImplBase::isCocoa() const {
return 1;
}

void WindowImplBase::isIdealSize() const {
char cVar1;
  unsigned char uVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    cVar1 = (*(code *)PTR__objc_msgSend_101ab46d8)(*(long *)(this + 0x20),"isZoomed");
    return cVar1 == '\x01';
  }
  uVar2 = DETAIL::WindowImpl::isIdealSize((WindowImpl *)this);
  return (bool)uVar2;
}

void WindowImplBase::isMaximized() const {
return 0;
}

void WindowImplBase::isMinimized() const {
char cVar1;
  
  if (*(long *)(this + 0x20) != 0) {
    cVar1 = (*(code *)PTR__objc_msgSend_101ab46d8)(*(long *)(this + 0x20),"isMiniaturized");
    return cVar1 == '\x01';
  }
  return false;
}

void WindowImplBase::isNormalSize() const {
char cVar1;
  
  if (*(long *)(this + 0x20) != 0) {
    cVar1 = (*(code *)PTR__objc_msgSend_101ab46d8)(*(long *)(this + 0x20),"isMiniaturized");
    return cVar1 == '\0';
  }
  return true;
}

void WindowImplBase::isVisible() const {
long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 0x18);
  lVar2 = *(long *)(this + 0x20);
  lVar4 = lVar1;
  if (lVar2 != 0) {
    cVar3 = (*(code *)PTR__objc_msgSend_101ab46d8)(lVar2,"isVisible");
    if (cVar3 == '\0') {
      return false;
    }
    lVar4 = *(long *)(this + 0x18);
  }
  if (lVar4 == 0) {
    if (*(long *)(this + 0x20) == 0) {
      return false;
    }
    cVar3 = (*(code *)PTR__objc_msgSend_101ab46d8)(lVar2,"isVisible");
    return cVar3 == '\x01';
  }
  cVar3 = (*(code *)PTR__objc_msgSend_101ab46d8)(lVar1,"isHidden");
  return cVar3 == '\0';
}

void WindowImplBase::maximize() {
return;
}

void WindowImplBase::minimize() {
if (*(long *)(this + 0x20) != 0) {
    (*(code *)PTR__objc_msgSend_101ab46d8)(*(long *)(this + 0x20),"miniaturize:",0);
    return;
  }
  return;
}

void WindowImplBase::normalSize() {
long lVar1;
  char cVar2;
  
  lVar1 = *(long *)(this + 0x20);
  if (lVar1 != 0) {
    cVar2 = (*(code *)PTR__objc_msgSend_101ab46d8)(lVar1,"isMiniaturized");
    if (cVar2 == '\x01') {
      (*(code *)PTR__objc_msgSend_101ab46d8)(lVar1,"deminiaturize:",0);
      return;
    }
  }
  return;
}

void WindowImplBase::onViewDestroyed() {
WindowBase::onImplDestroyed(*(WindowBase **)(this + 8));
  if (this[0x10] != (WindowImplBase)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001005d0d0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 8))(this);
  return;
}

void WindowImplBase::releaseKeyFocus() {
unsigned long long uVar1;
  void *puVar2;
  
  puVar2 = PTR__objc_msgSend_101ab46d8;
  if (*(long *)(this + 0x18) != 0) {
    uVar1 = (*(code *)PTR__objc_msgSend_101ab46d8)(*(long *)(this + 0x18),"window");
    (*(code *)puVar2)(uVar1,"makeFirstResponder:",0);
  }
  return 1;
}

void WindowImplBase::resetCursor() {
*(unsigned long long *)(this + 0x28) = 0;
  CursorManager::resetSystemCursor();
  return;
}

void WindowImplBase::setCursor(void* param_1) {
}

void WindowImplBase::setKeyFocus() {
long lVar1;
  void *puVar2;
  unsigned long long uVar3;
  
  if (*(long *)(this + 0x20) != 0) {
    (*(code *)PTR__objc_msgSend_101ab46d8)(*(long *)(this + 0x20),"makeKeyWindow");
  }
  puVar2 = PTR__objc_msgSend_101ab46d8;
  lVar1 = *(long *)(this + 0x18);
  if (lVar1 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_101ab46d8)(lVar1,"window");
    (*(code *)puVar2)(uVar3,"makeFirstResponder:",lVar1);
    return;
  }
  return;
}

void WindowImplBase::setModified(bool param_1) {
}

void WindowImplBase::setTitle(char const*) {
long lVar1;
  unsigned long long local_18;
  
  lVar1 = *(long *)(this + 0x20);
  if (lVar1 != 0) {
    local_18 = 0;
    GP::NSStringRef::createWith((NSStringRef *)&local_18,param_1,true);
    (*(code *)PTR__objc_msgSend_101ab46d8)(lVar1,"setTitle:",local_18);
    GP::NSStringRef::~NSStringRef((NSStringRef *)&local_18);
  }
  return;
}

void WindowImplBase::setTrackMouseGlobal(bool param_1) {
}

void WindowImplBase::startRelativeMouseMove() {
this[0x4c] = (WindowImplBase)0x1;
  (*(code *)PTR__objc_msgSend_101ab46d8)(&_OBJC_CLASS___NSCursor,"hide");
  _CGGetLastMouseDelta(0,0);
  return;
}

void WindowImplBase::stopRelativeMouseMove() {
this[0x4c] = (WindowImplBase)0x0;
  (*(code *)PTR__objc_msgSend_101ab46d8)(&_OBJC_CLASS___NSCursor,"unhide");
  return;
}

void WindowImplBase::textInputResetMarkedRange() {
void *puVar1;
  unsigned long long uVar2;
  
  puVar1 = PTR__objc_msgSend_101ab46d8;
  uVar2 = (*(code *)PTR__objc_msgSend_101ab46d8)(*(unsigned long long *)(this + 0x18),"inputContext");
  (*(code *)puVar1)(uVar2,"discardMarkedText");
  return;
}

void WindowImplBase::update() {
if (*(long *)(this + 0x20) != 0) {
    (*(code *)PTR__objc_msgSend_101ab46d8)(*(long *)(this + 0x20),"displayIfNeeded");
    return;
  }
  return;
}

WindowImplBase::~WindowImplBase() {
~WindowImplBase(this);
  delete(this);
  return;
}
}
