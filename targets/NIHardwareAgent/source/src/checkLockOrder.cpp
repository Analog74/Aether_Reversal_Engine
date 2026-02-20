#include <ni/controller_editor/checkLockOrder.hpp>
namespace NI::NHL2 {

checkLockOrder::checkLockOrder(unsigned int) {
code *pcVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcStack_30;
  unsigned long long uStack_28;
  unsigned char *puStack_20;
  
  *(unsigned int *)this = 0;
  puStack_20 = (unsigned char *)0x10008c3df;
  lVar2 = // boost code
  if (lVar2 == 0) {
    puStack_20 = (unsigned char *)0x10008c417;
    puVar3 = (uint *)new(4);
    *puVar3 = param_1;
    puStack_20 = (unsigned char *)0x10008c429;
    puVar4 = (uint *)// boost code
    if (puVar4 != puVar3) {
      // boost code
                (&s_pCurLockOrder,// boost code
                 s_pCurLockOrder,puVar3,true);
      
    }
  }
  else {
    puStack_20 = (unsigned char *)0x10008c3f0;
    puVar3 = (uint *)// boost code
    if (param_1 < *puVar3) {
      puStack_20 = (unsigned char *)0x10008c45a;
      reportViolation();
      puStack_20 = &stack0xfffffffffffffff8;
      if (Logging::detail::__reportLevelAsUInt < 4) {
        puStack_20 = &stack0xfffffffffffffff8;
        Logging::detail::__trace__msg(3,"%s: lock order violation\n","Server");
      }
      pcStack_30 = "lock order violation";
      uStack_28 = 0x14;
      GP::Message::show(&pcStack_30,0,7,0,0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *(uint *)this = *puVar3;
    puStack_20 = (unsigned char *)0x10008c405;
    puVar3 = (uint *)// boost code
    *puVar3 = param_1;
  }
  
}

void checkLockOrder::reportViolation() {
code *pcVar1;
  char *local_18;
  unsigned long long local_10;
  
  if (Logging::detail::__reportLevelAsUInt < 4) {
    Logging::detail::__trace__msg(3,"%s: lock order violation\n","Server");
  }
  local_18 = "lock order violation";
  local_10 = 0x14;
  GP::Message::show(&local_18,0,7,0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

checkLockOrder::~checkLockOrder() {
unsigned int uVar1;
  unsigned int *puVar2;
  
  uVar1 = *(unsigned int *)this;
  puVar2 = (unsigned int *)// boost code
  *puVar2 = uVar1;
  return;
}
}
