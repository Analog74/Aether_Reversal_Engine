#include <ni/controller_editor/DeviceNotificationHelper.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

DeviceNotificationHelper::~DeviceNotificationHelper() {
DeviceNotificationListener::~DeviceNotificationListener((DeviceNotificationListener *)this);
  delete(this);
  return;
}
}
