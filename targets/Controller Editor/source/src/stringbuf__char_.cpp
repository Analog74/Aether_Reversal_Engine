#include <ni/controller_editor/stringbuf__char_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::detail::basic_unlockedbuf<std {

void stringbuf, char>::~basic_unlockedbuf() {
*(void **)this = (char*)PTR_vtable_101ab4590 + 0x10;
  if (((byte)this[0x40] & 1) != 0) {
    delete(*(void **)(this + 0x50));
  }
  // std code
  delete(this);
  return;
}
}
