#include <ni/controller_editor/getControllerWithInstanceID_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ControllerManager {

void getControllerWithInstanceID(std::string const&, unsigned int) {
string *psVar1;
  string *psVar2;
  string sVar3;
  unsigned long long *puVar4;
  long *plVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  unsigned long uVar10;
  string *psVar11;
  unsigned long long *puVar12;
  byte local_48;
  
  size_t local_40;
  void *local_38;
  
  puVar12 = *(unsigned long long **)(this + 0x110);
  puVar4 = *(unsigned long long **)(this + 0x118);
  if (puVar12 != puVar4) {
    do {
      plVar5 = (long *)*puVar12;
      (**(code **)(*plVar5 + 0x18))(&local_48,plVar5);
      pvVar6 = local_38;
      uVar10 = (unsigned long)(local_48 >> 1);
      if ((local_48 & 1) != 0) {
        uVar10 = local_40;
      }
      sVar3 = *param_1;
      if (((byte)sVar3 & 1) == 0) {
        if (uVar10 != (byte)sVar3 >> 1) return;
        psVar11 = param_1 + 1;
        if (((byte)sVar3 & 1) != 0) {
          psVar11 = *(string **)(param_1 + 0x10);
        }
        if ((local_48 & 1) == 0) {
          if (uVar10 != 0) {
            uVar10 = 0;
            do {
              psVar2 = local_47 + uVar10;
              psVar1 = psVar11 + uVar10;
              if (*psVar2 != *psVar1) return;
              uVar10 = uVar10 + 1;
            } while (local_48 >> 1 != uVar10);
            if (*psVar2 != *psVar1) return;
          }
        }
        else if (uVar10 == 0) {
          delete(local_38);
        }
        else {
          iVar8 = _memcmp(local_38,psVar11,uVar10);
          delete(pvVar6);
          if (iVar8 != 0) return;
        }
        lVar9 = (**(code **)(*plVar5 + 0x10))(plVar5);
        uVar7 = (**(code **)(*(long *)(lVar9 + 0x7c8) + 0x18))(lVar9 + 0x7c8);
        if (uVar7 == param_2) {
          return plVar5;
        }
      }
      else {
        if (uVar10 == *(size_t *)(param_1 + 8)) return;
        if ((local_48 & 1) != 0) {
          delete(local_38);
        }
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar4);
  }
  return (long *)0x0;
}
}
