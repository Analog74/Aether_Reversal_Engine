#include <ni/controller_editor/ControllerSubscriptionMonitor.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void ControllerSubscriptionMonitor::checkDeviceChanges() {
long *plVar1;
  int iVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  unsigned long long uVar6;
  unsigned long long uVar7;
  unsigned long long uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  byte *pbVar13;
  unsigned long uVar14;
  long lVar15;
  long *plVar16;
  unsigned long uVar17;
  long lVar18;
  int *piVar19;
  unsigned long uVar20;
  unsigned long uVar21;
  byte *pbVar22;
  byte *pbVar23;
  unsigned long long local_48;
  unsigned long uStack_40;
  byte *pbStack_38;
  
  piVar19 = *(int **)(this + 0x30);
  piVar3 = *(int **)(this + 0x38);
  if (piVar19 != piVar3) {
    do {
      plVar16 = *(long **)(this + 8);
      plVar4 = *(long **)(this + 0x10);
      if (plVar16 != plVar4) {
        iVar2 = *piVar19;
        plVar5 = (long *)*plVar16;
        if ((plVar5 == (long *)0x0) ||
           (iVar10 = (**(code **)(*plVar5 + 0x150))(plVar5), iVar10 != iVar2)) return;
        plVar1 = plVar5 + 0xf9;
        iVar10 = (**(code **)(plVar5[0xf9] + 0x10))(plVar1);
        if (iVar10 != 1) {
          plVar12 = (long *)(**(code **)(*plVar5 + 0x158))(plVar5);
          if (plVar12 != (long *)0x0) {
            local_48 = local_48 & 0xffffffffffffff00;
            (**(code **)(*plVar12 + 0x68))(plVar12,&local_48);
            uVar11 = (**(code **)(*plVar1 + 0x18))(plVar1);
            if (uVar11 == (byte)local_48) return;
          }
          return;
        }
        pbVar23 = (byte *)(piVar19 + 2);
        if ((char)piVar19[8] == '\0') {
          if ((*pbVar23 & 1) == 0) {
            uVar17 = (unsigned long)(*pbVar23 >> 1);
            pbVar23 = pbVar23 + uVar17 + 1;
            pbVar22 = (byte *)((long)piVar19 + 9);
            if (0x16 < uVar17) return;
            local_48 = 0(local_48._1_7_,(char)uVar17 * '\x02');
            pbVar13 = (byte *)((long)&local_48 + 1);
            if (uVar17 == 0) return;
            uVar14 = (long)pbVar23 - (long)pbVar22;
          }
          else {
            uVar17 = *(unsigned long *)(piVar19 + 4);
            if (0xffffffffffffffef < uVar17) return;
            pbVar22 = *(byte **)(piVar19 + 6);
            pbVar23 = pbVar22 + uVar17;
            if (uVar17 < 0x17) return;
            uVar14 = uVar17 + 0x10 & 0xfffffffffffffff0;
            pbVar13 = (byte *)new char[uVar14];
            local_48 = uVar14 | 1;
            uVar14 = (long)pbVar23 - (long)pbVar22;
            pbStack_38 = pbVar13;
            uStack_40 = uVar17;
          }
          if ((uVar14 < 0x20) || ((pbVar13 < pbVar23 && (pbVar22 < pbVar13 + uVar14))))
          return;
          uVar21 = uVar14 & 0xffffffffffffffe0;
          uVar20 = (uVar21 - 0x20 >> 5) + 1;
          uVar17 = (unsigned long)((uint)uVar20 & 3);
          if (uVar21 - 0x20 < 0x60) {
            lVar18 = 0;
          }
          else {
            lVar15 = -(uVar20 & 0xfffffffffffffffc);
            lVar18 = 0;
            do {
              uVar6 = *(unsigned long long *)(pbVar22 + lVar18 + 8);
              uVar7 = *(unsigned long long *)(pbVar22 + lVar18 + 0x10);
              uVar8 = *(unsigned long long *)(pbVar22 + lVar18 + 0x10 + 8);
              *(unsigned long long *)(pbVar13 + lVar18) = *(unsigned long long *)(pbVar22 + lVar18);
              *(unsigned long long *)(pbVar13 + lVar18 + 8) = uVar6;
              *(unsigned long long *)(pbVar13 + lVar18 + 0x10) = uVar7;
              *(unsigned long long *)(pbVar13 + lVar18 + 0x10 + 8) = uVar8;
              uVar6 = *(unsigned long long *)(pbVar22 + lVar18 + 0x20 + 8);
              uVar7 = *(unsigned long long *)(pbVar22 + lVar18 + 0x30);
              uVar8 = *(unsigned long long *)(pbVar22 + lVar18 + 0x30 + 8);
              *(unsigned long long *)(pbVar13 + lVar18 + 0x20) = *(unsigned long long *)(pbVar22 + lVar18 + 0x20);
              *(unsigned long long *)(pbVar13 + lVar18 + 0x20 + 8) = uVar6;
              *(unsigned long long *)(pbVar13 + lVar18 + 0x30) = uVar7;
              *(unsigned long long *)(pbVar13 + lVar18 + 0x30 + 8) = uVar8;
              uVar6 = *(unsigned long long *)(pbVar22 + lVar18 + 0x40 + 8);
              uVar7 = *(unsigned long long *)(pbVar22 + lVar18 + 0x50);
              uVar8 = *(unsigned long long *)(pbVar22 + lVar18 + 0x50 + 8);
              *(unsigned long long *)(pbVar13 + lVar18 + 0x40) = *(unsigned long long *)(pbVar22 + lVar18 + 0x40);
              *(unsigned long long *)(pbVar13 + lVar18 + 0x40 + 8) = uVar6;
              *(unsigned long long *)(pbVar13 + lVar18 + 0x50) = uVar7;
              *(unsigned long long *)(pbVar13 + lVar18 + 0x50 + 8) = uVar8;
              uVar6 = *(unsigned long long *)(pbVar22 + lVar18 + 0x60 + 8);
              uVar7 = *(unsigned long long *)(pbVar22 + lVar18 + 0x70);
              uVar8 = *(unsigned long long *)(pbVar22 + lVar18 + 0x70 + 8);
              *(unsigned long long *)(pbVar13 + lVar18 + 0x60) = *(unsigned long long *)(pbVar22 + lVar18 + 0x60);
              *(unsigned long long *)(pbVar13 + lVar18 + 0x60 + 8) = uVar6;
              *(unsigned long long *)(pbVar13 + lVar18 + 0x70) = uVar7;
              *(unsigned long long *)(pbVar13 + lVar18 + 0x70 + 8) = uVar8;
              lVar18 = lVar18 + 0x80;
              lVar15 = lVar15 + 4;
            } while (lVar15 != 0);
          }
          if (uVar17 != 0) {
            lVar15 = 0;
            do {
              uVar6 = *(unsigned long long *)(pbVar22 + lVar15 + lVar18 + 8);
              uVar7 = *(unsigned long long *)(pbVar22 + lVar15 + lVar18 + 0x10);
              uVar8 = *(unsigned long long *)(pbVar22 + lVar15 + lVar18 + 0x10 + 8);
              *(unsigned long long *)(pbVar13 + lVar15 + lVar18) =
                   *(unsigned long long *)(pbVar22 + lVar15 + lVar18);
              *(unsigned long long *)(pbVar13 + lVar15 + lVar18 + 8) = uVar6;
              *(unsigned long long *)(pbVar13 + lVar15 + lVar18 + 0x10) = uVar7;
              *(unsigned long long *)(pbVar13 + lVar15 + lVar18 + 0x10 + 8) = uVar8;
              lVar15 = lVar15 + 0x20;
            } while (uVar17 << 5 != lVar15);
          }
          pbVar13 = pbVar13 + uVar21;
          if (uVar21 != uVar14) {
            pbVar22 = pbVar22 + uVar21;
            do {
              *pbVar13 = *pbVar22;
              pbVar22 = pbVar22 + 1;
              pbVar13 = pbVar13 + 1;
            } while (pbVar23 != pbVar22);
          }
          *pbVar13 = 0;
          (**(code **)(*plVar5 + 0x1d8))(plVar5,&local_48);
        }
        else {
          if ((*pbVar23 & 1) == 0) {
            uVar17 = (unsigned long)(*pbVar23 >> 1);
            pbVar23 = pbVar23 + uVar17 + 1;
            pbVar22 = (byte *)((long)piVar19 + 9);
            if (0x16 < uVar17) return;
            local_48 = 0(local_48._1_7_,(char)uVar17 * '\x02');
            pbVar13 = (byte *)((long)&local_48 + 1);
            if (uVar17 == 0) return;
            uVar14 = (long)pbVar23 - (long)pbVar22;
          }
          else {
            uVar17 = *(unsigned long *)(piVar19 + 4);
            if (0xffffffffffffffef < uVar17) {
                    /* WARNING: Subroutine does not return */
              // std code
            }
            pbVar22 = *(byte **)(piVar19 + 6);
            pbVar23 = pbVar22 + uVar17;
            if (uVar17 < 0x17) return;
            uVar14 = uVar17 + 0x10 & 0xfffffffffffffff0;
            pbVar13 = (byte *)new char[uVar14];
            local_48 = uVar14 | 1;
            uVar14 = (long)pbVar23 - (long)pbVar22;
            uStack_40 = uVar17;
            pbStack_38 = pbVar13;
          }
          if ((uVar14 < 0x20) || ((pbVar13 < pbVar23 && (pbVar22 < pbVar13 + uVar14))))
          return;
          uVar21 = uVar14 & 0xffffffffffffffe0;
          uVar20 = (uVar21 - 0x20 >> 5) + 1;
          uVar17 = (unsigned long)((uint)uVar20 & 3);
          if (uVar21 - 0x20 < 0x60) {
            lVar18 = 0;
          }
          else {
            lVar15 = -(uVar20 & 0xfffffffffffffffc);
            lVar18 = 0;
            do {
              uVar6 = *(unsigned long long *)(pbVar22 + lVar18 + 8);
              uVar7 = *(unsigned long long *)(pbVar22 + lVar18 + 0x10);
              uVar8 = *(unsigned long long *)(pbVar22 + lVar18 + 0x10 + 8);
              *(unsigned long long *)(pbVar13 + lVar18) = *(unsigned long long *)(pbVar22 + lVar18);
              *(unsigned long long *)(pbVar13 + lVar18 + 8) = uVar6;
              *(unsigned long long *)(pbVar13 + lVar18 + 0x10) = uVar7;
              *(unsigned long long *)(pbVar13 + lVar18 + 0x10 + 8) = uVar8;
              uVar6 = *(unsigned long long *)(pbVar22 + lVar18 + 0x20 + 8);
              uVar7 = *(unsigned long long *)(pbVar22 + lVar18 + 0x30);
              uVar8 = *(unsigned long long *)(pbVar22 + lVar18 + 0x30 + 8);
              *(unsigned long long *)(pbVar13 + lVar18 + 0x20) = *(unsigned long long *)(pbVar22 + lVar18 + 0x20);
              *(unsigned long long *)(pbVar13 + lVar18 + 0x20 + 8) = uVar6;
              *(unsigned long long *)(pbVar13 + lVar18 + 0x30) = uVar7;
              *(unsigned long long *)(pbVar13 + lVar18 + 0x30 + 8) = uVar8;
              uVar6 = *(unsigned long long *)(pbVar22 + lVar18 + 0x40 + 8);
              uVar7 = *(unsigned long long *)(pbVar22 + lVar18 + 0x50);
              uVar8 = *(unsigned long long *)(pbVar22 + lVar18 + 0x50 + 8);
              *(unsigned long long *)(pbVar13 + lVar18 + 0x40) = *(unsigned long long *)(pbVar22 + lVar18 + 0x40);
              *(unsigned long long *)(pbVar13 + lVar18 + 0x40 + 8) = uVar6;
              *(unsigned long long *)(pbVar13 + lVar18 + 0x50) = uVar7;
              *(unsigned long long *)(pbVar13 + lVar18 + 0x50 + 8) = uVar8;
              uVar6 = *(unsigned long long *)(pbVar22 + lVar18 + 0x60 + 8);
              uVar7 = *(unsigned long long *)(pbVar22 + lVar18 + 0x70);
              uVar8 = *(unsigned long long *)(pbVar22 + lVar18 + 0x70 + 8);
              *(unsigned long long *)(pbVar13 + lVar18 + 0x60) = *(unsigned long long *)(pbVar22 + lVar18 + 0x60);
              *(unsigned long long *)(pbVar13 + lVar18 + 0x60 + 8) = uVar6;
              *(unsigned long long *)(pbVar13 + lVar18 + 0x70) = uVar7;
              *(unsigned long long *)(pbVar13 + lVar18 + 0x70 + 8) = uVar8;
              lVar18 = lVar18 + 0x80;
              lVar15 = lVar15 + 4;
            } while (lVar15 != 0);
          }
          if (uVar17 != 0) {
            lVar15 = 0;
            do {
              uVar6 = *(unsigned long long *)(pbVar22 + lVar15 + lVar18 + 8);
              uVar7 = *(unsigned long long *)(pbVar22 + lVar15 + lVar18 + 0x10);
              uVar8 = *(unsigned long long *)(pbVar22 + lVar15 + lVar18 + 0x10 + 8);
              *(unsigned long long *)(pbVar13 + lVar15 + lVar18) =
                   *(unsigned long long *)(pbVar22 + lVar15 + lVar18);
              *(unsigned long long *)(pbVar13 + lVar15 + lVar18 + 8) = uVar6;
              *(unsigned long long *)(pbVar13 + lVar15 + lVar18 + 0x10) = uVar7;
              *(unsigned long long *)(pbVar13 + lVar15 + lVar18 + 0x10 + 8) = uVar8;
              lVar15 = lVar15 + 0x20;
            } while (uVar17 << 5 != lVar15);
          }
          pbVar13 = pbVar13 + uVar21;
          if (uVar21 != uVar14) {
            pbVar22 = pbVar22 + uVar21;
            do {
              *pbVar13 = *pbVar22;
              pbVar22 = pbVar22 + 1;
              pbVar13 = pbVar13 + 1;
            } while (pbVar23 != pbVar22);
          }
          *pbVar13 = 0;
          (**(code **)(*plVar5 + 0x1d0))(plVar5,&local_48);
        }
        if ((local_48 & 1) != 0) {
          delete(pbStack_38);
        }
      }
      piVar19 = piVar19 + 10;
    } while (piVar19 != piVar3);
    piVar19 = *(int **)(this + 0x30);
    piVar3 = *(int **)(this + 0x38);
    while (piVar9 = piVar3, piVar9 != piVar19) {
      piVar3 = piVar9 + -10;
      if ((*(byte *)(piVar9 + -8) & 1) != 0) {
        delete(*(void **)(piVar9 + -4));
      }
    }
  }
  *(int **)(this + 0x38) = piVar19;
  return;
  plVar16 = plVar16 + 1;
  if (plVar4 == plVar16) return;
  return;
}

