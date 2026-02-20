#include <ni/controller_editor/scan_string_int__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace int utility::conversions::details {

void scan_string<int>(std::string const&) {
long lVar1;
  long *plVar2;
  locale *plVar3;
  bad_cast *this;
  uint in_EDX;
  void *local_150 [2];
  void *local_140 [2];
  byte abStack_130 [8];
  long alStack_128 [5];
  byte local_100;
  void *local_f0;
  void *local_d8 [19];
  locale local_40 [8];
  locale local_38 [8];
  locale local_30 [12];
  int local_24;
  
  // std code
  lVar1 = *(long *)((long)local_150[0] + -0x18);
  plVar3 = (locale *)// std code
  // std code
  // std code
  // std code
  plVar2 = *(long **)((long)alStack_128 + lVar1);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar3);
    // std code
    // std code
    // std code
  }
  // std code
  // std code
  if ((abStack_130[*(long *)((long)local_150[0] + -0x18)] & 1) == 0) {
    local_150[0] = (char*)PTR_vtable_101ab45b8 + 0x18;
    local_d8[0] = (char*)PTR_vtable_101ab45b8 + 0x40;
    local_140[0] = (char*)PTR_vtable_101ab4590 + 0x10;
    if ((local_100 & 1) != 0) {
      delete(local_f0);
    }
    // std code
    // std code
    // std code
    return local_24;
  }
  this = (bad_cast *)___cxa_allocate_exception(8);
  // std code
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_101ab4328,PTR__bad_cast_101ab4130);
}
}
