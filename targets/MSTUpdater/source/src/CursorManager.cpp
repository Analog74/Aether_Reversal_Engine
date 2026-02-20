#include <ni/controller_editor/CursorManager.hpp>
namespace NI::UIA {

void CursorManager::destroyDefaultCursors() {
(*(code *)PTR__objc_msgSend_100227360)(0,"release");
  return;
}

void CursorManager::registerDefaultCursors() {
void *puVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  long local_a8 [16];
  
  puVar1 = PTR__objc_msgSend_100227360;
  s_hStdCursors = (*(code *)PTR__objc_msgSend_100227360)(&_OBJC_CLASS___NSCursor,"arrowCursor");
  0 = (*(code *)puVar1)(&_OBJC_CLASS___NSCursor,"crosshairCursor");
  0 = (*(code *)puVar1)(&_OBJC_CLASS___NSCursor,"openHandCursor");
  0 = (*(code *)puVar1)(&_OBJC_CLASS___NSCursor,"IBeamCursor");
  0 = (*(code *)puVar1)(&_OBJC_CLASS___NSCursor,"operationNotAllowedCursor");
  0 = (*(code *)puVar1)(&_OBJC_CLASS___NSCursor,"crosshairCursor");
  0 = (*(code *)puVar1)(&_OBJC_CLASS___NSCursor,"crosshairCursor");
  0 = (*(code *)puVar1)(&_OBJC_CLASS___NSCursor,"resizeUpDownCursor");
  0 = (*(code *)puVar1)(&_OBJC_CLASS___NSCursor,"crosshairCursor");
  0 = (*(code *)puVar1)(&_OBJC_CLASS___NSCursor,"resizeLeftRightCursor");
  0 = (*(code *)puVar1)(&_OBJC_CLASS___NSCursor,"resizeUpCursor");
  0 = (*(code *)puVar1)(&_OBJC_CLASS___NSCursor,"arrowCursor");
  0 = (*(code *)puVar1)(&_OBJC_CLASS___NSCursor,"pointingHandCursor");
  0 = (*(code *)puVar1)(&_OBJC_CLASS___NSCursor,"closedHandCursor");
  0 = (*(code *)puVar1)(&_OBJC_CLASS___NSCursor,"dragCopyCursor");
  0 = (*(code *)puVar1)(&_OBJC_CLASS___NSCursor,"dragLinkCursor");
  Picture::Picture((Picture *)local_a8);
  Picture::setSize((int)(Picture *)local_a8,0x10,true);
  (**(code **)(local_a8[0] + 0x10))(local_a8);
  Picture::clear((Picture *)local_a8,0);
  uVar2 = DETAIL::createNSImageFromPicture((Picture *)local_a8,false);
  uVar3 = (*(code *)PTR__objc_msgSend_100227360)(&_OBJC_CLASS___NSCursor,"alloc");
  uVar3 = (*(code *)PTR__objc_msgSend_100227360)(0,0,uVar3,"initWithImage:hotSpot:",uVar2);
  (*(code *)PTR__objc_msgSend_100227360)(uVar2,"release");
  0 = uVar3;
  Picture::~Picture((Picture *)local_a8);
  return;
}

void CursorManager::resetSystemCursor() {
void *puVar1;
  unsigned long long uVar2;
  
  puVar1 = PTR__objc_msgSend_100227360;
  uVar2 = (*(code *)PTR__objc_msgSend_100227360)(&_OBJC_CLASS___NSCursor,"arrowCursor");
  (*(code *)puVar1)(uVar2,"set");
  return;
}

void CursorManager::setSystemCursor(void* param_1) {
}
}
