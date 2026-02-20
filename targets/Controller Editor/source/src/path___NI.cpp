#include <ni/controller_editor/path___NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::findLegacyContentHistoryFileForModel(boost::filesystem {

void path&, NI::Model const*) {
char cVar1;
  unsigned long *puVar2;
  unsigned long uVar3;
  void *pvVar4;
  char *pcVar5;
  byte local_90 [16];
  void *local_80;
  unsigned long local_78;
  unsigned long uStack_70;
  void *local_68;
  unsigned long long local_58;
  unsigned long uStack_50;
  void *local_48;
  unsigned long long local_38;
  unsigned long uStack_30;
  char *local_28;
  
  cVar1 = findLegacyContentHistoryDir(param_1);
  if (cVar1 == '\0') {
    uVar3 = 0;
    return;
  }
  if (param_2[0x9e8] == (Model)0x0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = (void *)0x0;
  }
  else {
    (**(code **)(*(long *)(param_2 + 0x7c8) + 0x18))(param_2 + 0x7c8);
    // std code
    puVar2 = (unsigned long *)// std code
    local_48 = (void *)puVar2[2];
    local_58 = *puVar2;
    uStack_50 = puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    if ((local_38 & 1) != 0) {
      delete(local_28);
    }
  }
  (**(code **)(*(long *)param_2 + 0x180))(local_90,param_2);
  pvVar4 = local_48;
  if ((local_58 & 1) == 0) {
    pvVar4 = (void *)((long)&local_58 + 1);
  }
  puVar2 = (unsigned long *)// std code
  local_68 = (void *)puVar2[2];
  local_78 = *puVar2;
  uStack_70 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2 = (unsigned long *)// std code
  local_28 = (char *)puVar2[2];
  local_38 = *puVar2;
  uStack_30 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if ((local_78 & 1) == 0) {
    if ((local_90[0] & 1) == 0) return;
    delete(local_80);
  }
  else {
    delete(local_68);
    if ((local_90[0] & 1) != 0) return;
  }
  uVar3 = uStack_30;
  pcVar5 = local_28;
  if ((local_38 & 1) == 0) {
    uVar3 = (unsigned long)((byte)local_38 >> 1);
    pcVar5 = (char *)((long)&local_38 + 1);
  }
  // boost code
  // boost code
  uVar3 = 0((int7)((unsigned long)param_2 >> 8),1 < (uint)local_78);
  if ((local_38 & 1) != 0) {
    delete(local_28);
  }
  if ((local_58 & 1) != 0) {
    delete(local_48);
  }
  return uVar3 & 0xffffffff;
}
}
