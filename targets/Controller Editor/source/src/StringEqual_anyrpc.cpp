#include <ni/controller_editor/StringEqual_anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::Value {

void StringEqual(anyrpc::Value const&) const {
void *puVar1;
  void *puVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  void *pvVar6;
  void *pvVar7;
  ostream *poVar8;
  unsigned int *puVar9;
  unsigned long long uVar10;
  bool bVar11;
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
  unsigned int local_34;
  
  puVar2 = PTR_vtable_101ab45a8;
  if (((byte)this[0x12] & 0x10) == 0) {
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
    poVar8 = // std code
                       ((ostream *)&local_160,"Not String, type=",0x11);
    // std code
    puVar9 = (unsigned int *)___cxa_allocate_exception(0x28);
    uVar10 = // std code
    *puVar9 = 0xffff816f;
    local_34 = (unsigned int)0((int7)((unsigned long)uVar10 >> 8),1);
    // std code
    *(unsigned long long *)(puVar9 + 8) = 0;
    local_34 = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar9,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
  }
  if (((byte)param_1[0x12] & 0x10) != 0) {
    sVar4 = GetStringLength(this);
    sVar5 = GetStringLength(param_1);
    if (sVar4 == sVar5) {
      pvVar6 = (void *)GetString(this);
      pvVar7 = (void *)GetString(param_1);
      if (pvVar6 == pvVar7) {
        bVar11 = true;
      }
      else {
        iVar3 = _memcmp(pvVar6,pvVar7,sVar4);
        bVar11 = iVar3 == 0;
      }
    }
    else {
      bVar11 = false;
    }
    return bVar11;
  }
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
  poVar8 = // std code
                     ((ostream *)&local_160,"RHS not String, type=",0x15);
  // std code
  puVar9 = (unsigned int *)___cxa_allocate_exception(0x28);
  uVar10 = // std code
  *puVar9 = 0xffff816f;
  local_34 = (unsigned int)0((int7)((unsigned long)uVar10 >> 8),1);
  // std code
  *(unsigned long long *)(puVar9 + 8) = 0;
  local_34 = 0;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar9,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
}
}
