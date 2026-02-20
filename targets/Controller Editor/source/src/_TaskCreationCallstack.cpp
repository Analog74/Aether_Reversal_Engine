#include <ni/controller_editor/_TaskCreationCallstack.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx::details {

_TaskCreationCallstack::~_TaskCreationCallstack() {
void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    delete(pvVar1);
    return;
  }
  return;
}
}
