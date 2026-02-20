#include <ni/controller_editor/USBDeviceFactory.hpp>
namespace NI::NHL2 {

USBDeviceFactory::USBDeviceFactory() {
*(void ***)this = &PTR__USBDeviceFactory_1002286f0;
  *(unsigned long long *)(this + 8) = 0;
  this[0x10] = (USBDeviceFactory)0x0;
  *(unsigned long long *)(this + 0x40) = 0;
  *(unsigned long long *)(this + 0x70) = 0;
  createOSImpl(this);
  
}

USBDeviceFactory::~USBDeviceFactory() {
~USBDeviceFactory(this);
  delete(this);
  return;
}
}
