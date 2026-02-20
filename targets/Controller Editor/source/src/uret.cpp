#include <ni/controller_editor/uret.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MixpanelTracker::syncPendingMappingEvents(ni {

void uret::Event&, bool) {
string *psVar1;
  unsigned long uVar2;
  long lVar3;
  variant<// boost code
  *pvVar4;
  variant<// boost code
  *pvVar5;
  variant<// boost code
  *pvVar6;
  variant<// boost code
  *pvVar7;
  long lVar8;
  void *pvVar9;
  variant<// boost code
  *pvVar10;
  unsigned long long uVar11;
  long lVar12;
  unsigned long uVar13;
  variant<// boost code
  *pvVar14;
  char *pcVar15;
  unordered_set<// std code
  *puVar16;
  long *plVar17;
  variant<// boost code
  *pvVar18;
  variant<// boost code
  *pvVar19;
  variant<// boost code
  *local_48;
  variant<// boost code
  *pvStack_40;
  variant<// boost code
  *local_38;
  
  if (((this[0xa9] == (MixpanelTracker)0x0) || (this[0xaa] == (MixpanelTracker)0x0)) ||
     (lVar8 = (unsigned long)param_2 * 2 + 1, *(long *)(this + lVar8 * 0x28 + 0x20) == 0)) {
    uVar11 = 0;
  }
  else {
    lVar12 = 0x50;
    if (!param_2) {
      lVar12 = 0;
    }
    local_48 = (variant<// boost code
                *)0x0;
    pvStack_40 = (variant<// boost code
                  *)0x0;
    local_38 = (variant<// boost code
                *)0x0;
    plVar17 = *(long **)(this + lVar8 * 0x28 + 0x18);
    if (plVar17 != (long *)0x0) {
      do {
        psVar1 = (string *)(plVar17 + 2);
        puVar16 = (unordered_set<// std code
                   *)(this + lVar12 + 8);
        // std code
        unordered_set<// std code
        ::insert((unordered_set<// std code
                  *)(this + lVar12 + 8),psVar1);
        pvVar10 = pvStack_40;
        if (pvStack_40 < local_38) {
          // std code
          *(unsigned int *)pvVar10 = 4;
          pvStack_40 = pvVar10 + 0x20;
        }
        else {
          lVar8 = (long)pvStack_40 - (long)local_48 >> 5;
          uVar2 = lVar8 + 1;
          if (0x7ffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
            // std code
          }
          uVar13 = (long)local_38 - (long)local_48 >> 4;
          if (uVar13 < uVar2) {
            uVar13 = uVar2;
          }
          if (0x3fffffffffffffe < (unsigned long)((long)local_38 - (long)local_48 >> 5)) {
            uVar13 = 0x7ffffffffffffff;
          }
          if (uVar13 == 0) {
            pvVar9 = (void *)0x0;
          }
          else {
            if (0x7ffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
              // std code
            }
            pvVar9 = new char[uVar13 << 5];
          }
          lVar8 = lVar8 * 0x20;
          // std code
          pvVar7 = pvStack_40;
          pvVar6 = local_48;
          pvVar19 = (variant<// boost code
                     *)((long)pvVar9 + lVar8);
          pvVar14 = (variant<// boost code
                     *)(uVar13 * 0x20 + (long)pvVar9);
          *(unsigned int *)pvVar19 = 4;
          pvVar10 = pvVar19 + 0x20;
          pvVar4 = local_48;
          if (pvStack_40 != local_48) {
            lVar8 = 0x20;
            pvVar18 = pvStack_40;
            do {
              pvVar18 = pvVar18 + -0x20;
              pvVar19 = pvVar19 + -0x20;
              // boost code
              variant<// boost code
              ::variant(pvVar19,(variant *)pvVar18);
              pvVar4 = local_48;
              lVar3 = lVar8 - (long)pvVar7;
              lVar8 = lVar8 + 0x20;
              pvVar5 = pvStack_40;
            } while (pvVar6 + lVar3 !=
                     (variant<// boost code
                      *)0x0);
            while (local_48 = pvVar19, pvStack_40 = pvVar10, local_38 = pvVar14, pvVar19 = local_48,
                  pvVar14 = local_38, pvVar10 = pvStack_40, pvVar5 != pvVar4) {
              // boost code
              variant<// boost code
              ::destroy_content(pvVar5 + -0x20);
              pvVar14 = local_38;
              pvVar10 = pvStack_40;
              pvVar19 = local_48;
              pvVar5 = pvVar5 + -0x20;
            }
          }
          pvStack_40 = pvVar10;
          local_38 = pvVar14;
          local_48 = pvVar19;
          if (pvVar4 != (variant<// boost code
                         *)0x0) {
            delete(pvVar4);
          }
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
    pcVar15 = "Content:MIDIMappings:List";
    if (param_2) {
      pcVar15 = "Created:MIDIMappings:List";
    }
    pvVar10 = (variant<// boost code
               *)ni::uret::Event::operator[](param_1,pcVar15);
    // boost code
    variant<// boost code
    ::
    assign<// std code
              (pvVar10,(vector *)&local_48);
    syncLocallyStoredDevices(this,param_2);
    pvVar19 = local_48;
    pvVar10 = pvStack_40;
    if (local_48 !=
        (variant<// boost code
         *)0x0) {
      while (pvVar10 != pvVar19) {
        // boost code
        variant<// boost code
        ::destroy_content(pvVar10 + -0x20);
        pvVar10 = pvVar10 + -0x20;
      }
      pvStack_40 = pvVar19;
      delete(local_48);
    }
    uVar11 = 1;
  }
  return uVar11;
}
}
