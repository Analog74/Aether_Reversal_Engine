#include <ni/controller_editor/ResourceStream.hpp>
namespace NI::GP {

void ResourceStream::initWithCompiledResource(unsigned int, char const*) {
ResourceStorage::initWithCompiledResource((ResourceStorage *)(this + 0x18),param_1,param_2);
  return;
}

ResourceStream::ResourceStream() {
*(ResourceStream **)(this + 8) = this + 0x18;
  *(unsigned int *)(this + 0x10) = 1;
  *(void ***)this = &PTR__ResourceStream_1009f1b98;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned int *)(this + 0x28) = 0;
  *(void ***)(this + 0x18) = &PTR__ResourceStorage_1009f1b40;
  *(unsigned long long *)(this + 0x30) = 0;
  
}

ResourceStream::~ResourceStream() {
*(void ***)this = &PTR__ResourceStream_1009f1b98;
  *(void ***)(this + 0x18) = &PTR__ResourceStorage_1009f1b40;
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 8))();
  }
  delete(this);
  return;
}
}
