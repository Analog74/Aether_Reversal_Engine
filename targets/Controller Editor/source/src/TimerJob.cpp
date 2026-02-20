#include <ni/controller_editor/TimerJob.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void TimerJob::endOfJob() {
if ((this[0x19] == (TimerJob)0x0) && (*(long **)(this + 8) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 8) + 0x28))();
    *(unsigned long long *)(this + 8) = 0;
    return;
  }
  return;
}

void TimerJob::runSynchronous() {
long *plVar1;
  long lVar2;
  unsigned long long *puVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  
  (**(code **)(*(long *)this + 0x30))();
  this[0x18] = (TimerJob)0x1;
  while (cVar4 = (**(code **)(*(long *)this + 0x48))(this), puVar3 = gEventTimerManagerSingleton,
        cVar4 != '\0') {
    (**(code **)(*(long *)this + 0x40))(this);
  }
  if ((this[0x19] == (TimerJob)0x0) && (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)0x0)) {
    if ((TimerJob *)plVar1[4] == this) {
      if ((int)plVar1[5] < 1) {
        lVar2 = *plVar1;
        plVar5 = (long *)plVar1[1];
        if (lVar2 == 0) {
          gEventTimerManagerSingleton[3] = plVar5;
        }
        else {
          *(long **)(lVar2 + 8) = plVar5;
          plVar5 = (long *)plVar1[1];
        }
        plVar6 = puVar3 + 4;
        if (plVar5 != (long *)0x0) {
          plVar6 = plVar5;
        }
        *plVar6 = lVar2;
        delete(plVar1);
        lVar2 = puVar3[3];
      }
      else {
        *(unsigned char *)((long)plVar1 + 0x2c) = 1;
        lVar2 = puVar3[3];
      }
      if (lVar2 == 0) {
        (**(code **)(*(long *)*puVar3 + 0x18))();
      }
    }
    *(unsigned long long *)(this + 0x10) = 0;
    (**(code **)(*(long *)this + 0x50))(this);
  }
  this[0x18] = (TimerJob)0x0;
  return;
}

void TimerJob::start() {
unsigned long long *puVar1;
  unsigned long long *puVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  unsigned long long *puVar8;
  int iVar9;
  int iVar10;
  
  this[0x1a] = (TimerJob)0x0;
  puVar2 = gEventTimerManagerSingleton;
  if (this[0x19] == (TimerJob)0x0) {
    plVar4 = *(long **)(this + 0x10);
    if (plVar4 != (long *)0x0) {
      if ((TimerJob *)plVar4[4] == this) {
        if ((int)plVar4[5] < 1) {
          lVar6 = *plVar4;
          plVar7 = (long *)plVar4[1];
          if (lVar6 == 0) {
            gEventTimerManagerSingleton[3] = plVar7;
          }
          else {
            *(long **)(lVar6 + 8) = plVar7;
            plVar7 = (long *)plVar4[1];
          }
          plVar3 = puVar2 + 4;
          if (plVar7 != (long *)0x0) {
            plVar3 = plVar7;
          }
          *plVar3 = lVar6;
          delete(plVar4);
          lVar6 = puVar2[3];
        }
        else {
          *(unsigned char *)((long)plVar4 + 0x2c) = 1;
          lVar6 = puVar2[3];
        }
        if (lVar6 == 0) {
          (**(code **)(*(long *)*puVar2 + 0x18))();
        }
      }
      *(unsigned long long *)(this + 0x10) = 0;
      (**(code **)(*(long *)this + 0x50))(this);
    }
    (**(code **)(*(long *)this + 0x40))(this);
    puVar2 = gEventTimerManagerSingleton;
    iVar9 = *(int *)(gEventTimerManagerSingleton + 1);
    if (iVar9 < 0x28) {
      iVar5 = 0x28 - (int)(0x28 % (long)iVar9);
      iVar10 = 0;
      if ((iVar9 >> 1) + iVar5 < 0x28) {
        iVar10 = iVar9;
      }
      iVar9 = iVar10 + iVar5;
    }
    puVar1 = gEventTimerManagerSingleton + 3;
    plVar7 = (long *)gEventTimerManagerSingleton[3];
    plVar3 = (long *)new char[0x30];
    *(int *)(plVar3 + 2) = iVar9;
    *(int *)((long)plVar3 + 0x14) = iVar9;
    *(unsigned int *)(plVar3 + 3) = 0xfffffff6;
    plVar3[4] = (long)this;
    *(unsigned int *)(plVar3 + 5) = 0;
    *(unsigned char *)((long)plVar3 + 0x2c) = 0;
    for (plVar4 = plVar7; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[1]) {
      if ((int)plVar4[3] < -10) {
        plVar3[1] = (long)plVar4;
        *plVar3 = *plVar4;
        lVar6 = *plVar4;
        return;
      }
    }
    plVar4 = puVar2 + 4;
    lVar6 = puVar2[4];
    *plVar3 = lVar6;
    plVar3[1] = 0;
    puVar8 = (unsigned long long *)(lVar6 + 8);
    if (lVar6 == 0) {
      puVar8 = puVar1;
    }
    *puVar8 = plVar3;
    *plVar4 = (long)plVar3;
    if (plVar7 == (long *)0x0) {
      (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,*(unsigned int *)(puVar2 + 1));
    }
    *(long **)(this + 0x10) = plVar3;
    if (*(long **)(this + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001006c56f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 8) + 0x10))();
      return;
    }
  }
  return;
}

TimerJob::~TimerJob() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
