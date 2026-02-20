#include <ni/controller_editor/StringCF.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

StringCF::StringCF(__CFString const*) {
void *pvVar1;
  unsigned long uVar2;
  wchar16 *pwVar3;
  long lVar4;
  wchar16 *pwVar5;
  void *puStack_80;
  unsigned long long local_78;
  unsigned long long uStack_70;
  unsigned long long local_68;
  unsigned long local_60;
  wchar16 *local_58;
  wchar16 *pwStack_50;
  wchar16 *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  if (param_1 != (__CFString *)0x0) {
    puStack_80 = (void *)0x100725464;
    uVar2 = _CFStringGetLength(param_1);
    if (uVar2 != 0) {
      puStack_80 = (void *)0x100725478;
      pwVar3 = (wchar16 *)_CFStringGetCharactersPtr(param_1);
      if (pwVar3 == (wchar16 *)0x0) {
        if (uVar2 < 0x10001) {
          puStack_80 = (void *)0x1007254c7;
          lVar4 = ____chkstk_darwin();
          lVar4 = -(lVar4 + 0xfU & 0xfffffffffffffff0);
          *(unsigned long long *)((long)&puStack_80 + lVar4) = 0x1007254e5;
          _CFStringGetCharacters(param_1,0,uVar2,(long)&local_78 + lVar4);
          *(unsigned long long *)((long)&puStack_80 + lVar4) = 0x1007254f4;
          StringUtil::fromUTF<char16_t>
                    ((StringUtil *)&local_58,(wchar16 *)((long)&local_78 + lVar4),uVar2);
          if (((byte)*this & 1) != 0) {
            pvVar1 = *(void **)(this + 0x10);
            *(unsigned long long *)((long)&puStack_80 + lVar4) = 0x100725503;
            delete(pvVar1);
          }
          *(wchar16 **)(this + 0x10) = local_48;
          *(wchar16 **)this = local_58;
          *(wchar16 **)(this + 8) = pwStack_50;
        }
        else {
          local_58 = (wchar16 *)0x0;
          pwStack_50 = (wchar16 *)0x0;
          local_48 = (wchar16 *)0x0;
          if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
            puStack_80 = &UNK_1007255e2;
            // std code
          }
          local_60 = uVar2 * 2;
          puStack_80 = (void *)0x100725540;
          pwVar3 = (wchar16 *)new char[local_60];
          local_48 = pwVar3 + uVar2;
          pwVar5 = (wchar16 *)((long)pwVar3 + local_60);
          puStack_80 = (void *)0x100725561;
          local_58 = pwVar3;
          ___bzero(pwVar3);
          puStack_80 = (void *)0x100725575;
          pwStack_50 = pwVar5;
          _CFStringGetCharacters(param_1,0,uVar2,pwVar3);
          puStack_80 = (void *)0x100725584;
          StringUtil::fromUTF<char16_t>((StringUtil *)&local_78,pwVar3,uVar2);
          if (((byte)*this & 1) != 0) {
            puStack_80 = (void *)0x100725593;
            delete(*(void **)(this + 0x10));
          }
          *(unsigned long long *)(this + 0x10) = local_68;
          *(unsigned long long *)this = local_78;
          *(unsigned long long *)(this + 8) = uStack_70;
          if (local_58 != (wchar16 *)0x0) {
            pwStack_50 = local_58;
            puStack_80 = (void *)0x1007255b5;
            delete(local_58);
          }
        }
      }
      else {
        puStack_80 = (void *)0x10072548c;
        StringUtil::fromUTF<char16_t>((StringUtil *)&local_58,pwVar3,uVar2);
        if (((byte)*this & 1) != 0) {
          puStack_80 = (void *)0x10072549b;
          delete(*(void **)(this + 0x10));
        }
        *(wchar16 **)(this + 0x10) = local_48;
        *(wchar16 **)this = local_58;
        *(wchar16 **)(this + 8) = pwStack_50;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_38) {
    
  }
                    /* WARNING: Subroutine does not return */
  puStack_80 = (void *)0x1007255d9;
  ___stack_chk_fail();
}
}
