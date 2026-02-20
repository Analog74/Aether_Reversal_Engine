#include <ni/controller_editor/selectEnabledController_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ControllerManager {

void selectEnabledController(std::string const&) {
string *psVar1;
  string sVar2;
  void *pvVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  unsigned long long *puVar9;
  unsigned long uVar10;
  unsigned long uVar11;
  unsigned long long *puVar12;
  size_t sVar13;
  string *psVar14;
  unsigned long uVar15;
  uint uVar16;
  bool bVar17;
  unsigned int local_68;
  size_t local_60;
  void *local_58;
  string *local_50;
  unsigned long local_48;
  unsigned long long *local_40;
  uint local_34;
  
  puVar9 = *(unsigned long long **)(this + 0x110);
  puVar12 = *(unsigned long long **)(this + 0x118);
  if (puVar9 == puVar12) {
    uVar11 = 0;
    puVar12 = puVar9;
  }
  else {
    psVar1 = param_1 + 1;
    local_34 = 0xffffffff;
    uVar11 = 0;
    uVar15 = 0;
    local_50 = param_1;
    local_40 = puVar12;
    do {
      lVar7 = (**(code **)(*(long *)*puVar9 + 0x10))();
      if (lVar7 != 0) {
        plVar8 = (long *)(**(code **)(*(long *)*puVar9 + 0x10))();
        cVar4 = (**(code **)(*plVar8 + 0x1b0))(plVar8);
        if (cVar4 != '\0') {
          plVar8 = (long *)(**(code **)(*(long *)*puVar9 + 0x10))();
          uVar5 = (**(code **)(*plVar8 + 400))(plVar8);
          (**(code **)(*(long *)*puVar9 + 0x20))(&local_68);
          pvVar3 = local_58;
          uVar10 = (unsigned long)((byte)local_68 >> 1);
          if ((local_68 & 1) != 0) {
            uVar10 = local_60;
          }
          sVar2 = *param_1;
          local_48 = uVar11;
          if (((byte)sVar2 & 1) == 0) {
            sVar13 = (size_t)((byte)sVar2 >> 1);
          }
          else {
            sVar13 = *(size_t *)(param_1 + 8);
          }
          uVar5 = (uVar5 & 0xff) * 2;
          uVar16 = 0;
          if (uVar10 == sVar13) {
            psVar14 = psVar1;
            if (((byte)sVar2 & 1) != 0) {
              psVar14 = *(string **)(local_50 + 0x10);
            }
            if ((local_68 & 1) != 0) {
              if (uVar10 == 0) {
                bVar17 = true;
              }
              else {
                iVar6 = _memcmp(local_58,psVar14,uVar10);
                bVar17 = iVar6 == 0;
              }
              uVar16 = uVar5 | bVar17;
              return;
            }
            if (uVar10 != 0) {
              uVar11 = 0;
              do {
                uVar16 = 0;
                if (*(string *)((long)&local_68 + uVar11 + 1) != psVar14[uVar11])
                return;
                uVar11 = uVar11 + 1;
              } while ((byte)local_68 >> 1 != uVar11);
              uVar16 = 1;
              return;
            }
            uVar16 = uVar5 | 1;
          }
          else {
            uVar16 = uVar16 | uVar5;
            if ((local_68 & 1) != 0) {
              delete(pvVar3);
            }
          }
          uVar5 = local_34;
          if ((int)local_34 < (int)uVar16) {
            uVar5 = uVar16;
          }
          bVar17 = (int)local_34 < (int)uVar16;
          puVar12 = local_40;
          uVar11 = local_48 & 0xffffffff;
          param_1 = local_50;
          local_34 = uVar5;
          if (bVar17) {
            uVar11 = uVar15;
          }
        }
      }
      puVar9 = puVar9 + 1;
    } while ((puVar9 != puVar12) && (uVar15 = (unsigned long)((int)uVar15 + 1), (int)local_34 < 3));
    puVar9 = *(unsigned long long **)(this + 0x110);
    puVar12 = *(unsigned long long **)(this + 0x118);
  }
  local_68 = (uint)uVar11;
  if ((uVar11 < (unsigned long)((long)puVar12 - (long)puVar9 >> 3)) &&
     (puVar9[uVar11] != *(long *)(this + 0x208))) {
    *(unsigned long long *)(this + 0x208) = puVar9[uVar11];
    nod::signal_type<nod::multithread_policy,void(unsigned_int)>::operator()
              ((signal_type<nod::multithread_policy,void(unsigned_int)> *)(this + 0x140),&local_68);
  }
  return;
}
}
