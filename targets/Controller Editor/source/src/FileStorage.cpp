#include <ni/controller_editor/FileStorage.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

FileStorage::FileStorage() {
*(unsigned long long *)(this + 8) = 0;
  *(unsigned int *)(this + 0x10) = 0;
  *(void ***)this = &PTR__FileStorage_101b31738;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 0x28) = 0;
  *(unsigned long long *)(this + 0x30) = 0;
  *(unsigned long long *)(this + 0x38) = 0;
  *(unsigned long long *)(this + 0x40) = 0;
  this[0x48] = (FileStorage)0x0;
  
}

FileStorage::~FileStorage() {
*(void ***)this = &PTR__FileStorage_101b31738;
  if (*(int *)(this + 0xc) != 0) {
    close(this);
  }
  if (((byte)this[0x18] & 1) != 0) {
    delete(*(void **)(this + 0x28));
  }
  delete(this);
  return;
}
}
