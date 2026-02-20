#include <ni/controller_editor/Handler.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

void Handler::EndDocument() {
return;
}

void Handler::Float(float param_1) {
}

void Handler::StartArray() {
void *puVar1;
  void *puVar2;
  unsigned int *puVar3;
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
  
  void *local_40;
  unsigned int *local_38;
  
  puVar2 = PTR_vtable_101ab45a8;
  puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
  local_f0[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
  local_160 = puVar1;
  // std code
  local_68 = 0;
  local_60 = 0xffffffff;
  local_40 = puVar2 + 0x18;
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
            ((ostream *)&local_160,"Illegal call",0xc);
  puVar3 = (unsigned int *)___cxa_allocate_exception(0x28);
  local_38 = puVar3;
  // std code
  *puVar3 = 0xffff8169;
  // std code
  *(unsigned long long *)(local_38 + 8) = 0;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(local_38,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
}

void Handler::StartDocument() {
return;
}

void Handler::StartMap(unsigned long) {
/* WARNING: Could not recover jumptable at 0x000100950fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x80))();
  return;
}
}
