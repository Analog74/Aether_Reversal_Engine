#include <ni/controller_editor/updateAutoFocus_std.hpp>
namespace NI::dawcontrol::logic::LogicClient {

void updateAutoFocus(std::string const&) {
string sVar1;
  unsigned char *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  size_t sVar8;
  unsigned long uVar9;
  LogicClient *pLVar10;
  void **local_98;
  string *local_90;
  void ***local_78;
  void **local_68 [4];
  void ***local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_100a44490;
  sVar1 = *param_1;
  sVar8 = (unsigned long)((byte)sVar1 >> 1);
  if (((byte)sVar1 & 1) != 0) {
    sVar8 = *(size_t *)(param_1 + 8);
  }
  if ((hw::device_name::maschine_mk3 & 1) == 0) {
    if (sVar8 == hw::device_name::maschine_mk3 >> 1) goto LAB_100026b41;
  }
  else if (sVar8 == 0) {
LAB_100026b41:
    puVar2 = 0;
    if ((hw::device_name::maschine_mk3 & 1) == 0) {
      puVar2 = &0;
    }
    if (((byte)sVar1 & 1) == 0) {
      if (sVar8 != 0) {
        uVar9 = 0;
        do {
          if (param_1[uVar9 + 1] != *(string *)(puVar2 + uVar9)) goto LAB_100026ba2;
          uVar9 = uVar9 + 1;
        } while ((byte)sVar1 >> 1 != uVar9);
      }
    }
    else if ((sVar8 != 0) && (iVar4 = _memcmp(*(void **)(param_1 + 0x10),puVar2,sVar8), iVar4 != 0))
    goto LAB_100026ba2;
    local_68[0] = &PTR____func_100a47e08;
    local_48 = local_68;
    lVar5 = (**(code **)(**(long **)(this + 0x4740) + 0xf8))(*(long **)(this + 0x4740),local_68);
    if (local_68 == local_48) {
      (*(code *)(*local_48)[4])();
    }
    else if (local_48 != (void ***)0x0) {
      (*(code *)(*local_48)[5])();
    }
    if ((lVar5 != 0) && (lVar7 = (**(code **)(**(long **)(this + 0x4740) + 0x30))(), lVar5 == lVar7)
       ) {
      NHL2::SERVER::InternalClient::sendServerMessage((Message *)(this + 0x10));
    }
    goto LAB_100026d26;
  }
LAB_100026ba2:
  local_98 = &PTR____func_100a47e88;
  local_90 = param_1;
  local_78 = &local_98;
  lVar5 = (**(code **)(**(long **)(this + 0x4740) + 0xf8))(*(long **)(this + 0x4740),&local_98);
  if (&local_98 == local_78) {
    (*(code *)(*local_78)[4])();
  }
  else if (local_78 != (void ***)0x0) {
    (*(code *)(*local_78)[5])();
  }
  // std code
  plVar6 = *(long **)(this + 0x4740);
  plVar6[1] = lVar5;
  lVar5 = (**(code **)(*plVar6 + 0x110))();
  if (lVar5 != 0) {
    plVar6 = (long *)(**(code **)(**(long **)(this + 0x4740) + 0x110))();
    cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6);
    if (cVar3 == '\0') goto LAB_100026d26;
  }
  sVar1 = *(string *)(this + 0x500);
  if (((byte)sVar1 & 1) == 0) {
    if (1 < (byte)sVar1) {
      pLVar10 = this + 0x501;
      uVar9 = (unsigned long)((byte)sVar1 >> 1);
LAB_100026cb8:
      cVar3 = (**(code **)(**(long **)(this + 0x4740) + 0x10))
                        (*(long **)(this + 0x4740),pLVar10,uVar9);
      if (cVar3 != '\0') goto LAB_100026d26;
    }
  }
  else {
    uVar9 = *(unsigned long *)(this + 0x508);
    if (uVar9 != 0) {
      pLVar10 = *(LogicClient **)(this + 0x510);
      goto LAB_100026cb8;
    }
  }
  (**(code **)(**(long **)(this + 0x4740) + 0x118))();
LAB_100026d26:
  if (*(long *)PTR____stack_chk_guard_100a44490 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
