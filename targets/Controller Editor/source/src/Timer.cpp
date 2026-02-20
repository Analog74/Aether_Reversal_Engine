#include <ni/controller_editor/Timer.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void Timer::convertTicksToMS(unsigned long long) {
int iVar1;
  unsigned long uVar2;
  double dVar3;
  mach_timebase_info local_18;
  
  if (getTicksPerSec()::ticksPerSec == '\0') {
    iVar1 = ___cxa_guard_acquire(&getTicksPerSec()::ticksPerSec);
    if (iVar1 != 0) {
      local_18.numer = 0;
      local_18.denom = 0;
      _mach_timebase_info(&local_18);
      dVar3 = ((double)((unsigned long)local_18 >> 0x20) * 1000000000.0) /
              (double)((unsigned long)local_18 & 0xffffffff);
      getTicksPerSec()::ticksPerSec = (long)dVar3;
      if (9.223372036854776e+18 <= dVar3) {
        getTicksPerSec()::ticksPerSec = (long)(dVar3 - 9.223372036854776e+18) ^ 0x8000000000000000;
      }
      ___cxa_guard_release(&getTicksPerSec()::ticksPerSec);
    }
  }
  uVar2 = param_1 * 1000;
  if ((uVar2 | getTicksPerSec()::ticksPerSec) >> 0x20 != 0) {
    return uVar2 / getTicksPerSec()::ticksPerSec;
  }
  return (uVar2 & 0xffffffff) / (getTicksPerSec()::ticksPerSec & 0xffffffff);
}

void Timer::getCurrentTicks() {
_mach_absolute_time();
  return;
}

void Timer::getTicksPerSec() {
int iVar1;
  double dVar2;
  mach_timebase_info local_18;
  
  if (getTicksPerSec()::ticksPerSec == '\0') {
    iVar1 = ___cxa_guard_acquire(&getTicksPerSec()::ticksPerSec);
    if (iVar1 != 0) {
      local_18.numer = 0;
      local_18.denom = 0;
      _mach_timebase_info(&local_18);
      dVar2 = ((double)((unsigned long)local_18 >> 0x20) * 1000000000.0) /
              (double)((unsigned long)local_18 & 0xffffffff);
      getTicksPerSec()::ticksPerSec = (long)dVar2;
      if (9.223372036854776e+18 <= dVar2) {
        getTicksPerSec()::ticksPerSec = (long)(dVar2 - 9.223372036854776e+18) ^ 0x8000000000000000;
      }
      ___cxa_guard_release(&getTicksPerSec()::ticksPerSec);
    }
  }
  return getTicksPerSec()::ticksPerSec;
}
}
