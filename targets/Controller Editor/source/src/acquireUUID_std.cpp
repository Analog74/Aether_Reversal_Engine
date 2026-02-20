#include <ni/controller_editor/acquireUUID_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::uret::cfg::(anonymous namespace) {

void acquireUUID(std::string const&) {
_anonymous_namespace_ _Var1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  string *psVar6;
  unsigned long local_168;
  unsigned long long uStack_160;
  void *local_158;
  tKey local_148 [256];
  unsigned long local_48;
  unsigned long long uStack_40;
  void *local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101ab4610;
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  NI::GP::Registry2::tKey::createData(local_148);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (void *)0x0;
  // std code
  puVar5 = 0;
  if ((Configuration::sharedRegistryKey & 1) == 0) {
    puVar5 = &0;
  }
  // std code
  cVar3 = NI::GP::Registry2::tKey::open(local_148,(string *)&local_48,9);
  if ((local_48 & 1) != 0) {
    delete(local_38);
  }
  if (cVar3 == '\0') {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = (void *)0x0;
    // std code
    puVar5 = 0;
    if ((g_configuration & 1) == 0) {
      puVar5 = &0;
    }
    // std code
    cVar3 = NI::GP::Registry2::tKey::open(local_148,(string *)&local_48,9);
    if ((local_48 & 1) != 0) {
      delete(local_38);
    }
    if (cVar3 != '\0') {
      if (((byte)*param_1 & 1) == 0) {
        psVar6 = param_1 + 1;
      }
      else {
        psVar6 = *(string **)(param_1 + 0x10);
      }
      NI::GP::Registry2::tKey::getValueString(local_148,(char *)psVar6,(string *)this);
    }
    bVar2 = false;
    _Var1 = *this;
    if (((byte)_Var1 & 1) != 0) return;
    if ((byte)_Var1 >> 1 != 0) return;
    if (((byte)*param_1 & 1) == 0) {
      if ((byte)*param_1 >> 1 == 0xf) return;
      NI::GP::UUID::UUID((UUID *)&local_48);
      NI::GP::UUID::generateRandom((UUID *)&local_48);
      NI::GP::UUID::toString();
      _Var1 = *this;
    }
    else {
      if (*(long *)(param_1 + 8) != 0xf) return;
      iVar4 = // std code if(1 param_1, 1 param_1, 1 param_1, 1 param_1, iVar4 != 0 return;
      getHardwareUUID_MacOS((uret *&local_48;
      _Var1 = *this;
      local_168 = local_48;
      uStack_160 = uStack_40;
      local_158 = local_38;
    }
    if (((byte_Var1 & 1) != 0) {
      delete(*(void **)(this + 0x10));
    }
    *(void **)(this + 0x10) = local_158;
    *(unsigned long *)this = local_168;
    *(unsigned long long *)(this + 8) = uStack_160;
    if (bVar2) return;
  }
  else {
    if (((byte)*param_1 & 1) == 0) {
      psVar6 = param_1 + 1;
    }
    else {
      psVar6 = *(string **)(param_1 + 0x10);
    }
    NI::GP::Registry2::tKey::getValueString(local_148,(char *)psVar6,(string *)this);
    if (((byte)*this & 1) == 0) {
      if ((byte)*this >> 1 == 0) return;
    }
    else if(1 param_1, 1 param_1, 1 param_1, 1 param_1, *(long *(this + 8 == 0 return;
    bVar2 = true;
    _Var1 = *this;
    if (((byte_Var1 & 1) == 0) return;
    if (*(long *)(this + 8) == 0) return;
    if (bVar2) return;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (void *)0x0;
  // std code
  puVar5 = 0;
  if ((Configuration::sharedRegistryKey & 1) == 0) {
    puVar5 = &0;
  }
  // std code
  cVar3 = NI::GP::Registry2::tKey::open(local_148,(string *)&local_48,0xf);
  if ((local_48 & 1) != 0) {
    delete(local_38);
  }
  if (cVar3 != '\0') {
    if (((byte)*param_1 & 1) == 0) {
      psVar6 = param_1 + 1;
    }
    else {
      psVar6 = *(string **)(param_1 + 0x10);
    }
    cVar3 = NI::GP::Registry2::tKey::setValueString(local_148,(char *)psVar6,(string *)this);
    if (cVar3 != '\0') return;
  }
  if (((byte)*this & 1) == 0) {
    *(void2 *)this = 0;
  }
  else {
    **(unsigned char **)(this + 0x10) = 0;
    *(unsigned long long *)(this + 8) = 0;
  }
  NI::GP::Registry2::tKey::disposeData(local_148);
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
