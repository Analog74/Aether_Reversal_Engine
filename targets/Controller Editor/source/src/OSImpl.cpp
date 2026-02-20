#include <ni/controller_editor/OSImpl.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::IPCPort {

void OSImpl::callback(__CFMessagePort*, int, __CFData const*, void*) {
long *plVar1;
  void *pvVar2;
  size_t sVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long local_38;
  long local_30;
  
  if ((((param_3 != (__CFData *)0x0) &&
       (plVar1 = *(long **)((long)param_4 + 0x28), plVar1 != (long *)0x0)) &&
      (sVar3 = _CFDataGetLength(param_3), 0 < (long)sVar3)) && ((long)sVar3 < plVar1[8])) {
    pvVar2 = (void *)plVar1[7];
    pvVar4 = (void *)_CFDataGetBytePtr(param_3);
    memcpy(pvVar2,pvVar4,sVar3);
    local_38 = 0;
    local_30 = 0;
    (**(code **)(*plVar1 + 0x10))(plVar1,sVar3,&local_38,&local_30);
    if ((local_38 != 0) && (lVar5 = local_30, lVar6 = local_38, local_30 != 0)) return;
  }
  lVar5 = 0;
  lVar6 = 0;
  _CFDataCreate(0,lVar6,lVar5);
  return;
}

void OSImpl::onPortInvalidated(__CFMessagePort*, void*) {
long lVar1;
  unsigned long long *puVar2;
  unsigned long long *puVar3;
  
  // std code
  if (0 != (unsigned long long *)0x0) {
    puVar2 = &0;
    puVar3 = 0;
    do {
      if ((__CFMessagePort *)puVar3[4] >= param_1) {
        puVar2 = puVar3;
      }
      puVar3 = (unsigned long long *)puVar3[(__CFMessagePort *)puVar3[4] < param_1];
    } while (puVar3 != (unsigned long long *)0x0);
    if (((((unsigned long long **)puVar2 != &0) && ((__CFMessagePort *)puVar2[4] <= param_1)) &&
        (puVar2[5] != 0)) && (lVar1 = *(long *)(puVar2[5] + 0x28), lVar1 != 0)) {
      *(unsigned char *)(lVar1 + 0x60) = 1;
    }
  }
  // std code
  return;
}

void OSImpl::receiveLoop() {
int iVar1;
  int iVar2;
  pthread_t p_Var3;
  unsigned long long uVar4;
  unsigned long long uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  bool bVar8;
  
  void *local_30;
  sched_param local_28;
  int local_1c;
  
  // std code
  ni::this_thread::set_name(local_40);
  if (((byte)local_40[0] & 1) != 0) {
    delete(local_30);
  }
  p_Var3 = _pthread_self();
  iVar1 = _pthread_getschedparam(p_Var3,&local_1c,&local_28);
  if (iVar1 == 0) {
    local_28.sched_priority = 0x2b;
    p_Var3 = _pthread_self();
    _pthread_setschedparam(p_Var3,local_1c,&local_28);
  }
  uVar4 = _CFMessagePortCreateRunLoopSource(0,*(unsigned long long *)this,0);
  uVar5 = _CFRunLoopGetCurrent();
  *(unsigned long long *)(this + 8) = uVar5;
  _CFRunLoopAddSource(uVar5,uVar4,*(unsigned long long *)PTR__kCFRunLoopCommonModes_101ab4680);
  _CFRelease(uVar4);
  LOCK();
  *(unsigned int *)(this + 0x30) = 1;
  UNLOCK();
  puVar6 = (unsigned int *)new char[4];
  *puVar6 = *(unsigned int *)(this + 0x30);
  puVar7 = (unsigned int *)
           // boost code
  if (puVar7 != puVar6) {
    // boost code
              (&NHL2::(anonymous_namespace)::s_bInIPCReceiveThread,
               // boost code
               NHL2::(anonymous_namespace)::s_bInIPCReceiveThread,puVar6,true);
  }
  iVar1 = *(int *)(this + 0x20);
  if (-1 < iVar1) {
    LOCK();
    iVar2 = *(int *)(this + 0x20);
    bVar8 = iVar1 == iVar2;
    if (bVar8) {
      *(int *)(this + 0x20) = iVar1 + -1;
      iVar2 = iVar1;
    }
    UNLOCK();
    while (!bVar8) {
      if (iVar2 < 0) return;
      LOCK();
      iVar1 = *(int *)(this + 0x20);
      bVar8 = iVar2 == iVar1;
      if (bVar8) {
        *(int *)(this + 0x20) = iVar2 + -1;
        iVar1 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar1;
    }
    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(this + 0x18));
  }
  _CFRunLoopRun();
  return;
}

