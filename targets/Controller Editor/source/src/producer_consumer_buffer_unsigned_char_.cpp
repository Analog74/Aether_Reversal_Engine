#include <ni/controller_editor/producer_consumer_buffer_unsigned_char_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace Concurrency::streams {

void producer_consumer_buffer<unsigned char>::~producer_consumer_buffer() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(void ***)this = &PTR__streambuf_101b0cd40;
  plVar3 = *(long **)(this + 0x10);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
    }
  }
  delete(this);
  return;
}
}
