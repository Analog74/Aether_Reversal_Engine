#include <ni/controller_editor/_http_request_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::details::_http_request {

void _http_request(std::string) [clone .cold.1] {
long *plVar1;
  
  *(unsigned long long *)this = 0;
  plVar1 = (long *)*param_2;
  *param_2 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if ((*param_4 & 1) != 0) {
    delete(*(void **)(param_3 + 0xa8));
  }
  if (*(long *)(param_3 + 0x90) != 0) {
    // std code
    return;
  }
  return;
}
}
