#include <ni/controller_editor/External.hpp>
namespace NI::UIA {

void External::openPreprocessedURL(char const*) {
unsigned long long uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(unsigned long long *)PTR__kCFAllocatorDefault_1002272f8;
  lVar3 = _CFStringCreateWithCString(uVar1,param_1,0x8000100);
  lVar4 = _CFURLCreateWithString(uVar1,lVar3,0);
  iVar2 = _LSOpenCFURLRef(lVar4,0);
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  return iVar2 == 0;
}

void External::openURL(char const*) {
unsigned long long uVar1;
  
  if (param_1 != (char *)0x0) {
    uVar1 = openPreprocessedURL(param_1);
    return uVar1;
  }
  return 0;
}
}
