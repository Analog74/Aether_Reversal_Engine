#include <ni/controller_editor/symbol_data.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::symbol {

symbol_data::symbol_data(char const*, unsigned long) {
symbol_data *psVar1;
  int iVar2;
  unsigned long long uVar3;
  unsigned long long *local_70;
  long *local_68;
  uint local_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  long local_50;
  unsigned long long local_48;
  unsigned long long uStack_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_101ab4610;
  *(unsigned long long *)this = 0;
  if (get_storage()::g_bufferResource == '\0') {
    iVar2 = ___cxa_guard_acquire(&get_storage()::g_bufferResource);
    if (iVar2 != 0) {
      // boost code
                ((monotonic_buffer_resource *)&get_storage()::g_bufferResource,
                 &get_storage()::g_bufferStorage,0x12000,(memory_resource *)0x0);
      ___cxa_atexit(// boost code
                    &get_storage()::g_bufferResource,0x100000000);
      ___cxa_guard_release(&get_storage()::g_bufferResource);
    }
  }
  local_70 = &get_storage()::g_bufferResource;
  // boost code
  basic_string<char,// std code
  basic_string((basic_string<char,// std code
                *)&local_68,param_1,param_2,(polymorphic_allocator *)&local_70);
  *(long **)(this + 8) = local_68;
  psVar1 = this + 0x10;
  this[0x10] = (symbol_data)0x1;
  if ((local_60 & 1) == 0) {
    local_38 = *(long *)(this + 0x20);
    local_48 = *(unsigned long *)psVar1;
    uStack_40 = *(unsigned long *)(this + 0x18);
    *(unsigned long *)(this + 0x10) = CONCAT44(uStack_5c,local_60) & 0xfffffffffffffffe;
    *(unsigned long *)(this + 0x18) = CONCAT44(uStack_54,uStack_58);
    *(long *)(this + 0x20) = local_50;
  }
  else {
    local_38 = *(long *)(this + 0x20);
    local_48 = *(unsigned long *)psVar1;
    uStack_40 = *(unsigned long *)(this + 0x18);
    *(long *)(this + 0x20) = local_50;
    *(unsigned long *)psVar1 = CONCAT44(uStack_5c,local_60);
    *(unsigned long *)(this + 0x18) = CONCAT44(uStack_54,uStack_58);
  }
  local_50 = local_38;
  local_60 = (unsigned int)local_48;
  uStack_5c = local_48._4_4_;
  uStack_58 = (unsigned int)uStack_40;
  uStack_54 = uStack_40._4_4_;
  *(unsigned int *)(this + 0x28) = 0;
  if ((((local_48 & 1) == 0) && (local_38 != 0)) && (0x17 < uStack_40)) {
    (**(code **)(*local_68 + 0x18))();
  }
  uVar3 = CityHash64(param_1,param_2);
  *(unsigned long long *)(this + 0x30) = uVar3;
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_30) {
    
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
