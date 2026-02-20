#include <ni/controller_editor/GenerateErrorResponseHeader_int__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::HttpConnection {

void GenerateErrorResponseHeader(int, std::string) {
HttpConnection *pHVar1;
  byte local_48 [16];
  void *local_38;
  
  pHVar1 = this + 0x870;
  (**(code **)(*(long *)(this + 0x870) + 0x60))(pHVar1,"HTTP/1.1 ");
  // std code
  (**(code **)(*(long *)(this + 0x870) + 0x68))(pHVar1,local_48);
  if ((local_48[0] & 1) != 0) {
    delete(local_38);
  }
  (**(code **)(*(long *)pHVar1 + 0x60))(pHVar1," ");
  (**(code **)(*(long *)pHVar1 + 0x68))(pHVar1,param_3);
  (**(code **)(*(long *)pHVar1 + 0x60))(pHVar1,"\r\n");
  (**(code **)(*(long *)pHVar1 + 0x60))(pHVar1,"Connection: close\r\n");
  (**(code **)(*(long *)pHVar1 + 0x60))(pHVar1,"\r\n");
  return;
}
}
