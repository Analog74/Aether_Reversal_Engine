#include <ni/controller_editor/getConstValue_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::StyleParser2 {

void getConstValue(2 param_2, std::string const&, unsigned int {
unsigned long uVar1;
  StyleParser2 *this;
  char cVar2;
  void *pvVar3;
  string *psVar4;
  uint in_ECX;
  string *in_RDX;
  unsigned int in_register_00000034;
  unsigned char *puVar5;
  unsigned long uVar6;
  unsigned long local_298 [3];
  StyleParser2 *local_280;
  unsigned char *local_278;
  unsigned long long local_270;
  unsigned long local_268;
  void *local_260;
  uint local_254;
  void **local_250;
  unsigned char *local_248;
  unsigned int local_240;
  unsigned int uStack_23c;
  unsigned int uStack_238;
  unsigned int uStack_234;
  unsigned char local_230 [504];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  *(unsigned int *)param_1 = 0;
  *(unsigned int *)(param_1 + 0x50) = 0;
  cVar2 = getConstValueImpl((StyleParser2 *)CONCAT44(in_register_00000034,param_2),in_RDX,
                            (tPropertyValue *)param_1);
  if (cVar2 != '\0') return;
  local_298[0] = (unsigned long)in_ECX;
  local_250 = &PTR_grow_101b16c90;
  local_248 = local_230;
  local_240 = 0;
  uStack_23c = 0;
  uStack_238 = 500;
  uStack_234 = 0;
  local_280 = (StyleParser2 *)CONCAT44(in_register_00000034,param_2);
  local_254 = in_ECX;
  fmt::v9::detail::vprintf<char,fmt::v9::basic_printf_context<fmt::v9::appender,char>>
            (&local_250,"PARSER ERROR at line %d: use of void constant ",0x33,2,local_298);
  uVar1 = CONCAT44(uStack_23c,local_240);
  if (uVar1 < 0x17) {
    local_270 = 0(local_270._1_7_,(char)local_240 * '\x02');
    pvVar3 = (void *)((long)&local_270 + 1);
    puVar5 = local_248;
    if (uVar1 != 0) return;
  }
  else {
    local_278 = local_248;
    uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = new char[uVar6];
    local_270 = uVar6 | 1;
    puVar5 = local_278;
    local_268 = uVar1;
    local_260 = pvVar3;
    memcpy(pvVar3,puVar5,uVar1);
  }
  *(unsigned char *)((long)pvVar3 + uVar1) = 0;
  local_250 = &PTR_grow_101b16c90;
  if (local_248 != local_230) {
    delete(local_248);
  }
  this = local_280;
  if (((byte)*in_RDX & 1) == 0) {
    psVar4 = in_RDX + 1;
  }
  else {
    psVar4 = *(string **)(in_RDX + 0x10);
  }
  // std code
  psVar4 = (string *)ni::filesystem::to_utf8_string((path *)(this + 0x58));
  addErrorMessage(this,psVar4,local_254,(string *)&local_270);
  if ((local_270 & 1) != 0) {
    delete(local_260);
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}
}
