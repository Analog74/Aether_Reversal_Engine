#include <ni/controller_editor/StandaloneWindow.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

StandaloneWindow::StandaloneWindow() {
EventTarget::EventTarget((EventTarget *)this);
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned int *)(this + 0x17) = 0;
  *(void ***)this = &PTR__StandaloneWindow_101b22f50;
  
}

StandaloneWindow::~StandaloneWindow() {
*(void ***)this = &PTR__StandaloneWindow_101b22f50;
  Application::removeWindow((Window *)this);
  *(void ***)this = &PTR__WindowBase_101b22fa0;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  EventTarget::~EventTarget((EventTarget *)this);
  delete(this);
  return;
}
}
