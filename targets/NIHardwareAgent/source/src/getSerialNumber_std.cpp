#include <ni/controller_editor/getSerialNumber_std.hpp>
namespace NI::NHL2::ControllerDevice {

void getSerialNumber(std::string&) const {
unsigned int uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*(long *)this + 0xe0))();
  if ((char)uVar1 != '\0') {
    lVar2 = (**(code **)(*(long *)this + 0xf8))(this);
    // std code
  }
  return uVar1;
}
}
