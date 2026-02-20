#include <ni/controller_editor/configurationFilePath_std.hpp>
namespace NI::NHL2::MapHandler {

void configurationFilePath(std::string const&, bool) const {
char cVar1;
  byte bVar2;
  unsigned long *puVar3;
  void7 in_register_00000011;
  unsigned long uVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  void *local_148;
  uint *local_140;
  code *local_138;
  code *local_130;
  unsigned long long local_128;
  unsigned long uStack_120;
  char *local_118;
  uint local_10c;
  unsigned long local_108;
  long lStack_100;
  void *local_f8;
  basic_format<char,// std code
  unsigned int local_ef;
  void *local_e0;
  long local_28;
  
  pbVar6 = (byte *)0(in_register_00000011,param_2);
  local_28 = *(long *)PTR____stack_chk_guard_1009cc2c8;
  if ((s_globalOverriddenConfiguration & 1) == 0) {
    if (s_globalOverriddenConfiguration >> 1 == 0) goto LAB_1000b1f5a;
  }
  else if (0 == 0) {
LAB_1000b1f5a:
    if ((*pbVar6 & 1) == 0) {
      if (*pbVar6 >> 1 == 0) goto LAB_1000b2091;
    }
    else if (*(long *)(pbVar6 + 8) == 0) {
LAB_1000b2091:
      *(unsigned long long *)this = 0;
      *(unsigned long long *)(this + 8) = 0;
      *(unsigned long long *)(this + 0x10) = 0;
      goto LAB_1000b221b;
    }
    // std code
    findOrCreateMappingConfigurationDirectory();
    // std code
                        (string *)&findOrCreateMappingConfigurationDirectory()::s_configDir);
    if ((local_108 & 1) == 0) {
      if ((byte)local_108._0_1_ >> 1 != 0) goto LAB_1000b1fb6;
LAB_1000b20b4:
      *(unsigned long long *)this = 0;
      *(unsigned long long *)(this + 8) = 0;
      *(unsigned long long *)(this + 0x10) = 0;
      if ((local_108 & 1) != 0) {
        delete(local_f8);
      }
    }
    else {
      if (lStack_100 == 0) goto LAB_1000b20b4;
LAB_1000b1fb6:
      cVar1 = (**(code **)(*(long *)param_1 + 0x108))(param_1);
      if (cVar1 == '\0') {
        if ((*pbVar6 & 1) == 0) {
          pbVar7 = pbVar6 + 1;
          uVar4 = (unsigned long)(*pbVar6 >> 1);
        }
        else {
          uVar4 = *(unsigned long *)(pbVar6 + 8);
          pbVar7 = *(byte **)(pbVar6 + 0x10);
        }
        // boost code
                  ((path *)&local_108,(char *)pbVar7,(char *)(pbVar7 + uVar4));
      }
      else {
        bVar2 = (**(code **)(*(long *)param_1 + 0x108))(param_1);
        local_10c = (uint)bVar2;
        // boost code
                  (&local_f0,"-%1%");
        local_140 = &local_10c;
        local_138 = // boost code
        ;
        local_130 = // boost code
        ;
        // boost code
        feed_impl<char,// std code
                  ((basic_format *)&local_f0,(put_holder *)&local_140);
        // boost code
        // std code
        if (((unsigned long)local_140 & 1) != 0) {
          delete(local_130);
        }
        // boost code
                  (&local_f0);
        if ((*pbVar6 & 1) == 0) {
          pbVar6 = pbVar6 + 1;
        }
        else {
          pbVar6 = *(byte **)(pbVar6 + 0x10);
        }
        puVar3 = (unsigned long *)// std code
        local_118 = (char *)puVar3[2];
        local_128 = *puVar3;
        uStack_120 = puVar3[1];
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        uVar4 = uStack_120;
        pcVar5 = local_118;
        if ((local_128 & 1) == 0) {
          uVar4 = local_128 >> 1 & 0x7f;
          pcVar5 = (char *)((long)&local_128 + 1);
        }
        // boost code
        if ((local_128 & 1) != 0) {
          delete(local_118);
        }
        if (((byte)local_158[0] & 1) != 0) {
          delete(local_148);
        }
      }
      local_f0 = (basic_format<char,// std code
      local_ef = 0x73636e;
      // boost code
      if (((byte)local_f0 & 1) != 0) {
        delete(local_e0);
      }
      *(void **)(this + 0x10) = local_f8;
      *(unsigned long *)this = local_108;
      *(long *)(this + 8) = lStack_100;
      local_108 = 0;
      lStack_100 = 0;
      local_f8 = (void *)0x0;
    }
    // std code
    goto LAB_1000b221b;
  }
  // std code
LAB_1000b221b:
  if (*(long *)PTR____stack_chk_guard_1009cc2c8 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return this;
}
}
