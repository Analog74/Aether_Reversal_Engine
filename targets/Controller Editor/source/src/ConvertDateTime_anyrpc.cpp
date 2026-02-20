#include <ni/controller_editor/ConvertDateTime_anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::Document {

void ConvertDateTime(1 param_1, anyrpc::Value* {
void *puVar1;
  void *puVar2;
  int iVar3;
  Value *pVVar4;
  char *pcVar5;
  long lVar6;
  time_t tVar7;
  unsigned long long uVar8;
  void *local_198;
  void *local_190 [8];
  unsigned long long local_150;
  unsigned long long uStack_148;
  unsigned long long local_140;
  unsigned long long uStack_138;
  unsigned int local_130;
  void *local_128 [17];
  unsigned long long local_a0;
  unsigned int local_98;
  
  tm local_78;
  unsigned int *local_40;
  unsigned int local_34;
  
  pVVar4 = (Value *)Value::operator[](param_1,1);
  pcVar5 = (char *)Value::GetString(pVVar4);
  pVVar4 = (Value *)Value::operator[](param_1,1);
  lVar6 = Value::GetStringLength(pVVar4);
  if (lVar6 == 0x11) {
    iVar3 = _sscanf(pcVar5,"%4d%2d%2dT%2d:%2d:%2d",&local_78.tm_year,&local_78.tm_mon,
                    &local_78.tm_mday,&local_78.tm_hour,&local_78.tm_min,&local_78);
    if (iVar3 == 6) {
      local_78.tm_year = local_78.tm_year + -0x76c;
      local_78.tm_mon = local_78.tm_mon + -1;
      local_78.tm_isdst = -1;
      tVar7 = _mktime(&local_78);
      Value::Destroy(param_1);
      *(unsigned int *)(param_1 + 0x10) = 8;
      *(time_t *)param_1 = tVar7;
      return;
    }
  }
  puVar2 = PTR_vtable_101ab45a8;
  puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
  local_128[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
  local_198 = puVar1;
  // std code
  local_a0 = 0;
  local_98 = 0xffffffff;
  local_128[0] = puVar2 + 0x68;
  local_198 = puVar1;
  // std code
  local_190[0] = (char*)PTR_vtable_101ab4590 + 0x10;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0x18;
  // std code
            ((ostream *)&local_198,"Parsing was terminated",0x16);
  local_40 = (unsigned int *)___cxa_allocate_exception(0x28);
  uVar8 = // std code
  *local_40 = 0xffff8032;
  local_34 = (unsigned int)0((int7)((unsigned long)uVar8 >> 8),1);
  // std code
  *(unsigned long long *)(local_40 + 8) = 0;
  local_34 = 0;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(local_40,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
}
}
