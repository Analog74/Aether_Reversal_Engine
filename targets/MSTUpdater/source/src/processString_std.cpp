#include <ni/controller_editor/processString_std.hpp>
namespace NI::NWL::StyleParser2 {

void processString(std::string const&) {
_Unwind_Exception *exception_object;
  byte bVar1;
  code *pcVar2;
  string *psVar3;
  void7 uVar5;
  bool bVar6;
  unsigned char *local_12e0 [3];
  unsigned long long local_12c8;
  unsigned long long uStack_12c0;
  unsigned long long local_12b8;
  void **local_12b0 [2];
  string *local_12a0;
  string *local_1298;
  unsigned char local_1290 [8];
  long local_1288 [587];
  long local_30;
  unsigned long uVar4;
  
  local_30 = *(long *)PTR____stack_chk_guard_1002272e0;
  local_12c8 = 0;
  uStack_12c0 = 0;
  local_12b8 = 0;
  // std code
  StyleGrammar::StyleGrammar((StyleGrammar *)local_1288,this,&local_12c8);
  // std code
  bVar1 = (byte)*param_1 & 1;
  local_1298 = param_1 + 1;
  if (bVar1 != 0) {
    local_1298 = *(string **)(param_1 + 0x10);
  }
  uVar4 = (unsigned long)((byte)*param_1 >> 1);
  if (bVar1 != 0) {
    uVar4 = *(unsigned long *)(param_1 + 8);
  }
  psVar3 = local_1298 + uVar4;
  uVar4 = *(unsigned long *)(local_1288[0] + 0x20);
  pcVar2 = // boost code
           function4<bool,// std code
           ::dummy::nonnull;
  if (uVar4 == 0) {
    pcVar2 = (code *)0x0;
  }
  local_12a0 = psVar3;
  if (pcVar2 == (code *)0x0) {
    bVar1 = 0;
    uVar5 = 0;
  }
  else {
    local_12e0[0] = local_1290;
    if (uVar4 == 0) {
      // std code
      ;
      local_12b0[0] = &PTR__bad_function_call_1002343e8;
      // boost code
      // std code
      StyleGrammar::~StyleGrammar((StyleGrammar *)local_1288);
                    /* WARNING: Subroutine does not return */
      __Unwind_Resume(exception_object);
    }
    bVar1 = (**(code **)((uVar4 & 0xfffffffffffffffe) + 8))
                      (local_1288[0] + 0x28,&local_1298,&local_12a0,local_12e0,
                       &// boost code
    uVar5 = (void7)((unsigned long)this >> 8);
  }
  bVar6 = local_1298 == psVar3;
  StyleGrammar::~StyleGrammar((StyleGrammar *)local_1288);
  if (*(long *)PTR____stack_chk_guard_1002272e0 == local_30) {
    return 0(uVar5,bVar1 & bVar6) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
