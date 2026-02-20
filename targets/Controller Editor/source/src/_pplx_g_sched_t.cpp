#include <ni/controller_editor/_pplx_g_sched_t.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx {

void _pplx_g_sched_t::get_scheduler() {
long *plVar1;
  byte bVar2;
  unsigned long long uVar3;
  long lVar4;
  long *plVar5;
  unsigned long long *puVar6;
  int *in_RSI;
  unsigned long long *in_RDI;
  
  *in_RDI = 0;
  in_RDI[1] = 0;
  if (*in_RSI == 1) {
    while( true ) {
      LOCK();
      bVar2 = *(byte *)(in_RSI + 1);
      *(byte *)(in_RSI + 1) = 1;
      UNLOCK();
      if ((bVar2 & 1) == 0) break;
      _sleep(0);
    }
    if (*(long *)(in_RSI + 2) == 0) {
      puVar6 = (unsigned long long *)new char[0x20];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR____shared_ptr_emplace_101b1f988;
      puVar6[3] = &PTR_schedule_101b1f8b0;
      *(unsigned long long **)(in_RSI + 2) = puVar6 + 3;
      plVar5 = *(long **)(in_RSI + 4);
      *(unsigned long long **)(in_RSI + 4) = puVar6;
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar4 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          // std code
        }
      }
    }
    uVar3 = *(unsigned long long *)(in_RSI + 2);
    lVar4 = *(long *)(in_RSI + 4);
    if (lVar4 != 0) {
      LOCK();
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    *in_RDI = uVar3;
    plVar5 = (long *)in_RDI[1];
    in_RDI[1] = lVar4;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        // std code
      }
    }
    LOCK();
    *(unsigned char *)(in_RSI + 1) = 0;
    UNLOCK();
  }
  else {
    puVar6 = (unsigned long long *)new char[0x20];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR____shared_ptr_emplace_101b1f988;
    puVar6[3] = &PTR_schedule_101b1f8b0;
    *in_RDI = puVar6 + 3;
    in_RDI[1] = puVar6;
  }
  return;
}

_pplx_g_sched_t::~_pplx_g_sched_t() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(unsigned int *)this = 2;
  plVar3 = *(long **)(this + 0x10);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      return;
    }
  }
  return;
}
}
