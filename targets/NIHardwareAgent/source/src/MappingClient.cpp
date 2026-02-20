#include <ni/controller_editor/MappingClient.hpp>
namespace NI::NHL2::SERVER {

MappingClient::~MappingClient() {
MappingClient MVar1;
  MappingClient *pMVar2;
  
  *(void ***)this = &PTR__MappingClient_1009d88b0;
  if (*(long **)(this + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x70) + 8))();
  }
  *(unsigned long long *)(this + 0x70) = 0;
  *(void ***)this = &PTR__InternalClient_1009d77b8;
  pMVar2 = *(MappingClient **)(this + 0x60);
  if (this + 0x40 == pMVar2) {
    (**(code **)(*(long *)pMVar2 + 0x20))();
    MVar1 = this[0x20];
  }
  else {
    if (pMVar2 != (MappingClient *)0x0) {
      (**(code **)(*(long *)pMVar2 + 0x28))();
    }
    MVar1 = this[0x20];
  }
  if (((byte)MVar1 & 1) != 0) {
    delete(*(void **)(this + 0x30));
  }
  delete(this);
  return;
}
}
