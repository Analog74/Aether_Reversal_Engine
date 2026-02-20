#include <ni/controller_editor/setText_std.hpp>
namespace NI::NWL::DETAIL::MultilineText {

void setText(std::string const&) {
MultilineText *pMVar1;
  string sVar2;
  ushort uVar3;
  int iVar4;
  unsigned long uVar5;
  byte bVar6;
  string *psVar7;
  unsigned long uVar8;
  size_t sVar9;
  long lVar10;
  string *psVar11;
  unsigned long long local_48;
  unsigned long uStack_40;
  long local_38;
  
  pMVar1 = this + 0x398;
  uVar3 = *(ushort *)param_1;
  uVar5 = (unsigned long)((uVar3 & 0xfe) >> 1);
  sVar9 = *(size_t *)(param_1 + 8);
  if ((uVar3 & 1) == 0) {
    sVar9 = uVar5;
  }
  bVar6 = (byte)this[0x398] & 1;
  uVar8 = (unsigned long)((byte)this[0x398] >> 1);
  if (bVar6 != 0) {
    uVar8 = *(size_t *)(this + 0x3a0);
  }
  if (sVar9 == uVar8) {
    psVar11 = (string *)(this + 0x399);
    if (bVar6 != 0) {
      psVar11 = *(string **)(this + 0x3a8);
    }
    if ((uVar3 & 1) == 0) {
      if (sVar9 == 0) {
        return;
      }
      if (SUB21(uVar3 >> 8,0) == *psVar11) {
        psVar7 = param_1 + 2;
        lVar10 = -uVar5;
        do {
          psVar11 = psVar11 + 1;
          lVar10 = lVar10 + 1;
          if (lVar10 == 0) {
            return;
          }
          sVar2 = *psVar7;
          psVar7 = psVar7 + 1;
        } while (sVar2 == *psVar11);
      }
    }
    else {
      if (sVar9 == 0) {
        return;
      }
      iVar4 = _memcmp(*(void **)(param_1 + 0x10),psVar11,sVar9);
      if (iVar4 == 0) {
        return;
      }
    }
  }
  GP::StringUtil::fromUTF_filter<char>((StringUtil *)&local_48,param_1);
  uVar5 = 0;
  while( true ) {
    uVar8 = local_48 >> 1 & 0x7f;
    if ((local_48 & 1) != 0) {
      uVar8 = uStack_40;
    }
    if (uVar8 <= uVar5) break;
    lVar10 = local_38;
    if ((local_48 & 1) == 0) {
      lVar10 = (long)&local_48 + 1;
    }
    if ((*(byte *)(lVar10 + uVar5) == 10) || (0x1f < *(byte *)(lVar10 + uVar5))) {
      uVar5 = uVar5 + 1;
    }
    else {
      // std code
    }
  }
  if (((byte)*pMVar1 & 1) == 0) {
    *(void2 *)pMVar1 = 0;
  }
  else {
    **(unsigned char **)(this + 0x3a8) = 0;
    *(unsigned long long *)(this + 0x3a0) = 0;
  }
  // std code
  *(long *)(this + 0x3a8) = local_38;
  *(unsigned long *)(this + 0x3a0) = uStack_40;
  *(unsigned long *)pMVar1 = local_48;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  // std code
  (**(code **)(*(long *)this + 0xd8))(this);
  return;
}
}
