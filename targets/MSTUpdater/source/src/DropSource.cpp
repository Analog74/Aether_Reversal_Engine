#include <ni/controller_editor/DropSource.hpp>
namespace NI::UIA {

DropSource::DropSource() {
*(void ***)this = &PTR__DropSource_10022a290;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 8) = 0;
  this[0x18] = (DropSource)0x1;
  
}

void DropSource::setDragStartTimeout(unsigned int) {
*(uint *)(this + 0x14) = param_1;
  return;
}

DropSource::~DropSource() {
delete(this);
  return;
}
}
