#include <ni/controller_editor/IPCConnection.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2 {

void IPCConnection::drop() {
unsigned int local_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  if (((byte)this[0x88] & 1) != 0) {
    local_38 = 4;
    uStack_34 = 0x10;
    uStack_30 = 0;
    uStack_2c = 0x3442d00;
    (**(code **)(*(long *)this + 0x28))(this,&local_38);
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}

void IPCConnection::getLastConnectionError() const {
return *(unsigned int *)(this + 0x8c);
}

void IPCConnection::getLastConnectionErrorAsString() const {
long in_RSI;
  IPCConnection *in_RDI;
  
  getLastConnectionErrorAsUserMessage(in_RDI,*(uint *)(in_RSI + 0x8c));
  return;
}

IPCConnection::IPCConnection(char const*) [clone .cold.1] {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if ((long *)(param_1 + 0x40) == plVar3) {
    (**(code **)(*plVar3 + 0x20))();
  }
  else if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x28))();
  }
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
    }
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
    }
  }
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      
    }
  }
  
}

void IPCConnection::isConnected() const {
return (byte)this[0x88] & 1;
}

IPCConnection::~IPCConnection() {
long *plVar1;
  long lVar2;
  IPCConnection *pIVar3;
  long *plVar4;
  
  *(void ***)this = &PTR__IPCConnection_101b0e200;
  if (((byte)this[0x70] & 1) != 0) {
    delete(*(void **)(this + 0x80));
  }
  pIVar3 = *(IPCConnection **)(this + 0x60);
  if (this + 0x40 == pIVar3) {
    (**(code **)(*(long *)pIVar3 + 0x20))();
    plVar4 = *(long **)(this + 0x30);
  }
  else {
    if (pIVar3 != (IPCConnection *)0x0) {
      (**(code **)(*(long *)pIVar3 + 0x28))();
    }
    plVar4 = *(long **)(this + 0x30);
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      // std code
      plVar4 = *(long **)(this + 0x20);
      goto joined_r0x000100446130;
    }
  }
  plVar4 = *(long **)(this + 0x20);
joined_r0x000100446130:
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      // std code
    }
  }
  plVar4 = *(long **)(this + 0x10);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      // std code
      return;
    }
  }
  return;
}
}
