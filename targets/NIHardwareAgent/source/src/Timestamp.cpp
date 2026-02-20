#include <ni/controller_editor/Timestamp.hpp>
namespace NI::NHL2 {

void Timestamp::setFromGPTimer(unsigned long long) {
uint uVar1;
  int iVar2;
  unsigned long uVar3;
  unsigned char auVar4 [16];
  unsigned char auVar5 [16];
  
  if (setFromGPTimer(unsigned_long_long)::uTicksPerSecond == '\0') {
    iVar2 = ___cxa_guard_acquire(&setFromGPTimer(unsigned_long_long)::uTicksPerSecond);
    if (iVar2 != 0) {
      setFromGPTimer(unsigned_long_long)::uTicksPerSecond = GP::Timer::getTicksPerSec();
      ___cxa_guard_release(&setFromGPTimer(unsigned_long_long)::uTicksPerSecond);
    }
  }
  if (setFromGPTimer(unsigned_long_long)::dNanosPerTick == '\0') {
    iVar2 = ___cxa_guard_acquire(&setFromGPTimer(unsigned_long_long)::dNanosPerTick);
    if (iVar2 != 0) {
      auVar5._0_8_ = (double)CONCAT44(0x43300000,
                                      (int)setFromGPTimer(unsigned_long_long)::uTicksPerSecond);
      auVar5._8_4_ = (int)(setFromGPTimer(unsigned_long_long)::uTicksPerSecond >> 0x20);
      auVar5._12_4_ = 0x45300000;
      setFromGPTimer(unsigned_long_long)::dNanosPerTick =
           1000000000.0 /
           ((auVar5._8_8_ - 1.9342813113834067e+25) + (auVar5._0_8_ - 4503599627370496.0));
      ___cxa_guard_release(&setFromGPTimer(unsigned_long_long)::dNanosPerTick);
    }
  }
  if ((param_1 | setFromGPTimer(unsigned_long_long)::uTicksPerSecond) >> 0x20 == 0) {
    uVar1 = (uint)((param_1 & 0xffffffff) /
                  (setFromGPTimer(unsigned_long_long)::uTicksPerSecond & 0xffffffff));
    uVar3 = (param_1 & 0xffffffff) %
            (setFromGPTimer(unsigned_long_long)::uTicksPerSecond & 0xffffffff);
  }
  else {
    uVar1 = (uint)(param_1 / setFromGPTimer(unsigned_long_long)::uTicksPerSecond);
    uVar3 = param_1 % setFromGPTimer(unsigned_long_long)::uTicksPerSecond;
  }
  auVar4._8_4_ = (int)(uVar3 >> 0x20);
  auVar4._0_8_ = uVar3;
  auVar4._12_4_ = 0x45300000;
  *(unsigned long *)this =
       ((long)(((auVar4._8_8_ - 1.9342813113834067e+25) +
               ((double)CONCAT44(0x43300000,(int)uVar3) - 4503599627370496.0)) *
              setFromGPTimer(unsigned_long_long)::dNanosPerTick) & 0xffffffffU) +
       (unsigned long)uVar1 * 1000000000;
  return;
}
}
