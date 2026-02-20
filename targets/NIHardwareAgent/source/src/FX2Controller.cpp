#include <ni/controller_editor/FX2Controller.hpp>
namespace NI::NHL2::SERVER {

void FX2Controller::configureDevice() {
char cVar1;
  FX2DeviceConfiguration local_40 [32];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_1009cc2c8;
  if (this[0x39] != (FX2Controller)0x0) {
    FX2DeviceConfiguration::FX2DeviceConfiguration(local_40);
    cVar1 = (**(code **)(*(long *)this + 0x268))(this,local_40);
    if (cVar1 != '\0') {
      FX2Device::writeConfiguration(*(FX2Device **)(this + 0x268),local_40);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009cc2c8 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

void FX2Controller::getERPBytePosition(int, int&, int&) {
return 0;
}

FX2Controller::~FX2Controller() {
~FX2Controller(this);
  delete(this);
  return;
}
}
