#include <ni/controller_editor/ParseRequest_anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::XmlReader {

void ParseRequest(1 param_1, anyrpc::Handler& {
bool bVar1;
  bool bVar2;
  void *puVar3;
  Handler *pHVar4;
  int iVar5;
  unsigned int uVar6;
  void *puVar7;
  ostream *poVar8;
  unsigned int *puVar9;
  unsigned long long uVar10;
  long *in_RDX;
  XmlReader *in_RSI;
  char *pcVar11;
  unsigned long long local_188;
  unsigned long long uStack_180;
  void *local_178;
  void *local_170 [8];
  unsigned long long local_130;
  unsigned long long uStack_128;
  unsigned long long local_120;
  unsigned long long uStack_118;
  unsigned int local_110;
  void *local_108 [17];
  unsigned long long local_80;
  unsigned int local_78;
  void *local_70;
  void *local_68;
  Handler *local_60;
  unsigned int *local_58;
  string local_50;
  char local_4f [7];
  unsigned long local_48;
  char *local_40;
  unsigned int local_34;
  
  *(unsigned long long *)param_1 = 0;
  *(unsigned long long *)(param_1 + 8) = 0;
  *(unsigned long long *)(param_1 + 0x10) = 0;
  *(long **)(in_RSI + 0x10) = in_RDX;
  *(unsigned int *)(in_RSI + 0x18) = 0;
  (**(code **)(*in_RDX + 0x10))();
  do {
    iVar5 = GetNextTag(in_RSI,false);
  } while (iVar5 != 0x3c);
  bVar2 = true;
  bVar1 = false;
  local_60 = param_1;
  do {
    uVar6 = GetNextTag(in_RSI,false);
    pHVar4 = local_60;
    puVar3 = PTR_vtable_101ab45a8;
    switch(uVar6) {
    case 0x3d:
      if (!bVar2) {
        if (!bVar1) {
          (**(code **)(**(long **)(in_RSI + 0x10) + 0xa8))();
          (**(code **)(**(long **)(in_RSI + 0x10) + 0xc0))(*(long **)(in_RSI + 0x10),0);
        }
        (**(code **)(*in_RDX + 0x18))();
        return pHVar4;
      }
      puVar7 = (char*)PTR_vtable_101ab45a8 + 0x40;
      local_108[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
      local_178 = puVar7;
      // std code
      local_80 = 0;
      local_78 = 0xffffffff;
      local_68 = puVar3 + 0x18;
      local_108[0] = puVar3 + 0x68;
      local_178 = puVar7;
      local_70 = local_108[0];
      // std code
      local_170[0] = (char*)PTR_vtable_101ab4590 + 0x10;
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0x18;
      // std code
                ((ostream *)&local_178,"Parse error with xml tag: methodName not defined",0x30);
      local_58 = (unsigned int *)___cxa_allocate_exception(0x28);
      uVar10 = // std code
      *local_58 = 0xffff8030;
      local_34 = (unsigned int)0((int7)((unsigned long)uVar10 >> 8),1);
      // std code
      *(unsigned long long *)(local_58 + 8) = 0;
      local_34 = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(local_58,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
    default:
      puVar7 = (char*)PTR_vtable_101ab45a8 + 0x40;
      local_108[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
      local_178 = puVar7;
      // std code
      local_80 = 0;
      local_78 = 0xffffffff;
      local_68 = puVar3 + 0x18;
      local_108[0] = puVar3 + 0x68;
      local_178 = puVar7;
      local_70 = local_108[0];
      // std code
      local_170[0] = (char*)PTR_vtable_101ab4590 + 0x10;
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0x18;
      local_58 = (unsigned int *)local_170[0];
      poVar8 = // std code
                         ((ostream *)&local_178,"Parse error with xml tag ",0x19);
      TagToString((int)&local_50);
      pcVar11 = local_40;
      if (((byte)local_50 & 1) == 0) {
        local_48 = (unsigned long)((byte)local_50 >> 1);
        pcVar11 = local_4f;
      }
      // std code
      if (((byte)local_50 & 1) != 0) {
        delete(local_40);
      }
      puVar9 = (unsigned int *)___cxa_allocate_exception(0x28);
      uVar10 = // std code
      *puVar9 = 0xffff8030;
      local_34 = (unsigned int)0((int7)((unsigned long)uVar10 >> 8),1);
      // std code
      *(unsigned long long *)(puVar9 + 8) = 0;
      local_34 = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar9,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
    case 0x40:
      if (!bVar2) {
        puVar7 = (char*)PTR_vtable_101ab45a8 + 0x40;
        local_108[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
        local_178 = puVar7;
        // std code
        local_80 = 0;
        local_78 = 0xffffffff;
        local_68 = puVar3 + 0x18;
        local_108[0] = puVar3 + 0x68;
        local_178 = puVar7;
        local_70 = local_108[0];
        // std code
        local_170[0] = (char*)PTR_vtable_101ab4590 + 0x10;
        local_130 = 0;
        uStack_128 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_110 = 0x18;
        local_58 = (unsigned int *)local_170[0];
        poVar8 = // std code
                           ((ostream *)&local_178,"Parse error with xml tag ",0x19);
        TagToString((int)&local_50);
        pcVar11 = local_40;
        if (((byte)local_50 & 1) == 0) {
          local_48 = (unsigned long)((byte)local_50 >> 1);
          pcVar11 = local_4f;
        }
        poVar8 = // std code
        ;
        // std code
                  (poVar8,": methodName redefined",0x16);
        if (((byte)local_50 & 1) != 0) {
          delete(local_40);
        }
        puVar9 = (unsigned int *)___cxa_allocate_exception(0x28);
        uVar10 = // std code
        *puVar9 = 0xffff8030;
        local_34 = (unsigned int)0((int7)((unsigned long)uVar10 >> 8),1);
        // std code
        *(unsigned long long *)(puVar9 + 8) = 0;
        local_34 = 0;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar9,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
      }
      ParseMethodName();
      pHVar4 = local_60;
      if (((byte)*local_60 & 1) != 0) {
        delete(*(void **)(local_60 + 0x10));
      }
      *(void **)(pHVar4 + 0x10) = local_178;
      *(unsigned long long *)pHVar4 = local_188;
      *(unsigned long long *)(pHVar4 + 8) = uStack_180;
      bVar2 = false;
      break;
    case 0x48:
      bVar1 = true;
      ParseParams(in_RSI);
      break;
    case 0x4a:
      if (bVar1) {
        puVar7 = (char*)PTR_vtable_101ab45a8 + 0x40;
        local_108[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
        local_178 = puVar7;
        // std code
        local_80 = 0;
        local_78 = 0xffffffff;
        local_68 = puVar3 + 0x18;
        local_108[0] = puVar3 + 0x68;
        local_178 = puVar7;
        local_70 = local_108[0];
        // std code
        local_170[0] = (char*)PTR_vtable_101ab4590 + 0x10;
        local_130 = 0;
        uStack_128 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_110 = 0x18;
        local_58 = (unsigned int *)local_170[0];
        poVar8 = // std code
                           ((ostream *)&local_178,"Parse error with xml tag ",0x19);
        TagToString((int)&local_50);
        pcVar11 = local_40;
        if (((byte)local_50 & 1) == 0) {
          local_48 = (unsigned long)((byte)local_50 >> 1);
          pcVar11 = local_4f;
        }
        poVar8 = // std code
        ;
        // std code
                  (poVar8,": params tag redefined",0x16);
        if (((byte)local_50 & 1) != 0) {
          delete(local_40);
        }
        puVar9 = (unsigned int *)___cxa_allocate_exception(0x28);
        uVar10 = // std code
        *puVar9 = 0xffff8030;
        local_34 = (unsigned int)0((int7)((unsigned long)uVar10 >> 8),1);
        // std code
        *(unsigned long long *)(puVar9 + 8) = 0;
        local_34 = 0;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar9,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
      }
      (**(code **)(**(long **)(in_RSI + 0x10) + 0xa8))();
      bVar1 = true;
      (**(code **)(**(long **)(in_RSI + 0x10) + 0xc0))();
    }
  } while( true );
}
}
