#include <ni/controller_editor/KeyZone.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::Komplete::KontrolMK1 {

void KeyZone::generateDefaultLabel() {
string *psVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  unsigned long long local_108;
  unsigned long long uStack_100;
  unsigned long long local_f8;
  basic_format<char,// std code
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101ab4610;
  if (this[0x4c] == (KeyZone)0x0) {
    if (*(int *)(this + 0x54) == *(int *)(this + 0x58)) {
      psVar1 = (string *)UIA::MidiStrings::getMidiNoteName(*(int *)(this + 0x54));
      // std code
    }
    else {
      // std code
      uVar2 = UIA::MidiStrings::getMidiNoteName(*(int *)(this + 0x54));
      uVar3 = UIA::MidiStrings::getMidiNoteName(*(int *)(this + 0x58));
      // boost code
                (local_f0,"%s - %s");
      GP::DETAIL::FormatApply<char>::apply<// std code
                ((FormatApply<char> *)&local_108,local_f0,uVar2,uVar3);
      // boost code
      ;
      if (((byte)this[0x30] & 1) != 0) {
        delete(*(void **)(this + 0x40));
      }
      *(unsigned long long *)(this + 0x40) = local_f8;
      *(unsigned long long *)(this + 0x30) = local_108;
      *(unsigned long long *)(this + 0x38) = uStack_100;
      // std code
    }
  }
  else {
    // std code
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

void KeyZone::getLabel() const {
KeyZone *pKVar1;
  unsigned long uVar2;
  
  if (((byte)this[0x18] & 1) == 0) {
    uVar2 = (unsigned long)((byte)this[0x18] >> 1);
  }
  else {
    uVar2 = *(unsigned long *)(this + 0x20);
  }
  pKVar1 = this + 0x18;
  if (uVar2 == 0) {
    pKVar1 = this + 0x30;
  }
  return pKVar1;
}

KeyZone::KeyZone() [clone .cold.1] {
long in_RDX;
  byte *in_RSI;
  
  if (((byte)*this & 1) != 0) {
    delete(*(void **)(in_RDX + 0x28));
  }
  if ((*in_RSI & 1) == 0) {
    
  }
  delete(*(void **)(in_RDX + 0x10));
  
}
}
