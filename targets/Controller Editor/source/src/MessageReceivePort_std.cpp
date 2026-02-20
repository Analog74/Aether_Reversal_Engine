#include <ni/controller_editor/MessageReceivePort_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MessageReceivePort {

void MessageReceivePort(std::string, unsigned int) {
unsigned long long *puVar1;
  unsigned long local_58;
  unsigned long long uStack_50;
  void *local_48;
  unsigned long local_38;
  unsigned long long uStack_30;
  void *local_28;
  
  // std code
  local_48 = local_28;
  local_58 = local_38;
  uStack_50 = uStack_30;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (void *)0x0;
  IPCPort::IPCPort((IPCPort *)this,&local_58);
  if ((local_58 & 1) != 0) {
    delete(local_48);
  }
  *(void ***)this = &PTR__IPCReceivePort_101b0e280;
  this[0x30] = (MessageReceivePort)0x0;
  *(unsigned long long *)(this + 0x70) = 0;
  *(unsigned long long *)(this + 0x38) = 0;
  *(unsigned long long *)(this + 0x40) = 0;
  if ((local_38 & 1) != 0) {
    delete(local_28);
  }
  *(void ***)this = &PTR__MessageReceivePort_101b0e2a8;
  *(unsigned long long *)(this + 0x80) = 0;
  *(uint *)(this + 0x88) = param_3;
  *(unsigned long long *)(this + 0xb0) = 0;
  if (param_3 < 0x8000) {
    *(unsigned int *)(this + 0x88) = 0x8000;
    param_3 = 0x8000;
  }
  puVar1 = (unsigned long long *)new__((unsigned long)(param_3 + 0xc));
  ___bzero(puVar1,(unsigned long)(param_3 + 0xc));
  *puVar1 = 0x1000000004;
  puVar1[1] = 0;
  *(unsigned long long **)(this + 0x80) = puVar1;
  return;
}
}
