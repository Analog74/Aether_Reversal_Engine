#include <ni/controller_editor/recursive_mutex.hpp>
namespace boost {

recursive_mutex::recursive_mutex() {
int iVar1;
  int iVar2;
  uint uVar3;
  unsigned long uVar4;
  unsigned long uVar5;
  void *local_70 [2];
  int local_60;
  unsigned long local_58;
  unsigned long long local_50;
  unsigned long long local_48;
  unsigned long long local_40;
  pthread_mutexattr_t local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1002272e0;
  iVar1 = _pthread_mutexattr_init(&local_38);
  if (iVar1 == 0) {
    iVar2 = _pthread_mutexattr_settype(&local_38,2);
    if (iVar2 != 0) goto LAB_100022a2c;
    uVar3 = _pthread_mutex_init((pthread_mutex_t *)this,&local_38);
    uVar4 = (unsigned long)uVar3;
    _pthread_mutexattr_destroy(&local_38);
    if (uVar3 == 0) {
      if (*(long *)PTR____stack_chk_guard_1002272e0 == local_28) {
        
      }
      goto LAB_100022ae0;
    }
  }
  else {
    uVar4 = system::generic_category();
    // std code
              ((runtime_error *)local_70,
               "// boost code
    iVar2 = (int)&local_50;
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    local_70[0] = PTR_vtable_100227248 + 0x10;
    local_60 = iVar1;
    local_58 = uVar4;
    throw_exception<// boost code
LAB_100022a2c:
    _pthread_mutexattr_destroy(&local_38);
    uVar4 = system::generic_category();
    // std code
              ((runtime_error *)local_70,
               "// boost code
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    local_70[0] = PTR_vtable_100227248 + 0x10;
    local_60 = iVar2;
    local_58 = uVar4;
    throw_exception<// boost code
  }
  uVar5 = system::generic_category();
  // std code
            ((runtime_error *)local_70,
             "// boost code
  local_60 = (int)uVar4;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_70[0] = PTR_vtable_100227248 + 0x10;
  local_58 = uVar5;
  throw_exception<// boost code
LAB_100022ae0:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

recursive_mutex::~recursive_mutex() {
_pthread_mutex_destroy((pthread_mutex_t *)this);
  return;
}
}
