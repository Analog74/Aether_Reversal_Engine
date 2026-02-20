#include <ni/controller_editor/basic_ostream_unsigned_char_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace Concurrency::streams {

void basic_ostream<unsigned char>::_verify_and_throw(char const*) const {
long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  char cVar7;
  logic_error *plVar8;
  runtime_error *this_00;
  unsigned long long local_40;
  long local_38;
  unsigned char local_30 [8];
  
  lVar2 = *(long *)this;
  if (lVar2 == 0) {
    plVar8 = (logic_error *)___cxa_allocate_exception(0x10);
    // std code
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(plVar8,PTR_typeinfo_101ab42f0,PTR__logic_error_101ab40a0);
  }
  plVar3 = *(long **)(this + 8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  plVar4 = *(long **)(lVar2 + 8);
  plVar5 = *(long **)(lVar2 + 0x10);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar5[1] = plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
    }
  }
  if (plVar4 == (long *)0x0) {
    plVar8 = (logic_error *)___cxa_allocate_exception(0x10);
    // std code
    *(void **)plVar8 = (char*)PTR_vtable_101ab45e8 + 0x10;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(plVar8,PTR_typeinfo_101ab4318,PTR__invalid_argument_101ab40c8);
  }
  (**(code **)(*plVar4 + 0x108))(&local_38,plVar4);
  local_40 = 0;
  // std code
  // std code
  if (local_38 != 0) {
    (**(code **)(*plVar4 + 0x108))(local_30,plVar4);
    // std code
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  cVar7 = (**(code **)(*plVar4 + 0x18))(plVar4);
  if (cVar7 != '\0') {
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        // std code
      }
    }
    return;
  }
  this_00 = (runtime_error *)___cxa_allocate_exception(0x10);
  // std code
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this_00,PTR_typeinfo_101ab4310,PTR__runtime_error_101ab40c0);
}
}
