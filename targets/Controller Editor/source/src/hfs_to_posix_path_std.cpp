#include <ni/controller_editor/hfs_to_posix_path_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::filesystem {

void hfs_to_posix_path(1 param_1, std::string const& {
unsigned long long uVar1;
  long lVar2;
  long lVar3;
  __CFString *p_Var4;
  string *psVar5;
  unsigned int local_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned long long local_30;
  
  uVar1 = *(unsigned long long *)PTR__kCFAllocatorDefault_101ab4648;
  if (((byte)*param_1 & 1) == 0) {
    psVar5 = param_1 + 1;
  }
  else {
    psVar5 = *(string **)(param_1 + 0x10);
  }
  lVar2 = _CFStringCreateWithCString(uVar1,psVar5,0x8000100);
  if (lVar2 == 0) {
    *(unsigned long long *)this = 0;
    *(unsigned long long *)(this + 8) = 0;
    *(unsigned long long *)(this + 0x10) = 0;
  }
  else {
    lVar3 = _CFURLCreateWithFileSystemPath(uVar1,lVar2,1,1);
    if (lVar3 == 0) {
      *(unsigned long long *)this = 0;
      *(unsigned long long *)(this + 8) = 0;
      *(unsigned long long *)(this + 0x10) = 0;
    }
    else {
      p_Var4 = (__CFString *)_CFURLCopyFileSystemPath(lVar3,0);
      if (p_Var4 == (__CFString *)0x0) {
        *(unsigned long long *)this = 0;
        *(unsigned long long *)(this + 8) = 0;
        *(unsigned long long *)(this + 0x10) = 0;
      }
      else {
        corefoundation::utf8String((corefoundation *)&local_40,p_Var4);
        *(unsigned long long *)(this + 0x10) = local_30;
        *(unsigned int *)this = local_40;
        *(unsigned int *)(this + 4) = uStack_3c;
        *(unsigned int *)(this + 8) = uStack_38;
        *(unsigned int *)(this + 0xc) = uStack_34;
        _CFRelease(p_Var4);
      }
      _CFRelease(lVar3);
    }
    _CFRelease(lVar2);
  }
  return this;
}
}