void ControllerSubscriptionMonitor::checkServiceAvailability(bool param_1) {
}

void ControllerSubscriptionMonitor::inAppStartup() const {
int iVar1;
  long lVar2;
  
  if (inAppStartup()::fiveSeconds == '\0') {
    iVar1 = ___cxa_guard_acquire(&inAppStartup()::fiveSeconds);
    if (iVar1 != 0) {
      inAppStartup()::fiveSeconds = 5000000000;
      ___cxa_guard_release(&inAppStartup()::fiveSeconds);
    }
  }
  lVar2 = NHL2::Timestamp::now();
  return lVar2 < inAppStartup()::fiveSeconds + *(long *)(this + 0x100);
}

void ControllerSubscriptionMonitor::isServiceRunning() const {
int iVar1;
  unsigned int extraout_var;
  unsigned int extraout_var_00;
  unsigned long long uVar2;
  
  iVar1 = _system("killall -s NIHardwareAgent &> /dev/null");
  uVar2 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
    iVar1 = _system("killall -s NIHardwareAgentD &> /dev/null");
    uVar2 = CONCAT44(extraout_var_00,iVar1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 0((int7)((unsigned long)uVar2 >> 8),1);
}

void ControllerSubscriptionMonitor::runSubscriptionMonitor() {
code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_48;
  ControllerSubscriptionMonitor *local_40;
  char local_38;
  
  if (((byte)this[0x109] & 1) != 0) {
    local_48 = -0x8000000000000000;
    do {
      local_38 = '\x01';
      local_40 = this + 0x80;
      // std code
      // std code
      lVar2 = // std code
      if (lVar2 == 0) {
        lVar3 = 0;
        lVar4 = lVar3 + 200000000;
      }
      else {
        if (lVar2 < 1) {
          lVar3 = local_48;
          if (-0x20c49ba5e353f8 < lVar2) return;
          return;
        }
        lVar4 = 0x7fffffffffffffff;
        if (lVar2 < 0x20c49ba5e353f8) {
          lVar4 = 0x7fffffffffffffff;
          lVar3 = lVar2 * 1000;
          if (lVar2 * 1000 < 0x7ffffffff4143e00) return;
        }
      }
      // std code
      // std code
      if (((byte)this[0x109] & 1) == 0) {
        if (local_38 == '\0') {
          return;
        }
        // std code
        return;
      }
      checkDeviceChanges(this);
      if (local_38 == '\0') {
        // std code
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      // std code
      local_38 = '\0';
      if ((*(long *)(this + 0xf0) != 0) && (checkServiceAvailability(this,false), local_38 != '\0'))
      {
        // std code
      }
    } while (((byte)this[0x109] & 1) != 0);
  }
  return;
}

void ControllerSubscriptionMonitor::startMonitoring() {
ControllerSubscriptionMonitor CVar1;
  int iVar2;
  unsigned long long uVar3;
  _Unwind_Exception *exception_object;
  code *local_38;
  unsigned long long local_30;
  ControllerSubscriptionMonitor *local_28;
  unsigned long long local_20;
  
  iVar2 = _system("killall -s NIHardwareAgent &> /dev/null");
  if (iVar2 != 0) {
    iVar2 = _system("killall -s NIHardwareAgentD &> /dev/null");
    if (iVar2 != 0) {
      CVar1 = (ControllerSubscriptionMonitor)0x0;
      return;
    }
  }
  CVar1 = (ControllerSubscriptionMonitor)0x1;
  LOCK();
  this[0x10a] = CVar1;
  UNLOCK();
  // std code
  uVar3 = NHL2::Timestamp::now();
  *(unsigned long long *)(this + 0x100) = uVar3;
  if (*(long *)(this + 0x10) != *(long *)(this + 8)) {
    LOCK();
    this[0x109] = (ControllerSubscriptionMonitor)0x1;
    UNLOCK();
    local_38 = runSubscriptionMonitor;
    local_30 = 0;
    local_28 = this;
    // std code
    thread<// std code
              ((thread *)&local_20,(__bind *)&local_38);
    if (*(long *)(this + 0x48) != 0) {
      exception_object = (_Unwind_Exception *)// std code
      // std code
                    /* WARNING: Subroutine does not return */
      __Unwind_Resume(exception_object);
    }
    *(unsigned long long *)(this + 0x48) = local_20;
    local_20 = 0;
    // std code
    subscribeAll(this);
  }
  // std code
  return;
}

void ControllerSubscriptionMonitor::subscribeAll() [clone .cold.1] {
ControllerSubscriptionMonitor *pCVar1;
  long lVar2;
  
  LOCK();
  pCVar1 = this + 8;
  lVar2 = *(long *)pCVar1;
  *(long *)pCVar1 = *(long *)pCVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}

void ControllerSubscriptionMonitor::unsubscribeAll() {
long *plVar1;
  
  if (*(Subscription **)(this + 0x20) != (Subscription *)0x0) {
    NHL2::Subscription::unsubscribe(*(Subscription **)(this + 0x20));
    plVar1 = *(long **)(this + 0x20);
    *(unsigned long long *)(this + 0x20) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  if (*(Subscription **)(this + 0x28) != (Subscription *)0x0) {
    NHL2::Subscription::unsubscribe(*(Subscription **)(this + 0x28));
    plVar1 = *(long **)(this + 0x28);
    *(unsigned long long *)(this + 0x28) = 0;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100048946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))();
      return;
    }
  }
  return;
}

ControllerSubscriptionMonitor::~ControllerSubscriptionMonitor() {
~ControllerSubscriptionMonitor(this);
  delete(this);
  return;
}
}
