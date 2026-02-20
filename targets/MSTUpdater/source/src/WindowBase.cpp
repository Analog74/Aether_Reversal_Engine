#include <ni/controller_editor/WindowBase.hpp>
namespace NI::UIA {

void WindowBase::getNSView() const {
char cVar1;
  
  if ((*(long **)(this + 8) != (long *)0x0) &&
     (cVar1 = (**(code **)(**(long **)(this + 8) + 400))(), cVar1 != '\0')) {
    return *(unsigned long long *)(*(long *)(this + 8) + 0x18);
  }
  return 0;
}

void WindowBase::hasAlphaBlending() const {
return this[0x1a];
}

void WindowBase::onImplDestroyed() {
*(unsigned long long *)(this + 8) = 0;
  return;
}

void WindowBase::setAutoDelete(bool param_1) {
}

void WindowBase::useOffscreenPictureInsteadOfPaintEvent() const {
return this[0x19];
}

WindowBase::~WindowBase() {
*(void ***)this = &PTR__WindowBase_100229660;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  EventTarget::~EventTarget((EventTarget *)this);
  delete(this);
  return;
}
}
