#include <ni/controller_editor/NIDeviceNotificationListener.hpp>
namespace NI::GP {

void NIDeviceNotificationListener::dealloc(objc_object*, objc_selector*) {
void *puVar1;
  unsigned long long uVar2;
  objc_object *local_28;
  unsigned long long local_20;
  
  puVar1 = PTR__objc_msgSend_100227360;
  uVar2 = (*(code *)PTR__objc_msgSend_100227360)(&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  uVar2 = (*(code *)puVar1)(uVar2,"notificationCenter");
  (*(code *)puVar1)(uVar2,"removeObserver:",param_1);
  local_28 = param_1;
  uVar2 = (*(code *)puVar1)(param_1,"class");
  local_20 = _class_getSuperclass(uVar2);
  _objc_msgSendSuper(&local_28,"dealloc");
  return;
}

void NIDeviceNotificationListener::init(objc_object*, objc_selector*) {
void *puVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  objc_object *local_40;
  unsigned long long local_38;
  
  puVar1 = PTR__objc_msgSend_100227360;
  local_40 = param_1;
  uVar2 = (*(code *)PTR__objc_msgSend_100227360)(param_1,"class");
  local_38 = _class_getSuperclass(uVar2);
  _objc_msgSendSuper(&local_40,"init");
  uVar2 = (*(code *)puVar1)(&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  uVar3 = (*(code *)puVar1)(uVar2,"notificationCenter");
  (*(code *)puVar1)(uVar3,"addObserver:selector:name:object:",param_1,"onDeviceDidMount:",
                    *(unsigned long long *)PTR__NSWorkspaceDidMountNotification_100227040,uVar2);
  (*(code *)puVar1)(uVar3,"addObserver:selector:name:object:",param_1,"onDeviceDidUnmount:",
                    *(unsigned long long *)PTR__NSWorkspaceDidUnmountNotification_100227048,uVar2);
  return param_1;
}
}
