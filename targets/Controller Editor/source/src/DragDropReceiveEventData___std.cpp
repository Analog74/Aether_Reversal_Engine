#include <ni/controller_editor/DragDropReceiveEventData___std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::TextEdit::dropText(NI::UIA {

void DragDropReceiveEventData*, std::string const&) {
int iVar1;
  
  void *local_30;
  unsigned long long local_28;
  
  *(unsigned int *)(param_1 + 0x18) = 1;
  local_28 = CONCAT44(*(int *)(param_1 + 4) - *(int *)(this + 0x154),
                      *(int *)param_1 - *(int *)(this + 0x150));
  iVar1 = getCursorPositionFromPoint(this,(Point *)&local_28);
  iVar1 = NWL::(anonymous_namespace)::findLegalUtfPosition((string *)(this + 0x840),iVar1);
  if ((*(int *)(this + 0x878) != -1) && (*(int *)(this + 0x878) != *(int *)(this + 0x87c))) {
    *(unsigned int *)(this + 0x878) = 0xffffffff;
    *(unsigned int *)(this + 0x87c) = 0xffffffff;
    *(unsigned int *)(this + 0x880) = 0xffffffff;
    *(unsigned int *)(this + 0x884) = 0xffffffff;
    if (*(long **)(this + 0x138) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x138) + 0x90))();
    }
    Widget::setInvalid((Widget *)this,0);
  }
  if (*(int *)(this + 0x874) != iVar1) {
    *(int *)(this + 0x874) = iVar1;
    Widget::setInvalid((Widget *)this,0);
  }
  adjustOffset(this);
  // std code
  insert(this,local_40,0,0xffffffff);
  if (((byte)local_40[0] & 1) != 0) {
    delete(local_30);
  }
  return 1;
}
}
