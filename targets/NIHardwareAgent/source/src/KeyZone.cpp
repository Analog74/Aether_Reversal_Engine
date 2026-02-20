#include <ni/controller_editor/KeyZone.hpp>
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
  
  local_28 = *(long *)PTR____stack_chk_guard_1009cc2c8;
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
  if (*(long *)PTR____stack_chk_guard_1009cc2c8 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
