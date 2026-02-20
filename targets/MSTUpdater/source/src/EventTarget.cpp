#include <ni/controller_editor/EventTarget.hpp>
namespace NI::UIA {

EventTarget::EventTarget() {
*(void ***)this = &PTR__EventTarget_100230b58;
  
}

void EventTarget::setEventTimer(int, int) {
long *plVar1;
  long *plVar2;
  long lVar3;
  unsigned long long *puVar4;
  int iVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  puVar4 = gEventTimerManagerSingleton;
  iVar7 = *(int *)(gEventTimerManagerSingleton + 1);
  if (iVar7 < param_1) {
    iVar5 = param_1 - param_1 % iVar7;
    iVar8 = 0;
    if ((iVar7 >> 1) + iVar5 < param_1) {
      iVar8 = iVar7;
    }
    iVar7 = iVar8 + iVar5;
  }
  plVar1 = (long *)gEventTimerManagerSingleton[3];
  plVar6 = (long *)new(0x30);
  *(int *)(plVar6 + 2) = iVar7;
  *(int *)((long)plVar6 + 0x14) = iVar7;
  *(int *)(plVar6 + 3) = param_2;
  plVar6[4] = (long)this;
  *(unsigned int *)(plVar6 + 5) = 0;
  *(unsigned char *)((long)plVar6 + 0x2c) = 0;
  plVar2 = plVar1;
  do {
    if (plVar2 == (long *)0x0) {
      lVar3 = puVar4[4];
      *plVar6 = lVar3;
      plVar6[1] = 0;
      if (lVar3 == 0) {
        puVar4[3] = plVar6;
      }
      else {
        *(long **)(lVar3 + 8) = plVar6;
      }
      puVar4[4] = plVar6;
LAB_100181e6e:
      if (plVar1 == (long *)0x0) {
        (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,*(unsigned int *)(puVar4 + 1));
      }
      return plVar6;
    }
    if ((int)plVar2[3] < param_2) {
      plVar6[1] = (long)plVar2;
      *plVar6 = *plVar2;
      if (*plVar2 == 0) {
        puVar4[3] = plVar6;
        *plVar2 = (long)plVar6;
      }
      else {
        *(long **)(*plVar2 + 8) = plVar6;
        *plVar2 = (long)plVar6;
      }
      goto LAB_100181e6e;
    }
    plVar2 = (long *)plVar2[1];
  } while( true );
}

EventTarget::~EventTarget() {
delete(this);
  return;
}
}
