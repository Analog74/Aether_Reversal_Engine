#include <ni/controller_editor/string_const___std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::uret::WorkerThread::transferRequest(std {

void string const&, std::string&) {
AsyncHttpResult *this_00;
  long lVar1;
  AsyncHttpResult AVar2;
  HttpClient *pHVar3;
  string *psVar4;
  long *plVar5;
  unsigned int local_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned long long local_e0;
  
  void *local_c8;
  
  void *local_b0;
  string *local_a8;
  long *local_a0;
  long local_98 [4];
  long *local_78;
  void **local_68;
  AsyncHttpResult *local_60;
  long *local_58;
  void ***local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  local_a8 = param_2;
  plVar5 = (long *)new char[0xa8];
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR____shared_ptr_emplace_101b0d7c8;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0x32aaaba7;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0x3cb0b1bb;
  plVar5[0x10] = 0;
  plVar5[0x11] = 0;
  plVar5[0x12] = 0;
  plVar5[0x13] = 0;
  plVar5[0x14] = 0;
  LOCK();
  plVar5[2] = plVar5[2] + 1;
  UNLOCK();
  LOCK();
  plVar5[2] = plVar5[2] + 1;
  UNLOCK();
  local_a0 = plVar5 + 1;
  this_00 = (AsyncHttpResult *)(plVar5 + 3);
  local_68 = &PTR____func_101b0d898;
  local_48 = &local_68;
  local_60 = this_00;
  local_58 = plVar5;
  // std code
  LOCK();
  this[0xa0] = (WorkerThread)0x1;
  UNLOCK();
  pHVar3 = *(HttpClient **)(this + 0x98);
  // std code
  // std code
  if (local_48 == (void ***)0x0) {
    local_78 = (long *)0x0;
  }
  else if (&local_68 == local_48) {
    local_78 = local_98;
    (*(code *)(*local_48)[3])();
  }
  else {
    local_78 = (long *)(*(code *)(*local_48)[2])();
  }
  HttpClient::post(pHVar3,local_d8,local_c0,local_98);
  if (local_98 == local_78) {
    (**(code **)(*local_78 + 0x20))();
  }
  else if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x28))();
  }
  if (((byte)local_c0[0] & 1) != 0) {
    delete(local_b0);
  }
  if (((byte)local_d8[0] & 1) != 0) {
    delete(local_c8);
  }
  AsyncHttpResult::waitForResult(this_00,10000);
  LOCK();
  this[0xa0] = (WorkerThread)0x0;
  UNLOCK();
  if (*this_00 == (AsyncHttpResult)0x0) {
    *(unsigned int *)(this + 0x90) = 300;
  }
  // std code
  psVar4 = local_a8;
  if (((byte)*local_a8 & 1) != 0) {
    delete(*(void **)(local_a8 + 0x10));
  }
  *(unsigned long long *)(psVar4 + 0x10) = local_e0;
  *(unsigned int *)psVar4 = local_f0;
  *(unsigned int *)(psVar4 + 4) = uStack_ec;
  *(unsigned int *)(psVar4 + 8) = uStack_e8;
  *(unsigned int *)(psVar4 + 0xc) = uStack_e4;
  AVar2 = *this_00;
  if (&local_68 == local_48) {
    (*(code *)(*local_48)[4])();
  }
  else if (local_48 != (void ***)0x0) {
    (*(code *)(*local_48)[5])();
  }
  LOCK();
  lVar1 = *local_a0;
  *local_a0 = *local_a0 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    // std code
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0((int7)((unsigned long)local_98 >> 8),AVar2) & 0xffffffff;
}
}
