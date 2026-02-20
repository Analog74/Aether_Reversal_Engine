#include <ni/controller_editor/DFUClient.hpp>
namespace NI::NHL2::DFUDevice::writeDFUData(NI::NHL2 {

void DFUClient::Payload const&) {
int iVar1;
  void *puVar2;
  unsigned long long uVar3;
  unsigned long long unaff_RBX;
  unsigned long uVar4;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  void2 local_40;
  void2 local_3e;
  void2 local_3c;
  void2 local_3a;
  Payload *local_38;
  unsigned int local_30;
  
  local_30 = 0;
  local_40 = 0x121;
  local_3e = *(void2 *)param_1;
  local_3c = *(void2 *)(this + 0x76);
  local_3a = *(void2 *)(param_1 + 2);
  local_38 = param_1 + 4;
  iVar1 = (**(code **)(*(long *)this + 0x10))(this,&local_40);
  uVar4 = 0((int7)((unsigned long)unaff_RBX >> 8),1);
  if (iVar1 != 0) {
    if (Logging::detail::__reportLevelAsUInt < 2) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      // std code
      puVar2 = (void *)
               // std code
               find<// std code
                                  *)&Logging::allowedCategories,(string *)&local_58);
      // std code
      if (puVar2 != &0) {
        uVar3 = USBDevice::statusAsString(iVar1);
        uVar4 = 0;
        Logging::detail::__trace__msg
                  (1,"%s: DFU_DNLOAD failed with status 0x%x (%s)\n","DFUDevice",iVar1,uVar3);
        goto LAB_10001f27a;
      }
    }
    uVar4 = 0;
  }
LAB_10001f27a:
  return uVar4 & 0xffffffff;
}
}
