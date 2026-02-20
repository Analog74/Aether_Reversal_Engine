#include <ni/controller_editor/xml_text.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pugi {

void xml_text::_data_new() {
unsigned long uVar1;
  unsigned long *puVar2;
  unsigned long *puVar3;
  xml_allocator *this_00;
  unsigned long uVar4;
  uint uVar5;
  xml_memory_page *in_RAX;
  xml_memory_page *pxVar6;
  uint uVar7;
  xml_memory_page *local_18;
  
  puVar2 = *(unsigned long **)this;
  if (puVar2 != (unsigned long *)0x0) {
    uVar5 = (uint)*puVar2;
    uVar7 = uVar5 & 0xf;
    if (uVar7 - 3 < 2) {
      return puVar2;
    }
    if (((uVar5 & 0xf) == 2) && (puVar2[2] != 0)) {
      return puVar2;
    }
    for (puVar3 = (unsigned long *)puVar2[4]; puVar3 != (unsigned long *)0x0; puVar3 = (unsigned long *)puVar3[6]) {
      if (((uint)*puVar3 & 0xf) - 3 < 2) {
        return puVar3;
      }
    }
    if (uVar7 - 1 < 2) {
      this_00 = *(xml_allocator **)((long)puVar2 - (*puVar2 >> 8));
      uVar1 = *(long *)(this_00 + 8) + 0x40;
      if (uVar1 < 0x7fd9) {
        local_18 = *(xml_memory_page **)this_00;
        pxVar6 = local_18 + *(long *)(this_00 + 8) + 0x28;
        *(unsigned long *)(this_00 + 8) = uVar1;
      }
      else {
        local_18 = in_RAX;
        pxVar6 = (xml_memory_page *)
                 impl::(anonymous_namespace)::xml_allocator::allocate_memory_oob
                           (this_00,0x40,&local_18);
        if (pxVar6 == (xml_memory_page *)0x0) {
          return (unsigned long *)0x0;
        }
      }
      *(unsigned long *)(pxVar6 + 0x28) = 0;
      *(unsigned long *)(pxVar6 + 0x30) = 0;
      *(unsigned long *)(pxVar6 + 0x18) = 0;
      *(unsigned long *)(pxVar6 + 0x20) = 0;
      *(unsigned long *)(pxVar6 + 8) = 0;
      *(unsigned long *)(pxVar6 + 0x10) = 0;
      *(unsigned long *)(pxVar6 + 0x38) = 0;
      *(unsigned long *)pxVar6 = ((long)pxVar6 - (long)local_18) * 0x100 | 3;
      *(unsigned long **)(pxVar6 + 0x18) = puVar2;
      uVar1 = puVar2[4];
      if (uVar1 == 0) {
        puVar2[4] = (unsigned long)pxVar6;
        *(xml_memory_page **)(pxVar6 + 0x28) = pxVar6;
        return (unsigned long *)pxVar6;
      }
      uVar4 = *(unsigned long *)(uVar1 + 0x28);
      *(xml_memory_page **)(uVar4 + 0x30) = pxVar6;
      *(unsigned long *)(pxVar6 + 0x28) = uVar4;
      *(xml_memory_page **)(uVar1 + 0x28) = pxVar6;
      return (unsigned long *)pxVar6;
    }
  }
  return (unsigned long *)0x0;
}

void xml_text::as_float(float) const {
uint *puVar1;
  double dVar2;
  
  puVar1 = *(uint **)this;
  if (puVar1 != (uint *)0x0) {
    if ((((uint)*(unsigned long long *)puVar1 & 0xf) - 3 < 2) ||
       ((((uint)*(unsigned long long *)puVar1 & 0xf) == 2 && (*(long *)(puVar1 + 4) != 0)))) {
      if (*(char **)(puVar1 + 4) != (char *)0x0) {
        dVar2 = _strtod(*(char **)(puVar1 + 4),(char **)0x0);
        param_1 = (float)dVar2;
      }
    }
    else {
      for (puVar1 = *(uint **)(puVar1 + 8); puVar1 != (uint *)0x0; puVar1 = *(uint **)(puVar1 + 0xc)
          ) {
        if ((*puVar1 & 0xf) - 3 < 2) return;
      }
    }
  }
  return param_1;
}

void xml_text::as_int(int) const {
uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)this;
  if (puVar2 != (uint *)0x0) {
    if ((((uint)*(unsigned long long *)puVar2 & 0xf) - 3 < 2) ||
       ((((uint)*(unsigned long long *)puVar2 & 0xf) == 2 && (*(long *)(puVar2 + 4) != 0)))) {
      if (*(char **)(puVar2 + 4) != (char *)0x0) {
        uVar1 = impl::(anonymous_namespace)::string_to_integer<unsigned_int>
                          (*(char **)(puVar2 + 4),0x80000000,0x7fffffff);
        return uVar1;
      }
    }
    else {
      for (puVar2 = *(uint **)(puVar2 + 8); puVar2 != (uint *)0x0; puVar2 = *(uint **)(puVar2 + 0xc)
          ) {
        if ((*puVar2 & 0xf) - 3 < 2) return;
      }
    }
  }
  return param_1;
}

void xml_text::as_uint(unsigned int) const {
uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)this;
  if (puVar2 != (uint *)0x0) {
    if ((((uint)*(unsigned long long *)puVar2 & 0xf) - 3 < 2) ||
       ((((uint)*(unsigned long long *)puVar2 & 0xf) == 2 && (*(long *)(puVar2 + 4) != 0)))) {
      if (*(char **)(puVar2 + 4) != (char *)0x0) {
        uVar1 = impl::(anonymous_namespace)::string_to_integer<unsigned_int>
                          (*(char **)(puVar2 + 4),0,0xffffffff);
        return uVar1;
      }
    }
    else {
      for (puVar2 = *(uint **)(puVar2 + 8); puVar2 != (uint *)0x0; puVar2 = *(uint **)(puVar2 + 0xc)
          ) {
        if ((*puVar2 & 0xf) - 3 < 2) return;
      }
    }
  }
  return param_1;
}

xml_text::xml_text() {
*(unsigned long long *)this = 0;
  
}
}
