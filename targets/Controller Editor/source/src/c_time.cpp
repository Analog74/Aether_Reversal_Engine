#include <ni/controller_editor/c_time.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::date_time {

void c_time::gmtime(long const*, tm*) {
code *pcVar1;
  tm *ptVar2;
  runtime_error local_20 [16];
  
  ptVar2 = _gmtime_r(param_1,param_2);
  if (ptVar2 != (tm *)0x0) {
    return;
  }
  // std code
  throw_exception<// std code
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
