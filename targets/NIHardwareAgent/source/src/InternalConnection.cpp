#include <ni/controller_editor/InternalConnection.hpp>
namespace NI::NHL2::SERVER {

void InternalConnection::processMessageQueue() {
long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned long uVar9;
  long lVar10;
  unsigned long uVar11;
  unsigned int local_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned long long local_68;
  byte local_58 [16];
  void *local_48;
  InternalConnection *local_40;
  long *local_38;
  
  local_58[0] = 0x14;
  local_58[1] = 0x49;
  local_58[2] = 0x6e;
  local_58[3] = 0x74;
  local_58[4] = 0x65;
  local_58[5] = 0x72;
  local_58[6] = 0x6e;
  local_58[7] = 0x43;
  local_58[8] = 0x6f;
  local_58[9] = 0x6e;
  local_58[10] = 0x6e;
  local_58[0xb] = 0;
  ni::this_thread::set_name(local_58);
  if ((local_58[0] & 1) != 0) {
    delete(local_48);
  }
  local_40 = this + 0x80;
  do {
    LOCK();
    *(int *)(this + 0x10a0) = *(int *)(this + 0x10a0) + 1;
    UNLOCK();
    _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(this + 0x1098),0xffffffffffffffff);
    uVar11 = *(unsigned long *)(this + 0x78);
    if (*(unsigned long *)(this + 0x38) != uVar11) {
      local_38 = (long *)0x0;
      do {
        lVar10 = uVar11 * 0x10;
        lVar3 = *(long *)(local_40 + lVar10);
        plVar4 = *(long **)(local_40 + lVar10 + 8);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar4[1] = plVar4[1] + 1;
          UNLOCK();
        }
        if (local_38 != (long *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            lVar2 = *local_38;
            plVar1 = local_38;
            local_38 = plVar4;
            (**(code **)(lVar2 + 0x10))(plVar1);
            // std code
            plVar4 = local_38;
          }
        }
        local_38 = plVar4;
        plVar4 = *(long **)(local_40 + lVar10 + 8);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar10 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar10 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            // std code
          }
        }
        uVar9 = ~uVar11;
        if (0xff < uVar11 + 1) {
          uVar9 = 0xffffffffffffff00;
        }
        *(unsigned long *)(this + 0x78) = ((uVar9 + uVar11 + 0x101) / 0x101) * -0x101 + uVar11 + 1;
        uVar5 = local_78;
        uVar6 = uStack_74;
        uVar7 = uStack_70;
        uVar8 = uStack_6c;
        if (lVar3 != 0) {
          if ((*(uint *)(lVar3 + 0xc) & 0xffffff) == 0x404000) {
            local_68 = *(unsigned long long *)(lVar3 + 0x10);
            local_78 = 0xc;
            uStack_74 = 0x10;
            uStack_70 = 0;
            uStack_6c = 0x3402300;
            plVar4 = *(long **)(*(long *)(this + 0x20) + 0x60);
            uVar5 = 0xc;
            uVar6 = 0x10;
            uVar7 = 0;
            uVar8 = 0x3402300;
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x30))(plVar4,&local_78);
              uVar5 = local_78;
              uVar6 = uStack_74;
              uVar7 = uStack_70;
              uVar8 = uStack_6c;
            }
          }
          else {
            (**(code **)(**(long **)(this + 0x20) + 0x10))(*(long **)(this + 0x20),lVar3);
            uVar5 = local_78;
            uVar6 = uStack_74;
            uVar7 = uStack_70;
            uVar8 = uStack_6c;
          }
        }
        uStack_6c = uVar8;
        uStack_70 = uVar7;
        uStack_74 = uVar6;
        local_78 = uVar5;
        uVar11 = *(unsigned long *)(this + 0x78);
      } while (*(unsigned long *)(this + 0x38) != uVar11);
      if (local_38 != (long *)0x0) {
        LOCK();
        plVar4 = local_38 + 1;
        lVar3 = *plVar4;
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
          // std code
        }
      }
    }
  } while (((byte)this[0x10a8] & 1) != 0);
  return;
}

InternalConnection::~InternalConnection() {
~InternalConnection(this);
  delete(this);
  return;
}
}
