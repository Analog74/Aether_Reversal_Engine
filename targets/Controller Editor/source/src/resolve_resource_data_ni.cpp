#include <ni/controller_editor/resolve_resource_data_ni.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::compiled_resources {

void resolve_resource_data(ni::symbol, unsigned int) {
int iVar1;
  long lVar2;
  runtime_error *this;
  unsigned long long local_28;
  unsigned int local_20;
  
  if (get_type_index_resource_map()::g_map == '\0') {
    iVar1 = ___cxa_guard_acquire(&get_type_index_resource_map()::g_map);
    if (iVar1 != 0) {
      0 = 0;
      0 = 0;
      get_type_index_resource_map()::g_map = 0;
      0 = 0;
      0 = 0x3f800000;
      ___cxa_atexit(// std code
                    unordered_map<// std code
                    ::~unordered_map,&get_type_index_resource_map()::g_map,0x100000000);
      ___cxa_guard_release(&get_type_index_resource_map()::g_map);
    }
  }
  local_28 = param_1;
  local_20 = param_2;
  lVar2 = // std code
          __hash_table<// std code
          ::find<// std code
                    ((__hash_table<// std code
                      *)&get_type_index_resource_map()::g_map,(tuple *)&local_28);
  if (lVar2 != 0) {
    return *(unsigned char (*) [16])(lVar2 + 0x20);
  }
  this = (runtime_error *)___cxa_allocate_exception(0x10);
  // std code
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_101ab4310,PTR__runtime_error_101ab40c0);
}
}
