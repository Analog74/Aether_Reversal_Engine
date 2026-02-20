#include <ni/controller_editor/WindowBase.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void WindowBase::getNSView() const {
char cVar1;
  
  if (*(long **)(this + 8) != (long *)0x0) {
    cVar1 = (**(code **)(**(long **)(this + 8) + 0x1c8))();
    if (cVar1 != '\0') {
      return *(unsigned long long *)(*(long *)(this + 8) + 0x18);
    }
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

WindowBase::WindowBase() {
EventTarget::EventTarget((EventTarget *)this);
  *(void ***)this = &PTR__WindowBase_101b22fa0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned int *)(this + 0x17) = 0;
  
}

WindowBase::~WindowBase() {
*(void ***)this = &PTR__WindowBase_101b22fa0;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  EventTarget::~EventTarget((EventTarget *)this);
  delete(this);
  return;
}
}
