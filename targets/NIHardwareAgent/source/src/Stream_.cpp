#include <ni/controller_editor/Stream_.hpp>
namespace NI::GP::MemoryStreamBase<NI::GP {

void Stream>::~MemoryStreamBase() {
*(void ***)this = &PTR__MemoryStreamBase_1009f2308;
  *(void ***)(this + 0x18) = &PTR__MemoryStorage_1009f1ac8;
  if ((this[0x2c] != (MemoryStreamBase<NI::GP::Stream>)0x0) &&
     (*(void **)(this + 0x30) != (void *)0x0)) {
    delete__(*(void **)(this + 0x30));
  }
  delete(this);
  return;
}
}
