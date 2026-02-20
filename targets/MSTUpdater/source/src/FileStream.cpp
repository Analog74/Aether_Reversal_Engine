#include <ni/controller_editor/FileStream.hpp>
namespace NI::GP {

FileStream::FileStream() {
*(FileStream **)(this + 8) = this + 0x18;
  *(unsigned int *)(this + 0x10) = 1;
  *(unsigned int *)(this + 0x20) = 0;
  *(unsigned int *)(this + 0x24) = 0;
  *(unsigned int *)(this + 0x28) = 0;
  *(void ***)(this + 0x18) = &PTR__FileStorage_100230e68;
  *(unsigned long long *)(this + 0xd0) = 0;
  *(void2 *)(this + 0xd8) = 0;
  ___bzero(this + 0x30,0x9c);
  this[0xf8] = (FileStream)0x0;
  *(unsigned long long *)(this + 0xf0) = 0;
  *(unsigned long long *)(this + 0xe8) = 0;
  *(unsigned long long *)(this + 0xe0) = 0;
  *(unsigned int *)(this + 0x108) = 0;
  *(unsigned int *)(this + 0x10c) = 0;
  *(unsigned int *)(this + 0x110) = 0;
  *(unsigned long long *)(this + 0x118) = 0;
  this[0x120] = (FileStream)0x0;
  *(unsigned long long *)(this + 0x130) = 0;
  *(unsigned long long *)(this + 0x128) = 0;
  *(void ***)(this + 0x100) = &PTR__FileContainerItemStorage_10023b6e8;
  *(unsigned long long *)(this + 0x138) = 0;
  this[0x140] = (FileStream)0x0;
  *(void ***)this = &PTR__FileStream_100230ec0;
  
}

FileStream::~FileStream() {
FileStreamBase<NI::GP::Stream>::~FileStreamBase((FileStreamBase<NI::GP::Stream> *)this);
  delete(this);
  return;
}
}
