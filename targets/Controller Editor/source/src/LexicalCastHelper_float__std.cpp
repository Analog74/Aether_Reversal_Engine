#include <ni/controller_editor/LexicalCastHelper_float__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace void NI::GP::DETAIL {

void LexicalCastHelper<float>(std::string const&, float&, bool*) {
char cVar1;
  bool bVar2;
  istream *piVar3;
  string *psVar4;
  unsigned long uVar5;
  void **local_130 [2];
  string *local_120;
  string *local_118;
  string *local_110 [4];
  unsigned int local_f0;
  string *local_e8;
  unsigned long local_e0;
  void **local_d8;
  unsigned long long local_d0;
  void **local_c8 [17];
  unsigned long long local_40;
  unsigned int local_38;
  
  *param_2 = 0.0;
  cVar1 = StringUtil::isAscii(param_1);
  if (cVar1 == '\0') {
    if (param_3 != (bool *)0x0) {
      *param_3 = false;
    }
  }
  else {
    if (((byte)*param_1 & 1) == 0) {
      psVar4 = param_1 + 1;
      uVar5 = (unsigned long)((byte)*param_1 >> 1);
    }
    else {
      uVar5 = *(unsigned long *)(param_1 + 8);
      psVar4 = *(string **)(param_1 + 0x10);
    }
    local_c8[0] = (void **)((char*)PTR_vtable_101ab45c8 + 0x10);
    // std code
    local_f0 = 8;
    local_110[0] = psVar4 + uVar5;
    local_130[0] = &PTR__basic_ibufferstream_101b32388;
    local_d8 = &PTR__istream_101b32488;
    local_c8[0] = &PTR__istream_101b324b0;
    local_d0 = 0;
    local_120 = psVar4;
    local_118 = psVar4;
    local_e8 = psVar4;
    local_e0 = uVar5;
    // std code
    local_40 = 0;
    local_38 = 0xffffffff;
    local_130[0] = &PTR__basic_ibufferstream_101b32388;
    local_d8 = &PTR__basic_ibufferstream_101b32410;
    local_c8[0] = &PTR__basic_ibufferstream_101b32438;
    // std code if(3 param_3, 3 param_3, param_3 != (bool *0x0 {
      if ((*(byte *)((long)local_110 + (long)local_130[0][-3]) & 5) == 0) {
        piVar3 = // std code
        bVar2 = (bool)((byte)piVar3[*(long *)(*(long *)piVar3 + -0x18) + 0x20] >> 1 & 1);
      }
      else {
        bVar2 = false;
      }
      *param_3 = bVar2;
    }
    // std code
    // std code
    // std code
  }
  return;
}
}
