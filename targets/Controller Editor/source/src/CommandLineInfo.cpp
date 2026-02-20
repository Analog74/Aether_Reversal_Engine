#include <ni/controller_editor/CommandLineInfo.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::CLI {

CommandLineInfo::CommandLineInfo() {
*(void ***)this = &PTR_parseParam_101b31530;
  *(unsigned int *)(this + 8) = 4;
  *(unsigned long long *)(this + 0xc) = 0;
  *(unsigned long long *)(this + 0x14) = 0;
  *(unsigned long long *)(this + 0x1c) = 0;
  *(unsigned long long *)(this + 0x24) = 0;
  *(unsigned long long *)(this + 0x2c) = 0;
  *(unsigned long long *)(this + 0x34) = 0;
  *(unsigned long long *)(this + 0x3c) = 0;
  *(unsigned long long *)(this + 0x44) = 0;
  *(unsigned long long *)(this + 0x4c) = 0;
  *(unsigned long long *)(this + 0x54) = 0;
  *(unsigned long long *)(this + 0x5c) = 0;
  *(unsigned long long *)(this + 100) = 0;
  *(unsigned int *)(this + 0x6c) = 0;
  
}

void CommandLineInfo::parseParam(char const*, bool, bool) {
int iVar1;
  uint uVar2;
  unsigned long uVar3;
  CommandLineInfo *pCVar4;
  
  if (param_2 param_1) {
  }
  else {
    uVar2 = *(uint *)(this + 0xc) << 0x1e | *(uint *)(this + 0xc) >> 2;
    if (uVar2 < 3) {
      pCVar4 = this + 0x10;
    }
    else {
      if (uVar2 != 8) {
        if (uVar2 != 4) {
          return 0;
        }
        return;
      }
      if (((byte)this[0x28] & 1) == 0) {
        if ((byte)this[0x28] >> 1 == 0) return;
        if (((byte)this[0x40] & 1) == 0) {
          uVar3 = (unsigned long)((byte)this[0x40] >> 1);
        }
        else {
          uVar3 = *(unsigned long *)(this + 0x48);
        }
        if (uVar3 == 0) {
          pCVar4 = this + 0x40;
        }
        else {
          if (((byte)this[0x58] & 1) == 0) {
            uVar3 = (unsigned long)((byte)this[0x58] >> 1);
          }
          else {
            uVar3 = *(unsigned long *)(this + 0x60);
          }
          if (uVar3 != 0) {
            return 0;
          }
          pCVar4 = this + 0x58;
        }
      }
      else {
        if (*(long *)(this + 0x30) != 0) return;
        pCVar4 = this + 0x28;
      }
    }
    // std code
  }
  if (!param_3) {
    return 1;
  }
  if (*(int *)(this + 8) != 4) {
    return 1;
  }
  if (((byte)this[0x10] & 1) == 0) {
    if ((byte)this[0x10] >> 1 == 0) {
      *(unsigned int *)(this + 8) = 0;
      return 1;
    }
  }
  else if (*(long *)(this + 0x18) == 0) return;
  *(unsigned int *)(this + 8) = 8;
  return 1;
}

CommandLineInfo::~CommandLineInfo() {
CommandLineInfo CVar1;
  
  *(void ***)this = &PTR_parseParam_101b31530;
  if (((byte)this[0x58] & 1) == 0) {
    CVar1 = this[0x40];
  }
  else {
    delete(*(void **)(this + 0x68));
    CVar1 = this[0x40];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x28];
  }
  else {
    delete(*(void **)(this + 0x50));
    CVar1 = this[0x28];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x10];
  }
  else {
    delete(*(void **)(this + 0x38));
    CVar1 = this[0x10];
  }
  if (((byte)CVar1 & 1) != 0) {
    delete(*(void **)(this + 0x20));
    return;
  }
  return;
}
}
