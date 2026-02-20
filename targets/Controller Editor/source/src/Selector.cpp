#include <ni/controller_editor/Selector.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

void Selector::getDebugString() const {
long *plVar1;
  long *plVar2;
  long in_RSI;
  unsigned char *puVar3;
  unsigned long long in_RDI;
  byte bStack_a8;
  long lStack_a0;
  void *pvStack_98;
  byte bStack_90;
  unsigned char auStack_8f [7];
  unsigned long uStack_88;
  unsigned char *puStack_80;
  unsigned long long uStack_78;
  unsigned long uStack_70;
  void *pvStack_68;
  unsigned long long uStack_58;
  code *pcStack_50;
  unsigned char *puStack_48;
  unsigned long uStack_40;
  
  uStack_78 = 0;
  uStack_70 = 0;
  pvStack_68 = (void *)0x0;
  plVar2 = (long *)(in_RSI + 0x30);
  plVar1 = *(long **)(in_RSI + 0x38);
  if (plVar2 != plVar1) {
    do {
      ClassSelector::getDebugString();
      puVar3 = puStack_48;
      if (((unsigned long)uStack_58 & 1) == 0) {
        puVar3 = (unsigned char *)((long)&uStack_58 + 1);
      }
      // std code
      if (((unsigned long)uStack_58 & 1) != 0) {
        delete(puStack_48);
      }
      // std code
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar1);
  }
  ClassSelector::getDebugString();
  puVar3 = puStack_48;
  if (((unsigned long)uStack_58 & 1) == 0) {
    puVar3 = (unsigned char *)((long)&uStack_58 + 1);
  }
  // std code
  if (((unsigned long)uStack_58 & 1) != 0) {
    delete(puStack_48);
  }
  StateSelector::getDebugString();
  if ((bStack_a8 & 1) == 0) {
    if (bStack_a8 >> 1 == 0) return;
  }
  else if (lStack_a0 == 0) return;
  // std code
  puVar3 = puStack_48;
  if (((unsigned long)uStack_58 & 1) == 0) {
    puVar3 = (unsigned char *)((long)&uStack_58 + 1);
  }
  // std code
  if (((unsigned long)uStack_58 & 1) != 0) {
    delete(puStack_48);
  }
  puStack_48 = (unsigned char *)(unsigned long)*(uint *)(in_RSI + 0x70);
  uStack_58 = (void *)(in_RSI + 0x68);
  pcStack_50 = fmt::v9::detail::value<fmt::v9::basic_format_context<fmt::v9::appender,char>>::
               format_custom_arg<ni::symbol,fmt::v9::formatter<ni::symbol,char,void>>;
  fmt::v9::vformat(&bStack_90,"{0}:{1}",7,0x1f,&uStack_58);
  pcStack_50 = (code *)uStack_70;
  uStack_58 = pvStack_68;
  if ((uStack_78 & 1) == 0) {
    pcStack_50 = (code *)(uStack_78 >> 1 & 0x7f);
    uStack_58 = (void *)((long)&uStack_78 + 1);
  }
  puStack_48 = puStack_80;
  if ((bStack_90 & 1) == 0) {
    uStack_88 = (unsigned long)(bStack_90 >> 1);
    puStack_48 = auStack_8f;
  }
  uStack_40 = uStack_88;
  fmt::v9::vformat(in_RDI,"{0}({1})",8,0xdd,&uStack_58);
  if ((bStack_90 & 1) != 0) {
    delete(puStack_80);
  }
  if ((bStack_a8 & 1) != 0) {
    delete(pvStack_98);
  }
  if ((uStack_78 & 1) != 0) {
    delete(pvStack_68);
  }
  return in_RDI;
}

void Selector::getSourceFile() const {
unsigned long uVar1;
  unsigned long uVar2;
  long in_RSI;
  unsigned long *in_RDI;
  char *pcVar3;
  unsigned char auVar4 [16];
  unsigned long long local_38;
  
  local_38 = *(unsigned long long *)(in_RSI + 0x68);
  auVar4 = ni::symbol::std_string_view((symbol *)&local_38);
  uVar1 = auVar4._8_8_;
  if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (uVar1 < 0x17) {
    *(char *)in_RDI = auVar4[8] * '\x02';
    pcVar3 = (char *)((long)in_RDI + 1);
    if (uVar1 == 0) return;
  }
  else {
    uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
    pcVar3 = (char *)new char[uVar2];
    in_RDI[2] = (unsigned long)pcVar3;
    *in_RDI = uVar2 | 1;
    in_RDI[1] = uVar1;
  }
  memcpy(pcVar3,auVar4._0_8_,uVar1);
  pcVar3[uVar1] = '\0';
  return;
}

void Selector::getSpecifity() const {
Selector *pSVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = *(int *)(this + 0x28) * 0x10 + 0x1000000;
  if (*(long *)(this + 0x10) == emptyStdString) {
    uVar3 = *(int *)(this + 0x28) * 0x10;
  }
  uVar5 = uVar3 + 0x10000;
  if (*(long *)(this + 8) == emptyStdString) {
    uVar5 = uVar3;
  }
  uVar5 = *(long *)this != emptyStdString | uVar5;
  for (pSVar1 = *(Selector **)(this + 0x38); pSVar1 != this + 0x30;
      pSVar1 = *(Selector **)(pSVar1 + 8)) {
    iVar4 = *(int *)(pSVar1 + 0x38) * 0x10 + 0x1000000;
    if (*(long *)(pSVar1 + 0x20) == emptyStdString) {
      iVar4 = *(int *)(pSVar1 + 0x38) * 0x10;
    }
    iVar2 = iVar4 + 0x10000;
    if (*(long *)(pSVar1 + 0x18) == emptyStdString) {
      iVar2 = iVar4;
    }
    uVar5 = (*(long *)(pSVar1 + 0x10) != emptyStdString) + uVar5 + iVar2;
  }
  return (((~-(uint)(*(int *)(this + 0x54) == 2) & 1) - (uint)(*(int *)(this + 0x4c) == 2)) +
          ((~-(uint)(*(int *)(this + 0x50) == 2) & 1) - (uint)(*(int *)(this + 0x48) == 2)) + 2 +
          (uint)(*(int *)(this + 0x58) != 2) + (uint)(*(int *)(this + 0x5c) != 2) +
         (uint)(*(int *)(this + 0x60) != 2)) * 0x100 + uVar5;
}

void Selector::getStartingLine() const {
return *(unsigned int *)(this + 0x70);
}
}
