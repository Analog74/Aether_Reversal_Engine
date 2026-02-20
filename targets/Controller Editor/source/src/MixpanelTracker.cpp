#include <ni/controller_editor/MixpanelTracker.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void MixpanelTracker::attachToModelEditingCallbacks(bool param_1) {
}

void MixpanelTracker::clearPendingEvents() {
unsigned long uVar1;
  unsigned long long *puVar2;
  unsigned long long *puVar3;
  unsigned long uVar4;
  unsigned long uVar5;
  
  if (*(long *)(this + 0x48) != 0) {
    puVar3 = *(unsigned long long **)(this + 0x40);
    while (puVar3 != (unsigned long long *)0x0) {
      puVar2 = (unsigned long long *)*puVar3;
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        delete((void *)puVar3[4]);
      }
      delete(puVar3);
      puVar3 = puVar2;
    }
    *(unsigned long long *)(this + 0x40) = 0;
    uVar1 = *(unsigned long *)(this + 0x38);
    if (uVar1 != 0) {
      uVar4 = (unsigned long)((uint)uVar1 & 3);
      if (uVar1 - 1 < 3) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(unsigned long long *)(*(long *)(this + 0x30) + uVar5 * 8) = 0;
          *(unsigned long long *)(*(long *)(this + 0x30) + 8 + uVar5 * 8) = 0;
          *(unsigned long long *)(*(long *)(this + 0x30) + 0x10 + uVar5 * 8) = 0;
          *(unsigned long long *)(*(long *)(this + 0x30) + 0x18 + uVar5 * 8) = 0;
          uVar5 = uVar5 + 4;
        } while ((uVar1 & 0xfffffffffffffffc) != uVar5);
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(unsigned long long *)(*(long *)(this + 0x30) + uVar5 * 8) = 0;
        uVar5 = uVar5 + 1;
      }
    }
    *(unsigned long long *)(this + 0x48) = 0;
  }
  if (*(long *)(this + 0x98) != 0) {
    puVar3 = *(unsigned long long **)(this + 0x90);
    while (puVar3 != (unsigned long long *)0x0) {
      puVar2 = (unsigned long long *)*puVar3;
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        delete((void *)puVar3[4]);
      }
      delete(puVar3);
      puVar3 = puVar2;
    }
    *(unsigned long long *)(this + 0x90) = 0;
    uVar1 = *(unsigned long *)(this + 0x88);
    if (uVar1 != 0) {
      uVar4 = (unsigned long)((uint)uVar1 & 3);
      if (uVar1 - 1 < 3) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(unsigned long long *)(*(long *)(this + 0x80) + uVar5 * 8) = 0;
          *(unsigned long long *)(*(long *)(this + 0x80) + 8 + uVar5 * 8) = 0;
          *(unsigned long long *)(*(long *)(this + 0x80) + 0x10 + uVar5 * 8) = 0;
          *(unsigned long long *)(*(long *)(this + 0x80) + 0x18 + uVar5 * 8) = 0;
          uVar5 = uVar5 + 4;
        } while ((uVar1 & 0xfffffffffffffffc) != uVar5);
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(unsigned long long *)(*(long *)(this + 0x80) + uVar5 * 8) = 0;
        uVar5 = uVar5 + 1;
      }
    }
    *(unsigned long long *)(this + 0x98) = 0;
  }
  GP::Registry::flush();
  GP::Registry::remove("FactoryMappingsPending",0);
  GP::Registry::remove("UserMappingsPending",0);
  return;
}

void MixpanelTracker::loadPendingEventsFromLocalStorage(bool param_1) {
}

void MixpanelTracker::numRequiredMappingOperations(bool param_1) {
}

void MixpanelTracker::savePendingEventsToLocalStorage(bool param_1) {
}

void MixpanelTracker::syncLocallyStoredDevices(bool param_1) {
}

void MixpanelTracker::syncWithMixpanel() {
byte bVar1;
  byte bVar2;
  char cVar3;
  unsigned long uVar4;
  uret local_50 [40];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101ab4610;
  if ((this[0xa9] == (MixpanelTracker)0x0) || (this[0xaa] == (MixpanelTracker)0x0)) {
    uVar4 = 0;
  }
  else {
    ni::uret::makeEndEvent(local_50);
    bVar1 = syncPendingMappingEvents(this,(Event *)local_50,false);
    bVar2 = syncPendingMappingEvents(this,(Event *)local_50,true);
    if ((bVar1 | bVar2) == 1) {
      cVar3 = (**(code **)(*(long *)this + 0x30))(this,local_50);
      if (cVar3 == '\0') {
        uVar4 = 0;
        // boost code
        variant<// boost code
        ::destroy_content((variant<// boost code
                           *)local_50);
        return;
      }
      uVar4 = 0((int7)((unsigned long)local_50 >> 8),1);
      clearPendingEvents(this);
    }
    else {
      uVar4 = 0;
    }
    // boost code
    variant<// boost code
    ::destroy_content((variant<// boost code
                       *)local_50);
    if ((bVar1 | bVar2) != 0) return;
  }
  clearPendingEvents(this);
  if (*(long *)PTR____stack_chk_guard_101ab4610 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4 & 0xffffff01;
}

MixpanelTracker::~MixpanelTracker() {
void *pvVar1;
  unsigned long long *puVar2;
  unsigned long long *puVar3;
  
  *(void ***)this = &PTR__MixpanelTracker_101ab4e00;
  puVar3 = *(unsigned long long **)(this + 0x90);
  while (puVar3 != (unsigned long long *)0x0) {
    puVar2 = (unsigned long long *)*puVar3;
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      delete((void *)puVar3[4]);
    }
    delete(puVar3);
    puVar3 = puVar2;
  }
  pvVar1 = *(void **)(this + 0x80);
  *(unsigned long long *)(this + 0x80) = 0;
  if (pvVar1 != (void *)0x0) {
    delete(pvVar1);
  }
  puVar3 = *(unsigned long long **)(this + 0x68);
  while (puVar3 != (unsigned long long *)0x0) {
    puVar2 = (unsigned long long *)*puVar3;
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      delete((void *)puVar3[4]);
    }
    delete(puVar3);
    puVar3 = puVar2;
  }
  pvVar1 = *(void **)(this + 0x58);
  *(unsigned long long *)(this + 0x58) = 0;
  if (pvVar1 != (void *)0x0) {
    delete(pvVar1);
  }
  puVar3 = *(unsigned long long **)(this + 0x40);
  while (puVar3 != (unsigned long long *)0x0) {
    puVar2 = (unsigned long long *)*puVar3;
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      delete((void *)puVar3[4]);
    }
    delete(puVar3);
    puVar3 = puVar2;
  }
  pvVar1 = *(void **)(this + 0x30);
  *(unsigned long long *)(this + 0x30) = 0;
  if (pvVar1 != (void *)0x0) {
    delete(pvVar1);
  }
  puVar3 = *(unsigned long long **)(this + 0x18);
  while (puVar3 != (unsigned long long *)0x0) {
    puVar2 = (unsigned long long *)*puVar3;
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      delete((void *)puVar3[4]);
    }
    delete(puVar3);
    puVar3 = puVar2;
  }
  pvVar1 = *(void **)(this + 8);
  *(unsigned long long *)(this + 8) = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  delete(pvVar1);
  return;
}
}
