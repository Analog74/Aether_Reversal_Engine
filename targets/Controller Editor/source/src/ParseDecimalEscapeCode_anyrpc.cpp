#include <ni/controller_editor/ParseDecimalEscapeCode_anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::XmlReader {

void ParseDecimalEscapeCode(3 param_3, anyrpc::Stream&, char const*, int {
void *puVar1;
  void *puVar2;
  uint uVar3;
  unsigned long long uVar4;
  void *local_168;
  void *local_160 [8];
  unsigned long long local_120;
  unsigned long long uStack_118;
  unsigned long long local_110;
  unsigned long long uStack_108;
  unsigned int local_100;
  void *local_f8 [17];
  unsigned long long local_70;
  unsigned int local_68;
  
  unsigned int *local_48;
  unsigned int local_34;
  
  puVar2 = PTR_vtable_101ab45a8;
  if (7 < param_3) {
    puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
    local_f8[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
    local_168 = puVar1;
    // std code
    local_70 = 0;
    local_68 = 0xffffffff;
    local_f8[0] = puVar2 + 0x68;
    local_168 = puVar1;
    // std code
    local_160[0] = (char*)PTR_vtable_101ab4590 + 0x10;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0x18;
    // std code
              ((ostream *)&local_168,"Unicode escape sequence invalid",0x1f);
    local_48 = (unsigned int *)___cxa_allocate_exception(0x28);
    uVar4 = // std code
    *local_48 = 0xffff803a;
    local_34 = (unsigned int)0((int7)((unsigned long)uVar4 >> 8),1);
    // std code
    *(unsigned long long *)(local_48 + 8) = 0;
    local_34 = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(local_48,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
  }
  if (param_3 < 1) {
    uVar3 = 0;
  }
  else {
    this = (XmlReader *)0x0;
    uVar3 = 0;
    do {
      if (9 < (byte)(param_2[(long)this] - 0x30U)) {
        puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
        local_f8[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
        local_168 = puVar1;
        // std code
        local_70 = 0;
        local_68 = 0xffffffff;
        local_f8[0] = puVar2 + 0x68;
        local_168 = puVar1;
        // std code
        local_160[0] = (char*)PTR_vtable_101ab4590 + 0x10;
        local_120 = 0;
        uStack_118 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_100 = 0x18;
        // std code
                  ((ostream *)&local_168,"Unicode escape sequence invalid",0x1f);
        local_48 = (unsigned int *)___cxa_allocate_exception(0x28);
        uVar4 = // std code
        *local_48 = 0xffff803a;
        local_34 = (unsigned int)0((int7)((unsigned long)uVar4 >> 8),1);
        // std code
        *(unsigned long long *)(local_48 + 8) = 0;
        local_34 = 0;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(local_48,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
      }
      uVar3 = ((uint)(byte)param_2[(long)this] + uVar3 * 10) - 0x30;
      this = this + 1;
    } while ((XmlReader *)(unsigned long)(uint)param_3 != this);
    if (0x10ffff < uVar3) {
      puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
      local_f8[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
      local_168 = puVar1;
      // std code
      local_70 = 0;
      local_68 = 0xffffffff;
      local_f8[0] = puVar2 + 0x68;
      local_168 = puVar1;
      // std code
      local_160[0] = (char*)PTR_vtable_101ab4590 + 0x10;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_100 = 0x18;
      // std code
                ((ostream *)&local_168,"Unicode escape sequence invalid",0x1f);
      local_48 = (unsigned int *)___cxa_allocate_exception(0x28);
      uVar4 = // std code
      *local_48 = 0xffff803a;
      local_34 = (unsigned int)0((int7)((unsigned long)uVar4 >> 8),1);
      // std code
      *(unsigned long long *)(local_48 + 8) = 0;
      local_34 = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(local_48,&AnyRpcException::typeinfo,AnyRpcException::~AnyRpcException);
    }
  }
  EncodeUtf8(this,param_1,uVar3);
  return;
}
}
