#include <ni/controller_editor/MemoryStream.hpp>
namespace NI::GP {

MemoryStream::MemoryStream() {
*(MemoryStream **)(this + 8) = this + 0x18;
  *(unsigned int *)(this + 0x10) = 1;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned int *)(this + 0x28) = 0;
  *(void ***)(this + 0x18) = &PTR__MemoryStorage_1009f1ac8;
  *(void2 *)(this + 0x2c) = 0;
  *(unsigned long long *)(this + 0x50) = 0;
  *(unsigned long long *)(this + 0x30) = 0;
  *(unsigned long long *)(this + 0x38) = 0;
  *(unsigned long long *)(this + 0x3c) = 0;
  *(unsigned long long *)(this + 0x44) = 0;
  *(void ***)this = &PTR__MemoryStream_1009f1b20;
  
}

MemoryStream::~MemoryStream() {
*(void ***)this = &PTR__MemoryStreamBase_1009f2308;
  *(void ***)(this + 0x18) = &PTR__MemoryStorage_1009f1ac8;
  if ((this[0x2c] != (MemoryStream)0x0) && (*(void **)(this + 0x30) != (void *)0x0)) {
    delete__(*(void **)(this + 0x30));
  }
  delete(this);
  return;
}
}
