#include <ni/controller_editor/InSituStringStream.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

void InSituStringStream::Eof() const {
return 0((int7)(*(unsigned long *)(this + 8) >> 8),*(unsigned long *)(this + 0x28) <= *(unsigned long *)(this + 8))
  ;
}

void InSituStringStream::GetClear() {
char *pcVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*(long *)this + 0x20))();
  if (cVar2 == '\0') {
    pcVar1 = *(char **)(this + 8);
    cVar2 = *pcVar1;
    *(char **)(this + 8) = pcVar1 + 1;
    *pcVar1 = '\0';
  }
  else {
    cVar2 = '\0';
  }
  return (int)cVar2;
}

void InSituStringStream::InSitu() const {
return this[0x30];
}

void InSituStringStream::Peek() const {
char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x20))();
  if (cVar1 == '\0') {
    cVar1 = **(char **)(this + 8);
  }
  else {
    cVar1 = '\0';
  }
  return (int)cVar1;
}

void InSituStringStream::PutBegin() {
*(unsigned long long *)(this + 0x18) = *(unsigned long long *)(this + 8);
  *(unsigned long long *)(this + 0x20) = *(unsigned long long *)(this + 8);
  return;
}

void InSituStringStream::PutEnd() {
long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 0x18);
  lVar2 = *(long *)(this + 0x20);
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  return lVar1 - lVar2;
}

void InSituStringStream::Skip(unsigned long) {
void *puVar1;
  void *puVar2;
  unsigned long uVar3;
  unsigned long long uVar4;
  void *local_160;
  void *local_158 [8];
  unsigned long long local_118;
  unsigned long long uStack_110;
  unsigned long long local_108;
  unsigned long long uStack_100;
  unsigned int local_f8;
  void *local_f0 [17];
  unsigned long long local_68;
  unsigned int local_60;
  
  unsigned int *local_40;
  unsigned int local_34;
  
  puVar2 = PTR_vtable_101ab45a8;
  if (*(long *)(this + 0x18) != 0) {
    uVar3 = *(long *)(this + 0x28) - *(long *)(this + 8);
    if (param_1 < uVar3) {
      uVar3 = param_1;
    }
    *(unsigned long *)(this + 8) = *(long *)(this + 8) + uVar3;
    *(unsigned long *)(this + 0x18) = *(long *)(this + 0x18) + uVar3;
    return;
  }
  puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
  local_f0[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
  local_160 = puVar1;
  // std code
  local_68 = 0;
  local_60 = 0xffffffff;
  local_f0[0] = puVar2 + 0x68;
  local_160 = puVar1;
  // std code
  local_158[0] = (char*)PTR_vtable_101ab4590 + 0x10;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0x18;
  // std code
            ((ostream *)&local_160,"PutBegin was not called",0x17);
  local_40 = (unsigned int *)___cxa_allocate_exception(0x28);
  uVar4 = // std code
  *local_40 = 0xffff8169;
  local_34 = (unsigned int)0((int7)((unsigned long)uVar4 >> 8),1);
  // std code
  *(unsigned long long *)(local_40 + 8) = 0;
  local_34 = 0;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(local_40,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
}

void InSituStringStream::Tell() const {
return *(long *)(this + 8) - *(long *)(this + 0x10);
}

void InSituStringStream::UseStringCopy() const {
return this[0x31];
}

InSituStringStream::~InSituStringStream() {
delete(this);
  return;
}
}
