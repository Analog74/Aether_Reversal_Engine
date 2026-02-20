#include <ni/controller_editor/doesClassIDapply_std.hpp>
namespace NI::NWL::ClassSelector {

void doesClassIDapply(std::string const&) const {
string sVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  string *psVar5;
  char *pcVar6;
  byte *pbVar7;
  unsigned long uVar8;
  size_t sVar9;
  long lVar10;
  char *pcVar11;
  byte bVar12;
  unsigned long uVar13;
  string *psVar14;
  unsigned long long unaff_R14;
  unsigned long uVar15;
  
  uVar15 = 0((int7)((unsigned long)unaff_R14 >> 8),1);
  if (*(long *)this == emptyStdString) goto LAB_100036315;
  pbVar4 = (byte *)ni::symbol::string((symbol *)this);
  uVar2 = *(ushort *)param_1;
  uVar8 = (unsigned long)((uVar2 & 0xfe) >> 1);
  sVar9 = *(size_t *)(param_1 + 8);
  if ((uVar2 & 1) == 0) {
    sVar9 = uVar8;
  }
  bVar12 = *pbVar4 & 1;
  uVar13 = (unsigned long)(*pbVar4 >> 1);
  if (bVar12 != 0) {
    uVar13 = *(size_t *)(pbVar4 + 8);
  }
  if (sVar9 == uVar13) {
    psVar14 = (string *)(pbVar4 + 1);
    if (bVar12 != 0) {
      psVar14 = *(string **)(pbVar4 + 0x10);
    }
    if ((uVar2 & 1) == 0) {
      if (sVar9 == 0) goto LAB_100036315;
      if (SUB21(uVar2 >> 8,0) == *psVar14) {
        psVar5 = param_1 + 2;
        lVar10 = -uVar8;
        do {
          psVar14 = psVar14 + 1;
          lVar10 = lVar10 + 1;
          if (lVar10 == 0) goto LAB_100036315;
          sVar1 = *psVar5;
          psVar5 = psVar5 + 1;
        } while (sVar1 == *psVar14);
      }
    }
    else if ((sVar9 == 0) || (iVar3 = _memcmp(*(void **)(param_1 + 0x10),psVar14,sVar9), iVar3 == 0)
            ) goto LAB_100036315;
  }
  uVar15 = 0;
  pcVar6 = (char *)// std code
  pbVar4 = (byte *)ni::symbol::string((symbol *)this);
  pcVar11 = (char *)(unsigned long)(*pbVar4 >> 1);
  if ((*pbVar4 & 1) != 0) {
    pcVar11 = *(char **)(pbVar4 + 8);
  }
  if (pcVar6 == pcVar11) {
    pbVar7 = (byte *)ni::symbol::string((symbol *)this);
    pbVar4 = pbVar7 + 1;
    if ((*pbVar7 & 1) != 0) {
      pbVar4 = *(byte **)(pbVar7 + 0x10);
    }
    iVar3 = // std code
    uVar15 = (unsigned long)(iVar3 == 0);
  }
LAB_100036315:
  return uVar15 & 0xffffffff;
}
}
