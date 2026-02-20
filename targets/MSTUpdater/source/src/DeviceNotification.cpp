#include <ni/controller_editor/DeviceNotification.hpp>
namespace NI::GP {

void DeviceNotification::deInitOS() {
(*(code *)PTR__objc_msgSend_100227360)(NIDeviceNotificationListener::s_pNSListener,"release");
  NIDeviceNotificationListener::s_pNSListener = 0;
  return;
}

void DeviceNotification::initOS() {
unsigned long long uVar1;
  void *puVar2;
  
  puVar2 = PTR__objc_msgSend_100227360;
  uVar1 = (*(code *)PTR__objc_msgSend_100227360)(NIDeviceNotificationListener::theClass,"alloc");
  NIDeviceNotificationListener::s_pNSListener = (*(code *)puVar2)(uVar1,"init");
  return 1;
}
}
