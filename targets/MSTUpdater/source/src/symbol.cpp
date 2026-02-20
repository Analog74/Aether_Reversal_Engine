#include <ni/controller_editor/symbol.hpp>
namespace ni {

void symbol::hash() const {
return *(unsigned long long *)(*(long *)this + 0x20);
}

void symbol::TEMPNAMEPLACEHOLDERVALUE(char const*) const {
long lVar1;
  char cVar2;
  char *pcVar3;
  byte *pbVar4;
  ushort uVar5;
  bool bVar6;
  
  lVar1 = *(long *)this;
  if ((*(ushort *)(lVar1 + 8) & 1) == 0) {
    uVar5 = *(ushort *)(lVar1 + 8) >> 8;
    pbVar4 = (byte *)(lVar1 + 9);
  }
  else {
    pbVar4 = *(byte **)(lVar1 + 0x18);
    uVar5 = (ushort)*pbVar4;
  }
  cVar2 = *param_1;
  bVar6 = (char)uVar5 == '\0';
  if (cVar2 != '\0') {
    pcVar3 = param_1 + 1;
    do {
      pbVar4 = pbVar4 + 1;
      if (cVar2 != (char)uVar5) {
        return false;
      }
      if (bVar6) {
        return false;
      }
      cVar2 = *pcVar3;
      uVar5 = (ushort)*pbVar4;
      bVar6 = *pbVar4 == 0;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
  }
  return bVar6;
}

void symbol::string() const {
return *(long *)this + 8;
}

symbol::symbol(char const*, unsigned long) {
symbol(this,param_1,param_2);
  
}
}
