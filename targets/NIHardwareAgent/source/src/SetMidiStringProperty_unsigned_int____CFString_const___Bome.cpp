#include <ni/controller_editor/SetMidiStringProperty_unsigned_int____CFString_const___Bome.hpp>
namespace bmidilib {

void SetMidiStringProperty(unsigned int, __CFString const*, Bome::BString const&) {
int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = Bome::BString::toCFString(param_3);
  if (lVar2 == 0) {
    bVar3 = false;
  }
  else {
    iVar1 = _MIDIObjectSetStringProperty(param_1,param_2,lVar2);
    _CFRelease(lVar2);
    bVar3 = iVar1 == 0;
  }
  return bVar3;
}
}
