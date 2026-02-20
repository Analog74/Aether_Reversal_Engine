#include <ni/controller_editor/endpoint.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::ip::detail {

endpoint::endpoint() {
*(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0xc) = 0;
  *(unsigned long long *)(this + 0x14) = 0;
  this[1] = (endpoint)0x2;
  *(void2 *)(this + 2) = 0;
  *(unsigned int *)(this + 4) = 0;
  
}
}
