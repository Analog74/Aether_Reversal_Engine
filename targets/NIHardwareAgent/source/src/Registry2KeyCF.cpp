#include <ni/controller_editor/Registry2KeyCF.hpp>
namespace NI::GP::DETAIL {

void Registry2KeyCF::close() {
unsigned long long *puVar1;
  unsigned long long uVar2;
  
  if (*(long *)(this + 0x18) != 0) {
    if ((this[0x28] != (Registry2KeyCF)0x0) && ((*(uint *)(this + 0x20) & 6) != 0)) {
      if ((*(uint *)(this + 0x20) & 0x10) == 0) {
        uVar2 = *(unsigned long long *)PTR__kCFPreferencesCurrentUser_1009cc300;
        puVar1 = (unsigned long long *)PTR__kCFPreferencesAnyHost_1009cc2e8;
      }
      else {
        uVar2 = *(unsigned long long *)PTR__kCFPreferencesAnyUser_1009cc2f0;
        puVar1 = (unsigned long long *)PTR__kCFPreferencesCurrentHost_1009cc2f8;
      }
      _CFPreferencesSynchronize(*(long *)(this + 0x18),uVar2,*puVar1);
    }
    if (*(long *)(this + 0x18) != 0) {
      _CFRelease();
    }
    *(unsigned long long *)(this + 0x18) = 0;
  }
  if (((byte)*this & 1) == 0) {
    *(void2 *)this = 0;
  }
  else {
    **(unsigned char **)(this + 0x10) = 0;
    *(unsigned long long *)(this + 8) = 0;
  }
  this[0x28] = (Registry2KeyCF)0x0;
  *(unsigned long long *)(this + 0x20) = 0;
  return;
}

Registry2KeyCF::~Registry2KeyCF() {
close(this);
  if (*(long *)(this + 0x18) != 0) {
    _CFRelease();
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x10));
  return;
}
}
