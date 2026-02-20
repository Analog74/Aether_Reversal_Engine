#include <ni/controller_editor/_CancellationTokenState.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx::details {

void _CancellationTokenState::_Cancel() {
long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  LOCK();
  bVar7 = *(long *)(this + 0x10) == 0;
  if (bVar7) {
    *(long *)(this + 0x10) = 1;
  }
  UNLOCK();
  if (bVar7) {
    // std code
    plVar2 = *(long **)(this + 0xd0);
    *(unsigned long long *)(this + 0xd0) = 0;
    *(unsigned long long *)(this + 0xd8) = 0;
    // std code
    for (plVar3 = plVar2; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
      plVar4 = (long *)*plVar3;
      lVar5 = platform::GetCurrentThreadId();
      LOCK();
      bVar7 = plVar4[2] == 0;
      if (bVar7) {
        plVar4[2] = lVar5;
      }
      UNLOCK();
      if (bVar7) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
        LOCK();
        lVar6 = plVar4[2];
        if (lVar5 == lVar6) {
          plVar4[2] = 3;
          lVar6 = lVar5;
        }
        UNLOCK();
        if (lVar6 == 2) {
          lVar5 = plVar4[3];
          // std code
          *(unsigned char *)(lVar5 + 0x70) = 1;
          // std code
          // std code
        }
      }
      LOCK();
      plVar1 = plVar4 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    *(unsigned long long *)(this + 0x10) = 2;
    UNLOCK();
    // std code
    this[0x88] = (_CancellationTokenState)0x1;
    // std code
    // std code
    while (plVar2 != (long *)0x0) {
      plVar3 = (long *)plVar2[1];
      _free(plVar2);
      plVar2 = plVar3;
    }
  }
  return;
}

_CancellationTokenState::~_CancellationTokenState() {
long *plVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  
  *(void ***)this = &PTR___CancellationTokenState_101b218a0;
  // std code
  plVar6 = *(long **)(this + 0xd0);
  *(unsigned long long *)(this + 0xd0) = 0;
  *(unsigned long long *)(this + 0xd8) = 0;
  // std code
  plVar5 = plVar6;
  if (plVar6 != (long *)0x0) {
    do {
      plVar2 = (long *)*plVar5;
      LOCK();
      plVar2[2] = 2;
      UNLOCK();
      LOCK();
      plVar1 = plVar2 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      plVar1 = plVar5 + 1;
      plVar5 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
    do {
      plVar5 = (long *)plVar6[1];
      _free(plVar6);
      plVar6 = plVar5;
    } while (plVar5 != (long *)0x0);
  }
  pvVar4 = *(void **)(this + 0xd0);
  while (pvVar4 != (void *)0x0) {
    pvVar3 = *(void **)((long)pvVar4 + 8);
    _free(pvVar4);
    pvVar4 = pvVar3;
  }
  // std code
  // std code
  // std code
  *(void ***)this = &PTR___RefCounter_101b0aff8;
  return;
}
}
