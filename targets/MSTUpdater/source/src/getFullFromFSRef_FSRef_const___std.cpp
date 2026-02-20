#include <ni/controller_editor/getFullFromFSRef_FSRef_const___std.hpp>
namespace NI::GP::FileName {

void getFullFromFSRef(FSRef const&, std::string&) {
char cVar1;
  long lVar2;
  unsigned long uVar3;
  long local_20;
  
  lVar2 = _CFURLCreateFromFSRef(*(unsigned long long *)PTR__kCFAllocatorDefault_1002272f8,param_1);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    _CFRetain(lVar2);
    local_20 = lVar2;
    cVar1 = URI::getFileNameString((URI *)&local_20,param_2);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (unsigned long)((byte)*param_2 >> 1);
      if (((byte)*param_2 & 1) != 0) {
        uVar3 = *(unsigned long *)(param_2 + 8);
      }
      uVar3 = 0((int7)((unsigned long)param_2 >> 8),uVar3 != 0);
    }
    _CFRelease(lVar2);
    _CFRelease(lVar2);
  }
  return uVar3 & 0xffffffff;
}
}
