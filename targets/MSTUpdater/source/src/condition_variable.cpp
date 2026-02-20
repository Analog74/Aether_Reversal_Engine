#include <ni/controller_editor/condition_variable.hpp>
namespace boost {

condition_variable::condition_variable() {
int iVar1;
  unsigned long long uVar2;
  _Unwind_Exception *exception_object;
  void *local_58 [2];
  int local_48;
  unsigned long long local_40;
  long local_38;
  char local_30;
  char cStack_2f;
  char cStack_2e;
  char cStack_2d;
  char cStack_2c;
  char cStack_2b;
  char cStack_2a;
  char cStack_29;
  char local_28;
  char cStack_27;
  char cStack_26;
  char cStack_25;
  char cStack_24;
  char cStack_23;
  char cStack_22;
  char cStack_21;
  
  iVar1 = _pthread_mutex_init((pthread_mutex_t *)this,(pthread_mutexattr_t *)0x0);
  if (iVar1 == 0) {
    iVar1 = _pthread_cond_init((pthread_cond_t *)(this + 0x40),(pthread_condattr_t *)0x0);
    if (iVar1 == 0) {
      
    }
  }
  else {
    uVar2 = system::generic_category();
    // std code
              ((runtime_error *)local_58,
               "// boost code
              );
    this = (condition_variable *)&stack0xffffffffffffffc8;
    local_28 = '\0';
    cStack_27 = '\0';
    cStack_26 = '\0';
    cStack_25 = '\0';
    cStack_24 = '\0';
    cStack_23 = '\0';
    cStack_22 = '\0';
    cStack_21 = '\0';
    local_30 = '\0';
    cStack_2f = '\0';
    cStack_2e = '\0';
    cStack_2d = '\0';
    cStack_2c = '\0';
    cStack_2b = '\0';
    cStack_2a = '\0';
    cStack_29 = '\0';
    local_38 = 0;
    local_58[0] = PTR_vtable_100227248 + 0x10;
    local_48 = iVar1;
    local_40 = uVar2;
    throw_exception<// boost code
  }
  _pthread_mutex_destroy((pthread_mutex_t *)this);
  uVar2 = system::generic_category();
  // std code
            ((runtime_error *)local_58,
             "// boost code
            );
  local_28 = '\0';
  cStack_27 = '\0';
  cStack_26 = '\0';
  cStack_25 = '\0';
  cStack_24 = '\0';
  cStack_23 = '\0';
  cStack_22 = '\0';
  cStack_21 = '\0';
  local_30 = '\0';
  cStack_2f = '\0';
  cStack_2e = '\0';
  cStack_2d = '\0';
  cStack_2c = '\0';
  cStack_2b = '\0';
  cStack_2a = '\0';
  cStack_29 = '\0';
  local_38 = 0;
  local_58[0] = PTR_vtable_100227248 + 0x10;
  local_48 = iVar1;
  local_40 = uVar2;
  throw_exception<// boost code
  local_58[0] = PTR_vtable_100227270 + 0x10;
  // std code
  // std code
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(exception_object);
}
}