void OSImpl::startReceiveLoop() {
char *pcVar1;
  long *plVar2;
  int iVar3;
  dispatch_time_t timeout;
  long lVar4;
  unsigned long uVar5;
  unsigned long uVar6;
  unsigned long uVar7;
  __bind *p_Var8;
  thread *this_00;
  char *pcVar9;
  __bind *p_Stack_68;
  unsigned char *puStack_60;
  code *local_50;
  unsigned long long local_48;
  OSImpl *local_40;
  unsigned long long local_38;
  
  if (*(int *)(this + 0x30) == 0) {
    LOCK();
    *(unsigned int *)(this + 0x30) = 1;
    UNLOCK();
    local_50 = receiveLoop;
    local_48 = 0;
    this_00 = (thread *)&local_38;
    p_Var8 = (__bind *)&local_50;
    puStack_60 = (unsigned char *)0x100445716;
    local_40 = this;
    // std code
    thread<// std code
              (this_00,p_Var8);
    if (*(long *)(this + 0x10) != 0) {
      puStack_60 = (unsigned char *)0x10044586f;
      // std code
      plVar2 = *(long **)(this_00 + 0x70);
      p_Stack_68 = p_Var8;
      if (plVar2 != (long *)0x0) {
        puStack_60 = &stack0xfffffffffffffff8;
        (**(code **)(*plVar2 + 0x30))(plVar2,&p_Stack_68);
        return;
      }
      puStack_60 = &stack0xfffffffffffffff8;
                    /* WARNING: Subroutine does not return */
      // std code
    }
    *(unsigned long long *)(this + 0x10) = local_38;
    local_38 = 0;
    puStack_60 = (unsigned char *)0x10044573a;
    // std code
    LOCK();
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    UNLOCK();
    puStack_60 = (unsigned char *)0x100445751;
    timeout = _dispatch_time(0,5000000000);
    puStack_60 = (unsigned char *)0x10044575d;
    lVar4 = _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(this + 0x18),timeout);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(this + 0x20) = *(int *)(this + 0x20) + -1;
      UNLOCK();
      if (Logging::detail::__reportLevelAsUInt < 2) {
        uVar5 = 0;
        pcVar9 = Logging::allowedCategories;
        if (0 == 0) {
          uVar5 = 0;
        }
        else {
          do {
            uVar6 = uVar5 >> 1;
            puStack_60 = (unsigned char *)0x1004457c6;
            iVar3 = // std code
            uVar7 = uVar6;
            if (iVar3 < 0) {
              uVar7 = ~uVar6 + uVar5;
              pcVar9 = pcVar9 + uVar6 * 0x18 + 0x18;
            }
            uVar5 = uVar7;
          } while (uVar7 != 0);
          pcVar1 = Logging::allowedCategories + 0 * 0x18;
          uVar5 = 0;
          if (pcVar9 != pcVar1) {
            puStack_60 = (unsigned char *)0x100445801;
            iVar3 = // std code
            uVar5 = 0;
            if (0 < iVar3) {
              pcVar9 = pcVar1;
            }
          }
        }
        if (pcVar9 != Logging::allowedCategories + uVar5 * 0x18) {
          lVar4 = *(long *)(this + 0x28);
          if ((*(byte *)(lVar4 + 8) & 1) == 0) {
            lVar4 = lVar4 + 9;
          }
          else {
            lVar4 = *(long *)(lVar4 + 0x18);
          }
          puStack_60 = (unsigned char *)0x100445865;
          Logging::detail::__trace__msg
                    (1,"%s: Could not start receive thread for port %s\n","IPC",lVar4);
        }
      }
    }
  }
  return;
}
}
