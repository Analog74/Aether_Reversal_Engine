#include <ni/controller_editor/readJson_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::uret {

void readJson(1 param_1, std::istream& {
runtime_error *this_00;
  int local_38 [2];
  unsigned long long local_30;
  
  local_38[0] = 0;
  local_30 = // std code
  web::json::value::parse((value *)this,param_1,(error_code *)local_38);
  if (local_38[0] == 0) {
    return this;
  }
  this_00 = (runtime_error *)___cxa_allocate_exception(0x10);
  // std code
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this_00,PTR_typeinfo_101ab4310,PTR__runtime_error_101ab40c0);
}
}
