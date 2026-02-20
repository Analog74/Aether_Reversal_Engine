#include <ni/controller_editor/Value_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::Value {

void Value(1 param_1, std::string const& {
*(unsigned int *)(this + 0x10) = 0x100006;
  if (((byte)*param_1 & 1) != 0) {
    CopyString(this,*(char **)(param_1 + 0x10),*(unsigned long *)(param_1 + 8));
    return;
  }
  CopyString(this,(char *)(param_1 + 1),(unsigned long)((byte)*param_1 >> 1));
  return;
}
}
