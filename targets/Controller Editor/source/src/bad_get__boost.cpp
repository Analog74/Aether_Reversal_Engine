#include <ni/controller_editor/bad_get__boost.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace void boost::throw_exception<boost {

void bad_get>(boost::bad_get const&) {
void *puVar1;
  long *plVar2;
  
  plVar2 = (long *)___cxa_allocate_exception(0x38);
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *(unsigned int *)(plVar2 + 6) = 0xffffffff;
  puVar1 = PTR_vtable_101ab4438;
  *plVar2 = (long)((char*)PTR_vtable_101ab4438 + 0x10);
  plVar2[1] = (long)(puVar1 + 0x40);
  plVar2[2] = (long)(puVar1 + 0x68);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(plVar2,PTR_typeinfo_101ab4220,wrapexcept<// boost code
}
}
