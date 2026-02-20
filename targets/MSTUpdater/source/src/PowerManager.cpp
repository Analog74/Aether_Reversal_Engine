#include <ni/controller_editor/PowerManager.hpp>
namespace NI::UIA {

PowerManager::~PowerManager() {
long lVar1;
  unsigned long long uVar2;
  
  if (g_Notifier != 0) {
    _IODeregisterForSystemPower(&g_Notifier);
    g_IO_Connect = 0;
  }
  if (g_NotificationPortRef != 0) {
    _IONotificationPortDestroy();
  }
  lVar1 = *(long *)this;
  if (lVar1 != 0) {
    uVar2 = (*(code *)PTR__objc_msgSend_100227360)(&_OBJC_CLASS___NSProcessInfo,"processInfo");
    (*(code *)PTR__objc_msgSend_100227360)(uVar2,"endActivity:",lVar1);
    (*(code *)PTR__objc_msgSend_100227360)(lVar1,"release");
  }
  return;
}
}
