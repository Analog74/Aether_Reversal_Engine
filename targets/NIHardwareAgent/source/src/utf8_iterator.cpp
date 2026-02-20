#include <ni/controller_editor/utf8_iterator.hpp>
namespace ni::string {

void utf8_iterator::import_next_codepoint() {
char *pcVar1;
  long lVar2;
  
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned int *)this = 0;
  pcVar1 = *(char **)(this + 0x10);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    lVar2 = _utf8proc_iterate(pcVar1,0xffffffffffffffff,this);
    *(unsigned int *)(this + 4) = 0;
    if (0 < lVar2) {
      *(long *)(this + 0x18) = lVar2;
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + lVar2;
    }
  }
  return;
}

void utf8_iterator::import_next_nfc_codepoint() {
utf8_iterator *puVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  utf8_iterator *puVar5;
  unsigned long long uVar6;
  
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned int *)this = 0;
  pcVar2 = *(char **)(this + 0x10);
  if (pcVar2 == (char *)0x0) {
    return;
  }
  if (*pcVar2 == '\0') {
    return;
  }
  lVar3 = _utf8proc_iterate(pcVar2,0xffffffffffffffff,this);
  *(unsigned int *)(this + 4) = 0;
  if (lVar3 < 1) {
    return;
  }
  puVar1 = this + 4;
  lVar4 = _utf8proc_iterate(pcVar2 + lVar3,0xffffffffffffffff,puVar1);
  if ((0 < lVar4) && (*(int *)puVar1 - 0x300U < 0x70)) {
    lVar3 = lVar4 + lVar3;
    puVar5 = this + 8;
    lVar4 = _utf8proc_iterate(pcVar2 + lVar3,0xffffffffffffffff);
    uVar6 = 2;
    if ((lVar4 < 1) || (0x6f < *(int *)puVar5 - 0x300U)) {
LAB_10030cab8:
      *(int *)puVar5 = 0;
    }
    else {
      lVar3 = lVar3 + lVar4;
      puVar5 = this + 0xc;
      lVar4 = _utf8proc_iterate(pcVar2 + lVar3,0xffffffffffffffff);
      uVar6 = 3;
      if ((lVar4 < 1) || (0x6f < *(int *)puVar5 - 0x300U)) goto LAB_10030cab8;
      lVar3 = lVar4 + lVar3;
      uVar6 = 4;
    }
    lVar4 = _utf8proc_normalize_utf32(this,uVar6,10);
    if (lVar4 < 1) goto LAB_10030cada;
  }
  *(int *)puVar1 = 0;
LAB_10030cada:
  *(long *)(this + 0x18) = lVar3;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + lVar3;
  return;
}

void utf8_iterator::import_next_nfd_codepoint() {
char *pcVar1;
  long lVar2;
  long lVar3;
  
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned int *)this = 0;
  pcVar1 = *(char **)(this + 0x10);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    lVar2 = _utf8proc_iterate(pcVar1,0xffffffffffffffff,this);
    *(unsigned int *)(this + 4) = 0;
    if (0 < lVar2) {
      if ((lVar2 != 1) && (lVar3 = _utf8proc_decompose(pcVar1,lVar2,this,4,0x12), lVar3 < 1)) {
        return;
      }
      *(long *)(this + 0x18) = lVar2;
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + lVar2;
    }
  }
  return;
}
}
