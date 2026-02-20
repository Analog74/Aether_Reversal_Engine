#include <ni/controller_editor/ResourceStream.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void ResourceStream::initWithCompiledResource(unsigned int, char const*) {
ResourceStorage::initWithCompiledResource((ResourceStorage *)(this + 0x18),param_1,param_2);
  return;
}

ResourceStream::ResourceStream() {
*(ResourceStream **)(this + 8) = this + 0x18;
  *(unsigned int *)(this + 0x10) = 1;
  *(void ***)this = &PTR__ResourceStream_101b318b8;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned int *)(this + 0x28) = 0;
  *(void ***)(this + 0x18) = &PTR__ResourceStorage_101b31860;
  *(unsigned long long *)(this + 0x30) = 0;
  
}

ResourceStream::~ResourceStream() {
*(void ***)this = &PTR__ResourceStream_101b318b8;
  *(void ***)(this + 0x18) = &PTR__ResourceStorage_101b31860;
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 8))();
  }
  delete(this);
  return;
}
}
