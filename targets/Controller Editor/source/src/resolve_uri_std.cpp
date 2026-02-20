#include <ni/controller_editor/resolve_uri_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::uri {

void resolve_uri(std::string const&) const [clone .cold.3] {
unsigned int in_ECX;
  unsigned long long in_RDX;
  byte *in_RSI;
  unsigned long long *in_R8;
  
  if (((byte)param_1[0x60] & 1) != 0) {
    delete(*(void **)(param_1 + 0x70));
  }
  if (((byte)param_1[0x48] & 1) != 0) {
    delete(*(void **)(param_1 + 0x58));
  }
  if (((byte)param_1[0x30] & 1) != 0) {
    delete(*(void **)(param_1 + 0x40));
  }
  if (((byte)param_1[0x18] & 1) != 0) {
    delete(*(void **)(param_1 + 0x28));
  }
  if ((*in_RSI & 1) != 0) {
    delete(*(void **)(param_1 + 0x10));
  }
  *in_R8 = in_RDX;
  *(unsigned int *)(in_R8 + 1) = in_ECX;
  return;
}
}
