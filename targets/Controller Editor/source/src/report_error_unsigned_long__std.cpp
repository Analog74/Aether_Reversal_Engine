#include <ni/controller_editor/report_error_unsigned_long__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::client::details::request_context {

void report_error(1 param_1, unsigned long, std::string const& {
void **local_58;
  unsigned int local_50;
  unsigned long long local_48;
  
  void *local_30;
  
  local_58 = &PTR__http_exception_101b20360;
  local_48 = // std code
  local_50 = (unsigned int)param_1;
  // std code
  report_exception<web::http::http_exception>(this,(http_exception *)&local_58);
  local_58 = &PTR__http_exception_101b20360;
  if (((byte)local_40[0] & 1) != 0) {
    delete(local_30);
  }
  // std code
  return;
}
}
