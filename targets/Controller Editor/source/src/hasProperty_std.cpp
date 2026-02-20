#include <ni/controller_editor/hasProperty_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::uret::Event {

void hasProperty(std::string const&) const {
code *pcVar1;
  long lVar2;
  unsigned long uVar3;
  void *local_18;
  
  if ((((int)*(uint *)this >> 0x1f ^ *(uint *)this) < 6) ||
     (*(__tree<// std code
        **)(this + 8) ==
      (__tree<// std code
       *)0x0)) {
    local_18 = (char*)PTR_vtable_101ab4528 + 0x10;
    // boost code
  }
  else {
    lVar2 = // std code
            __tree<// std code
            ::find<// std code
                                  **)(this + 8),(string *)&propertyKey);
    if ((5 < ((int)*(uint *)(lVar2 + 0x38) >> 0x1f ^ *(uint *)(lVar2 + 0x38))) &&
       (*(__tree<// std code
          **)(lVar2 + 0x40) !=
        (__tree<// std code
         *)0x0)) {
      uVar3 = // std code
              __tree<// std code
              ::__count_unique<// std code
                        (*(__tree<// std code
                           **)(lVar2 + 0x40),param_1);
      return uVar3 != 0;
    }
    local_18 = (char*)PTR_vtable_101ab4528 + 0x10;
    // boost code
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
