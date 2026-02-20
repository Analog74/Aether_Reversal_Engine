#include <ni/controller_editor/Connection_int__anyrpc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc::Connection {

void Connection(2 param_2, int, anyrpc::MethodManager* {
long *plVar1;
  time_t tVar2;
  unsigned int local_2c;
  
  *(void ***)this = &PTR__Connection_101b82c18;
  *(unsigned long long *)(this + 0x10) = 0xffffffff;
  *(unsigned int *)(this + 0x18) = 0;
  *(void ***)(this + 8) = &PTR__TcpSocket_101b83668;
  this[0x1c] = (Connection)0x0;
  *(MethodManager **)(this + 0x20) = param_2;
  *(void ***)(this + 0x870) = &PTR__WriteSegmentedStream_101b82d70;
  *(unsigned long long *)(this + 0x878) = 0;
  *(unsigned long long *)(this + 0x880) = 0;
  *(unsigned long long *)(this + 0x888) = 0;
  *(unsigned long long *)(this + 0x890) = 0;
  plVar1 = (long *)new char[0x20];
  *plVar1 = (long)(this + 0x8a8);
  plVar1[1] = 0x3ff;
  plVar1[2] = 0;
  *(unsigned char *)(plVar1 + 3) = 0;
  *(long **)(this + 0x878) = plVar1;
  *(long **)(this + 0x880) = plVar1 + 4;
  *(long **)(this + 0x888) = plVar1 + 4;
  *(unsigned long long *)(this + 0x898) = 0x800;
  *(unsigned long long *)(this + 0x8a0) = 0x10000;
  *(void ***)(this + 0xcb0) = &PTR__WriteSegmentedStream_101b82d70;
  *(unsigned long long *)(this + 0xcb8) = 0;
  *(unsigned long long *)(this + 0xcc0) = 0;
  *(unsigned long long *)(this + 0xcc8) = 0;
  *(unsigned long long *)(this + 0xcd0) = 0;
  plVar1 = (long *)new char[0x20];
  *plVar1 = (long)(this + 0xce8);
  plVar1[1] = 0x3ff;
  plVar1[2] = 0;
  *(unsigned char *)(plVar1 + 3) = 0;
  *(long **)(this + 0xcb8) = plVar1;
  *(long **)(this + 0xcc0) = plVar1 + 4;
  *(long **)(this + 0xcc8) = plVar1 + 4;
  *(unsigned long long *)(this + 0xcd8) = 0x800;
  *(unsigned long long *)(this + 0xce0) = 0x10000;
  *(unsigned int *)(this + 0x28) = 0;
  tVar2 = _time((time_t *)0x0);
  *(time_t *)(this + 0x30) = tVar2;
  this[0x38] = (Connection)0x1;
  *(unsigned long long *)(this + 0xca8) = 0;
  *(unsigned long long *)(this + 0x10e8) = 0;
  *(unsigned long long *)(this + 0x840) = 0;
  *(unsigned long long *)(this + 0x848) = 0;
  this[0x850] = (Connection)0x0;
  *(unsigned long long *)(this + 0x858) = 0;
  *(unsigned long long *)(this + 0x860) = 0;
  this[0x868] = (Connection)0x0;
  if (*(int *)(this + 0x10) != -1) {
    _close(*(int *)(this + 0x10));
    *(unsigned int *)(this + 0x10) = 0xffffffff;
  }
  *(int *)(this + 0x10) = param_1;
  _fcntl(param_1,4,4);
  local_2c = 1;
  _setsockopt(*(int *)(this + 0x10),6,1,&local_2c,4);
  return;
}
}
