#include <ni/controller_editor/StandaloneWindow.hpp>
namespace NI::UIA {

StandaloneWindow::StandaloneWindow() {
EventTarget::EventTarget((EventTarget *)this);
  *(unsigned long long *)(this + 0x20) = 0;
  this[0x1a] = (StandaloneWindow)0x0;
  *(void2 *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(void ***)this = &PTR__StandaloneWindow_100229610;
  
}

StandaloneWindow::~StandaloneWindow() {
*(void ***)this = &PTR__StandaloneWindow_100229610;
  Application::removeWindow((Window *)this);
  *(void ***)this = &PTR__WindowBase_100229660;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  EventTarget::~EventTarget((EventTarget *)this);
  delete(this);
  return;
}
}
