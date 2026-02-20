#include <ni/controller_editor/filesystem.hpp>
namespace boost::filesystem::absolute(boost::filesystem::path const&, boost {

void filesystem::path const&) {
unsigned long uVar1;
  string *psVar2;
  unsigned long uVar3;
  
  path local_110 [24];
  
  unsigned long local_f0;
  
  unsigned long local_d8;
  
  unsigned long local_c0;
  
  
  
  unsigned long long local_68;
  unsigned long long uStack_60;
  unsigned long long local_58;
  
  unsigned long local_40;
  
  path::root_directory();
  uVar3 = (unsigned long)((byte)local_48[0] >> 1);
  if (((byte)local_48[0] & 1) != 0) {
    uVar3 = local_40;
  }
  // std code
  if (uVar3 == 0) {
    detail::current_path((detail *)local_48,(error_code *)0x0);
    absolute((filesystem *)&local_68,param_2,(path *)local_48);
    // std code
  }
  else {
    // std code
  }
  path::root_name();
  path::root_name();
  path::root_directory();
  uVar3 = (unsigned long)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar3 = *(unsigned long *)(param_1 + 8);
  }
  if (uVar3 == 0) {
    *(unsigned long long *)(this + 0x10) = 0;
    *(unsigned long long *)(this + 8) = 0;
    *(unsigned long long *)this = 0;
    // std code
    *(unsigned long long *)(this + 0x10) = local_58;
    *(unsigned long long *)(this + 8) = uStack_60;
    *(unsigned long long *)this = local_68;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
  }
  else {
    uVar3 = (unsigned long)((byte)local_e0[0] >> 1);
    if (((byte)local_e0[0] & 1) != 0) {
      uVar3 = local_d8;
    }
    uVar1 = (unsigned long)((byte)local_f8[0] >> 1);
    if (((byte)local_f8[0] & 1) != 0) {
      uVar1 = local_f0;
    }
    if (uVar3 == 0) {
      if (uVar1 == 0) {
        // std code
        psVar2 = (string *)path::operator/=((path *)local_48,param_1);
        // std code
        // std code
      }
      else {
        uVar3 = (unsigned long)((byte)local_c8[0] >> 1);
        if (((byte)local_c8[0] & 1) != 0) {
          uVar3 = local_c0;
        }
        if (uVar3 == 0) {
          // std code
        }
        else {
          // std code
          psVar2 = (string *)path::operator/=((path *)local_b0,param_1);
          // std code
          // std code
        }
      }
    }
    else if (uVar1 == 0) {
      path::root_directory();
      // std code
      psVar2 = (string *)path::operator/=((path *)local_80,local_110);
      // std code
      // std code
      path::relative_path();
      // std code
      psVar2 = (string *)path::operator/=((path *)local_98,(path *)local_80);
      // std code
      // std code
      path::relative_path();
      // std code
      psVar2 = (string *)path::operator/=((path *)local_128,(path *)local_98);
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
  }
  // std code
  // std code
  // std code
  // std code
  return this;
}
}
