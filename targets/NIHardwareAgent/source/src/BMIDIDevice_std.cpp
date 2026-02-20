#include <ni/controller_editor/BMIDIDevice_std.hpp>
namespace NI::NHL2::SERVER::BMIDIDevice {

void BMIDIDevice(std::string const&) {
unsigned long long *puVar1;
  unsigned long long local_38;
  unsigned long long uStack_30;
  unsigned long long local_28;
  
  *(unsigned long long *)(this + 0x30) = 0;
  this[0x40] = (BMIDIDevice)0x0;
  *(void ***)this = &PTR__BMIDIDevice_1009d86d8;
  puVar1 = (unsigned long long *)new(0x30);
  // std code
  *puVar1 = this;
  puVar1[1] = local_38;
  puVar1[2] = uStack_30;
  puVar1[3] = local_28;
  *(unsigned int *)(puVar1 + 4) = 0xffffffff;
  puVar1[5] = 0;
  *(unsigned long long **)(this + 0x48) = puVar1;
  return;
}
}
