#include <ni/controller_editor/StringCF.hpp>
namespace NI::GP {

StringCF::StringCF(__CFString const*) {
long lVar1;
  unsigned long uVar2;
  wchar16 *pwVar3;
  void *puStack_90;
  wchar16 awStack_88 [4];
  unsigned long local_80;
  unsigned long long local_78;
  unsigned long long uStack_70;
  unsigned long long local_68;
  wchar16 *local_58;
  wchar16 *pwStack_50;
  wchar16 *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1002272e0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)this = 0;
  if (param_1 != (__CFString *)0x0) {
    puStack_90 = (void *)0x10018d45d;
    uVar2 = _CFStringGetLength(param_1);
    if (uVar2 != 0) {
      puStack_90 = (void *)0x10018d471;
      pwVar3 = (wchar16 *)_CFStringGetCharactersPtr(param_1);
      if (pwVar3 == (wchar16 *)0x0) {
        if (uVar2 < 0x10001) {
          lVar1 = -(uVar2 * 2 + 0xf & 0xfffffffffffffff0);
          *(unsigned long long *)((long)awStack_88 + lVar1 + -8) = 0x10018d4c5;
          _CFStringGetCharacters(param_1,0,uVar2,(wchar16 *)((long)awStack_88 + lVar1));
          *(unsigned long long *)((long)awStack_88 + lVar1 + -8) = 0x10018d4d4;
          StringUtil::fromUTF<char16_t>
                    ((StringUtil *)&local_58,(wchar16 *)((long)awStack_88 + lVar1),uVar2);
          if (((byte)*this & 1) == 0) {
            *(void2 *)this = 0;
          }
          else {
            **(unsigned char **)(this + 0x10) = 0;
            *(unsigned long long *)(this + 8) = 0;
          }
          *(unsigned long long *)((long)awStack_88 + lVar1 + -8) = 0x10018d5c5;
          // std code
          *(wchar16 **)(this + 0x10) = local_48;
          *(wchar16 **)(this + 8) = pwStack_50;
          *(wchar16 **)this = local_58;
          local_58 = (wchar16 *)0x0;
          pwStack_50 = (wchar16 *)0x0;
          local_48 = (wchar16 *)0x0;
          *(unsigned long long *)((long)awStack_88 + lVar1 + -8) = 0x10018d5f4;
          // std code
        }
        else {
          local_58 = (wchar16 *)0x0;
          pwStack_50 = (wchar16 *)0x0;
          local_48 = (wchar16 *)0x0;
          if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
            puStack_90 = (void *)0x10018d553;
            // std code
          }
          local_80 = uVar2 * 2;
          puStack_90 = (void *)0x10018d560;
          pwVar3 = (wchar16 *)new(local_80);
          puStack_90 = (void *)0x10018d57b;
          local_58 = pwVar3;
          local_48 = pwVar3 + uVar2;
          ___bzero(pwVar3,local_80);
          puStack_90 = (void *)0x10018d58f;
          pwStack_50 = pwVar3 + uVar2;
          _CFStringGetCharacters(param_1,0,uVar2,pwVar3);
          puStack_90 = (void *)0x10018d59e;
          StringUtil::fromUTF<char16_t>((StringUtil *)&local_78,pwVar3,uVar2);
          if (((byte)*this & 1) == 0) {
            *(void2 *)this = 0;
          }
          else {
            **(unsigned char **)(this + 0x10) = 0;
            *(unsigned long long *)(this + 8) = 0;
          }
          puStack_90 = (void *)0x10018d612;
          // std code
          *(unsigned long long *)(this + 0x10) = local_68;
          *(unsigned long long *)(this + 8) = uStack_70;
          *(unsigned long long *)this = local_78;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          puStack_90 = (void *)0x10018d641;
          // std code
          if (local_58 != (wchar16 *)0x0) {
            if (pwStack_50 != local_58) {
              pwStack_50 = (wchar16 *)
                           ((~((long)pwStack_50 + (-2 - (long)local_58)) & 0xfffffffffffffffeU) +
                           (long)pwStack_50);
            }
            puStack_90 = (void *)0x10018d66d;
            delete(local_58);
          }
        }
      }
      else {
        puStack_90 = (void *)0x10018d485;
        StringUtil::fromUTF<char16_t>((StringUtil *)&local_58,pwVar3,uVar2);
        if (((byte)*this & 1) == 0) {
          *(void2 *)this = 0;
        }
        else {
          **(unsigned char **)(this + 0x10) = 0;
          *(unsigned long long *)(this + 8) = 0;
        }
        puStack_90 = (void *)0x10018d502;
        // std code
        *(wchar16 **)(this + 0x10) = local_48;
        *(wchar16 **)(this + 8) = pwStack_50;
        *(wchar16 **)this = local_58;
        local_58 = (wchar16 *)0x0;
        pwStack_50 = (wchar16 *)0x0;
        local_48 = (wchar16 *)0x0;
        puStack_90 = (void *)0x10018d531;
        // std code
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_1002272e0 == local_38) {
    
  }
                    /* WARNING: Subroutine does not return */
  puStack_90 = &UNK_10018d691;
  ___stack_chk_fail();
}
}
