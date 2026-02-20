#include <ni/controller_editor/View.hpp>
namespace NI::UIA::COCOA::View::getDragViewData(NI::UIA::COCOA {

void View::DragViewData*&) {
unsigned long long uVar1;
  char cVar2;
  unsigned long long uVar3;
  unsigned long long *puVar4;
  unsigned long uVar5;
  unsigned long uVar6;
  void *puVar7;
  DragViewData *local_28;
  
  if (s_pfnGetDragViewData == (code *)0x0) {
    *param_1 = (DragViewData *)&s_theDragViewData;
    puVar7 = &0;
  }
  else {
    local_28 = (DragViewData *)0x0;
    cVar2 = (*s_pfnGetDragViewData)(&local_28,0x30);
    if (cVar2 == '\0') {
      puVar7 = (void *)0x0;
    }
    else {
      *param_1 = local_28;
      puVar7 = PTR__objc_msgSend_100227360;
      uVar3 = (*(code *)PTR__objc_msgSend_100227360)
                        (*(unsigned long long *)local_28,"registeredDraggedTypes");
      puVar4 = (unsigned long long *)InternalClipBoardFormat::FormatHandle();
      uVar5 = (*(code *)puVar7)(uVar3,"indexOfObject:",*puVar4);
      uVar6 = (*(code *)puVar7)(uVar3,"count");
      if (uVar6 <= uVar5) {
        uVar1 = *(unsigned long long *)local_28;
        puVar4 = (unsigned long long *)InternalClipBoardFormat::FormatHandle();
        uVar3 = (*(code *)puVar7)(uVar3,"arrayByAddingObject:",*puVar4);
        (*(code *)puVar7)(uVar1,"registerForDraggedTypes:",uVar3);
      }
      puVar7 = (void *)0x1;
    }
  }
  return puVar7;
}
}
