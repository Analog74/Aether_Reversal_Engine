#include <ni/controller_editor/stringbuf__char_.hpp>
namespace boost::detail::basic_unlockedbuf<std {

void stringbuf, char>::~basic_unlockedbuf() {
*(void **)this = PTR_vtable_1009cc280 + 0x10;
  if (((byte)this[0x40] & 1) != 0) {
    delete(*(void **)(this + 0x50));
  }
  // std code
  delete(this);
  return;
}
}
