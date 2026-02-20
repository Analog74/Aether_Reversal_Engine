#include <ni/controller_editor/DeviceNotification.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void DeviceNotification::deInitOS() {
(*(code *)PTR__objc_release_101ab46e0)(NIDeviceNotificationListener::s_pNSListener);
  NIDeviceNotificationListener::s_pNSListener = 0;
  return;
}

void DeviceNotification::initOS() {
NIDeviceNotificationListener::s_pNSListener =
       _objc_alloc_init(NIDeviceNotificationListener::theClass);
  return 1;
}
}
