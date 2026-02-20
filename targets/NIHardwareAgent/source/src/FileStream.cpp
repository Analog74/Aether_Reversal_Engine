#include <ni/controller_editor/FileStream.hpp>
namespace NI::GP {

FileStream::~FileStream() {
long *plVar1;
  
  *(void ***)this = &PTR__FileStreamBase_1009f1e28;
  plVar1 = *(long **)(this + 0x68);
  *(unsigned long long *)(this + 0x68) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(void ***)(this + 0x18) = &PTR__FileStorage_1009f1a18;
  if (*(int *)(this + 0x24) != 0) {
    FileStorage::close((FileStorage *)(this + 0x18));
  }
  if (((byte)this[0x30] & 1) != 0) {
    delete(*(void **)(this + 0x40));
  }
  delete(this);
  return;
}
}
