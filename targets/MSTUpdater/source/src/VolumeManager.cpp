#include <ni/controller_editor/VolumeManager.hpp>
namespace NI::GP {

void VolumeManager::rescan() {
bool bVar1;
  int iVar2;
  unsigned int uVar3;
  pthread_t p_Var4;
  
  p_Var4 = _pthread_self();
  if (p_Var4 == 0) {
    0 = 0 + 1;
  }
  else {
    LOCK();
    iVar2 = 0 + 1;
    UNLOCK();
    bVar1 = 0 < 0;
    0 = iVar2;
    if (bVar1) {
      _semaphore_wait(s_csVolInfos);
    }
    0 = _pthread_self();
    0 = 1;
  }
  uVar3 = rescanInternal();
  if (0 < 2) {
    0 = (pthread_t)0x0;
    0 = 0;
    LOCK();
    iVar2 = 0 + -1;
    UNLOCK();
    bVar1 = 1 < 0;
    0 = iVar2;
    if (bVar1) {
      _semaphore_signal(s_csVolInfos);
    }
  }
  else {
    0 = 0 - 1;
  }
  return uVar3;
}
}
