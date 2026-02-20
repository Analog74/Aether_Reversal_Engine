#include <ni/controller_editor/SingletonWorker.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace (anonymous namespace) {

void SingletonWorker::getInstance() {
long lVar1;
  int iVar2;
  SingletonWorker *pSVar3;
  unsigned long long *puVar4;
  
  if (getInstanceLock()::s_instanceLock == '\0') {
    iVar2 = ___cxa_guard_acquire(&getInstanceLock()::s_instanceLock);
    if (iVar2 != 0) {
      ___cxa_atexit(PTR__mutex_101ab4108,&getInstanceLock()::s_instanceLock,0x100000000);
      ___cxa_guard_release(&getInstanceLock()::s_instanceLock);
    }
  }
  // std code
  if (getInstancePtr()::instance == '\0') {
    iVar2 = ___cxa_guard_acquire(&getInstancePtr()::instance);
    if (iVar2 != 0) {
      ___cxa_atexit(// std code
                    unique_ptr<(anonymous_namespace)::SingletonWorker,// std code
                    ::~unique_ptr,&getInstancePtr()::instance,0x100000000);
      ___cxa_guard_release(&getInstancePtr()::instance);
    }
  }
  if (getInstancePtr()::instance == 0) {
    pSVar3 = (SingletonWorker *)new char[0x1d8];
    *pSVar3 = (SingletonWorker)0x1;
    puVar4 = (unsigned long long *)new char[0xe0];
    *puVar4 = &PTR___CancellationTokenState_101b218a0;
    puVar4[1] = 1;
    puVar4[2] = 0;
    puVar4[3] = 0x32aaaba7;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0x3cb0b1bb;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    *(unsigned long long *)((long)puVar4 + 0x79) = 0;
    *(unsigned long long *)((long)puVar4 + 0x81) = 0;
    puVar4[0x12] = 0x32aaaba7;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    *(unsigned long long **)(pSVar3 + 8) = puVar4;
    *(unsigned long long *)(pSVar3 + 0x10) = 0;
    *(unsigned long long *)(pSVar3 + 0x18) = 0;
    *(unsigned long long *)(pSVar3 + 0x20) = 0x32aaaba7;
    *(unsigned long long *)(pSVar3 + 0xb8) = 0;
    *(unsigned long long *)(pSVar3 + 0xc0) = 0;
    *(unsigned long long *)(pSVar3 + 0x28) = 0;
    *(unsigned long long *)(pSVar3 + 0x30) = 0;
    *(unsigned long long *)(pSVar3 + 0x38) = 0;
    *(unsigned long long *)(pSVar3 + 0x40) = 0;
    *(unsigned long long *)(pSVar3 + 0x48) = 0;
    *(unsigned long long *)(pSVar3 + 0x50) = 0;
    *(unsigned long long *)(pSVar3 + 0x58) = 0;
    *(unsigned long long *)(pSVar3 + 0x60) = 0;
    *(unsigned long long *)(pSVar3 + 0x68) = 0;
    *(unsigned long long *)(pSVar3 + 0x70) = 0;
    *(unsigned long long *)(pSVar3 + 0x78) = 0;
    *(unsigned long long *)(pSVar3 + 0x80) = 0;
    *(unsigned long long *)(pSVar3 + 0x88) = 0;
    *(unsigned long long *)(pSVar3 + 0x90) = 0;
    *(unsigned long long *)(pSVar3 + 0x98) = 0;
    *(unsigned long long *)(pSVar3 + 0xa0) = 0;
    *(unsigned long long *)(pSVar3 + 0xa8) = 0;
    *(SingletonWorker **)(pSVar3 + 0xb0) = pSVar3 + 0xb8;
    *(unsigned long long *)(pSVar3 + 0xd0) = 0;
    *(unsigned long long *)(pSVar3 + 0xd8) = 0;
    *(SingletonWorker **)(pSVar3 + 200) = pSVar3 + 0xd0;
    *(unsigned long long *)(pSVar3 + 0xe0) = 0x32aaaba7;
    *(unsigned long long *)(pSVar3 + 0xe8) = 0;
    *(unsigned long long *)(pSVar3 + 0xf0) = 0;
    *(unsigned long long *)(pSVar3 + 0xf8) = 0;
    *(unsigned long long *)(pSVar3 + 0x100) = 0;
    *(unsigned long long *)(pSVar3 + 0x108) = 0;
    *(unsigned long long *)(pSVar3 + 0x110) = 0;
    *(unsigned long long *)(pSVar3 + 0x118) = 0;
    *(unsigned long long *)(pSVar3 + 0x120) = 0x3cb0b1bb;
    *(unsigned long long *)(pSVar3 + 0x138) = 0;
    *(unsigned long long *)(pSVar3 + 0x140) = 0;
    *(unsigned long long *)(pSVar3 + 0x128) = 0;
    *(unsigned long long *)(pSVar3 + 0x130) = 0;
    *(unsigned long long *)(pSVar3 + 0x148) = 0;
    *(SingletonWorker **)(pSVar3 + 0x150) = pSVar3 + 0x20;
    *(unsigned long long *)(pSVar3 + 0x158) = 0;
    pSVar3[0x160] = (SingletonWorker)0x0;
    *(unsigned long long *)(pSVar3 + 0x168) = 0;
    *(unsigned int *)(pSVar3 + 0x170) = 0;
    *(void2 *)(pSVar3 + 0x174) = 1;
    *(SingletonWorker **)(pSVar3 + 0x178) = pSVar3;
    pSVar3[0x180] = (SingletonWorker)0x0;
    *(unsigned long long *)(pSVar3 + 0x1a8) = 0;
    *(unsigned long long *)(pSVar3 + 0x1b0) = 0;
    *(unsigned long long *)(pSVar3 + 0x198) = 0;
    *(unsigned long long *)(pSVar3 + 0x1a0) = 0;
    *(unsigned long long *)(pSVar3 + 0x188) = 0;
    *(unsigned long long *)(pSVar3 + 400) = 0;
    *(void2 *)(pSVar3 + 0x1c0) = 0;
    *(void2 *)(pSVar3 + 0x1c8) = 0x101;
    pSVar3[0x1ca] = (SingletonWorker)0x1;
    *(unsigned long long *)(pSVar3 + 0x1d0) = 0;
    // std code
    unique_ptr<(anonymous_namespace)::SingletonWorker,// std code
    ::reset((unique_ptr<(anonymous_namespace)::SingletonWorker,// std code
             *)&getInstancePtr()::instance,pSVar3);
  }
  lVar1 = getInstancePtr()::instance;
  // std code
  return lVar1;
}
}
