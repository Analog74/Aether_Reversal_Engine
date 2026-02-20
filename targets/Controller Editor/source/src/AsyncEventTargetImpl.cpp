#include <ni/controller_editor/AsyncEventTargetImpl.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void AsyncEventTargetImpl::deInitPlatform() {
void *puVar1;
  unsigned long long uVar2;
  
  puVar1 = PTR__objc_msgSend_101ab46d8;
  if (s_bAsyncNSNotificationsInitialized == '\x01') {
    s_bAsyncNSNotificationsInitialized = '\0';
    uVar2 = (*(code *)PTR__objc_msgSend_101ab46d8)
                      (&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    (*(code *)puVar1)(uVar2,"removeObserver:",UIA::(anonymous_namespace)::s_theAsyncEventDispatcher)
    ;
    puVar1 = PTR__objc_release_101ab46e0;
    (*(code *)PTR__objc_release_101ab46e0)(UIA::(anonymous_namespace)::s_theAsyncEventDispatcher);
    UIA::(anonymous_namespace)::s_theAsyncEventDispatcher = 0;
    (*(code *)puVar1)(UIA::(anonymous_namespace)::AsyncNotificationName);
    UIA::(anonymous_namespace)::AsyncNotificationName = 0;
  }
  return;
}

void AsyncEventTargetImpl::initPlatform(bool param_1) {
}
}
