#include <ni/controller_editor/PowerManager.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
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
    uVar2 = (*(code *)PTR__objc_msgSend_101ab46d8)(&_OBJC_CLASS___NSProcessInfo,"processInfo");
    (*(code *)PTR__objc_msgSend_101ab46d8)(uVar2,"endActivity:",lVar1);
    (*(code *)PTR__objc_release_101ab46e0)(lVar1);
  }
  return;
}
}
