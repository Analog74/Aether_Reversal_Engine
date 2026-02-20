#include <ni/controller_editor/Lib.hpp>
namespace NI::GP {

void Lib::doNotInitializeDeviceNotifications() {
s_bInitializeDeviceNotifications = 0;
  return;
}
}
