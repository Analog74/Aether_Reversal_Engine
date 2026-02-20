#include <ni/controller_editor/symbol_table.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::(anonymous namespace) {

symbol_table::~symbol_table() {
unsigned long long *puVar1;
  unsigned long uVar2;
  int iVar3;
  unsigned long long *puVar4;
  long lVar5;
  unsigned long uVar6;
  unsigned long long *puVar7;
  unsigned char local_38 [8];
  
  lVar5 = *(long *)(this + 0x8008);
  if (lVar5 != 0) {
    puVar4 = *(unsigned long long **)(this + 0x8000);
    do {
      lVar5 = lVar5 + -1;
      puVar7 = (unsigned long long *)*puVar4;
      while (puVar7 != puVar4) {
        puVar1 = (unsigned long long *)*puVar7;
        *puVar7 = 0;
        if ((unsigned long)*(uint *)(puVar7 + 5) != 0xffffffff) {
          (*(code *)(&
                    PTR___dispatch<// std code
                    )[*(uint *)(puVar7 + 5)])(local_38,puVar7 + 1);
        }
        *(unsigned int *)(puVar7 + 5) = 0xffffffff;
        if ((get_storage()::g_bufferResource == '\0') &&
           (iVar3 = ___cxa_guard_acquire(&get_storage()::g_bufferResource), iVar3 != 0)) {
          // boost code
                    ((monotonic_buffer_resource *)&get_storage()::g_bufferResource,
                     &get_storage()::g_bufferStorage,0x12000,(memory_resource *)0x0);
          ___cxa_atexit(// boost code
                        ,&get_storage()::g_bufferResource,0x100000000);
          ___cxa_guard_release(&get_storage()::g_bufferResource);
        }
        (**(code **)(get_storage()::g_bufferResource + 0x18))
                  (&get_storage()::g_bufferResource,puVar7,0x40);
        puVar7 = puVar1;
      }
      *puVar4 = puVar4;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  // std code
  uVar2 = *(unsigned long *)(this + 0x8008);
  if (uVar2 != 0) {
    puVar4 = *(unsigned long long **)(this + 0x8000);
    if (uVar2 != 1) {
      uVar6 = uVar2 & 0xfffffffffffffffe;
      do {
        puVar7 = (unsigned long long *)*puVar4;
        while (puVar7 != puVar4) {
          puVar1 = (unsigned long long *)*puVar7;
          *puVar7 = 0;
          puVar7 = puVar1;
        }
        *puVar4 = puVar4;
        puVar7 = (unsigned long long *)puVar4[1];
        while (puVar7 != puVar4 + 1) {
          puVar1 = (unsigned long long *)*puVar7;
          *puVar7 = 0;
          puVar7 = puVar1;
        }
        puVar4[1] = puVar4 + 1;
        puVar4 = puVar4 + 2;
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    if ((uVar2 & 1) != 0) {
      puVar7 = (unsigned long long *)*puVar4;
      while (puVar7 != puVar4) {
        puVar1 = (unsigned long long *)*puVar7;
        *puVar7 = 0;
        puVar7 = puVar1;
      }
      *puVar4 = puVar4;
    }
  }
  return;
}
}
