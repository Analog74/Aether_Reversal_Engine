#include <ni/controller_editor/oauth1_config.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::oauth1::experimental {

void oauth1_config::_build_key() const {
unsigned long long uVar1;
  unsigned long *puVar2;
  unsigned long long *puVar3;
  long in_RSI;
  unsigned char *puVar4;
  unsigned long long *in_RDI;
  uri local_70 [16];
  void *local_60;
  unsigned long local_58;
  unsigned long uStack_50;
  void *local_48;
  uri local_38;
  unsigned char local_37 [15];
  unsigned char *local_28;
  
  uri::encode_data_string(local_70,(string *)(in_RSI + 0x18));
  puVar2 = (unsigned long *)// std code
  local_48 = (void *)puVar2[2];
  local_58 = *puVar2;
  uStack_50 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  uri::encode_data_string(&local_38,(string *)(in_RSI + 0x48));
  puVar4 = local_28;
  if (((byte)local_38 & 1) == 0) {
    puVar4 = local_37;
  }
  puVar3 = (unsigned long long *)// std code
  in_RDI[2] = puVar3[2];
  uVar1 = puVar3[1];
  *in_RDI = *puVar3;
  in_RDI[1] = uVar1;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  if (((byte)local_38 & 1) != 0) {
    delete(local_28);
  }
  if ((local_58 & 1) != 0) {
    delete(local_48);
  }
  if (((byte)local_70[0] & 1) != 0) {
    delete(local_60);
  }
  return;
}

void oauth1_config::_generate_auth_state() {
int iVar1;
  long in_RSI;
  unsigned long long *in_RDI;
  unsigned long long local_78;
  unsigned long long uStack_70;
  unsigned long long local_68;
  unsigned long long *local_60;
  timeval local_58;
  unsigned long long local_48;
  unsigned long long uStack_40;
  unsigned long long local_38;
  
  local_60 = in_RDI;
  _gettimeofday(&local_58,(void *)0x0);
  // std code
  local_58.tv_sec = 0x3d00000000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  // std code
  if (0 < *(int *)(in_RSI + 0xbd0)) {
    iVar1 = *(int *)(in_RSI + 0xbd0) + 1;
    do {
      // std code
                ((uniform_int_distribution<int> *)&local_58,
                 (mersenne_twister_engine *)(in_RSI + 0x208),(param_type *)&local_58);
      // std code
      iVar1 = iVar1 + -1;
    } while (1 < iVar1);
  }
  local_60[2] = local_68;
  *local_60 = local_78;
  local_60[1] = uStack_70;
  local_60[5] = local_38;
  local_60[3] = local_48;
  local_60[4] = uStack_40;
  *(unsigned char *)(local_60 + 6) = 0;
  local_60[7] = 0;
  local_60[8] = 0;
  *(unsigned long long *)((long)local_60 + 0x31) = 0;
  *(unsigned char *)(local_60 + 9) = 0;
  local_60[10] = 0;
  local_60[0xb] = 0;
  *(unsigned long long *)((long)local_60 + 0x49) = 0;
  return;
}
}
