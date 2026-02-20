#include <ni/controller_editor/_Task_impl_base.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx::details {

void _Task_impl_base::_Wait() {
long *plVar1;
  code *pcVar2;
  _Task_impl_base *local_38;
  char local_30;
  
  if (this[0xc] == (_Task_impl_base)0x0) {
    // std code
    if (this[0xe8] == (_Task_impl_base)0x0) {
      do {
        // std code
      } while (this[0xe8] == (_Task_impl_base)0x0);
    }
    // std code
    if (this[0xd] == (_Task_impl_base)0x0) return;
    local_30 = '\x01';
    local_38 = this + 0x78;
    // std code
    if (this[0xe8] == (_Task_impl_base)0x0) {
      do {
        // std code
      } while (this[0xe8] == (_Task_impl_base)0x0);
      return;
    }
  }
  else {
    local_38 = this + 0x78;
    local_30 = '\x01';
    // std code
    if (this[0xe8] == (_Task_impl_base)0x0) {
      do {
        // std code
      } while (this[0xe8] == (_Task_impl_base)0x0);
      if (local_30 == '\0') return;
    }
  }
  // std code
  plVar1 = *(long **)(this + 0x10);
  if (plVar1 == (long *)0x0) {
    return (*(int *)(this + 8) == 4) + '\x01';
  }
  if (*plVar1 == 0) {
    LOCK();
    *plVar1 = 1;
    UNLOCK();
  }
  // std code
  // std code
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

_Task_impl_base::~_Task_impl_base() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
