#include <ni/controller_editor/MemoryMappedStorage.hpp>
namespace NI::GP {

MemoryMappedStorage::~MemoryMappedStorage() {
*(void ***)this = &PTR__MemoryMappedStorage_1009f1a70;
  if (*(long *)(this + 0x18) != 0) {
    _munmap(*(long *)(this + 0x18),(unsigned long)*(uint *)(this + 0x38) + *(long *)(this + 0x30));
    *(unsigned long long *)(this + 0x30) = 0;
    *(unsigned int *)(this + 0x38) = 0;
    *(unsigned int *)(this + 0xc) = 0;
    *(unsigned long long *)(this + 0x18) = 0;
    *(unsigned long long *)(this + 0x20) = 0;
  }
  if (-1 < *(int *)(this + 0x14)) {
    _close(*(int *)(this + 0x14));
  }
  delete(this);
  return;
}
}
