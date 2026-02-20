#include <ni/controller_editor/mappingWasEdited_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MixpanelTracker {

void mappingWasEdited(1 param_1, NI::Model const*, bool {
char *pcVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  unsigned long uVar8;
  unsigned long local_68;
  unsigned long uStack_60;
  char *local_58;
  unsigned long long local_48;
  unsigned long uStack_40;
  char *local_38;
  
  if (((((this[0xa9] != (MixpanelTracker)0x0) && (this[0xaa] != (MixpanelTracker)0x0)) &&
       (lVar5 = ControllerManager::getInstance(), lVar5 != 0)) &&
      (plVar3 = *(long **)(lVar5 + 0x208), plVar3 != (long *)0x0)) &&
     ((param_1 == (Model *)0x0 ||
      ((iVar2 = *(int *)(param_1 + 0x7ec), lVar5 = (**(code **)(*plVar3 + 0x10))(plVar3),
       iVar2 == *(int *)(lVar5 + 0x7ec) && (param_1[0x1b0] == (Model)0x0)))))) {
    (**(code **)(*plVar3 + 0x18))(&local_48,plVar3);
    uVar8 = uStack_40;
    pcVar6 = local_38;
    if ((local_48 & 1) == 0) {
      uVar8 = local_48 >> 1 & 0x7f;
      pcVar6 = (char *)((long)&local_48 + 1);
    }
    pcVar1 = pcVar6 + uVar8;
    if (uVar8 == 0) {
      pcVar7 = pcVar6;
      pcVar4 = pcVar6;
      if (pcVar6 != pcVar1) {
        while (pcVar4 = pcVar4 + 1, pcVar7 = pcVar6, pcVar4 != pcVar1) {
          if (*pcVar4 != ' ') {
            *pcVar6 = *pcVar4;
            pcVar6 = pcVar6 + 1;
          }
        }
      }
    }
    else {
      do {
        if (*pcVar6 == ' ') return;
        pcVar6 = pcVar6 + 1;
        uVar8 = uVar8 - 1;
        pcVar7 = pcVar1;
      } while (uVar8 != 0);
    }
    pcVar6 = (char *)((long)&local_48 + 1);
    if ((local_48 & 1) != 0) {
      pcVar6 = local_38;
    }
    // std code
    local_58 = local_38;
    local_68 = local_48;
    uStack_60 = uStack_40;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = (char *)0x0;
    lVar5 = 0x50;
    if (!param_2) {
      lVar5 = 0;
    }
    lVar5 = // std code
            __hash_table<// std code
            ::find<// std code
                                 *)(this + lVar5 + 8),(string *)&local_68);
    if (lVar5 == 0) {
      lVar5 = 0x28;
      if (param_2) {
        lVar5 = 0x78;
      }
      // std code
      unordered_set<// std code
      ::insert((unordered_set<// std code
                *)(this + lVar5 + 8),(string *)&local_68);
      LOCK();
      this[0xa8] = (MixpanelTracker)0x1;
      UNLOCK();
    }
    if ((local_68 & 1) != 0) {
      delete(local_58);
    }
    if ((local_48 & 1) != 0) {
      delete(local_38);
    }
  }
  return;
}
}
