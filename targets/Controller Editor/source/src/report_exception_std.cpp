#include <ni/controller_editor/report_exception_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::client::details::asio_context {

void report_exception(std::exception_ptr) {
long lVar1;
  base_implementation_type local_60 [24];
  unsigned long long local_48;
  unsigned long long uStack_40;
  unsigned long long local_38;
  exception_ptr local_28 [8];
  
  lVar1 = *(long *)(this + 0x1d0);
  // std code
  *(void2 *)(lVar1 + 0xb9) = 0x100;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  // boost code
  // boost code
            (local_60,(error_code *)(*(long *)(lVar1 + 0x40) + 0x28));
  // std code
  // std code
  request_context::report_exception((request_context *)this,local_28);
  // std code
  return;
}
}
