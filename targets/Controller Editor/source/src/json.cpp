#include <ni/controller_editor/json.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::uret::writeJsonToFile(boost::filesystem::path const&, web {

void json::value const&) {
logic_error *this;
  long extraout_RDX;
  void **local_260;
  filebuf local_258 [408];
  void **local_c0 [19];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101ab4610;
  // boost code
  if (extraout_RDX == 0) {
    this = (logic_error *)___cxa_allocate_exception(0x10);
    // std code
    // std code
    *(void **)this = (char*)PTR_vtable_101ab45e8 + 0x10;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(this,PTR_typeinfo_101ab4318,PTR__invalid_argument_101ab40c8);
  }
  // boost code
            ((basic_ofstream<char,// std code
  web::json::value::serialize(param_2,(ostream *)&local_260);
  local_260 = &PTR__ofstream_101b15ce8;
  local_c0[0] = &PTR__ofstream_101b15d10;
  // std code
  // std code
  // std code
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
