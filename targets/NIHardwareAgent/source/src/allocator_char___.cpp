#include <ni/controller_editor/allocator_char___.hpp>
namespace boost::basic_format<char, std::char_traits<char>, std {

void allocator<char> >::~basic_format() {
byte bVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (this[0xb8] != (basic_format<char,// std code
    // std code
    this[0xb8] = (basic_format<char,// std code
  }
  *(void ***)(this + 0x60) = &PTR__basic_altstringbuf_1009e61e0;
  if (this[0xa8] != (basic_format<char,// std code
    delete(*(void **)(this + 0x70));
  }
  *(unsigned long long *)(this + 0x99) = 0;
  *(unsigned long long *)(this + 0xa1) = 0;
  *(unsigned long long *)(this + 0x90) = 0;
  *(unsigned long long *)(this + 0x98) = 0;
  *(unsigned long long *)(this + 0x80) = 0;
  *(unsigned long long *)(this + 0x88) = 0;
  *(unsigned long long *)(this + 0x70) = 0;
  *(unsigned long long *)(this + 0x78) = 0;
  // std code
  if (((byte)this[0x40] & 1) != 0) {
    delete(*(void **)(this + 0x50));
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    delete(*(void **)(this + 0x18));
  }
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)(this + 8);
    pvVar4 = pvVar2;
    if (pvVar3 != pvVar2) {
      do {
        if (*(char *)((long)pvVar3 + -0x20) != '\0') {
          // std code
          *(unsigned char *)((long)pvVar3 + -0x20) = 0;
        }
        if ((*(byte *)((long)pvVar3 + -0x58) & 1) == 0) {
          bVar1 = *(byte *)((long)pvVar3 + -0x70);
        }
        else {
          delete(*(void **)((long)pvVar3 + -0x48));
          bVar1 = *(byte *)((long)pvVar3 + -0x70);
        }
        if ((bVar1 & 1) != 0) {
          delete(*(void **)((long)pvVar3 + -0x60));
        }
        pvVar3 = (void *)((long)pvVar3 + -0x78);
      } while (pvVar2 != pvVar3);
      pvVar4 = *(void **)this;
    }
    *(void **)(this + 8) = pvVar2;
    delete(pvVar4);
    return;
  }
  return;
}
}
