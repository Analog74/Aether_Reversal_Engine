#include <ni/controller_editor/loadDefault_std.hpp>
namespace NI::NWL::StyleSheetManager {

void loadDefault(std::string const&) {
string sVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  string *psVar5;
  unsigned long uVar6;
  size_t sVar7;
  long lVar8;
  byte bVar9;
  string *psVar10;
  unsigned long uVar11;
  string *local_40;
  unsigned long local_38;
  
  lVar3 = *(long *)(this + 0x10);
  uVar2 = *(ushort *)(lVar3 + 0x10);
  uVar6 = (unsigned long)((uVar2 & 0xfe) >> 1);
  sVar7 = *(size_t *)(lVar3 + 0x18);
  if ((uVar2 & 1) == 0) {
    sVar7 = uVar6;
  }
  bVar9 = (byte)*param_1 & 1;
  uVar11 = (unsigned long)((byte)*param_1 >> 1);
  if (bVar9 != 0) {
    uVar11 = *(size_t *)(param_1 + 8);
  }
  if (sVar7 == uVar11) {
    psVar10 = *(string **)(param_1 + 0x10);
    if (bVar9 == 0) {
      psVar10 = param_1 + 1;
    }
    if ((uVar2 & 1) == 0) {
      if (sVar7 == 0) {
        return;
      }
      if (SUB21(uVar2 >> 8,0) == *psVar10) {
        psVar5 = (string *)(lVar3 + 0x12);
        lVar8 = -uVar6;
        do {
          psVar10 = psVar10 + 1;
          lVar8 = lVar8 + 1;
          if (lVar8 == 0) {
            return;
          }
          sVar1 = *psVar5;
          psVar5 = psVar5 + 1;
        } while (sVar1 == *psVar10);
      }
    }
    else {
      if (sVar7 == 0) {
        return;
      }
      iVar4 = _memcmp(*(void **)(lVar3 + 0x20),psVar10,sVar7);
      if (iVar4 == 0) {
        return;
      }
    }
  }
  // std code
  bVar9 = (byte)*param_1 & 1;
  local_40 = param_1 + 1;
  if (bVar9 != 0) {
    local_40 = *(string **)(param_1 + 0x10);
  }
  local_38 = (unsigned long)((byte)*param_1 >> 1);
  if (bVar9 != 0) {
    local_38 = *(unsigned long *)(param_1 + 8);
  }
  StyleSheet::load((StyleSheet *)(*(long *)(this + 0x10) + 0x28),(CharSequence *)&local_40);
  return;
}
}
