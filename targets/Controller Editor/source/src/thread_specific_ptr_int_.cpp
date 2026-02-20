#include <ni/controller_editor/thread_specific_ptr_int_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost {

void thread_specific_ptr<int>::cleanup_caller(void (*)(void*), void*) {
/* WARNING: Could not recover jumptable at 0x000100446b4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)(param_2);
  return;
}

void thread_specific_ptr<int>::default_deleter(int* param_1) {
}

void thread_specific_ptr<int>::~thread_specific_ptr() {
// boost code
            (this,(_func_void__func_void_void_ptr_ptr_void_ptr *)0x0,(_func_void_void_ptr *)0x0,
             (void *)0x0,true);
  return;
}
}
