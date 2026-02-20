#include <ni/controller_editor/threadpool_impl.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace (anonymous namespace) {

threadpool_impl::threadpool_impl(unsigned long) [clone .cold.1] {
void *pvVar1;
  posix_thread *this_00;
  unsigned long long *in_RDX;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    
  }
  pvVar3 = *(void **)param_1;
  pvVar2 = pvVar1;
  if (pvVar3 != pvVar1) {
    do {
      this_00 = *(posix_thread **)((long)pvVar3 + -8);
      *(unsigned long long *)((long)pvVar3 + -8) = 0;
      pvVar3 = (void *)((long)pvVar3 + -8);
      if (this_00 != (posix_thread *)0x0) {
        // boost code
        delete(this_00);
      }
    } while (pvVar1 != pvVar3);
    pvVar2 = (void *)*in_RDX;
  }
  *(void **)param_1 = pvVar1;
  delete(pvVar2);
  
}

threadpool_impl::~threadpool_impl() {
~threadpool_impl(this);
  delete(this);
  return;
}
}
