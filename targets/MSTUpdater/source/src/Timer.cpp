#include <ni/controller_editor/Timer.hpp>
namespace NI::GP {

void Timer::convertTicksToMS(unsigned long long) {
if (0 == 0) {
    _mach_timebase_info((mach_timebase_info_t)&getTicksPerSec()::timebaseInfo);
    getTicksPerSec()::ticksPerSec =
         (uint)(long)(((double)0 * 1000000000.0) /
                     (double)getTicksPerSec()::timebaseInfo);
  }
  return (param_1 * 1000) / (unsigned long)getTicksPerSec()::ticksPerSec;
}

void Timer::getCurrentTicks() {
_mach_absolute_time();
  return;
}
}
