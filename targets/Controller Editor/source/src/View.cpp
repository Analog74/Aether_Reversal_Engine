#include <ni/controller_editor/View.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::COCOA::View::getDragViewData(NI::UIA::COCOA {

void View::DragViewData*&) {
unsigned long long uVar1;
  void *puVar2;
  uint uVar3;
  unsigned long long uVar4;
  long lVar5;
  unsigned long uVar6;
  unsigned long uVar7;
  void *puVar8;
  DragViewData *local_30;
  
  if (s_pfnGetDragViewData == (code *)0x0) {
    *param_1 = (DragViewData *)&s_theDragViewData;
    puVar8 = &0;
  }
  else {
    local_30 = (DragViewData *)0x0;
    uVar3 = (*s_pfnGetDragViewData)(&local_30,0x30);
    puVar8 = (void *)(unsigned long)uVar3;
    if ((char)uVar3 != '\0') {
      *param_1 = local_30;
      puVar2 = PTR__objc_msgSend_101ab46d8;
      uVar4 = (*(code *)PTR__objc_msgSend_101ab46d8)
                        (*(unsigned long long *)local_30,"registeredDraggedTypes");
      lVar5 = InternalClipBoardFormat::FormatHandle();
      uVar6 = (*(code *)puVar2)(uVar4,"indexOfObject:",**(unsigned long long **)(lVar5 + 8));
      uVar7 = (*(code *)puVar2)(uVar4,"count");
      if (uVar7 <= uVar6) {
        uVar1 = *(unsigned long long *)local_30;
        lVar5 = InternalClipBoardFormat::FormatHandle();
        uVar4 = (*(code *)puVar2)(uVar4,"arrayByAddingObject:",**(unsigned long long **)(lVar5 + 8));
        (*(code *)puVar2)(uVar1,"registerForDraggedTypes:",uVar4);
      }
    }
  }
  return puVar8;
}
}
