#include <ni/controller_editor/ClipBoardFormatHandle.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

ClipBoardFormatHandle::ClipBoardFormatHandle(char const*) {
ClipBoardFormatHandle(this,param_1);
  
}

ClipBoardFormatHandle::~ClipBoardFormatHandle() {
unsigned long long *puVar1;
  
  *(void ***)this = &PTR__ClipBoardFormatHandle_101b241b8;
  puVar1 = *(unsigned long long **)(this + 8);
  *(unsigned long long *)(this + 8) = 0;
  if (puVar1 != (unsigned long long *)0x0) {
    _CFRelease(*puVar1);
    delete(puVar1);
  }
  delete(this);
  return;
}
}
