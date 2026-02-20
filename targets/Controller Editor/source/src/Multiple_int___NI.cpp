#include <ni/controller_editor/Multiple_int___NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::RangeEdit::setValues(NI {

void Multiple<int>, NI::Multiple<int>, bool) {
long *plVar1;
  long lVar2;
  Dragger *pDVar3;
  long *plVar4;
  unsigned int uVar5;
  void *local_40;
  unsigned long long local_38;
  
  NWL::DraggerableValueEdit::setValue(*(DraggerableValueEdit **)(this + 0x400),(int)param_2,param_4)
  ;
  NWL::DraggerableValueEdit::setValue(*(DraggerableValueEdit **)(this + 0x410),(int)param_3,param_4)
  ;
  pDVar3 = *(Dragger **)(*(long *)(this + 0x400) + 0x3c0);
  plVar4 = *(long **)(*(long *)(this + 0x400) + 0x3c8);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  uVar5 = NWL::Dragger::getValue(pDVar3);
  *(unsigned int *)(this + 0x3f4) = uVar5;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      // std code
    }
  }
  pDVar3 = *(Dragger **)(*(long *)(this + 0x410) + 0x3c0);
  plVar4 = *(long **)(*(long *)(this + 0x410) + 0x3c8);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  uVar5 = NWL::Dragger::getValue(pDVar3);
  *(unsigned int *)(this + 0x3f8) = uVar5;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      // std code
    }
  }
  if ((param_2 & 0xff00000000) == 0x200000000) {
    local_40 = &0;
    local_38 = 3;
    NWL::DraggerableValueEdit::setInvalidValue
              (*(DraggerableValueEdit **)(this + 0x400),(CharSequence *)&local_40);
  }
  if ((param_3 & 0xff00000000) == 0x200000000) {
    local_40 = &0;
    local_38 = 3;
    NWL::DraggerableValueEdit::setInvalidValue
              (*(DraggerableValueEdit **)(this + 0x410),(CharSequence *)&local_40);
  }
  return;
}
}
