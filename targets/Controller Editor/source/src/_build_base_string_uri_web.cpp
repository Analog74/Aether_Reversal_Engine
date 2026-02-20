#include <ni/controller_editor/_build_base_string_uri_web.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::oauth1::experimental::oauth1_config {

void _build_base_string_uri(1 param_1, web::uri const& {
int iVar1;
  unsigned long uVar2;
  uri *puVar3;
  unsigned char *puVar4;
  byte local_50;
  unsigned char local_4f [15];
  unsigned char *local_40;
  
  void *local_28;
  
  // std code
  // std code
  if (((byte)param_1[0x30] & 1) == 0) {
    puVar3 = param_1 + 0x31;
  }
  else {
    puVar3 = *(uri **)(param_1 + 0x40);
  }
  // std code
  if (((byte)*param_1 & 1) == 0) {
    uVar2 = (unsigned long)((byte)*param_1 >> 1);
  }
  else {
    uVar2 = *(unsigned long *)(param_1 + 8);
  }
  if (((uVar2 == 0) ||
      (((uVar2 == 1 &&
        (iVar1 = // std code
        iVar1 == 0)) || (*(int *)(param_1 + 0xa8) != 0)))) &&
     ((*(int *)(param_1 + 0xa8) != 0x50 && (*(int *)(param_1 + 0xa8) != 0x1bb)))) {
    // std code
    // std code
    puVar4 = local_40;
    if ((local_50 & 1) == 0) {
      puVar4 = local_4f;
    }
    // std code
    if ((local_50 & 1) != 0) {
      delete(local_40);
    }
  }
  if (((byte)param_1[0x60] & 1) == 0) {
    puVar3 = param_1 + 0x61;
  }
  else {
    puVar3 = *(uri **)(param_1 + 0x70);
  }
  // std code
  uri::encode_data_string((uri *)this,local_38);
  if (((byte)local_38[0] & 1) != 0) {
    delete(local_28);
  }
  return this;
}
}
