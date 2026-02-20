#include <ni/controller_editor/WorkerThread.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::uret {

void WorkerThread::main() {
_opaque_pthread_t *p_Var1;
  long lVar2;
  long lVar3;
  long lVar4;
  WorkerThread *pWVar5;
  cfg local_a0;
  unsigned char uStack_9f;
  void6 uStack_9e;
  unsigned long long uStack_98;
  void *local_90;
  void2 local_88;
  void6 uStack_86;
  unsigned long long uStack_80;
  unsigned long long local_78;
  unsigned int local_70;
  byte local_68 [16];
  void *local_58;
  WorkerThread *local_50;
  char local_48;
  WorkerThread *local_40;
  WorkerThread *local_38;
  
  local_68[0] = 0x16;
  local_68[1] = 0x55;
  local_68[2] = 0x52;
  local_68[3] = 0x45;
  local_68[4] = 0x54;
  local_68[5] = 0x5f;
  local_68[6] = 0x57;
  local_68[7] = 0x6f;
  local_68[8] = 0x72;
  local_68[9] = 0x6b;
  local_68[10] = 0x65;
  local_68[0xb] = 0x72;
  local_68[0xc] = 0;
  this_thread::set_name(local_68);
  if ((local_68[0] & 1) != 0) {
    delete(local_58);
  }
  p_Var1 = (_opaque_pthread_t *)this_thread::native_handle();
  thread::set_low_priority(p_Var1);
  local_48 = '\x01';
  local_50 = this;
  // std code
  if (this[0x80] != (WorkerThread)0x0) {
    pWVar5 = this + 0xa8;
    local_40 = this + 0x40;
    local_38 = pWVar5;
    do {
      if (((byte)this[0x95] & 1) != 0) {
        lVar2 = *(long *)(this + 0x70);
        // std code
        lVar3 = *(long *)(lVar2 + 0x78);
        lVar2 = *(long *)(lVar2 + 0x80);
        // std code
        pWVar5 = local_38;
        if (((lVar3 == lVar2) || (this[0x94] == (WorkerThread)0x0)) &&
           (this[0xe1] == (WorkerThread)0x0)) break;
      }
      cfg::loadTrackingServiceEndpointConfiguration(&local_a0);
      if (((byte)*pWVar5 & 1) != 0) {
        delete(*(void **)(this + 0xb8));
      }
      *(void **)(pWVar5 + 0x10) = local_90;
      *(unsigned long *)pWVar5 = CONCAT62(uStack_9e,CONCAT11(uStack_9f,local_a0));
      *(unsigned long long *)(pWVar5 + 8) = uStack_98;
      local_a0 = (cfg)0x0;
      uStack_9f = 0;
      if (((byte)this[0xc0] & 1) != 0) {
        delete(*(void **)(this + 0xd0));
      }
      *(unsigned long long *)(this + 0xd0) = local_78;
      *(unsigned long *)(this + 0xc0) = CONCAT62(uStack_86,local_88);
      *(unsigned long long *)(this + 200) = uStack_80;
      local_88 = 0;
      *(unsigned int *)(this + 0xd8) = local_70;
      if (((byte)local_a0 & 1) != 0) {
        delete(local_90);
      }
      if (*(int *)(this + 0x90) == 0) {
        lVar2 = *(long *)(this + 0x70);
        // std code
        lVar3 = *(long *)(lVar2 + 0x78);
        lVar2 = *(long *)(lVar2 + 0x80);
        // std code
        if (((lVar3 == lVar2) || (this[0x94] == (WorkerThread)0x0)) || (((byte)this[0xa0] & 1) != 0)
           ) {
          // std code
          pWVar5 = local_38;
        }
        else {
          track(this);
          pWVar5 = local_38;
        }
      }
      else {
        if (0 < *(int *)(this + 0x90)) {
          // std code
          lVar2 = // std code
          if (lVar2 == 0) {
            lVar3 = 0;
          }
          else if (lVar2 < 1) {
            if (-0x20c49ba5e353f8 < lVar2) return;
            lVar3 = -0x8000000000000000;
          }
          else {
            lVar3 = 0x7fffffffffffffff;
            if (lVar2 < 0x20c49ba5e353f8) {
              lVar3 = lVar2 * 1000;
            }
          }
          lVar2 = (long)*(int *)(this + 0x90) * 1000000000;
          if ((long)*(int *)(this + 0x90) == 0) {
            lVar2 = 0;
          }
          lVar4 = 0x7fffffffffffffff;
          if (lVar3 <= 0x7fffffffffffffff - lVar2) {
            lVar4 = lVar2 + lVar3;
          }
          // std code
          // std code
        }
        *(unsigned int *)(this + 0x90) = 0;
      }
    } while (this[0x80] != (WorkerThread)0x0);
  }
  lVar2 = // std code
  if (lVar2 < *(long *)(this + 0x88)) {
    local_40 = this + 0x88;
    local_38 = this + 0xa8;
    do {
      if (((byte)this[0x95] & 1) != 0) {
        lVar2 = *(long *)(this + 0x70);
        // std code
        lVar3 = *(long *)(lVar2 + 0x78);
        lVar2 = *(long *)(lVar2 + 0x80);
        // std code
        if (((lVar3 == lVar2) || (this[0x94] == (WorkerThread)0x0)) &&
           (this[0xe1] == (WorkerThread)0x0)) break;
      }
      cfg::loadTrackingServiceEndpointConfiguration(&local_a0);
      if (((byte)*local_38 & 1) != 0) {
        delete(*(void **)(this + 0xb8));
      }
      *(void **)(local_38 + 0x10) = local_90;
      *(unsigned long *)local_38 = CONCAT62(uStack_9e,CONCAT11(uStack_9f,local_a0));
      *(unsigned long long *)(local_38 + 8) = uStack_98;
      local_a0 = (cfg)0x0;
      uStack_9f = 0;
      if (((byte)this[0xc0] & 1) != 0) {
        delete(*(void **)(this + 0xd0));
      }
      *(unsigned long long *)(this + 0xd0) = local_78;
      *(unsigned long *)(this + 0xc0) = CONCAT62(uStack_86,local_88);
      *(unsigned long long *)(this + 200) = uStack_80;
      local_88 = 0;
      *(unsigned int *)(this + 0xd8) = local_70;
      if (((byte)local_a0 & 1) != 0) {
        delete(local_90);
      }
      lVar2 = *(long *)(this + 0x70);
      // std code
      lVar3 = *(long *)(lVar2 + 0x78);
      lVar2 = *(long *)(lVar2 + 0x80);
      // std code
      if (((lVar3 == lVar2) || (this[0x94] == (WorkerThread)0x0)) || (((byte)this[0xa0] & 1) != 0))
      {
        // std code
        wait_until<// std code
                  ((condition_variable *)(this + 0x40),(unique_lock *)&local_50,local_40);
      }
      else {
        track(this);
      }
      lVar2 = // std code
    } while (lVar2 < *(long *)local_40);
  }
  if (this[0xe1] != (WorkerThread)0x0) {
    do {
      // std code
    } while (this[0xe1] != (WorkerThread)0x0);
  }
  if (local_48 != '\0') {
    // std code
  }
  return;
}

void WorkerThread::track() [clone .cold.1] {
if (this != (WorkerThread *)0x0) {
    (**(code **)(*(long *)this + 0x28))();
  }
  return;
}

WorkerThread::~WorkerThread() {
WorkerThread WVar1;
  long lVar2;
  
  if (this[0x80] != (WorkerThread)0x0) {
    lVar2 = // std code
    // std code
    if (this[0x80] == (WorkerThread)0x0) {
      // std code
      WVar1 = this[0xc0];
      goto joined_r0x0001003e78fc;
    }
    this[0x80] = (WorkerThread)0x0;
    *(long *)(this + 0x88) = lVar2 + 5000000000;
    // std code
    LOCK();
    this[0x95] = (WorkerThread)0x1;
    UNLOCK();
    // std code
    // std code
    LOCK();
    this[0x95] = (WorkerThread)0x0;
    UNLOCK();
  }
  WVar1 = this[0xc0];
joined_r0x0001003e78fc:
  if (((byte)WVar1 & 1) != 0) {
    delete(*(void **)(this + 0xd0));
  }
  if (((byte)this[0xa8] & 1) != 0) {
    delete(*(void **)(this + 0xb8));
  }
  // std code
  // std code
  // std code
  return;
}
}
