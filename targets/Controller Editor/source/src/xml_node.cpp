#include <ni/controller_editor/xml_node.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pugi {

void xml_node::append_attribute(char const*) {
unsigned long uVar1;
  unsigned long *puVar2;
  xml_allocator *this_00;
  xml_memory_page *pxVar3;
  size_t sVar4;
  uint uVar5;
  xml_memory_page *pxVar6;
  xml_memory_page *local_30;
  
  puVar2 = *(unsigned long **)this;
  if ((puVar2 == (unsigned long *)0x0) || ((uVar5 = (uint)*puVar2 & 0xf, uVar5 != 7 && (uVar5 != 2)))) {
    pxVar6 = (xml_memory_page *)0x0;
  }
  else {
    this_00 = *(xml_allocator **)((long)puVar2 - (*puVar2 >> 8));
    uVar1 = *(long *)(this_00 + 8) + 0x28;
    if (uVar1 < 0x7fd9) {
      local_30 = *(xml_memory_page **)this_00;
      pxVar6 = local_30 + *(long *)(this_00 + 8) + 0x28;
      *(unsigned long *)(this_00 + 8) = uVar1;
    }
    else {
      pxVar6 = (xml_memory_page *)
               impl::(anonymous_namespace)::xml_allocator::allocate_memory_oob
                         (this_00,0x28,&local_30);
      if (pxVar6 == (xml_memory_page *)0x0) return;
    }
    *(unsigned long *)(pxVar6 + 0x18) = 0;
    *(unsigned long *)(pxVar6 + 0x20) = 0;
    *(unsigned long *)(pxVar6 + 8) = 0;
    *(unsigned long *)(pxVar6 + 0x10) = 0;
    *(long *)pxVar6 = ((long)pxVar6 - (long)local_30) * 0x100;
    pxVar3 = *(xml_memory_page **)(*(long *)this + 0x38);
    if (pxVar3 == (xml_memory_page *)0x0) {
      *(xml_memory_page **)(*(long *)this + 0x38) = pxVar6;
      pxVar3 = pxVar6;
    }
    else {
      uVar1 = *(unsigned long *)(pxVar3 + 0x18);
      *(xml_memory_page **)(uVar1 + 0x20) = pxVar6;
      *(unsigned long *)(pxVar6 + 0x18) = uVar1;
    }
    *(xml_memory_page **)(pxVar3 + 0x18) = pxVar6;
    sVar4 = strlen(param_1);
    impl::(anonymous_namespace)::strcpy_insitu<char*,unsigned_long>
              ((char **)(pxVar6 + 8),(unsigned long *)pxVar6,0x20,param_1,sVar4);
  }
  return pxVar6;
}

void xml_node::append_child(char const*) {
unsigned long uVar1;
  unsigned long *puVar2;
  xml_allocator *this_00;
  xml_memory_page *pxVar3;
  size_t sVar4;
  xml_memory_page *pxVar5;
  xml_memory_page *local_30;
  
  puVar2 = *(unsigned long **)this;
  if ((puVar2 == (unsigned long *)0x0) || (1 < ((uint)*puVar2 & 0xf) - 1)) {
    pxVar5 = (xml_memory_page *)0x0;
  }
  else {
    this_00 = *(xml_allocator **)((long)puVar2 - (*puVar2 >> 8));
    uVar1 = *(long *)(this_00 + 8) + 0x40;
    if (uVar1 < 0x7fd9) {
      local_30 = *(xml_memory_page **)this_00;
      pxVar5 = local_30 + *(long *)(this_00 + 8) + 0x28;
      *(unsigned long *)(this_00 + 8) = uVar1;
    }
    else {
      pxVar5 = (xml_memory_page *)
               impl::(anonymous_namespace)::xml_allocator::allocate_memory_oob
                         (this_00,0x40,&local_30);
      if (pxVar5 == (xml_memory_page *)0x0) return;
    }
    *(unsigned long *)(pxVar5 + 0x28) = 0;
    *(unsigned long *)(pxVar5 + 0x30) = 0;
    *(unsigned long *)(pxVar5 + 0x18) = 0;
    *(unsigned long *)(pxVar5 + 0x20) = 0;
    *(unsigned long *)(pxVar5 + 8) = 0;
    *(unsigned long *)(pxVar5 + 0x10) = 0;
    *(unsigned long *)(pxVar5 + 0x38) = 0;
    *(unsigned long *)pxVar5 = ((long)pxVar5 - (long)local_30) * 0x100 | 2;
    uVar1 = *(unsigned long *)this;
    *(unsigned long *)(pxVar5 + 0x18) = uVar1;
    pxVar3 = *(xml_memory_page **)(uVar1 + 0x20);
    if (pxVar3 == (xml_memory_page *)0x0) {
      *(xml_memory_page **)(uVar1 + 0x20) = pxVar5;
      pxVar3 = pxVar5;
    }
    else {
      uVar1 = *(unsigned long *)(pxVar3 + 0x28);
      *(xml_memory_page **)(uVar1 + 0x30) = pxVar5;
      *(unsigned long *)(pxVar5 + 0x28) = uVar1;
    }
    *(xml_memory_page **)(pxVar3 + 0x28) = pxVar5;
    sVar4 = strlen(param_1);
    impl::(anonymous_namespace)::strcpy_insitu<char*,unsigned_long>
              ((char **)(pxVar5 + 8),(unsigned long *)pxVar5,0x20,param_1,sVar4);
  }
  return pxVar5;
}

void xml_node::attribute(char const*) const {
long lVar1;
  int iVar2;
  
  if (*(long *)this != 0) {
    for (lVar1 = *(long *)(*(long *)this + 0x38); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if ((*(char **)(lVar1 + 8) != (char *)0x0) &&
         (iVar2 = _strcmp(param_1,*(char **)(lVar1 + 8)), iVar2 == 0)) {
        return lVar1;
      }
    }
  }
  return 0;
}

void xml_node::attributes() const {
long lVar1;
  unsigned long long uVar2;
  long *in_RSI;
  unsigned long long *in_RDI;
  
  lVar1 = *in_RSI;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(unsigned long long *)(lVar1 + 0x38);
  }
  *in_RDI = uVar2;
  in_RDI[1] = lVar1;
  in_RDI[2] = 0;
  in_RDI[3] = lVar1;
  return;
}

void xml_node::child(char const*) const {
long lVar1;
  int iVar2;
  
  if (*(long *)this != 0) {
    for (lVar1 = *(long *)(*(long *)this + 0x20); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x30)) {
      if ((*(char **)(lVar1 + 8) != (char *)0x0) &&
         (iVar2 = _strcmp(param_1,*(char **)(lVar1 + 8)), iVar2 == 0)) {
        return lVar1;
      }
    }
  }
  return 0;
}

void xml_node::first_child() const {
if (*(long *)this != 0) {
    return *(unsigned long long *)(*(long *)this + 0x20);
  }
  return 0;
}

void xml_node::next_sibling() const {
if (*(long *)this != 0) {
    return *(unsigned long long *)(*(long *)this + 0x30);
  }
  return 0;
}

void xml_node::TEMPNAMEPLACEHOLDERVALUE() const {
return *(long *)this == 0;
}

void xml_node::text() const {
return *(unsigned long long *)this;
}

xml_node::xml_node() {
*(unsigned long long *)this = 0;
  
}
}
