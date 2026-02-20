#include <ni/controller_editor/FX2DeviceConfiguration.hpp>
namespace NI::NHL2 {

FX2DeviceConfiguration::FX2DeviceConfiguration() {
*(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  
}
}
