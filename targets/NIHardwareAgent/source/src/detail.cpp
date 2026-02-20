#include <ni/controller_editor/detail.hpp>
namespace boost::system {

void detail::snprintf(char*, unsigned long, char const*, ...) {
char in_AL;
  unsigned long long in_RCX;
  unsigned long long in_R8;
  unsigned long long in_R9;
  unsigned long long in_XMM0_Qa;
  unsigned long long in_XMM1_Qa;
  unsigned long long in_XMM2_Qa;
  unsigned long long in_XMM3_Qa;
  unsigned long long in_XMM4_Qa;
  unsigned long long in_XMM5_Qa;
  unsigned long long in_XMM6_Qa;
  unsigned long long in_XMM7_Qa;
  unsigned char local_d8 [24];
  unsigned long long local_c0;
  unsigned long long local_b8;
  unsigned long long local_b0;
  unsigned long long local_a8;
  unsigned long long local_98;
  unsigned long long local_88;
  unsigned long long local_78;
  unsigned long long local_68;
  unsigned long long local_58;
  unsigned long long local_48;
  unsigned long long local_38;
  unsigned long long local_28;
  unsigned char *local_20;
  unsigned char *local_18;
  long local_10;
  
  if (in_AL != '\0') {
    local_a8 = in_XMM0_Qa;
    local_98 = in_XMM1_Qa;
    local_88 = in_XMM2_Qa;
    local_78 = in_XMM3_Qa;
    local_68 = in_XMM4_Qa;
    local_58 = in_XMM5_Qa;
    local_48 = in_XMM6_Qa;
    local_38 = in_XMM7_Qa;
  }
  local_10 = *(long *)PTR____stack_chk_guard_1009cc2c8;
  local_18 = local_d8;
  local_20 = &stack0x00000008;
  local_28 = 0x3000000018;
  local_c0 = in_RCX;
  local_b8 = in_R8;
  local_b0 = in_R9;
  _vsnprintf(param_1,param_2,param_3,&local_28);
  if (*(long *)PTR____stack_chk_guard_1009cc2c8 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
