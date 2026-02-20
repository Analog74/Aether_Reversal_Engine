#include <ni/controller_editor/allocator_char___.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::basic_streambuf<std {

void allocator<char> >::~basic_streambuf() {
void *pvVar1;
  
  *(void ***)this = &PTR__basic_streambuf_101b1fb90;
  pvVar1 = *(void **)(this + 0x48);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar1;
    delete(pvVar1);
  }
  // std code
  delete(this);
  return;
}
}
