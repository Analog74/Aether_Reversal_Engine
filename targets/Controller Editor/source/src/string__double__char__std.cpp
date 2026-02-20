#include <ni/controller_editor/string__double__char__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std::string fmt::v9::sprintf<std {

void string, double, char>(std::string const&, double const&) {
unsigned char *puVar1;
  v9 *pvVar2;
  unsigned long uVar3;
  unsigned long uVar4;
  string *psVar5;
  double local_268 [3];
  void **local_250;
  unsigned char *local_248;
  unsigned int local_240;
  unsigned int uStack_23c;
  unsigned int uStack_238;
  unsigned int uStack_234;
  unsigned char local_230 [504];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  if (((byte)*param_1 & 1) == 0) {
    psVar5 = param_1 + 1;
    uVar3 = (unsigned long)((byte)*param_1 >> 1);
  }
  else {
    uVar3 = *(unsigned long *)(param_1 + 8);
    psVar5 = *(string **)(param_1 + 0x10);
  }
  local_268[0] = *param_2;
  local_250 = &PTR_grow_101b16c90;
  local_248 = local_230;
  local_240 = 0;
  uStack_23c = 0;
  uStack_238 = 500;
  uStack_234 = 0;
  detail::vprintf<char,fmt::v9::basic_printf_context<fmt::v9::appender,char>>
            (&local_250,psVar5,uVar3,10,local_268);
  puVar1 = local_248;
  uVar3 = CONCAT44(uStack_23c,local_240);
  if (uVar3 < 0x17) {
    *this = (v9)((char)local_240 * '\x02');
    pvVar2 = this + 1;
    if (uVar3 == 0) return;
  }
  else {
    uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar2 = (v9 *)new char[uVar4];
    *(v9 **)(this + 0x10) = pvVar2;
    *(unsigned long *)this = uVar4 | 1;
    *(unsigned long *)(this + 8) = uVar3;
  }
  memcpy(pvVar2,puVar1,uVar3);
  pvVar2[uVar3] = (v9)0x0;
  local_250 = &PTR_grow_101b16c90;
  if (local_248 != local_230) {
    delete(local_248);
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return this;
}
}
