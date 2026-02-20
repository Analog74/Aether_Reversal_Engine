#include <ni/controller_editor/pushBack_unsigned_int__std.hpp>
namespace NI::NHL2::Display::DataDefs::InstanceList {

void pushBack(unsigned int, std::string const&) {
string sVar1;
  uint uVar2;
  string *psVar3;
  string *psVar4;
  unsigned long uVar5;
  
  uVar2 = *(uint *)(this + 0x7404);
  uVar5 = (unsigned long)uVar2;
  if (0x62 < uVar5) goto LAB_1000a6c09;
  *(uint *)(this + uVar5 * 4 + 0x7424) = param_1;
  *(uint *)(this + 0x7404) = uVar2 + 1;
  psVar3 = (string *)(this + uVar5 * 300);
  if (((byte)*param_2 & 1) == 0) {
    psVar4 = param_2 + 1;
LAB_1000a6bd2:
    sVar1 = *psVar4;
    if (sVar1 != (string)0x0) {
      do {
        psVar4 = psVar4 + 1;
        *psVar3 = sVar1;
        psVar3 = psVar3 + 1;
        if ((string *)(this + uVar5 * 300 + 299) <= psVar3) break;
        sVar1 = *psVar4;
      } while (sVar1 != (string)0x0);
    }
  }
  else {
    psVar4 = *(string **)(param_2 + 0x10);
    if (psVar4 != (string *)0x0) goto LAB_1000a6bd2;
  }
  *psVar3 = (string)0x0;
LAB_1000a6c09:
  return uVar2 < 99;
}
}
