#include <ni/controller_editor/ControllerUpdateThread.hpp>
namespace NI::NHL2 {

void ControllerUpdateThread::invalidateDisplays(unsigned int) {
LOCK();
  *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | -(uint)(param_1 == 0) | param_1;
  UNLOCK();
  return;
}

void ControllerUpdateThread::invalidateLEDs() {
unsigned int uVar1;
  
  LOCK();
  uVar1 = *(unsigned int *)(this + 0x2c);
  *(unsigned int *)(this + 0x2c) = 1;
  UNLOCK();
  return uVar1;
}

void ControllerUpdateThread::onControllerAvailable(bool param_1) {
}

void ControllerUpdateThread::onThreadDoIdleTasks() {
return;
}

void ControllerUpdateThread::performPendingUpdates() {
int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((((byte)this[0x38] & 1) != 0) &&
     (((*(int *)(this + 0x2c) != 0 || (*(int *)(this + 0x30) != 0)) &&
      (iVar2 = *(int *)(this + 0x20), -1 < iVar2)))) {
    LOCK();
    iVar1 = *(int *)(this + 0x20);
    bVar3 = iVar2 == iVar1;
    if (bVar3) {
      *(int *)(this + 0x20) = iVar2 + -1;
      iVar1 = iVar2;
    }
    UNLOCK();
    while( true ) {
      if (bVar3) {
        _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(this + 0x18));
        return;
      }
      if (iVar1 < 0) break;
      LOCK();
      iVar2 = *(int *)(this + 0x20);
      bVar3 = iVar1 == iVar2;
      if (bVar3) {
        *(int *)(this + 0x20) = iVar1 + -1;
        iVar2 = iVar1;
      }
      UNLOCK();
      iVar1 = iVar2;
    }
  }
  return;
}

void ControllerUpdateThread::runLoop() {
uint uVar1;
  int iVar2;
  long *plVar3;
  long local_38;
  byte local_30;
  char local_2f [16];
  void2 uStack_1f;
  void5 uStack_1d;
  
  local_30 = 0x22;
  builtin_strncpy(local_2f,"ControllerUpdate",0x10);
  uStack_1f = 0x72;
  ni::this_thread::set_name(&local_30);
  if ((local_30 & 1) != 0) {
    delete((void *)CONCAT53(uStack_1d,CONCAT21(uStack_1f,local_2f[0xf])));
  }
  (**(code **)(*(long *)this + 0x20))(this);
  do {
    LOCK();
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    UNLOCK();
    _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(this + 0x18),0xffffffffffffffff);
    if (((byte)this[0x28] & 1) != 0) {
      return;
    }
    LOCK();
    uVar1 = *(uint *)(this + 0x34);
    *(uint *)(this + 0x34) = 0;
    UNLOCK();
    while (uVar1 != 0) {
      local_38 = (unsigned long)uVar1 * 1000000;
      // std code
      LOCK();
      uVar1 = *(uint *)(this + 0x34);
      *(uint *)(this + 0x34) = 0;
      UNLOCK();
    }
    LOCK();
    iVar2 = *(int *)(this + 0x2c);
    *(int *)(this + 0x2c) = 0;
    UNLOCK();
    if (iVar2 != 0) {
      plVar3 = (long *)(**(code **)(**(long **)(this + 8) + 0x10))();
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    LOCK();
    iVar2 = *(int *)(this + 0x30);
    *(int *)(this + 0x30) = 0;
    UNLOCK();
    if (iVar2 != 0) {
      (**(code **)(*(long *)this + 0x30))(this);
    }
    (**(code **)(*(long *)this + 0x28))(this);
  } while (((byte)this[0x28] & 1) == 0);
  return;
}

ControllerUpdateThread::~ControllerUpdateThread() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
