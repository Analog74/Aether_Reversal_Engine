#include <ni/controller_editor/DeviceNotificationHelper.hpp>
namespace NI::GP {

DeviceNotificationHelper::~DeviceNotificationHelper() {
DeviceNotificationListener::~DeviceNotificationListener((DeviceNotificationListener *)this);
  delete(this);
  return;
}
}
