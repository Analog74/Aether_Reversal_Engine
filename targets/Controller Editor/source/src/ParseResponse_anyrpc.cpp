#include <ni/controller_editor/ParseResponse_anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::XmlReader {

void ParseResponse(1 param_1, anyrpc::Handler& {
void *puVar1;
  int iVar2;
  ostream *poVar3;
  unsigned int *puVar4;
  unsigned long long uVar5;
  char *pcVar6;
  void *local_190;
  void *local_188 [8];
  unsigned long long local_148;
  unsigned long long uStack_140;
  unsigned long long local_138;
  unsigned long long uStack_130;
  unsigned int local_128;
  void *local_120 [17];
  unsigned long long local_98;
  unsigned int local_90;
  void *local_88;
  void *local_80;
  byte local_78;
  char local_77 [7];
  unsigned long local_70;
  char *local_68;
  unsigned int *local_60;
  void *local_58;
  string local_50;
  char local_4f [7];
  unsigned long local_48;
  char *local_40;
  unsigned int local_34;
  
  *(Handler **)(this + 0x10) = param_1;
  *(unsigned int *)(this + 0x18) = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1);
  do {
    iVar2 = GetNextTag(this,false);
  } while (iVar2 != 0x44);
  iVar2 = GetNextTag(this,false);
  puVar1 = PTR_vtable_101ab45a8;
  if (iVar2 == 0x50) {
    ParseValue(this,false);
    iVar2 = GetNextTag(this,false);
    puVar1 = PTR_vtable_101ab45a8;
    if (iVar2 != 0x51) {
      local_190 = (char*)PTR_vtable_101ab45a8 + 0x40;
      local_120[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
      local_58 = local_190;
      // std code
      local_98 = 0;
      local_90 = 0xffffffff;
      local_80 = puVar1 + 0x18;
      local_120[0] = puVar1 + 0x68;
      local_190 = local_58;
      local_88 = local_120[0];
      // std code
      local_188[0] = (char*)PTR_vtable_101ab4590 + 0x10;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0x18;
      local_60 = (unsigned int *)local_188[0];
      poVar3 = // std code
                         ((ostream *)&local_190,"Parse error: found ",0x13);
      TagToString((int)&local_50);
      pcVar6 = local_40;
      if (((byte)local_50 & 1) == 0) {
        local_48 = (unsigned long)((byte)local_50 >> 1);
        pcVar6 = local_4f;
      }
      poVar3 = // std code
      poVar3 = // std code
      TagToString((int)&local_78);
      pcVar6 = local_68;
      if ((local_78 & 1) == 0) {
        local_70 = (unsigned long)(local_78 >> 1);
        pcVar6 = local_77;
      }
      // std code
      if ((local_78 & 1) != 0) {
        delete(local_68);
      }
      if (((byte)local_50 & 1) != 0) {
        delete(local_40);
      }
      puVar4 = (unsigned int *)___cxa_allocate_exception(0x28);
      uVar5 = // std code
      *puVar4 = 0xffff8030;
      local_34 = (unsigned int)0((int7)((unsigned long)uVar5 >> 8),1);
      // std code
      *(unsigned long long *)(puVar4 + 8) = 0;
      local_34 = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar4,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
    }
    iVar2 = GetNextTag(this,false);
    puVar1 = PTR_vtable_101ab45a8;
    if (iVar2 != 0x45) {
      local_190 = (char*)PTR_vtable_101ab45a8 + 0x40;
      local_120[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
      local_58 = local_190;
      // std code
      local_98 = 0;
      local_90 = 0xffffffff;
      local_80 = puVar1 + 0x18;
      local_120[0] = puVar1 + 0x68;
      local_190 = local_58;
      local_88 = local_120[0];
      // std code
      local_188[0] = (char*)PTR_vtable_101ab4590 + 0x10;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0x18;
      local_60 = (unsigned int *)local_188[0];
      poVar3 = // std code
                         ((ostream *)&local_190,"Parse error: found ",0x13);
      TagToString((int)&local_50);
      pcVar6 = local_40;
      if (((byte)local_50 & 1) == 0) {
        local_48 = (unsigned long)((byte)local_50 >> 1);
        pcVar6 = local_4f;
      }
      poVar3 = // std code
      poVar3 = // std code
      TagToString((int)&local_78);
      pcVar6 = local_68;
      if ((local_78 & 1) == 0) {
        local_70 = (unsigned long)(local_78 >> 1);
        pcVar6 = local_77;
      }
      // std code
      if ((local_78 & 1) != 0) {
        delete(local_68);
      }
      if (((byte)local_50 & 1) != 0) {
        delete(local_40);
      }
      puVar4 = (unsigned int *)___cxa_allocate_exception(0x28);
      uVar5 = // std code
      *puVar4 = 0xffff8030;
      local_34 = (unsigned int)0((int7)((unsigned long)uVar5 >> 8),1);
      // std code
      *(unsigned long long *)(puVar4 + 8) = 0;
      local_34 = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar4,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
    }
  }
  else if (iVar2 == 0x4a) {
    (**(code **)(**(long **)(this + 0x10) + 0x20))();
  }
  else {
    if (iVar2 != 0x48) {
      local_190 = (char*)PTR_vtable_101ab45a8 + 0x40;
      local_120[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
      local_58 = local_190;
      // std code
      local_98 = 0;
      local_90 = 0xffffffff;
      local_80 = puVar1 + 0x18;
      local_120[0] = puVar1 + 0x68;
      local_190 = local_58;
      local_88 = local_120[0];
      // std code
      local_188[0] = (char*)PTR_vtable_101ab4590 + 0x10;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0x18;
      local_60 = (unsigned int *)local_188[0];
      poVar3 = // std code
                         ((ostream *)&local_190,"Parse error with xml tag ",0x19);
      TagToString((int)&local_50);
      pcVar6 = local_40;
      if (((byte)local_50 & 1) == 0) {
        local_48 = (unsigned long)((byte)local_50 >> 1);
        pcVar6 = local_4f;
      }
      // std code
      if (((byte)local_50 & 1) != 0) {
        delete(local_40);
      }
      puVar4 = (unsigned int *)___cxa_allocate_exception(0x28);
      uVar5 = // std code
      *puVar4 = 0xffff8030;
      local_34 = (unsigned int)0((int7)((unsigned long)uVar5 >> 8),1);
      // std code
      *(unsigned long long *)(puVar4 + 8) = 0;
      local_34 = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar4,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
    }
    ParseParams(this);
    iVar2 = GetNextTag(this,false);
    puVar1 = PTR_vtable_101ab45a8;
    if (iVar2 != 0x45) {
      local_190 = (char*)PTR_vtable_101ab45a8 + 0x40;
      local_120[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
      local_58 = local_190;
      // std code
      local_98 = 0;
      local_90 = 0xffffffff;
      local_88 = puVar1 + 0x18;
      local_120[0] = puVar1 + 0x68;
      local_190 = local_58;
      // std code
      local_188[0] = (char*)PTR_vtable_101ab4590 + 0x10;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0x18;
      local_80 = local_188[0];
      poVar3 = // std code
                         ((ostream *)&local_190,"Parse error: found ",0x13);
      TagToString((int)&local_50);
      pcVar6 = local_40;
      if (((byte)local_50 & 1) == 0) {
        local_48 = (unsigned long)((byte)local_50 >> 1);
        pcVar6 = local_4f;
      }
      poVar3 = // std code
      poVar3 = // std code
      TagToString((int)&local_78);
      pcVar6 = local_68;
      if ((local_78 & 1) == 0) {
        local_70 = (unsigned long)(local_78 >> 1);
        pcVar6 = local_77;
      }
      // std code
      if ((local_78 & 1) != 0) {
        delete(local_68);
      }
      if (((byte)local_50 & 1) != 0) {
        delete(local_40);
      }
      local_60 = (unsigned int *)___cxa_allocate_exception(0x28);
      uVar5 = // std code
      *local_60 = 0xffff8030;
      local_34 = (unsigned int)0((int7)((unsigned long)uVar5 >> 8),1);
      // std code
      *(unsigned long long *)(local_60 + 8) = 0;
      local_34 = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(local_60,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
    }
  }
  (**(code **)(*(long *)param_1 + 0x18))(param_1);
  return;
}
}
