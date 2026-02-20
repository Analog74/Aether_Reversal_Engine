#include <ni/controller_editor/DeviceNotification.hpp>
namespace NI::GP {

void DeviceNotification::deInitOS() {
(*(code *)PTR__objc_release_1009cc360)(NIDeviceNotificationListener::s_pNSListener);
  NIDeviceNotificationListener::s_pNSListener = 0;
  return;
}

void DeviceNotification::initOS() {
NIDeviceNotificationListener::s_pNSListener =
       _objc_alloc_init(NIDeviceNotificationListener::theClass);
  return 1;
}
}
