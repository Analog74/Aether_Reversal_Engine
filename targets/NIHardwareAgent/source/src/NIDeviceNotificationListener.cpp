#include <ni/controller_editor/NIDeviceNotificationListener.hpp>
namespace NI::GP {

void NIDeviceNotificationListener::dealloc(objc_object*, objc_selector*) {
void *puVar1;
  unsigned long long uVar2;
  objc_object *local_28;
  unsigned long long local_20;
  
  puVar1 = PTR__objc_msgSend_1009cc358;
  uVar2 = (*(code *)PTR__objc_msgSend_1009cc358)(&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  uVar2 = (*(code *)puVar1)(uVar2,"notificationCenter");
  (*(code *)puVar1)(uVar2,"removeObserver:",param_1);
  local_28 = param_1;
  uVar2 = _objc_opt_class(param_1);
  local_20 = _class_getSuperclass(uVar2);
  _objc_msgSendSuper(&local_28,"dealloc");
  return;
}
}
