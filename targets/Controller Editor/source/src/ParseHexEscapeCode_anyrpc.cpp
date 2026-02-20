#include <ni/controller_editor/ParseHexEscapeCode_anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::XmlReader {

void ParseHexEscapeCode(3 param_3, anyrpc::Stream&, char const*, int {
void *puVar1;
  char cVar2;
  void *puVar3;
  unsigned long long uVar4;
  uint uVar5;
  int iVar6;
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
  
  puVar3 = PTR_vtable_101ab45a8;
  if (5 < param_3) {
    puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
    local_f0[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
    local_160 = puVar1;
    // std code
    local_68 = 0;
    local_60 = 0xffffffff;
    local_f0[0] = puVar3 + 0x68;
    local_160 = puVar1;
    // std code
    local_158[0] = (char*)PTR_vtable_101ab4590 + 0x10;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0x18;
    // std code
              ((ostream *)&local_160,"Unicode escape sequence invalid",0x1f);
    local_40 = (unsigned int *)___cxa_allocate_exception(0x28);
    uVar4 = // std code
    *local_40 = 0xffff803a;
    local_34 = (unsigned int)0((int7)((unsigned long)uVar4 >> 8),1);
    // std code
    *(unsigned long long *)(local_40 + 8) = 0;
    local_34 = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(local_40,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
  }
  if (param_3 < 1) {
    uVar5 = 0;
  }
  else {
    this = (XmlReader *)0x0;
    uVar5 = 0;
    do {
      cVar2 = param_2[(long)this];
      iVar6 = -0x30;
      if (((9 < (byte)(cVar2 - 0x30U)) && (iVar6 = -0x37, 5 < (byte)(cVar2 + 0xbfU))) &&
         (iVar6 = -0x57, 5 < (byte)(cVar2 + 0x9fU))) {
        puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
        local_f0[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
        local_160 = puVar1;
        // std code
        local_68 = 0;
        local_60 = 0xffffffff;
        local_f0[0] = puVar3 + 0x68;
        local_160 = puVar1;
        // std code
        local_158[0] = (char*)PTR_vtable_101ab4590 + 0x10;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0x18;
        // std code
                  ((ostream *)&local_160,"Unicode escape sequence invalid",0x1f);
        local_40 = (unsigned int *)___cxa_allocate_exception(0x28);
        uVar4 = // std code
        *local_40 = 0xffff803a;
        local_34 = (unsigned int)0((int7)((unsigned long)uVar4 >> 8),1);
        // std code
        *(unsigned long long *)(local_40 + 8) = 0;
        local_34 = 0;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(local_40,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
      }
      uVar5 = iVar6 + cVar2 + uVar5 * 0x10;
      this = this + 1;
    } while ((XmlReader *)(unsigned long)(uint)param_3 != this);
    if (0x10ffff < uVar5) {
      puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
      local_f0[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
      local_160 = puVar1;
      // std code
      local_68 = 0;
      local_60 = 0xffffffff;
      local_f0[0] = puVar3 + 0x68;
      local_160 = puVar1;
      // std code
      local_158[0] = (char*)PTR_vtable_101ab4590 + 0x10;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0x18;
      // std code
                ((ostream *)&local_160,"Unicode escape sequence invalid",0x1f);
      local_40 = (unsigned int *)___cxa_allocate_exception(0x28);
      uVar4 = // std code
      *local_40 = 0xffff803a;
      local_34 = (unsigned int)0((int7)((unsigned long)uVar4 >> 8),1);
      // std code
      *(unsigned long long *)(local_40 + 8) = 0;
      local_34 = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(local_40,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
    }
  }
  EncodeUtf8(this,param_1,uVar5);
  return;
}
}
