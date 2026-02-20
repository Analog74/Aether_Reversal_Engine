#include <ni/controller_editor/Manager.hpp>
namespace bmidilib {

void Manager::getPort(char const*, int) {
uint uVar1;
  int iVar2;
  long lVar3;
  unsigned long uVar4;
  bmidilib local_38 [8];
  
  normalizeAppID(local_38,param_1);
  iVar2 = Bome::BString::isEmpty((BString *)local_38);
  if (iVar2 == 0) {
    uVar1 = *(uint *)(this + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        lVar3 = *(long *)(*(long *)(this + 0x10) + uVar4 * 8);
        iVar2 = Bome::BString::equals((BString *)(lVar3 + 0x38),(BString *)local_38);
        if (iVar2 != 0) {
          if (param_2 == 0) goto LAB_1001fcde1;
          param_2 = param_2 + -1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
  }
  else if ((-1 < param_2) && (param_2 < *(int *)(this + 0x18))) {
    lVar3 = *(long *)(*(long *)(this + 0x10) + (unsigned long)(uint)param_2 * 8);
    goto LAB_1001fcde1;
  }
  lVar3 = 0;
LAB_1001fcde1:
  Bome::BString::~BString((BString *)local_38);
  return lVar3;
}

Manager::~Manager() {
~Manager(this);
  return;
}
}
