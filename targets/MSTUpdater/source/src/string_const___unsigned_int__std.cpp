#include <ni/controller_editor/string_const___unsigned_int__std.hpp>
namespace NI::NWL::StyleParser2::addErrorMessage(std {

void string const&, unsigned int, std::string const&) {
unsigned long long *puVar1;
  long lVar2;
  __tree_node_base *p_Var3;
  unsigned long long *puVar4;
  byte bVar5;
  unsigned long long *puVar6;
  
  string *local_68;
  unsigned long local_60;
  unsigned long local_58;
  unsigned long long local_50;
  string *local_48;
  unsigned long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1002272e0;
  local_68 = param_1;
  lVar2 = // std code
          __tree<// std code
          ::
          __emplace_unique_key_args<// std code
                    ((string *)(this + 0x38),(piecewise_construct_t *)param_1,
                     (tuple *)&// std code
  local_68 = (string *)CONCAT44(local_68._4_4_,param_2);
  // std code
  p_Var3 = (__tree_node_base *)new(0x40);
  *(uint *)(p_Var3 + 0x20) = (uint)local_68;
  *(unsigned long long *)(p_Var3 + 0x38) = local_50;
  *(unsigned long *)(p_Var3 + 0x30) = local_58;
  *(unsigned long *)(p_Var3 + 0x28) = local_60;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  puVar1 = *(unsigned long long **)(lVar2 + 0x40);
  if (*(unsigned long long **)(lVar2 + 0x40) == (unsigned long long *)0x0) {
    puVar4 = (unsigned long long *)(lVar2 + 0x40);
    puVar6 = puVar4;
  }
  else {
    do {
      while (puVar4 = puVar1, (uint)local_68 < *(uint *)(puVar4 + 4)) {
        puVar1 = (unsigned long long *)*puVar4;
        puVar6 = puVar4;
        if ((unsigned long long *)*puVar4 == (unsigned long long *)0x0) goto LAB_100037c82;
      }
      puVar1 = (unsigned long long *)puVar4[1];
    } while ((unsigned long long *)puVar4[1] != (unsigned long long *)0x0);
    puVar6 = puVar4 + 1;
  }
LAB_100037c82:
  *(unsigned long long *)(p_Var3 + 8) = 0;
  *(unsigned long long *)p_Var3 = 0;
  *(unsigned long long **)(p_Var3 + 0x10) = puVar4;
  *puVar6 = p_Var3;
  if (**(long **)(lVar2 + 0x38) != 0) {
    *(long *)(lVar2 + 0x38) = **(long **)(lVar2 + 0x38);
    p_Var3 = (__tree_node_base *)*puVar6;
  }
  // std code
            (*(__tree_node_base **)(lVar2 + 0x40),p_Var3);
  *(long *)(lVar2 + 0x48) = *(long *)(lVar2 + 0x48) + 1;
  // std code
  bVar5 = (byte)*param_1 & 1;
  local_68 = param_1 + 1;
  if (bVar5 != 0) {
    local_68 = *(string **)(param_1 + 0x10);
  }
  local_60 = (unsigned long)((byte)*param_1 >> 1);
  if (bVar5 != 0) {
    local_60 = *(unsigned long *)(param_1 + 8);
  }
  local_58 = (unsigned long)param_2;
  bVar5 = (byte)*param_3 & 1;
  local_48 = param_3 + 1;
  if (bVar5 != 0) {
    local_48 = *(string **)(param_3 + 0x10);
  }
  local_40 = (unsigned long)((byte)*param_3 >> 1);
  if (bVar5 != 0) {
    local_40 = *(unsigned long *)(param_3 + 8);
  }
  fmt::format(local_80,"Stylesheet error: {0}:{1} - {2}",0xb3b,&local_68);
  StyleSheetErrorsLogSource::log(local_80);
  // std code
  if (*(long *)PTR____stack_chk_guard_1002272e0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}
}
