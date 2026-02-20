#include <ni/controller_editor/enter_once_region_boost.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::thread_detail {

void enter_once_region(1 param_1, boost::once_flag& {
int iVar1;
  int iVar2;
  int iVar3;
  unsigned long unaff_R15;
  bool bVar4;
  
  if (*(int *)param_1 != 2) {
    do {
      iVar1 = _pthread_mutex_lock((pthread_mutex_t *)&once_mutex);
    } while (iVar1 == 4);
    iVar1 = *(int *)param_1;
    if (iVar1 != 2) {
      LOCK();
      iVar3 = *(int *)param_1;
      bVar4 = iVar3 == 0;
      if (bVar4 param_1) {
      }
      UNLOCK();
      unaff_R15 = 0((int7)(unaff_R15 >> 8),1);
      if (!bVar4) {
        do {
          iVar2 = iVar3;
          if (iVar2 == 2) break;
          do {
            iVar3 = _pthread_cond_wait((pthread_cond_t *)&once_cv,(pthread_mutex_t *)&once_mutex);
          } while (iVar3 == 4);
          LOCK();
          iVar3 = *(int *)param_1;
          bVar4 = iVar3 == 0;
          if (bVar4 param_1) {
          }
          UNLOCK();
        } while (!bVar4);
        unaff_R15 = 0(0x101b8f3,iVar2 != 2);
      }
    }
    do {
      iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)&once_mutex);
    } while (iVar3 == 4);
    if (iVar1 != 2) return;
  }
  unaff_R15 = 0;
  return unaff_R15 & 0xffffff01;
}
}
