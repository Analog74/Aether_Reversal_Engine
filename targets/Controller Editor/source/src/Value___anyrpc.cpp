#include <ni/controller_editor/Value___anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::robot::server::implementation::RunKeyword(anyrpc {

void Value&, anyrpc::Value&) const {
void *puVar1;
  void *puVar2;
  long lVar3;
  Value *pVVar4;
  size_t sVar5;
  unsigned long *puVar6;
  unsigned long long uVar7;
  unsigned long uVar8;
  char *pcVar9;
  Value local_1b8 [24];
  char *local_1a0;
  void *local_198;
  unsigned long long local_190;
  void *local_188;
  void *local_180 [8];
  unsigned long long local_140;
  unsigned long long uStack_138;
  unsigned long long local_130;
  unsigned long long uStack_128;
  unsigned int local_120;
  void *local_118 [17];
  unsigned long long local_90;
  unsigned int local_88;
  unsigned long local_80;
  unsigned long long local_78;
  size_t local_70;
  void *local_68;
  unsigned int *local_60;
  unsigned long long local_58;
  unsigned long uStack_50;
  char *local_48;
  unsigned long long local_40;
  unsigned long long local_38;
  
  lVar3 = anyrpc::Value::operator[](param_1,0);
  puVar2 = PTR_vtable_101ab45a8;
  if ((*(byte *)(lVar3 + 0x12) & 0x10) == 0) {
    puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
    local_198 = (char*)PTR_construction_vtable_101ab4158 + 0x18;
    local_118[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
    local_190 = 0;
    local_188 = puVar1;
    // std code
    local_90 = 0;
    local_88 = 0xffffffff;
    local_198 = puVar2 + 0x18;
    local_118[0] = puVar2 + 0x68;
    local_188 = puVar1;
    local_60 = (unsigned int *)local_198;
    // std code
    local_180[0] = (char*)PTR_vtable_101ab4590 + 0x10;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0x18;
    pVVar4 = (Value *)anyrpc::Value::operator[](param_1,0);
    local_40 = (char *)anyrpc::Value::GetString(pVVar4);
    sVar5 = strlen(local_40);
    if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    if (sVar5 < 0x17) {
      local_78 = 0(local_78._1_7_,(char)sVar5 * '\x02');
      local_38 = (void *)((long)&local_78 + 1);
      if (sVar5 == 0) return;
    }
    else {
      local_80 = sVar5 + 0x10 & 0xfffffffffffffff0;
      local_68 = new char[local_80];
      local_78 = local_80 | 1;
      local_70 = sVar5;
      local_38 = local_68;
    }
    memcpy(local_38,local_40,sVar5);
    *(unsigned char *)((long)local_38 + sVar5) = 0;
    puVar6 = (unsigned long *)// std code
    local_48 = (char *)puVar6[2];
    local_58 = (Value *)*puVar6;
    uStack_50 = puVar6[1];
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    uVar8 = uStack_50;
    pcVar9 = local_48;
    if (((unsigned long)local_58 & 1) == 0) {
      uVar8 = (unsigned long)local_58 >> 1 & 0x7f;
      pcVar9 = (char *)((long)&local_58 + 1);
    }
    // std code
    if (((unsigned long)local_58 & 1) != 0) {
      delete(local_48);
    }
    if ((local_78 & 1) != 0) {
      delete(local_68);
    }
    local_40 = (char *)___cxa_allocate_exception(0x28);
    uVar7 = // std code
    *(unsigned int *)local_40 = 0xffff80a6;
    local_38._0_4_ = (int)0((int7)((unsigned long)uVar7 >> 8),1);
    // std code
    *(unsigned long long *)((long)local_40 + 0x20) = 0;
    local_38 = (void *)((unsigned long)local_38._4_4_ << 0x20);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(local_40,&anyrpc::AnyRpcException::typeinfo,
                 anyrpc::AnyRpcException::~AnyRpcException);
  }
  lVar3 = anyrpc::Value::operator[](param_1,1);
  puVar2 = PTR_vtable_101ab45a8;
  if (*(char *)(lVar3 + 0x10) != '\x05') {
    puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
    local_198 = (char*)PTR_construction_vtable_101ab4158 + 0x18;
    local_118[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
    local_190 = 0;
    local_188 = puVar1;
    // std code
    local_90 = 0;
    local_88 = 0xffffffff;
    local_198 = puVar2 + 0x18;
    local_118[0] = puVar2 + 0x68;
    local_188 = puVar1;
    // std code
    local_180[0] = (char*)PTR_vtable_101ab4590 + 0x10;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0x18;
    // std code
              ((ostream *)&local_188,"Invalid argument type. Parameters are not an array!",0x33);
    local_60 = (unsigned int *)___cxa_allocate_exception(0x28);
    uVar7 = // std code
    *local_60 = 0xffff80a6;
    local_40._0_4_ = (unsigned int)0((int7)((unsigned long)uVar7 >> 8),1);
    // std code
    *(unsigned long long *)(local_60 + 8) = 0;
    local_40 = (char *)((unsigned long)local_40._4_4_ << 0x20);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(local_60,&anyrpc::AnyRpcException::typeinfo,
                 anyrpc::AnyRpcException::~AnyRpcException);
  }
  pVVar4 = (Value *)anyrpc::Value::operator[](param_1,0);
  local_198 = (void *)anyrpc::Value::GetString(pVVar4);
  // boost code
  find<char_const*>(&local_1a0);
  puVar2 = PTR_vtable_101ab45a8;
  if (local_1a0 != (char *)(*(long *)(this + 0x110) * 0xa0 + *(long *)(this + 0x108))) {
    anyrpc::Value::operator[](param_1,1);
    robot::detail::keyword::execute((keyword *)&local_58,(Value *)(local_1a0 + 0x20));
    anyrpc::Value::Value(local_1b8,local_58);
    robot::detail::robot_return<anyrpc::Value>::pass
              ((robot_return<anyrpc::Value> *)&local_198,local_1b8);
    anyrpc::Value::operator=(param_2,(Value *)&local_198);
    anyrpc::Value::~Value((Value *)&local_198);
    anyrpc::Value::~Value(local_1b8);
    pVVar4 = local_58;
    local_58 = (Value *)0x0;
    if (pVVar4 != (Value *)0x0) {
      robot::detail::anyrpc_value_deleter::operator()((anyrpc_value_deleter *)&local_58,pVVar4);
    }
    return;
  }
  puVar1 = (char*)PTR_vtable_101ab45a8 + 0x40;
  local_198 = (char*)PTR_construction_vtable_101ab4158 + 0x18;
  local_118[0] = (char*)PTR_construction_vtable_101ab4158 + 0x40;
  local_190 = 0;
  local_188 = puVar1;
  // std code
  local_90 = 0;
  local_88 = 0xffffffff;
  local_198 = puVar2 + 0x18;
  local_118[0] = puVar2 + 0x68;
  local_188 = puVar1;
  local_60 = (unsigned int *)local_198;
  // std code
  local_180[0] = (char*)PTR_vtable_101ab4590 + 0x10;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0x18;
  pVVar4 = (Value *)anyrpc::Value::operator[](param_1,0);
  local_40 = (char *)anyrpc::Value::GetString(pVVar4);
  sVar5 = strlen(local_40);
  if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar5 < 0x17) {
    local_78 = 0(local_78._1_7_,(char)sVar5 * '\x02');
    local_38 = (void *)((long)&local_78 + 1);
    if (sVar5 == 0) return;
  }
  else {
    local_80 = sVar5 + 0x10 & 0xfffffffffffffff0;
    local_68 = new char[local_80];
    local_78 = local_80 | 1;
    local_70 = sVar5;
    local_38 = local_68;
  }
  memcpy(local_38,local_40,sVar5);
  *(unsigned char *)((long)local_38 + sVar5) = 0;
  puVar6 = (unsigned long *)// std code
  local_48 = (char *)puVar6[2];
  local_58 = (Value *)*puVar6;
  uStack_50 = puVar6[1];
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  uVar8 = uStack_50;
  pcVar9 = local_48;
  if (((unsigned long)local_58 & 1) == 0) {
    uVar8 = (unsigned long)local_58 >> 1 & 0x7f;
    pcVar9 = (char *)((long)&local_58 + 1);
  }
  // std code
  if (((unsigned long)local_58 & 1) != 0) {
    delete(local_48);
  }
  if ((local_78 & 1) != 0) {
    delete(local_68);
  }
  local_40 = (char *)___cxa_allocate_exception(0x28);
  uVar7 = // std code
  *(unsigned int *)local_40 = 0xffff80a7;
  local_38._0_4_ = (int)0((int7)((unsigned long)uVar7 >> 8),1);
  // std code
  *(unsigned long long *)((long)local_40 + 0x20) = 0;
  local_38 = (void *)((unsigned long)local_38._4_4_ << 0x20);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(local_40,&anyrpc::AnyRpcException::typeinfo,anyrpc::AnyRpcException::~AnyRpcException
              );
}
}
