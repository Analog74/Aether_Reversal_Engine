#include <ni/controller_editor/u16string.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

u16string::~u16string() {
if (((byte)*this & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x10));
  return;
}
}
