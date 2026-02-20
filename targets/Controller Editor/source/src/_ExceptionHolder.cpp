#include <ni/controller_editor/_ExceptionHolder.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx::details {

_ExceptionHolder::~_ExceptionHolder() {
void *pvVar1;
  unsigned long long uVar2;
  
  if (*(long *)this != 0) {
    pvVar1 = *(void **)(this + 0x18);
    if (pvVar1 != (void *)0x0) {
      *(void **)(this + 0x20) = pvVar1;
      delete(pvVar1);
    }
    // std code
    return;
  }
  _raise(5);
  uVar2 = // std code
  _TaskCreationCallstack::~_TaskCreationCallstack((_TaskCreationCallstack *)(this + 0x10));
  // std code
                    /* WARNING: Subroutine does not return */
  ___clang_call_terminate(uVar2);
}
}
