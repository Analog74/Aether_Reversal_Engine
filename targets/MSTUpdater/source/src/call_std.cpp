#include <ni/controller_editor/call_std.hpp>
namespace void eggs::variants::detail::move_assign {

void call<std::string >(void*, void*) {
unsigned long long uVar1;
  
                    /* WARNING: Load size is inaccurate */
  if ((*param_1 & 1) == 0) {
    *(void2 *)param_1 = 0;
  }
  else {
    **(unsigned char **)((long)param_1 + 0x10) = 0;
    *(unsigned long long *)((long)param_1 + 8) = 0;
  }
  // std code
  *(unsigned long long *)((long)param_1 + 0x10) = *(unsigned long long *)((long)param_2 + 0x10);
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_2;
  *(unsigned long long *)((long)param_1 + 8) = *(unsigned long long *)((long)param_2 + 8);
  *(unsigned long long *)param_1 = uVar1;
  *(unsigned long long *)((long)param_2 + 0x10) = 0;
  *(unsigned long long *)((long)param_2 + 8) = 0;
  *(unsigned long long *)param_2 = 0;
  return;
}
}
