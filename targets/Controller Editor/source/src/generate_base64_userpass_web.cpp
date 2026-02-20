#include <ni/controller_editor/generate_base64_userpass_web.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::client::details {

void generate_base64_userpass(1 param_1, web::credentials const& {
void *pvVar1;
  string *psVar2;
  unsigned long *puVar3;
  size_t sVar4;
  string *psVar5;
  void *pvVar6;
  credentials *pcVar7;
  unsigned long uVar8;
  string *local_80;
  unsigned long long uStack_78;
  unsigned long long local_70;
  unsigned long long local_68;
  unsigned long uStack_60;
  void *local_58;
  unsigned long long local_48;
  void *pvStack_40;
  void *local_38;
  
  local_48 = (void *)0x0;
  pvStack_40 = (void *)0x0;
  local_38 = (void *)0x0;
  if (((byte)*param_1 & 1) == 0) {
    sVar4 = (size_t)((byte)*param_1 >> 1);
    pcVar7 = param_1 + 1;
  }
  else {
    sVar4 = *(size_t *)(param_1 + 8);
    pcVar7 = *(credentials **)(param_1 + 0x10);
  }
  if (0xffffffffffffffef < sVar4 + 1) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar4 + 1 < 0x17) {
    local_48 = (void *)(unsigned long)(byte)((char)sVar4 * '\x02');
    pvVar1 = (void *)((long)&local_48 + 1);
    if (sVar4 == 0) return;
  }
  else {
    uVar8 = sVar4 + 0x11 & 0xfffffffffffffff0;
    pvVar1 = new char[uVar8];
    local_48 = (void *)(uVar8 | 1);
    pvStack_40 = (void *)sVar4;
    local_38 = pvVar1;
  }
  memcpy(pvVar1,pcVar7,sVar4);
  *(unsigned char *)((long)pvVar1 + sVar4) = 0;
  // std code
  psVar2 = (string *)new char[0x18];
  // std code
  if (((byte)*psVar2 & 1) == 0) {
    psVar5 = psVar2 + 1;
  }
  else {
    psVar5 = *(string **)(psVar2 + 0x10);
  }
  local_80 = psVar2;
  puVar3 = (unsigned long *)// std code
  psVar2 = local_80;
  local_58 = (void *)puVar3[2];
  local_68 = *puVar3;
  uStack_60 = puVar3[1];
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  local_80 = (string *)0x0;
  if (psVar2 != (string *)0x0) {
    web::details::zero_memory_deleter::operator()((zero_memory_deleter *)&local_80,psVar2);
  }
  if (((unsigned long)local_48 & 1) != 0) {
    delete(local_38);
  }
  uVar8 = uStack_60;
  pvVar1 = local_58;
  if ((local_68 & 1) == 0) {
    uVar8 = local_68 >> 1 & 0x7f;
    pvVar1 = (void *)((long)&local_68 + 1);
  }
  local_48 = (void *)0x0;
  pvStack_40 = (void *)0x0;
  local_38 = (void *)0x0;
  if (uVar8 != 0) {
    if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    local_48 = new char[uVar8];
    pvVar6 = (void *)((long)local_48 + uVar8);
    pvStack_40 = local_48;
    local_38 = pvVar6;
    memcpy(local_48,pvVar1,uVar8);
    pvStack_40 = pvVar6;
  }
  utility::conversions::to_base64((conversions *)&local_80,(vector *)&local_48);
  *(unsigned long long *)(this + 0x10) = local_70;
  *(string **)this = local_80;
  *(unsigned long long *)(this + 8) = uStack_78;
  if (local_48 != (void *)0x0) {
    pvStack_40 = local_48;
    delete(local_48);
  }
  if ((local_68 & 1) != 0) {
    delete(local_58);
  }
  return;
}
}
