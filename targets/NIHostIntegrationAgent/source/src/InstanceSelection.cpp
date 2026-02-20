#include <ni/controller_editor/InstanceSelection.hpp>
namespace NI::dawcontrol::hw::komplete_kontrol::mk2::pages {

void InstanceSelection::scheduleSpeakInstance() {
byte bVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  InstanceTextHelpers local_58 [16];
  void *local_48;
  int *local_40;
  int *local_38;
  int local_28;
  
  InstanceModeClient::instances();
  piVar3 = local_38;
  for (piVar5 = local_40; piVar5 != local_38; piVar5 = piVar5 + 0x10) {
    piVar3 = local_40;
    if (*piVar5 == local_28) {
      if (piVar5 != local_38) {
        lVar6 = 0;
        goto LAB_100057100;
      }
      break;
    }
  }
  goto joined_r0x0001000571e3;
  while (lVar2 = lVar6 + 0x40, lVar6 = lVar6 + 0x40, (int *)((long)local_40 + lVar2) != local_38) {
LAB_100057100:
    if (*(int *)((long)local_40 + lVar6) == local_28) {
      if ((int *)((long)local_40 + lVar6) != local_38) {
        lVar6 = lVar6 >> 6;
        goto LAB_1000571aa;
      }
      break;
    }
  }
  lVar6 = 0xffffffff;
LAB_1000571aa:
  InstanceTextHelpers::instanceText(local_58,(ClientInstance *)(local_40 + lVar6 * 0x10 + 2));
  (**(code **)(**(long **)(this + 0x38) + 0x20))(*(long **)(this + 0x38),local_58);
  piVar3 = local_40;
  if (((byte)local_58[0] & 1) != 0) {
    delete(local_48);
    piVar3 = local_40;
  }
joined_r0x0001000571e3:
  piVar5 = piVar3;
  piVar4 = local_38;
  if (piVar3 != (int *)0x0) {
    for (; piVar4 != piVar3; piVar4 = piVar4 + -0x10) {
      if ((*(byte *)(piVar4 + -8) & 1) == 0) {
        bVar1 = *(byte *)(piVar4 + -0xe);
      }
      else {
        delete(*(void **)(piVar4 + -4));
        bVar1 = *(byte *)(piVar4 + -0xe);
      }
      if ((bVar1 & 1) != 0) {
        delete(*(void **)(piVar4 + -10));
      }
      piVar5 = local_40;
    }
    delete(piVar5);
  }
  return;
}

void InstanceSelection::speakPageMessage() {
long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *local_28;
  
  plVar4 = (long *)new(0xb0);
  plVar4[1] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0x32aaaba7;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0x3cb0b1bb;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  *plVar4 = (long)&PTR____deferred_assoc_state_100a51828;
  plVar4[0x15] = (long)this;
  *(unsigned int *)(plVar4 + 0x11) = 8;
  // std code
  if ((*(uint *)(plVar4 + 0x11) & 2) == 0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
    *(uint *)(plVar4 + 0x11) = *(uint *)(plVar4 + 0x11) | 2;
    // std code
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    local_28 = plVar4;
    (**(code **)(**(long **)(this + 0x38) + 0x28))(*(long **)(this + 0x38),&local_28);
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar4 = local_28 + 1;
      lVar2 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    return;
  }
  // std code
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}
}
