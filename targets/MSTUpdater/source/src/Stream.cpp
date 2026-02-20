#include <ni/controller_editor/Stream.hpp>
namespace NI::GP {

void Stream::readBoolean() {
char local_9;
  
  (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),&local_9,1);
  return local_9 != '\0';
}

void Stream::readRaw(void*, unsigned long) {
/* WARNING: Could not recover jumptable at 0x000100185bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)((long)param_1 + 8) + 0x18))();
  return;
}

void Stream::readS32() {
unsigned char local_14 [4];
  
  (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),local_14,4);
  return;
}

void Stream::readS8() {
char local_9;
  
  (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),&local_9,1);
  return (int)local_9;
}

void Stream::readU16() {
unsigned long long in_RAX;
  ushort local_12;
  
  local_12 = (ushort)((unsigned long)in_RAX >> 0x30);
  (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),&local_12,2);
  if (*(int *)(this + 0x10) != 1) {
    local_12 = local_12 << 8 | local_12 >> 8;
  }
  return local_12;
}

void Stream::readU32() {
unsigned char local_14 [4];
  
  (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),local_14,4);
  return;
}

void Stream::readU8() {
unsigned char local_9;
  
  (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),&local_9,1);
  return local_9;
}

void Stream::writeBoolean(bool param_1) {
}

void Stream::writeS32(int param_1) {
}

void Stream::writeU32(unsigned int) {
ushort uVar1;
  uint local_c;
  
  local_c = param_1;
  if (*(int *)(this + 0x10) != 1) {
    uVar1 = (ushort)(param_1 >> 0x10);
    local_c = CONCAT22((ushort)param_1 << 8 | (ushort)param_1 >> 8,uVar1 << 8 | uVar1 >> 8);
  }
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),&local_c,4);
  return;
}
}
