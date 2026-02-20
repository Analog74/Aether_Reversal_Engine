#include <ni/controller_editor/FirmwareUpdaterApp_NI.hpp>
namespace NI::FirmwareUpdaterApp {

void FirmwareUpdaterApp(NI::FirmwareUpdaterConfig const&) {
UIA::Application::Application((Application *)this);
  *(void ***)this = &PTR__FirmwareUpdaterApp_100228260;
  *(void ***)(this + 8) = &PTR__FirmwareUpdaterApp_1002282f8;
  *(unsigned long long *)(this + 0x90) = 0;
  *(FirmwareUpdaterConfig **)(this + 0xb0) = param_1;
  return;
}
}
