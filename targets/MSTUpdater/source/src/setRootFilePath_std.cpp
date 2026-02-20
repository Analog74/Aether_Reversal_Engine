#include <ni/controller_editor/setRootFilePath_std.hpp>
namespace NI::GP::FileContainerStorage {

void setRootFilePath(std::string const&) {
FileContainerStorage *pFVar1;
  FileContainerStorage *pFVar2;
  byte bVar3;
  long lVar4;
  unsigned long uVar5;
  unsigned long uVar6;
  unsigned long long local_48;
  unsigned long long uStack_40;
  unsigned long long local_38;
  
  // std code
  pFVar1 = this + 0x158;
  if (((byte)this[0x158] & 1) == 0) {
    *(void2 *)pFVar1 = 0;
  }
  else {
    **(unsigned char **)(this + 0x168) = 0;
    *(unsigned long long *)(this + 0x160) = 0;
  }
  pFVar2 = this + 0x170;
  if (((byte)this[0x170] & 1) == 0) {
    *(void2 *)pFVar2 = 0;
  }
  else {
    **(unsigned char **)(this + 0x180) = 0;
    *(unsigned long long *)(this + 0x178) = 0;
  }
  lVar4 = // std code
  if (lVar4 != -1) {
    uVar6 = lVar4 + 1;
    uVar5 = (unsigned long)((byte)this[0x140] >> 1);
    if (((byte)this[0x140] & 1) != 0) {
      uVar5 = *(unsigned long *)(this + 0x148);
    }
    if (uVar6 < uVar5) {
      // std code
    }
    // std code
    if (((byte)*pFVar1 & 1) == 0) {
      *(void2 *)pFVar1 = 0;
    }
    else {
      **(unsigned char **)(this + 0x168) = 0;
      *(unsigned long long *)(this + 0x160) = 0;
    }
    // std code
    *(unsigned long long *)(this + 0x168) = local_38;
    *(unsigned long long *)(this + 0x160) = uStack_40;
    *(unsigned long long *)pFVar1 = local_48;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    // std code
    lVar4 = // std code
    if (lVar4 != -1) {
      bVar3 = (byte)*pFVar1 & 1;
      uVar6 = lVar4 - uVar6;
      if (uVar6 == 0) {
        if (bVar3 == 0) {
          *(void2 *)pFVar1 = 0;
        }
        else {
          **(unsigned char **)(this + 0x168) = 0;
          *(unsigned long long *)(this + 0x160) = 0;
        }
      }
      else {
        uVar5 = (unsigned long)((byte)*pFVar1 >> 1);
        if (bVar3 != 0) {
          uVar5 = *(unsigned long *)(this + 0x160);
        }
        if (uVar6 < uVar5) {
          // std code
        }
      }
      // std code
                          (allocator *)param_1);
      if (((byte)*pFVar2 & 1) == 0) {
        *(void2 *)pFVar2 = 0;
      }
      else {
        **(unsigned char **)(this + 0x180) = 0;
        *(unsigned long long *)(this + 0x178) = 0;
      }
      // std code
      *(unsigned long long *)(this + 0x180) = local_38;
      *(unsigned long long *)(this + 0x178) = uStack_40;
      *(unsigned long long *)pFVar2 = local_48;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      // std code
    }
  }
  return;
}
}
