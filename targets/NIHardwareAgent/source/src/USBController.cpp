#include <ni/controller_editor/USBController.hpp>
namespace NI::NHL2::SERVER {

void USBController::disconnectDevice() {
/* WARNING: Could not recover jumptable at 0x00010003090f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x260) + 0x10))();
  return;
}

USBController::~USBController() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
