#include <ni/controller_editor/xml_document.hpp>
namespace pugi {

void xml_document::document_element() const {
uint *puVar1;
  
  puVar1 = *(uint **)(*(long *)this + 0x20);
  while( true ) {
    if (puVar1 == (uint *)0x0) {
      return (uint *)0x0;
    }
    if ((*puVar1 & 0xf) == 2) break;
    puVar1 = *(uint **)(puVar1 + 0xc);
  }
  return puVar1;
}

xml_document::xml_document() {
*(unsigned long long *)(this + 0x28) = 0;
  *(unsigned long long *)(this + 0x30) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x28) = 0x7fd8;
  *(unsigned long long *)(this + 0x60) = 0;
  *(unsigned long long *)(this + 0x68) = 0;
  *(unsigned long long *)(this + 0x40) = 0;
  *(unsigned long long *)(this + 0x48) = 0;
  *(unsigned long long *)(this + 0x50) = 0;
  *(unsigned long long *)(this + 0x58) = 0;
  *(unsigned long long *)(this + 0x70) = 0;
  *(unsigned long long *)(this + 0x38) = 0x2801;
  *(xml_document **)(this + 0x78) = this + 0x10;
  *(unsigned long long *)(this + 0x80) = 0x7fd8;
  *(unsigned long long *)(this + 0x88) = 0;
  *(unsigned long long *)(this + 0x90) = 0;
  *(xml_document **)this = this + 0x38;
  *(xml_document **)(this + 0x60) = this + 0x38;
  *(xml_document **)(this + 0x10) = this + 0x78;
  
}

xml_document::~xml_document() {
long lVar1;
  unsigned long *puVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(this + 8) != 0) {
    (*impl::(anonymous_namespace)::xml_memory_management_function_storage<int>::deallocate)();
    *(unsigned long long *)(this + 8) = 0;
  }
  puVar2 = *(unsigned long **)this;
  plVar3 = (long *)puVar2[0xb];
  if (plVar3 != (long *)0x0) {
    do {
      if (*plVar3 != 0) {
        (*impl::(anonymous_namespace)::xml_memory_management_function_storage<int>::deallocate)();
      }
      plVar3 = (long *)plVar3[1];
    } while (plVar3 != (long *)0x0);
    puVar2 = *(unsigned long **)this;
  }
  lVar4 = *(long *)((long)puVar2 + (0x10 - (*puVar2 >> 8)));
  while (lVar4 != 0) {
    lVar1 = *(long *)(lVar4 + 0x10);
    (*impl::(anonymous_namespace)::xml_memory_management_function_storage<int>::deallocate)(lVar4);
    lVar4 = lVar1;
  }
  *(unsigned long long *)this = 0;
  return;
}
}
