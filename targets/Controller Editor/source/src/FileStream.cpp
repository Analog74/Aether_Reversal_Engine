#include <ni/controller_editor/FileStream.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

FileStream::~FileStream() {
long *plVar1;
  
  *(void ***)this = &PTR__FileStreamBase_101ad50b8;
  plVar1 = *(long **)(this + 0x68);
  *(unsigned long long *)(this + 0x68) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FileStorage::~FileStorage((FileStorage *)(this + 0x18));
  Stream::~Stream((Stream *)this);
  delete(this);
  return;
}
}
