#include <ni/controller_editor/WindowImplBase.hpp>
namespace NI::UIA::COCOA {

void WindowImplBase::activate() {
if (*(long *)(this + 0x20) != 0) {
    (*(code *)PTR__objc_msgSend_100227360)(*(long *)(this + 0x20),"orderFront:",0);
    return;
  }
  return;
}

void WindowImplBase::attachDCTo(CGContext* param_1) {
}

void WindowImplBase::detachDC() {
DeviceContext::detachOSHandle(*(DeviceContext **)(this + 0x30));
  return;
}

void WindowImplBase::getBackingScaleFactor() const {
long lVar1;
  float fVar2;
  double dVar3;
  
  lVar1 = Application::getApplication();
  if (*(char *)(lVar1 + 0x41) == '\0') {
    fVar2 = 1.0;
  }
  else {
    dVar3 = (double)(*(code *)PTR__objc_msgSend_100227360)
                              (0x3ff0000000000000,0x3ff0000000000000,*(unsigned long long *)(this + 0x18),
                               "convertSizeToBacking:");
    fVar2 = (float)dVar3;
  }
  return fVar2;
}

void WindowImplBase::getLastMouseButtonDown() const {
return *(unsigned int *)(this + 0x3c);
}

void WindowImplBase::getPosition(bool) const {
double dVar1;
  void *puVar2;
  long lVar3;
  unsigned long long uVar4;
  long lVar5;
  char in_SIL;
  void7 in_register_00000039;
  unsigned long long in_R8;
  unsigned long long in_R9;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned long long local_d8;
  double dStack_d0;
  unsigned long long local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  unsigned long long local_a8;
  double local_a0;
  unsigned long long local_98;
  unsigned long long uStack_90;
  unsigned long long local_88;
  unsigned long long uStack_80;
  unsigned long long local_78;
  unsigned long long uStack_70;
  unsigned long long local_68;
  unsigned long long uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  unsigned long long local_38;
  double dStack_30;
  double local_28;
  
  lVar5 = *(long *)(0(in_register_00000039,param_1) + 0x20);
  if (lVar5 == 0) {
    lVar5 = *(long *)(0(in_register_00000039,param_1) + 0x18);
    lVar3 = (*(code *)PTR__objc_msgSend_100227360)(lVar5,"window");
    if (lVar3 == 0) {
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_38 = 0;
      dStack_30 = 0.0;
      local_48 = 0.0;
      dStack_40 = 0.0;
    }
    else {
      _objc_msgSend_stret(&local_98,lVar3,"frame");
      _objc_msgSend_stret(&local_48,lVar3,"contentRectForFrameRect:");
    }
    if (lVar5 == 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      (*(code *)PTR__objc_msgSend_100227360)(0,"superview");
      local_c8 = 0;
      local_d8 = 0;
      dStack_d0 = 0.0;
      local_28 = 0.0;
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      _objc_msgSend_stret(&local_78,lVar5,"frame");
      uVar4 = (*(code *)PTR__objc_msgSend_100227360)(lVar5,"superview");
      _objc_msgSend_stret(&local_d8,lVar5,"convertRect:toView:",uVar4,in_R8,in_R9,local_78,uStack_70
                          ,local_68,uStack_60);
      uVar6 = (unsigned int)local_d8;
      uVar7 = (unsigned int)((unsigned long)local_d8 >> 0x20);
      local_28 = dStack_c0;
    }
    dVar1 = (double)CONCAT44(uVar7,uVar6) + local_48;
    local_58 = dStack_d0 + dStack_40;
    dStack_50 = 0.0;
    dStack_c0 = local_28;
  }
  else {
    _objc_msgSend_stret(&local_48,lVar5,"frame");
    if (in_SIL == '\0') {
      local_28 = dStack_30;
      local_58 = dStack_40;
      dStack_50 = local_48;
      dVar1 = local_48;
    }
    else {
      local_b8 = local_48;
      dStack_b0 = dStack_40;
      local_a8 = local_38;
      local_a0 = dStack_30;
      _objc_msgSend_stret(&local_48,lVar5,"contentRectForFrameRect:");
      local_58 = dStack_40;
      dStack_50 = 0.0;
      local_28 = dStack_30;
      dVar1 = local_48;
    }
  }
  puVar2 = PTR__objc_msgSend_100227360;
  uVar4 = (*(code *)PTR__objc_msgSend_100227360)(&_OBJC_CLASS___NSScreen,"screens");
  lVar5 = (*(code *)puVar2)(uVar4,"objectAtIndex:",0);
  if (lVar5 == 0) {
    uVar6 = 0;
    uVar7 = 0;
    dStack_40 = 0.0;
  }
  else {
    _objc_msgSend_stret(&local_48,lVar5,"frame");
    uVar6 = SUB84(dStack_30,0);
    uVar7 = (unsigned int)((unsigned long)dStack_30 >> 0x20);
  }
  return CONCAT44((int)(((double)(float)((double)CONCAT44(uVar7,uVar6) + dStack_40) - local_28) -
                       local_58),(int)dVar1);
}

void WindowImplBase::getSize(bool) const {
long lVar1;
  unsigned char local_38 [16];
  double local_28;
  double dStack_20;
  
  lVar1 = *(long *)(this + 0x20);
  if (lVar1 == 0) {
    if (*(long *)(this + 0x18) == 0) {
      dStack_20 = 0.0;
      local_28 = 0.0;
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
  return CONCAT44((int)dStack_20,(int)local_28);
}

void WindowImplBase::idealSize() {
long lVar1;
  char cVar2;
  
  lVar1 = *(long *)(this + 0x20);
  if (lVar1 != 0) {
    cVar2 = (*(code *)PTR__objc_msgSend_100227360)(lVar1,"isMiniaturized");
    if (cVar2 == '\0') {
      cVar2 = (*(code *)PTR__objc_msgSend_100227360)(lVar1,"isZoomed");
      if (cVar2 == '\0') {
        (*(code *)PTR__objc_msgSend_100227360)(lVar1,"zoom:",0);
        return;
      }
    }
  }
  return;
}

void WindowImplBase::invalidate() {
void *puVar1;
  unsigned long long uVar2;
  
  puVar1 = PTR__objc_msgSend_100227360;
  if (*(long *)(this + 0x18) != 0) {
    (*(code *)PTR__objc_msgSend_100227360)(*(long *)(this + 0x18),"setNeedsDisplay:",1);
    return;
  }
  if (*(long *)(this + 0x20) != 0) {
    uVar2 = (*(code *)PTR__objc_msgSend_100227360)(*(long *)(this + 0x20),"contentView");
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
    cVar1 = (*(code *)PTR__objc_msgSend_100227360)(*(long *)(this + 0x20),"isZoomed");
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
    cVar1 = (*(code *)PTR__objc_msgSend_100227360)(*(long *)(this + 0x20),"isMiniaturized");
    return cVar1 == '\x01';
  }
  return false;
}

void WindowImplBase::isNormalSize() const {
bool bVar1;
  char cVar2;
  
  bVar1 = true;
  if (*(long *)(this + 0x20) != 0) {
    cVar2 = (*(code *)PTR__objc_msgSend_100227360)(*(long *)(this + 0x20),"isMiniaturized");
    bVar1 = cVar2 == '\0';
  }
  return bVar1;
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
    cVar3 = (*(code *)PTR__objc_msgSend_100227360)(lVar2,"isVisible");
    if (cVar3 == '\0') {
      return false;
    }
    lVar4 = *(long *)(this + 0x18);
  }
  if (lVar4 == 0) {
    if (*(long *)(this + 0x20) == 0) {
      return false;
    }
    cVar3 = (*(code *)PTR__objc_msgSend_100227360)(lVar2,"isVisible");
    return cVar3 == '\x01';
  }
  cVar3 = (*(code *)PTR__objc_msgSend_100227360)(lVar1,"isHidden");
  return cVar3 == '\0';
}

void WindowImplBase::maximize() {
return;
}

void WindowImplBase::minimize() {
if (*(long *)(this + 0x20) != 0) {
    (*(code *)PTR__objc_msgSend_100227360)(*(long *)(this + 0x20),"miniaturize:",0);
    return;
  }
  return;
}

void WindowImplBase::normalSize() {
long lVar1;
  char cVar2;
  
  lVar1 = *(long *)(this + 0x20);
  if (lVar1 != 0) {
    cVar2 = (*(code *)PTR__objc_msgSend_100227360)(lVar1,"isMiniaturized");
    if (cVar2 == '\x01') {
      (*(code *)PTR__objc_msgSend_100227360)(lVar1,"deminiaturize:",0);
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
                    /* WARNING: Could not recover jumptable at 0x00010009de0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 8))(this);
  return;
}

void WindowImplBase::releaseKeyFocus() {
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
if (*(long *)(this + 0x20) != 0) {
    (*(code *)PTR__objc_msgSend_100227360)(*(long *)(this + 0x20),"makeKeyWindow");
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
    (*(code *)PTR__objc_msgSend_100227360)(lVar1,"setTitle:",local_18);
    GP::NSStringRef::~NSStringRef((NSStringRef *)&local_18);
  }
  return;
}

void WindowImplBase::setTrackMouseGlobal(bool param_1) {
}

void WindowImplBase::startRelativeMouseMove() {
this[0x48] = (WindowImplBase)0x1;
  _CGAssociateMouseAndMouseCursorPosition(0);
  _CGGetLastMouseDelta(0,0);
  return;
}

void WindowImplBase::stopRelativeMouseMove() {
this[0x48] = (WindowImplBase)0x0;
  _CGAssociateMouseAndMouseCursorPosition(1);
  return;
}

void WindowImplBase::textInputResetMarkedRange() {
void *puVar1;
  unsigned long long uVar2;
  
  puVar1 = PTR__objc_msgSend_100227360;
  uVar2 = (*(code *)PTR__objc_msgSend_100227360)(*(unsigned long long *)(this + 0x18),"inputContext");
  (*(code *)puVar1)(uVar2,"discardMarkedText");
  return;
}

void WindowImplBase::update() {
if (*(long *)(this + 0x20) != 0) {
    (*(code *)PTR__objc_msgSend_100227360)(*(long *)(this + 0x20),"displayIfNeeded");
    return;
  }
  return;
}

WindowImplBase::~WindowImplBase() {
*(void ***)this = &PTR__WindowImplBase_100229e80;
  if (*(NSView **)(this + 0x18) != (NSView *)0x0) {
    View::detachImpl(*(NSView **)(this + 0x18));
  }
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 8))();
  }
  DETAIL::WindowImpl::~WindowImpl((WindowImpl *)this);
  delete(this);
  return;
}
}
