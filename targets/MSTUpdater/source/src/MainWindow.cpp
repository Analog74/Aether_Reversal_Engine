#include <ni/controller_editor/MainWindow.hpp>
namespace NI::UIA {

MainWindow::~MainWindow() {
*(void ***)this = &PTR__WindowBase_100229660;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  EventTarget::~EventTarget((EventTarget *)this);
  return;
}
}
