#include <ni/controller_editor/DropSource.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

DropSource::DropSource() {
*(void ***)this = &PTR__DropSource_101b24318;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  this[0x18] = (DropSource)0x1;
  
}

void DropSource::setDragStartTimeout(unsigned int) {
*(uint *)(this + 0x14) = param_1;
  return;
}

DropSource::~DropSource() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
