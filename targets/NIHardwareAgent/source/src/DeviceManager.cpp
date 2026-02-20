#include <ni/controller_editor/DeviceManager.hpp>
namespace NI::HWS1 {

DeviceManager::~DeviceManager() {
NHL2::SERVER::USBDeviceManager::~USBDeviceManager((USBDeviceManager *)this);
  delete(this);
  return;
}
}
