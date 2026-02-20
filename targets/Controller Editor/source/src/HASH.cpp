#include <ni/controller_editor/HASH.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::HASH::getHashBinary(char const*, unsigned long, NI::GP {

void HASH::eHashType) {
EVP_MD *type;
  EVP_MD_CTX *ctx;
  void *pvVar1;
  size_t cnt;
  unsigned long uVar2;
  uint local_7c;
  uchar local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  if (param_4 != 0) {
    cnt = 0;
    if (param_2 == 0) {
      cnt = param_2;
    }
    if (param_1 != (void *)0x0) {
      cnt = param_2;
    }
    if (param_4 - 1U < 3) {
      if (param_4 == 3) {
        type = _EVP_sha256();
        ctx = (EVP_MD_CTX *)_EVP_MD_CTX_new();
      }
      else {
        if (param_4 == 2) {
          type = _EVP_sha1();
          return;
        }
        if (param_4 == 1) {
          type = _EVP_md5();
          return;
        }
        ctx = (EVP_MD_CTX *)_EVP_MD_CTX_new();
        type = (EVP_MD *)0x0;
      }
      _EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
      _EVP_DigestUpdate(ctx,param_1,cnt);
      _EVP_DigestFinal_ex(ctx,local_78,&local_7c);
      uVar2 = (unsigned long)local_7c;
      *(unsigned long long *)this = 0;
      *(unsigned long long *)(this + 8) = 0;
      *(unsigned long long *)(this + 0x10) = 0;
      if (uVar2 != 0) {
        pvVar1 = new char[uVar2];
        *(void **)this = pvVar1;
        *(unsigned long *)(this + 0x10) = (long)pvVar1 + uVar2;
        memcpy(pvVar1,local_78,uVar2);
        *(unsigned long *)(this + 8) = (long)pvVar1 + uVar2;
      }
      _EVP_MD_CTX_free(ctx);
      return;
    }
  }
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
