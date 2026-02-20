#include <ni/controller_editor/AsyncEventTargetImpl.hpp>
namespace NI::UIA {

void AsyncEventTargetImpl::deInitPlatform() {
void *puVar1;
  unsigned long long uVar2;
  
  puVar1 = PTR__objc_msgSend_100227360;
  if (s_bAsyncNSNotificationsInitialized == '\x01') {
    s_bAsyncNSNotificationsInitialized = '\0';
    uVar2 = (*(code *)PTR__objc_msgSend_100227360)
                      (&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    (*(code *)puVar1)(uVar2,"removeObserver:",(anonymous_namespace)::s_theAsyncEventDispatcher);
    (*(code *)puVar1)((anonymous_namespace)::s_theAsyncEventDispatcher,"release");
    (anonymous_namespace)::s_theAsyncEventDispatcher = 0;
    (*(code *)puVar1)((anonymous_namespace)::AsyncNotificationName,"release");
    (anonymous_namespace)::AsyncNotificationName = 0;
  }
  return;
}

void AsyncEventTargetImpl::initPlatform(bool param_1) {
}
}
