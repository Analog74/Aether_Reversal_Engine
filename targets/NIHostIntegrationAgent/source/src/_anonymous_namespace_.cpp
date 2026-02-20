#include <ni/controller_editor/_anonymous_namespace_.hpp>
namespace NI::dawcontrol::hw::komplete_kontrol::mk1_AM {

void (anonymous namespace)::readJsonCMMSettings() {
cmm local_280 [16];
  void *local_270;
  unsigned long local_268 [2];
  char *local_258 [2];
  byte abStack_248 [392];
  ios local_c0 [160];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_100a44490;
  local_258[0] = (char *)new(0x30);
  local_268[0] = 0x31;
  local_268[1] = 0x20;
  builtin_strncpy(local_258[0],"Komplete Kontrol AM Settings.dat",0x21);
  NI::hw::komplete_kontrol::cmm::prepareConfigurationFilePath(local_280,(string *)local_268);
  if ((local_268[0] & 1) != 0) {
    delete(local_258[0]);
  }
  // std code
  if ((abStack_248[*(long *)(local_268[0] - 0x18)] & 5) == 0) {
    NI::hw::komplete_kontrol::mk1_am::cmm::fromSettingsJson((cmm *)this,(istream *)local_268);
  }
  else {
    *this = (_anonymous_namespace_)0x0;
  }
  local_268[0] = *(unsigned long *)PTR_VTT_100a442e8;
  *(unsigned long long *)((long)local_268 + *(long *)(local_268[0] - 0x18)) =
       *(unsigned long long *)(PTR_VTT_100a442e8 + 0x18);
  // std code
  // std code
  // std code
  if (((byte)local_280[0] & 1) != 0) {
    delete(local_270);
  }
  if (*(long *)PTR____stack_chk_guard_100a44490 == local_20) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
