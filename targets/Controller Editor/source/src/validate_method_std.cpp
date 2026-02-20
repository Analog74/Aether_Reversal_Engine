#include <ni/controller_editor/validate_method_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::details {

void validate_method(1 param_1, std::string const& {
unsigned long uVar1;
  unsigned long uVar2;
  string *psVar3;
  
  if (((byte)*param_1 & 1) == 0) {
    psVar3 = param_1 + 1;
    uVar1 = (unsigned long)((byte)*param_1 >> 1);
  }
  else {
    uVar1 = *(unsigned long *)(param_1 + 8);
    psVar3 = *(string **)(param_1 + 0x10);
  }
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (((char)psVar3[uVar2] < '\0') || ((&valid_chars)[(byte)psVar3[uVar2]] == '\0')) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return 1;
}
}
