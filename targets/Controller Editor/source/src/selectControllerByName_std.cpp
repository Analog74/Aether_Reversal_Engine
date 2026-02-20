#include <ni/controller_editor/selectControllerByName_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ControllerManager {

void selectControllerByName(std::string const&) {
string *psVar1;
  string sVar2;
  unsigned long long *puVar3;
  long lVar4;
  void *pvVar5;
  int iVar6;
  unsigned long uVar7;
  string *psVar8;
  uint uVar9;
  unsigned long long *puVar10;
  unsigned int local_50;
  size_t local_48;
  void *local_40;
  ControllerManager *local_38;
  
  puVar10 = *(unsigned long long **)(this + 0x110);
  puVar3 = *(unsigned long long **)(this + 0x118);
  if (puVar10 != puVar3) {
    uVar9 = 0;
    local_38 = this;
    do {
      (**(code **)(*(long *)*puVar10 + 0x20))(&local_50);
      pvVar5 = local_40;
      uVar7 = (unsigned long)((byte)local_50 >> 1);
      if ((local_50 & 1) != 0) {
        uVar7 = local_48;
      }
      sVar2 = *param_1;
      if (((byte)sVar2 & 1) == 0) {
        if (uVar7 != (byte)sVar2 >> 1) return;
        psVar8 = param_1 + 1;
        if (((byte)sVar2 & 1) != 0) {
          psVar8 = *(string **)(param_1 + 0x10);
        }
        if ((local_50 & 1) == 0) {
          if (uVar7 == 0) return;
          uVar7 = 0;
          do {
            sVar2 = *(string *)((long)&local_50 + uVar7 + 1);
            psVar1 = psVar8 + uVar7;
            if (sVar2 != *psVar1) return;
            uVar7 = uVar7 + 1;
          } while ((byte)local_50 >> 1 != uVar7);
          if (sVar2 == *psVar1) return;
        }
        else {
          if (uVar7 == 0) {
            delete(local_40);
            if ((unsigned long)(*(long *)(local_38 + 0x118) - *(long *)(local_38 + 0x110) >> 3) <=
                (unsigned long)uVar9) {
              return;
            }
            lVar4 = *(long *)(*(long *)(local_38 + 0x110) + (unsigned long)uVar9 * 8);
            if (lVar4 == *(long *)(local_38 + 0x208)) {
              return;
            }
            *(long *)(local_38 + 0x208) = lVar4;
            local_50 = uVar9;
            nod::signal_type<nod::multithread_policy,void(unsigned_int)>::operator()
                      ((signal_type<nod::multithread_policy,void(unsigned_int)> *)(local_38 + 0x140)
                       ,&local_50);
            return;
          }
          iVar6 = _memcmp(local_40,psVar8,uVar7);
          delete(pvVar5);
          if (iVar6 == 0) return;
        }
      }
      else {
        if (uVar7 == *(size_t *)(param_1 + 8)) return;
        if ((local_50 & 1) != 0) {
          delete(local_40);
        }
      }
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar3);
  }
  return;
}
}
