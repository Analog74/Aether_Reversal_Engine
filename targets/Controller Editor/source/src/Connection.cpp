#include <ni/controller_editor/Connection.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

void Connection::CheckClose() {
return *(int *)(this + 0x28) == 4;
}

void Connection::CheckExecuteState() {
return *(int *)(this + 0x28) == 2;
}

void Connection::ForcedDisconnectAllowed() {
return *(long *)(this + 0x840) == 0;
}

void Connection::GetFileDescriptor() {
return *(unsigned int *)(this + 0x10);
}

void Connection::GetLastTransactionTime() {
return *(unsigned long long *)(this + 0x30);
}

void Connection::Process(bool param_1) {
}

void Connection::ReadRequest() {
char cVar1;
  unsigned long uVar2;
  unsigned long uVar3;
  unsigned long long unaff_R14;
  unsigned long local_28;
  bool local_19;
  
  uVar3 = *(unsigned long *)(this + 0x860);
  uVar2 = *(unsigned long *)(this + 0x848) - uVar3;
  if (*(unsigned long *)(this + 0x848) < uVar3 || uVar2 == 0) {
    *(unsigned char *)(*(long *)(this + 0x858) + uVar3) = 0;
    *(unsigned int *)(this + 0x28) = 2;
  }
  else {
    cVar1 = TcpSocket::Receive((TcpSocket *)(this + 8),(char *)(uVar3 + *(long *)(this + 0x858)),
                               uVar2,&local_28,&local_19,-1);
    if (cVar1 == '\0') {
      uVar3 = 0;
      (**(code **)(*(long *)this + 0x10))(this,0);
      return;
    }
    uVar3 = *(long *)(this + 0x860) + local_28;
    *(unsigned long *)(this + 0x860) = uVar3;
    if (*(unsigned long *)(this + 0x848) <= uVar3) return;
    if (local_19 != false) return;
  }
  uVar3 = 0((int7)((unsigned long)unaff_R14 >> 8),1);
  return uVar3 & 0xffffffff;
}

void Connection::SetActive(bool param_1) {
}

void Connection::SetCloseState() {
*(unsigned int *)(this + 0x28) = 4;
  return;
}

void Connection::WaitForReadability() {
if (this[0x38] != (Connection)0x0) {
    return *(int *)(this + 0x28) < 2;
  }
  return false;
}

void Connection::WaitForWritability() {
if (this[0x38] != (Connection)0x0) {
    return *(int *)(this + 0x28) == 3;
  }
  return false;
}

void Connection::WriteResponse() {
unsigned long uVar1;
  char cVar2;
  time_t tVar3;
  unsigned long uVar4;
  long *plVar5;
  unsigned long unaff_RBX;
  char *pcVar6;
  unsigned long local_30;
  
  tVar3 = _time((time_t *)0x0);
  *(time_t *)(this + 0x30) = tVar3;
  uVar4 = *(unsigned long *)(this + 0xca8);
  do {
    if (*(unsigned long *)(this + 0x890) <= uVar4) {
      uVar4 = *(unsigned long *)(this + 0x10e8);
      return;
    }
    unaff_RBX = 0;
    pcVar6 = (char *)0x0;
    if (*(unsigned long *)(this + 0x10e8) < *(unsigned long *)(this + 0x890)) {
      uVar4 = *(unsigned long *)(this + 0x10e8);
      for (plVar5 = *(long **)(this + 0x878); plVar5 != *(long **)(this + 0x880);
          plVar5 = plVar5 + 4) {
        uVar1 = plVar5[2];
        if (uVar4 < uVar1) {
          *(unsigned char *)(*plVar5 + uVar1) = 0;
          unaff_RBX = uVar1 - uVar4;
          pcVar6 = (char *)(uVar4 + *plVar5);
          return;
        }
        uVar4 = uVar4 - uVar1;
      }
      unaff_RBX = 0;
      pcVar6 = (char *)0x0;
    }
    cVar2 = TcpSocket::Send((TcpSocket *)(this + 8),pcVar6,unaff_RBX,&local_30,-1);
    if (cVar2 == '\0') return;
    uVar4 = *(long *)(this + 0xca8) + local_30;
    *(unsigned long *)(this + 0xca8) = uVar4;
  } while (local_30 <= unaff_RBX);
  return;
  uVar4 = 0;
  (**(code **)(*(long *)this + 0x10))(this,0);
  return;
  do {
    if (*(unsigned long *)(this + 0xcd0) <= uVar4) {
      *(unsigned int *)(this + 0x28) = 0;
      (**(code **)(*(long *)this + 0x10))(this,this[0x850]);
      uVar4 = 0((int7)(unaff_RBX >> 8),this[0x850] != (Connection)0x0);
      return;
    }
    for (plVar5 = *(long **)(this + 0xcb8); plVar5 != *(long **)(this + 0xcc0); plVar5 = plVar5 + 4)
    {
      uVar1 = plVar5[2];
      if (uVar4 < uVar1) {
        *(unsigned char *)(*plVar5 + uVar1) = 0;
        unaff_RBX = uVar1 - uVar4;
        pcVar6 = (char *)(uVar4 + *plVar5);
        return;
      }
      uVar4 = uVar4 - uVar1;
    }
    unaff_RBX = 0;
    pcVar6 = (char *)0x0;
    cVar2 = TcpSocket::Send((TcpSocket *)(this + 8),pcVar6,unaff_RBX,&local_30,-1);
    if (cVar2 == '\0') return;
    uVar4 = *(long *)(this + 0x10e8) + local_30;
    *(unsigned long *)(this + 0x10e8) = uVar4;
  } while (local_30 <= unaff_RBX);
  uVar4 = 0((int7)(unaff_RBX >> 8),1);
  return uVar4 & 0xffffffff;
}

Connection::~Connection() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
