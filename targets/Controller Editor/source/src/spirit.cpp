#include <ni/controller_editor/spirit.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::StyleGrammar::outputError(boost {

void spirit::info const&) {
int iVar1;
  unsigned long uVar2;
  void *puVar3;
  byte bVar4;
  unsigned long uVar5;
  string *psVar6;
  string local_48;
  unsigned long long local_47;
  void2 local_3f;
  unsigned char local_3d;
  void *local_38;
  
  unsigned long local_28;
  void *local_20;
  
  // std code
  uVar2 = (unsigned long)((byte)local_30[0] >> 1);
  bVar4 = (byte)local_30[0] & 1;
  uVar5 = local_28;
  if (bVar4 == 0) {
    uVar5 = uVar2;
  }
  if (uVar5 == 0xc) {
    iVar1 = // std code
    if (iVar1 != 0) {
      bVar4 = (byte)local_30[0] & 1;
      uVar2 = (unsigned long)((byte)local_30[0] >> 1);
      return;
    }
  }
  else {
    if (bVar4 != 0) {
      uVar2 = local_28;
    }
    if (uVar2 != 0xe) return;
    iVar1 = // std code
    if (iVar1 != 0) return;
  }
  if (((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ *(uint *)(param_1 + 0x18)) == 1) {
    // std code
  }
  local_48 = (string)0x14;
  local_47 = 0x6e69746365707845;
  local_3f = 0x2067;
  local_3d = 0;
  puVar3 = (void *)
           // std code
           __tree<// std code
           ::find<// std code
                                *)&NWL::(anonymous_namespace)::s_collDebugInfo,local_30);
  psVar6 = (string *)(puVar3 + 0x38);
  if (puVar3 == &0) {
    psVar6 = local_30;
  }
  if (((byte)*psVar6 & 1) == 0) {
    psVar6 = psVar6 + 1;
  }
  else {
    psVar6 = *(string **)(psVar6 + 0x10);
  }
  // std code
  outputError(this,&local_48);
  if (((byte)local_48 & 1) != 0) {
    delete(local_38);
  }
  if (((byte)local_30[0] & 1) != 0) {
    delete(local_20);
  }
  return;
}
}
