#include <ni/controller_editor/thread_data_base.hpp>
namespace boost::detail {

thread_data_base::thread_data_base() {
long *plVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  unsigned long long uVar6;
  _Unwind_Exception *exception_object;
  pthread_mutex_t *unaff_R12;
  pthread_mutex_t *ppVar7;
  void *local_a0 [2];
  int local_90;
  unsigned long long local_88;
  unsigned long long local_80;
  unsigned long long local_78;
  unsigned long long local_70;
  void *local_68 [2];
  int local_58;
  unsigned long long local_50;
  long local_48;
  char local_40 [16];
  
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(void ***)this = &PTR__thread_data_base_100231250;
  ppVar7 = (pthread_mutex_t *)(this + 0x30);
  *(unsigned long long *)(this + 0x28) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  iVar5 = _pthread_mutex_init(ppVar7,(pthread_mutexattr_t *)0x0);
  if (iVar5 == 0) {
    unaff_R12 = (pthread_mutex_t *)(this + 0x70);
    condition_variable::condition_variable((condition_variable *)unaff_R12);
    iVar5 = _pthread_mutex_init((pthread_mutex_t *)(this + 0xe0),(pthread_mutexattr_t *)0x0);
    if (iVar5 == 0) {
      condition_variable::condition_variable((condition_variable *)(this + 0x120));
      this[400] = (thread_data_base)0x0;
      this[0x191] = (thread_data_base)0x0;
      this[0x192] = (thread_data_base)0x0;
      *(unsigned long long *)(this + 0x198) = 0;
      *(unsigned long long *)(this + 0x1b0) = 0;
      *(unsigned long long *)(this + 0x1a8) = 0;
      *(thread_data_base **)(this + 0x1a0) = this + 0x1a8;
      *(unsigned long long *)(this + 0x1f0) = 0;
      *(unsigned long long *)(this + 0x1e8) = 0;
      *(unsigned long long *)(this + 0x1e0) = 0;
      *(unsigned long long *)(this + 0x1d8) = 0;
      *(unsigned long long *)(this + 0x1d0) = 0;
      *(unsigned long long *)(this + 0x1c8) = 0;
      *(unsigned long long *)(this + 0x1c0) = 0;
      *(unsigned long long *)(this + 0x1b8) = 0;
      *(void2 *)(this + 0x1f8) = 1;
      
    }
  }
  else {
    uVar6 = system::generic_category();
    // std code
              ((runtime_error *)local_68,"// boost code
    ppVar7 = (pthread_mutex_t *)&local_48;
    local_40[8] = '\0';
    local_40[9] = '\0';
    local_40[10] = '\0';
    local_40[0xb] = '\0';
    local_40[0xc] = '\0';
    local_40[0xd] = '\0';
    local_40[0xe] = '\0';
    local_40[0xf] = '\0';
    local_40[0] = '\0';
    local_40[1] = '\0';
    local_40[2] = '\0';
    local_40[3] = '\0';
    local_40[4] = '\0';
    local_40[5] = '\0';
    local_40[6] = '\0';
    local_40[7] = '\0';
    local_48 = 0;
    local_68[0] = PTR_vtable_100227248 + 0x10;
    local_58 = iVar5;
    local_50 = uVar6;
    throw_exception<// boost code
  }
  uVar6 = system::generic_category();
  // std code
            ((runtime_error *)local_a0,"// boost code
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_a0[0] = PTR_vtable_100227248 + 0x10;
  local_90 = iVar5;
  local_88 = uVar6;
  throw_exception<// boost code
  local_a0[0] = PTR_vtable_100227270 + 0x10;
  // std code
  // std code
  do {
    iVar5 = _pthread_mutex_destroy(unaff_R12);
  } while (iVar5 == 4);
  do {
    iVar5 = _pthread_cond_destroy((pthread_cond_t *)(this + 0xb0));
  } while (iVar5 == 4);
  do {
    iVar5 = _pthread_mutex_destroy(ppVar7);
  } while (iVar5 == 4);
  plVar3 = *(long **)(this + 0x20);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      LOCK();
      piVar2 = (int *)((long)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  plVar3 = *(long **)(this + 0x10);
  if (plVar3 != (long *)0x0) {
    LOCK();
    piVar2 = (int *)((long)plVar3 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar3 + 0x18))();
    }
  }
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(exception_object);
}
}
