#include <ni/controller_editor/thread.hpp>
namespace boost {

void thread::do_try_join_until(timespec const&) {
byte bVar1;
  pthread_t p_Var2;
  pthread_t p_Var3;
  unsigned long long uVar4;
  _Unwind_Exception *exception_object;
  void *local_58 [2];
  unsigned int local_48;
  unsigned long long local_40;
  unsigned long long local_38;
  unsigned long long local_30;
  unsigned long long local_28;
  
  p_Var2 = _pthread_self();
  p_Var3 = (pthread_t)native_handle(this);
  if (p_Var2 != p_Var3) {
    bVar1 = do_try_join_until_noexcept(this,param_1,(bool *)local_58);
    return bVar1 & local_58[0]._0_1_ != (runtime_error)0x0;
  }
  uVar4 = system::generic_category();
  // std code
  ;
  local_48 = 0xb;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_58[0] = PTR_vtable_100227248 + 0x10;
  local_40 = uVar4;
  throw_exception<// boost code
  local_58[0] = PTR_vtable_100227270 + 0x10;
  // std code
  // std code
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(exception_object);
}
}
