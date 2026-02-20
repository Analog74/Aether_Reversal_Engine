#include <ni/controller_editor/MainWindow.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

MainWindow::~MainWindow() {
*(void ***)this = &PTR__WindowBase_101b22fa0;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  EventTarget::~EventTarget((EventTarget *)this);
  return;
}
}
