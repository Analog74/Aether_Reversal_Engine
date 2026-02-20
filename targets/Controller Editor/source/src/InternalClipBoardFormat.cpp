#include <ni/controller_editor/InternalClipBoardFormat.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void InternalClipBoardFormat::FormatHandle() {
return &s_InternalClipboardFormat_UIA;
}

void InternalClipBoardFormat::readRawData(void const*, unsigned long) {
unsigned long long uVar1;
  
  *(unsigned long long *)((long)param_1 + 0x10) = *(unsigned long long *)param_2;
  uVar1 = *(unsigned long long *)(param_2 + 8);
  *(unsigned long long *)((long)param_1 + 0x18) = uVar1;
  return 0((int7)((unsigned long)uVar1 >> 8),1);
}

void InternalClipBoardFormat::writeRawData(void*) const {
*(unsigned long long *)param_1 = *(unsigned long long *)(this + 0x10);
  *(unsigned long long *)((long)param_1 + 8) = *(unsigned long long *)(this + 0x18);
  return;
}

InternalClipBoardFormat::~InternalClipBoardFormat() {
delete(this);
  return;
}
}
