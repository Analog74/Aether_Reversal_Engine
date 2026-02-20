#include <ni/controller_editor/cfg.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::uret::cfg::updateIfNewer(ni::uret {

void cfg::TrackingServiceEndpointConfiguration const&) {
char cVar1;
  void *puVar2;
  unsigned long local_178;
  unsigned long long uStack_170;
  void *local_168;
  unsigned long uStack_160;
  unsigned long long local_158;
  void *pvStack_150;
  uint local_148;
  unsigned long local_138;
  unsigned long long uStack_130;
  void *local_128;
  tKey local_120 [256];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_101ab4610;
  local_158 = 0;
  pvStack_150 = (void *)0x0;
  local_168 = (void *)0x0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_148 = 0;
  cVar1 = loadTrackingServiceEndpointConfiguration
                    ((TrackingServiceEndpointConfiguration *)&local_178);
  if ((cVar1 == '\0') || (local_148 <= *(uint *)(param_1 + 0x30))) {
    NI::GP::Registry2::tKey::createData(local_120);
    local_138 = 0;
    uStack_130 = 0;
    local_128 = (void *)0x0;
    // std code
    puVar2 = 0;
    if ((g_configuration & 1) == 0) {
      puVar2 = &0;
    }
    // std code
    cVar1 = NI::GP::Registry2::tKey::open(local_120,(string *)&local_138,0xf);
    if ((local_138 & 1) != 0) {
      delete(local_128);
    }
    if (cVar1 != '\0') {
      local_138 = 0;
      uStack_130 = 0;
      local_128 = (void *)0x0;
      reg::operator<<((string *)&local_138,param_1);
      NI::GP::Registry2::tKey::setValueString(local_120,"uret-configuration",(string *)&local_138);
      if ((local_138 & 1) != 0) {
        delete(local_128);
      }
    }
    NI::GP::Registry2::tKey::disposeData(local_120);
  }
  if ((uStack_160 & 1) != 0) {
    delete(pvStack_150);
  }
  if ((local_178 & 1) == 0) {
    if (*(long *)PTR____stack_chk_guard_101ab4610 != local_20) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  }
  else {
    delete(local_168);
    if (*(long *)PTR____stack_chk_guard_101ab4610 != local_20) return;
  }
  return;
}
}
