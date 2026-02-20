#include <ni/controller_editor/thread_info_base.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::detail {

void thread_info_base::capture_current_exception() {
unsigned long long *puVar1;
  exception_ptr local_40 [8];
  exception_ptr local_38 [8];
  exception_ptr local_30 [8];
  
  if (*(int *)(this + 0x50) == 0) {
    *(unsigned int *)(this + 0x50) = 1;
    // std code
    // std code
    // std code
  }
  else if (*(int *)(this + 0x50) == 1) {
    *(unsigned int *)(this + 0x50) = 2;
    // std code
    // std code
    puVar1 = (unsigned long long *)___cxa_allocate_exception(0x10);
    *puVar1 = &PTR__multiple_exceptions_101b2b080;
    // std code
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar1,&multiple_exceptions::typeinfo,multiple_exceptions::~multiple_exceptions);
  }
  return;
}

thread_info_base::~thread_info_base() {
if (*(void **)this != (void *)0x0) {
    _free(*(void **)this);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    _free(*(void **)(this + 8));
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    _free(*(void **)(this + 0x10));
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    _free(*(void **)(this + 0x18));
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    _free(*(void **)(this + 0x20));
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    _free(*(void **)(this + 0x28));
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    _free(*(void **)(this + 0x30));
  }
  if (*(void **)(this + 0x38) != (void *)0x0) {
    _free(*(void **)(this + 0x38));
  }
  if (*(void **)(this + 0x40) != (void *)0x0) {
    _free(*(void **)(this + 0x40));
  }
  if (*(void **)(this + 0x48) != (void *)0x0) {
    _free(*(void **)(this + 0x48));
  }
  // std code
  return;
}
}
