#include <ni/controller_editor/FX2DeviceFeatures.hpp>
namespace NI::NHL2 {

FX2DeviceFeatures::FX2DeviceFeatures() {
*(void2 *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x11) = 0;
  *(unsigned long long *)(this + 0x19) = 0;
  *(void2 *)(this + 0x21) = 5;
  this[0x23] = (FX2DeviceFeatures)0x2;
  *(unsigned long long *)(this + 0x24) = 0;
  this[0x2c] = (FX2DeviceFeatures)0x0;
  
}
}
