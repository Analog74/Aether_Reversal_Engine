#include <ni/controller_editor/EndOfUpdateRequest.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::Display::Bulk {

EndOfUpdateRequest::EndOfUpdateRequest(unsigned char) {
*(void2 *)this = 0x40;
  this[2] = (EndOfUpdateRequest)param_1;
  this[3] = (EndOfUpdateRequest)0x0;
  
}
}
