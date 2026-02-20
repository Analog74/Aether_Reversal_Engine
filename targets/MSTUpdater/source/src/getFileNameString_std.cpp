#include <ni/controller_editor/getFileNameString_std.hpp>
namespace NI::GP::URI {

void getFileNameString(std::string&) {
long lVar1;
  __CFString *p_Var2;
  unsigned long uVar3;
  unsigned long long local_38;
  unsigned long long uStack_30;
  unsigned long long local_28;
  
  if (*(long *)this != 0) {
    lVar1 = _CFURLCopyFileSystemPath(*(long *)this,1);
    if (lVar1 != 0) {
      p_Var2 = (__CFString *)
               _CFStringCreateMutableCopy(*(unsigned long long *)PTR__kCFAllocatorDefault_1002272f8,0,lVar1)
      ;
      if (p_Var2 == (__CFString *)0x0) {
        uVar3 = 0;
      }
      else {
        _CFStringNormalize(p_Var2,2);
        StringCF::StringCF((StringCF *)&local_38,p_Var2);
        if (((byte)*param_1 & 1) == 0) {
          *(void2 *)param_1 = 0;
        }
        else {
          **(unsigned char **)(param_1 + 0x10) = 0;
          *(unsigned long long *)(param_1 + 8) = 0;
        }
        // std code
        *(unsigned long long *)(param_1 + 0x10) = local_28;
        *(unsigned long long *)(param_1 + 8) = uStack_30;
        *(unsigned long long *)param_1 = local_38;
        local_38 = 0;
        uStack_30 = 0;
        local_28 = 0;
        // std code
        uVar3 = 0((int7)((unsigned long)param_1 >> 8),1);
        _CFRelease(p_Var2);
      }
      _CFRelease(lVar1);
      goto LAB_10018e6bd;
    }
  }
  uVar3 = 0;
LAB_10018e6bd:
  return uVar3 & 0xffffffff;
}
}
