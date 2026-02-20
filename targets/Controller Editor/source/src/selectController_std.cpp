#include <ni/controller_editor/selectController_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::PreferenceWidget {

void selectController(2 param_2, std::string const&, bool {
string *psVar1;
  string *psVar2;
  string sVar3;
  void *pvVar4;
  int iVar5;
  ControllerManager *this_00;
  unsigned long uVar6;
  void7 in_register_00000011;
  string *psVar7;
  uint uVar8;
  unsigned long long *puVar9;
  byte local_58;
  
  size_t local_50;
  void *local_48;
  PreferenceWidget *local_40;
  unsigned int local_34;
  
  local_34 = (unsigned int)0(in_register_00000011,param_2);
  local_40 = this;
  this_00 = (ControllerManager *)ControllerManager::getInstance();
  if ((this_00 != (ControllerManager *)0x0) &&
     (puVar9 = *(unsigned long long **)(this_00 + 0x110), puVar9 != *(unsigned long long **)(this_00 + 0x118))) {
    do {
      (**(code **)(*(long *)*puVar9 + 0x20))(&local_58);
      pvVar4 = local_48;
      uVar6 = (unsigned long)(local_58 >> 1);
      if ((local_58 & 1) != 0) {
        uVar6 = local_50;
      }
      sVar3 = *param_1;
      if (((byte)sVar3 & 1) == 0) {
        if (uVar6 != (byte)sVar3 >> 1) return;
        psVar7 = param_1 + 1;
        if (((byte)sVar3 & 1) != 0) {
          psVar7 = *(string **)(param_1 + 0x10);
        }
        if ((local_58 & 1) == 0) {
          if (uVar6 == 0) return;
          uVar6 = 0;
          do {
            psVar2 = local_57 + uVar6;
            psVar1 = psVar7 + uVar6;
            if (*psVar2 != *psVar1) return;
            uVar6 = uVar6 + 1;
          } while (local_58 >> 1 != uVar6);
          if (*psVar2 == *psVar1) return;
        }
        else {
          if (uVar6 == 0) {
            delete(local_48);
            uVar6 = (unsigned long)((long)puVar9 - *(long *)(this_00 + 0x110)) >> 3;
            uVar8 = (uint)uVar6;
            if (uVar8 == 0xffffffff) {
              return;
            }
            if ((char)local_34 == '\0') {
              ControllerManager::selectEnabledController(this_00,param_1);
            }
            else {
              param_1 = (string *)(uVar6 & 0xffffffff);
              ControllerManager::selectController(this_00,uVar8);
            }
            selectItem(local_40,param_1,uVar8);
            return;
          }
          iVar5 = _memcmp(local_48,psVar7,uVar6);
          delete(pvVar4);
          if (iVar5 == 0) return;
        }
      }
      else {
        if (uVar6 == *(size_t *)(param_1 + 8)) return;
        if ((local_58 & 1) != 0) {
          delete(local_48);
        }
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != *(unsigned long long **)(this_00 + 0x118));
  }
  return;
}
}
