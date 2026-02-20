#include <ni/controller_editor/getValue_std.hpp>
namespace NI::GP::DETAIL::Registry2KeyCF {

void getValue(std::string const&, int&) const {
char cVar1;
  uint uVar2;
  long lVar3;
  unsigned long uVar4;
  Registry2KeyCF *pRVar5;
  bool bVar6;
  Registry2KeyCF *local_48;
  string *local_40;
  unsigned long local_38;
  
  if (*(long *)(this + 0x18) == 0) {
    uVar4 = 0;
  }
  else {
    // std code
    bVar6 = ((byte)*param_1 & 1) != 0;
    local_40 = param_1 + 1;
    if (bVar6 param_1) {
    }
    local_38 = (unsigned long)((byte)*param_1 >> 1);
    if (bVar6 param_1) {
    }
    CFString::CFString((CFString *)&local_48,(CharSequence *)&local_40,true);
    pRVar5 = local_48;
    if (((byte)this[0x20] & 8) == 0) {
      lVar3 = _CFPreferencesCopyValue
                        (local_48,*(unsigned long long *)(this + 0x18),
                         *(unsigned long long *)PTR__kCFPreferencesAnyUser_1009cc2f0,
                         *(unsigned long long *)PTR__kCFPreferencesCurrentHost_1009cc2f8);
    }
    else {
      lVar3 = _CFPreferencesCopyAppValue(local_48,*(unsigned long long *)(this + 0x18));
    }
    local_40 = (string *)lVar3;
    cVar1 = getS32ValueFromRef(pRVar5,param_2,(ScopedCFTypeRef *)&local_40);
    if (lVar3 != 0) {
      _CFRelease(lVar3);
    }
    uVar4 = 0((int7)((unsigned long)lVar3 >> 8),1);
    if (cVar1 == '\0') {
      if (((*(uint *)(this + 0x20) & 0x81) == 0x81) && (*(uint *)(this + 0x24) != 0)) {
        pRVar5 = local_48;
        if ((*(uint *)(this + 0x24) & 8) == 0) {
          lVar3 = _CFPreferencesCopyValue
                            (local_48,*(unsigned long long *)(this + 0x18),
                             *(unsigned long long *)PTR__kCFPreferencesAnyUser_1009cc2f0,
                             *(unsigned long long *)PTR__kCFPreferencesCurrentHost_1009cc2f8);
        }
        else {
          lVar3 = _CFPreferencesCopyAppValue(local_48,*(unsigned long long *)(this + 0x18));
        }
        local_40 = (string *)lVar3;
        uVar2 = getS32ValueFromRef(pRVar5,param_2,(ScopedCFTypeRef *)&local_40);
        uVar4 = (unsigned long)uVar2;
        if (lVar3 != 0) {
          _CFRelease(lVar3);
        }
      }
      else {
        uVar4 = 0;
      }
    }
    _CFRelease(local_48);
    // std code
  }
  return uVar4 & 0xffffffff;
}
}
