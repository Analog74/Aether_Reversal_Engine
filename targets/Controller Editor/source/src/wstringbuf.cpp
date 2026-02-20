#include <ni/controller_editor/wstringbuf.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

wstringbuf::~wstringbuf() {
*(void **)this = (char*)PTR_vtable_101ab4598 + 0x10;
  if (((byte)this[0x40] & 1) != 0) {
    delete(*(void **)(this + 0x50));
  }
  // std code
  delete(this);
  return;
}
}
