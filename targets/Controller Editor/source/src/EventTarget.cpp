#include <ni/controller_editor/EventTarget.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

EventTarget::EventTarget() {
*(void ***)this = &PTR__EventTarget_101b2a8f8;
  
}

void EventTarget::setEventTimer(int, int) {
unsigned long long *puVar1;
  long *plVar2;
  unsigned long long *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  unsigned long long *puVar10;
  int iVar9;
  
  puVar3 = gEventTimerManagerSingleton;
  iVar8 = *(int *)(gEventTimerManagerSingleton + 1);
  if (iVar8 < param_1) {
    iVar4 = param_1 - param_1 % iVar8;
    iVar9 = 0;
    if ((iVar8 >> 1) + iVar4 < param_1) {
      iVar9 = iVar8;
    }
    iVar8 = iVar9 + iVar4;
  }
  puVar1 = gEventTimerManagerSingleton + 3;
  plVar2 = (long *)gEventTimerManagerSingleton[3];
  plVar5 = (long *)new char[0x30];
  *(int *)(plVar5 + 2) = iVar8;
  *(int *)((long)plVar5 + 0x14) = iVar8;
  *(int *)(plVar5 + 3) = param_2;
  plVar5[4] = (long)this;
  *(unsigned int *)(plVar5 + 5) = 0;
  *(unsigned char *)((long)plVar5 + 0x2c) = 0;
  plVar6 = plVar2;
  do {
    if (plVar6 == (long *)0x0) {
      plVar6 = puVar3 + 4;
      lVar7 = puVar3[4];
      *plVar5 = lVar7;
      plVar5[1] = 0;
      puVar10 = (unsigned long long *)(lVar7 + 8);
      if (lVar7 == 0) {
        puVar10 = puVar1;
      }
      *puVar10 = plVar5;
      *plVar6 = (long)plVar5;
      if (plVar2 == (long *)0x0) {
        (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,*(unsigned int *)(puVar3 + 1));
      }
      return plVar5;
    }
    if ((int)plVar6[3] < param_2) {
      plVar5[1] = (long)plVar6;
      *plVar5 = *plVar6;
      lVar7 = *plVar6;
      return;
    }
    plVar6 = (long *)plVar6[1];
  } while( true );
}

EventTarget::~EventTarget() {
delete(this);
  return;
}
}
