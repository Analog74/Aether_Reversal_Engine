#include <ni/controller_editor/IPCConnection.hpp>
namespace NI::NHL2::SERVER {

void IPCConnection::reset() {
long *plVar1;
  OSImpl *this_00;
  long *plVar2;
  long lVar3;
  
  LOCK();
  this[0x80] = (IPCConnection)0x0;
  UNLOCK();
  if (*(long *)(this + 0x20) != 0) {
    this_00 = *(OSImpl **)(*(long *)(this + 0x20) + 0x20);
    if (*(long *)this_00 != 0) {
      IPCPort::OSImpl::close(this_00);
    }
    *(unsigned long long *)(this + 0x20) = 0;
    plVar2 = *(long **)(this + 0x28);
    *(unsigned long long *)(this + 0x28) = 0;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        // std code
      }
    }
  }
  if (*(long *)(this + 0x30) != 0) {
    plVar2 = *(long **)(*(long *)(this + 0x30) + 0x20);
    if ((*plVar2 != 0) && ((int)plVar2[6] == 1)) {
      LOCK();
      *(unsigned int *)(plVar2 + 6) = 0;
      UNLOCK();
      if (plVar2[1] != 0) {
        _CFRunLoopStop();
        plVar2[1] = 0;
      }
      lVar3 = // boost code
      if (lVar3 == 0) {
        // std code
      }
      if (*plVar2 != 0) {
        _CFMessagePortInvalidate();
      }
    }
    lVar3 = *(long *)(this + 0x30);
    if (*(long *)*(OSImpl **)(lVar3 + 0x20) != 0) {
      IPCPort::OSImpl::close(*(OSImpl **)(lVar3 + 0x20));
      *(unsigned long long *)(lVar3 + 0x38) = 0;
      *(unsigned long long *)(lVar3 + 0x40) = 0;
    }
    *(unsigned long long *)(this + 0x30) = 0;
    plVar2 = *(long **)(this + 0x38);
    *(unsigned long long *)(this + 0x38) = 0;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        // std code
        lVar3 = *(long *)(this + 0x40);
        goto joined_r0x0001001b318a;
      }
    }
  }
  lVar3 = *(long *)(this + 0x40);
joined_r0x0001001b318a:
  if (lVar3 != 0) {
    plVar2 = *(long **)(lVar3 + 0x20);
    if ((*plVar2 != 0) && ((int)plVar2[6] == 1)) {
      LOCK();
      *(unsigned int *)(plVar2 + 6) = 0;
      UNLOCK();
      if (plVar2[1] != 0) {
        _CFRunLoopStop();
        plVar2[1] = 0;
      }
      lVar3 = // boost code
      if (lVar3 == 0) {
        // std code
      }
      if (*plVar2 != 0) {
        _CFMessagePortInvalidate();
      }
    }
    lVar3 = *(long *)(this + 0x40);
    if (*(long *)*(OSImpl **)(lVar3 + 0x20) != 0) {
      IPCPort::OSImpl::close(*(OSImpl **)(lVar3 + 0x20));
      *(unsigned long long *)(lVar3 + 0x38) = 0;
      *(unsigned long long *)(lVar3 + 0x40) = 0;
    }
    *(unsigned long long *)(this + 0x40) = 0;
    plVar2 = *(long **)(this + 0x48);
    *(unsigned long long *)(this + 0x48) = 0;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        // std code
        return;
      }
    }
  }
  return;
}

IPCConnection::~IPCConnection() {
long *plVar1;
  long lVar2;
  IPCConnection IVar3;
  IPCConnection *pIVar4;
  long *plVar5;
  
  *(void ***)this = &PTR__IPCConnection_1009e7640;
  pIVar4 = *(IPCConnection **)(this + 0x70);
  if (this + 0x50 == pIVar4) {
    (**(code **)(*(long *)pIVar4 + 0x20))();
    plVar5 = *(long **)(this + 0x48);
    if (plVar5 != (long *)0x0) goto LAB_1001bbf96;
LAB_1001bbfa8:
    plVar5 = *(long **)(this + 0x38);
  }
  else {
    if (pIVar4 != (IPCConnection *)0x0) {
      (**(code **)(*(long *)pIVar4 + 0x28))();
    }
    plVar5 = *(long **)(this + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_1001bbfa8;
LAB_1001bbf96:
    LOCK();
    plVar1 = plVar5 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) goto LAB_1001bbfa8;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    // std code
    plVar5 = *(long **)(this + 0x38);
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      // std code
    }
  }
  plVar5 = *(long **)(this + 0x28);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      // std code
      *(void ***)this = &PTR__Connection_1009e7790;
      IVar3 = this[8];
      goto joined_r0x0001001bc041;
    }
  }
  *(void ***)this = &PTR__Connection_1009e7790;
  IVar3 = this[8];
joined_r0x0001001bc041:
  if (((byte)IVar3 & 1) != 0) {
    delete(*(void **)(this + 0x18));
    return;
  }
  return;
}
}
