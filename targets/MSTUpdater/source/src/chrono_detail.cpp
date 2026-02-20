#include <ni/controller_editor/chrono_detail.hpp>
namespace boost::chrono {

void chrono_detail::steady_full() {
kern_return_t kVar1;
  uint64_t uVar2;
  unsigned char auVar3 [16];
  double dVar4;
  mach_timebase_info local_10;
  
  kVar1 = _mach_timebase_info(&local_10);
  dVar4 = 0.0;
  if (kVar1 == 0) {
    dVar4 = (double)local_10.numer / (double)local_10.denom;
  }
  uVar2 = _mach_absolute_time();
  auVar3._8_4_ = (int)(uVar2 >> 0x20);
  auVar3._0_8_ = uVar2;
  auVar3._12_4_ = 0x45300000;
  return (long)((((double)CONCAT44(0x43300000,(int)uVar2) - 4503599627370496.0) +
                (auVar3._8_8_ - 1.9342813113834067e+25)) * dVar4);
}

void chrono_detail::steady_simplified() {
_mach_absolute_time();
  return;
}
}
