#include <ni/controller_editor/CursorManager.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void CursorManager::destroyDefaultCursors() {
(*(code *)PTR__objc_release_101ab46e0)(0);
  return;
}

void CursorManager::registerDefaultCursors() {
void *puVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  Picture local_a8 [128];
  
  puVar1 = PTR__objc_msgSend_101ab46d8;
  s_hStdCursors = (*(code *)PTR__objc_msgSend_101ab46d8)(&_OBJC_CLASS___NSCursor,"arrowCursor");
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
  Picture::Picture(local_a8);
  Picture::setSize((int)local_a8,0x10,true);
  PictureProperties::setAlphaChannel((PictureProperties *)local_a8,true);
  Picture::clear(local_a8,0);
  uVar2 = DETAIL::createNSImageFromPicture(local_a8,false);
  uVar3 = _objc_alloc(&_OBJC_CLASS___NSCursor);
  uVar3 = (*(code *)PTR__objc_msgSend_101ab46d8)(0,0,uVar3,"initWithImage:hotSpot:",uVar2);
  (*(code *)PTR__objc_release_101ab46e0)(uVar2);
  0 = uVar3;
  Picture::~Picture(local_a8);
  return;
}

void CursorManager::resetSystemCursor() {
void *puVar1;
  unsigned long long uVar2;
  
  puVar1 = PTR__objc_msgSend_101ab46d8;
  uVar2 = (*(code *)PTR__objc_msgSend_101ab46d8)(&_OBJC_CLASS___NSCursor,"arrowCursor");
  (*(code *)puVar1)(uVar2,"set");
  return;
}

void CursorManager::setSystemCursor(void* param_1) {
}
}
