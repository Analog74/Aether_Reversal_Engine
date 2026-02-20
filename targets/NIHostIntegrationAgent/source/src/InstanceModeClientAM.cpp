#include <ni/controller_editor/InstanceModeClientAM.hpp>
namespace NI::dawcontrol::hw::komplete_kontrol::mk1_AM {

void InstanceModeClientAM::updateInstanceList() {
long lVar1;
  unsigned int *puVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  long lVar7;
  uint uVar8;
  unsigned long local_98 [2];
  int local_88;
  uint uStack_84;
  
  void *local_70;
  unsigned long long local_60;
  char local_58 [8];
  
  void *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100a44490;
  lVar1 = *(long *)(this + 0x78);
  for (lVar7 = *(long *)(this + 0x80); lVar7 != lVar1; lVar7 = lVar7 + -0x38) {
    if ((*(byte *)(lVar7 + -0x18) & 1) == 0) {
      bVar6 = *(byte *)(lVar7 + -0x30);
    }
    else {
      delete(*(void **)(lVar7 + -8));
      bVar6 = *(byte *)(lVar7 + -0x30);
    }
    if ((bVar6 & 1) != 0) {
      delete(*(void **)(lVar7 + -0x20));
    }
  }
  *(long *)(this + 0x80) = lVar1;
  *(unsigned long long *)(this + 0x98) = 0;
  local_88 = 0x23436c6e;
  local_98[0] = 0x1400000008;
  local_98[1] = 0x356677500000004;
  cVar5 = NHL2::SERVER::InternalClient::sendServerMessage((Message *)this);
  uVar4 = uStack_84;
  if ((cVar5 != '\0') && (uStack_84 != 0)) {
    uVar8 = 1;
    do {
      local_88 = uVar8 - 1;
      local_98[0] = 0x1400000008;
      local_98[1] = 0x363674900000004;
      bVar6 = NHL2::SERVER::InternalClient::sendServerMessage((Message *)this);
      local_60 = (unsigned long)uStack_84 << 0x20;
      if (bVar6 == 0) {
        local_60 = 0;
      }
      local_60 = (unsigned long)bVar6 + local_60;
      if ((bVar6 != 0) && (getClientName((uint)local_58), local_58[0] != '\0')) {
        local_88 = local_60._4_4_;
        local_98[0] = 0x1400000008;
        local_98[1] = 0x363675400000004;
        cVar5 = NHL2::SERVER::InternalClient::sendServerMessage((Message *)this);
        if ((cVar5 != '\0') && (cVar5 = isInternalModeClient(local_50), cVar5 == '\0')) {
          getInstanceAppAndContentName((InstanceModeClientAM *)local_98,local_50);
          puVar2 = *(unsigned int **)(this + 0x80);
          if (puVar2 < *(unsigned int **)(this + 0x88)) {
            *puVar2 = local_60._4_4_;
            // std code
            // std code
            *(unsigned int **)(this + 0x80) = puVar2 + 0xe;
          }
          else {
            // std code
            vector<NI::dawcontrol::hw::komplete_kontrol::mk1_AM::InstanceModeClientAM::InstanceEntry,// std code
            ::__emplace_back_slow_path<unsigned_int_const&,// std code
                      ((vector<NI::dawcontrol::hw::komplete_kontrol::mk1_AM::InstanceModeClientAM::InstanceEntry,// std code
                        *)(this + 0x78),(uint *)((long)&local_60 + 4),(string *)local_98,local_80);
          }
          if (((byte)local_80[0] & 1) != 0) {
            delete(local_70);
          }
          if ((local_98[0] & 1) != 0) {
            delete((void *)CONCAT44(uStack_84,local_88));
          }
        }
        if ((local_58[0] != '\0') && (((byte)local_50[0] & 1) != 0)) {
          delete(local_40);
        }
      }
      bVar3 = uVar8 < uVar4;
      uVar8 = uVar8 + 1;
    } while (bVar3);
  }
  if (*(long *)PTR____stack_chk_guard_100a44490 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}
}
