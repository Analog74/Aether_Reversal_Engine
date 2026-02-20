#include <ni/controller_editor/GeneratePOSTResponseHeader_unsigned_long__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::HttpConnection {

void GeneratePOSTResponseHeader(unsigned long, std::string&) {
HttpConnection *pHVar1;
  char *pcVar2;
  byte local_48 [16];
  void *local_38;
  
  pHVar1 = this + 0x870;
  (**(code **)(*(long *)(this + 0x870) + 0x60))(pHVar1,"HTTP/1.1 200 OK\r\n");
  (**(code **)(*(long *)(this + 0x870) + 0x60))(pHVar1,"Server: ");
  (**(code **)(*(long *)(this + 0x870) + 0x60))(pHVar1,"AnyRPC");
  (**(code **)(*(long *)(this + 0x870) + 0x60))(pHVar1," v");
  (**(code **)(*(long *)(this + 0x870) + 0x60))(pHVar1,"1.0.2 (Release)");
  (**(code **)(*(long *)(this + 0x870) + 0x60))(pHVar1,"\r\n");
  pcVar2 = "Connection: keep-alive\r\n";
  if (this[0x850] == (HttpConnection)0x0) {
    pcVar2 = "Connection: close\r\n";
  }
  (**(code **)(*(long *)(this + 0x870) + 0x60))(pHVar1,pcVar2);
  (**(code **)(*(long *)(this + 0x870) + 0x60))(pHVar1,"Content-Type: ");
  (**(code **)(*(long *)(this + 0x870) + 0x68))(pHVar1,param_2);
  (**(code **)(*(long *)(this + 0x870) + 0x60))(pHVar1,"\r\n");
  (**(code **)(*(long *)(this + 0x870) + 0x60))(pHVar1,"Content-length: ");
  // std code
  (**(code **)(*(long *)(this + 0x870) + 0x68))(pHVar1,local_48);
  if ((local_48[0] & 1) != 0) {
    delete(local_38);
  }
  (**(code **)(*(long *)pHVar1 + 0x60))(pHVar1,"\r\n");
  (**(code **)(*(long *)pHVar1 + 0x60))(pHVar1,"\r\n");
  return;
}
}
