#include <ni/controller_editor/Logging.hpp>
namespace NI::NHL2::Logging::detail::__trace__msg(NI::NHL2 {

void Logging::Level, char const*, ...) {
ostream *poVar1;
  char in_AL;
  size_t sVar2;
  unsigned char local_4e8 [16];
  unsigned long long local_4d8;
  unsigned long long local_4d0;
  unsigned long long local_4c8;
  unsigned long long local_4c0;
  unsigned long long local_4b8;
  unsigned long long local_4a8;
  unsigned long long local_498;
  unsigned long long local_488;
  unsigned long long local_478;
  unsigned long long local_468;
  unsigned long long local_458;
  unsigned long long local_448;
  char local_438 [1024];
  unsigned int local_38;
  unsigned int local_34;
  unsigned char *local_30;
  unsigned char *local_28;
  long local_20;
  
  if (in_AL != '\0') {
    local_4b8 = param_1;
    local_4a8 = param_2;
    local_498 = param_3;
    local_488 = param_4;
    local_478 = param_5;
    local_468 = param_6;
    local_458 = param_7;
    local_448 = param_8;
  }
  local_20 = *(long *)PTR____stack_chk_guard_1002272e0;
  local_438[0] = '\0';
  poVar1 = (ostream *)(&destinationStream)[__reportLevelAsUInt];
  local_4d8 = param_11;
  local_4d0 = param_12;
  local_4c8 = param_13;
  local_4c0 = param_14;
  if (poVar1 == (ostream *)0x0) {
    if ((param_9 & 0xfe) == 2) {
      local_28 = local_4e8;
      local_30 = &stack0x00000008;
      local_34 = 0x30;
      local_38 = 0x10;
      _asl_vlog(0,0,param_9 != 3 | 2,param_10,&local_38);
    }
  }
  else {
    local_28 = local_4e8;
    local_30 = &stack0x00000008;
    local_34 = 0x30;
    local_38 = 0x10;
    _vsprintf(local_438,param_10,&local_38);
    // std code
    sVar2 = strlen(local_438);
    // std code
    // std code
    // std code
  }
  if (*(long *)PTR____stack_chk_guard_1002272e0 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
