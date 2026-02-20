#include <ni/controller_editor/appendUnsigned_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::StringUtil {

void appendUnsigned(3 param_3, 3 param_3, std::string&, unsigned int, unsigned long {
void *puVar1;
  unsigned long uVar2;
  wchar_t *pwVar3;
  void *puVar4;
  void *puVar5;
  double dVar6;
  void *local_170;
  unsigned long long local_168;
  void *local_160;
  void *local_158 [8];
  unsigned long local_118;
  unsigned long long uStack_110;
  void *local_108;
  unsigned long long uStack_100;
  unsigned int local_f8;
  void *local_f0 [17];
  unsigned long long local_68;
  unsigned int local_60;
  string *local_58;
  byte local_50;
  wchar_t local_4c;
  unsigned long local_48;
  wchar_t *local_40;
  void *local_38;
  
  if (param_2 == 0 {
    uVar2 = 0;
    if (param_3 != 0) return;
  }
  else {
    dVar6 = (double)_log10((double)param_2);
    uVar2 = (long)dVar6 & 0xffffffff;
    if (uVar2 < param_3) {
      // std code
    }
  }
  puVar5 = PTR_vtable_101ab45b0;
  puVar1 = (char*)PTR_vtable_101ab45b0 + 0x40;
  local_170 = (char*)PTR_construction_vtable_101ab4160 + 0x18;
  local_f0[0] = (char*)PTR_construction_vtable_101ab4160 + 0x40;
  local_168 = 0;
  local_160 = puVar1;
  // std code
  local_68 = 0;
  local_60 = 0xffffffff;
  local_170 = puVar5 + 0x18;
  puVar5 = puVar5 + 0x68;
  local_160 = puVar1;
  local_f0[0] = puVar5;
  local_58 = param_1;
  local_38 = local_170;
  // std code
  puVar4 = (char*)PTR_vtable_101ab4598 + 0x10;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = (void *)0x0;
  uStack_100 = 0;
  local_f8 = 0x18;
  local_158[0] = puVar4;
  // std code
  // std code
  if ((local_50 & 1) == 0) {
    if (local_50 < 2) return;
    local_48 = (unsigned long)(local_50 >> 1);
    pwVar3 = &local_4c;
    appendWideString(local_58,pwVar3,local_48);
    if ((local_50 & 1) == 0) return;
  }
  else {
    pwVar3 = local_40;
    if (local_48 != 0) return;
  }
  delete(local_40);
  local_170 = local_38;
  local_160 = puVar1;
  local_158[0] = puVar4;
  local_f0[0] = puVar5;
  if ((local_118 & 1) != 0) {
    delete(local_108);
  }
  // std code
  // std code
  // std code
  // std code
  return;
}
}
