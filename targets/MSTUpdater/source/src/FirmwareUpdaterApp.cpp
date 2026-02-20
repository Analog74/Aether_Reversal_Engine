#include <ni/controller_editor/FirmwareUpdaterApp.hpp>
namespace non-virtual thunk to NI {

FirmwareUpdaterApp::~FirmwareUpdaterApp() {
unsigned long uVar1;
  
  *(void ***)(this + -8) = &PTR__FirmwareUpdaterApp_100228260;
  *(void ***)this = &PTR__FirmwareUpdaterApp_1002282f8;
  uVar1 = *(unsigned long *)(this + 0x88);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x90,this + 0x90,2);
    }
    *(unsigned long long *)(this + 0x88) = 0;
  }
  UIA::Application::~Application((Application *)(this + -8));
  delete((Application *)(this + -8));
  return;
}
}
