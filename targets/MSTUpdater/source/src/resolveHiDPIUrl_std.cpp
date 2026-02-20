#include <ni/controller_editor/resolveHiDPIUrl_std.hpp>
namespace NI::UIA {

void resolveHiDPIUrl(std::string const&, float) {
unsigned char *puVar1;
  unsigned long long *puVar2;
  string *psVar3;
  
  
  
  path local_a8;
  unsigned char local_a7 [15];
  unsigned char *local_98;
  path local_90;
  unsigned char local_8f [15];
  unsigned char *local_80;
  unsigned long long local_78;
  unsigned long long uStack_70;
  unsigned long long local_68;
  unsigned long long local_58;
  unsigned long long local_50;
  unsigned long long local_48;
  unsigned long long local_40;
  unsigned long long local_38;
  unsigned long long local_30;
  
  if ((param_2 != 1.0) || (NAN(param_2))) {
    // std code
    // boost code
    // boost code
    // boost code
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    // std code
    puVar1 = local_a7;
    if (((byte)local_a8 & 1) != 0) {
      puVar1 = local_98;
    }
    puVar2 = (unsigned long long *)// std code
    local_30 = puVar2[2];
    local_40 = *puVar2;
    local_38 = puVar2[1];
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar1 = local_8f;
    if (((byte)local_90 & 1) != 0) {
      puVar1 = local_80;
    }
    puVar2 = (unsigned long long *)// std code
    local_48 = puVar2[2];
    local_58 = *puVar2;
    local_50 = puVar2[1];
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    // std code
    // std code
    // std code
    // std code
    // std code
    psVar3 = (string *)// boost code
    // std code
    // std code
    // std code
    // std code
    // std code
    // std code
    // std code
    // std code
    // std code
  }
  else {
    // std code
  }
  return this;
}
}
