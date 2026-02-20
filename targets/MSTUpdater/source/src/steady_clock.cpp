#include <ni/controller_editor/steady_clock.hpp>
namespace boost::chrono {

void steady_clock::now() {
kern_return_t kVar1;
  code *pcVar2;
  mach_timebase_info local_10;
  
  kVar1 = _mach_timebase_info(&local_10);
  if (kVar1 == 0) {
    pcVar2 = chrono_detail::steady_full;
    if (local_10.numer == local_10.denom) {
      pcVar2 = chrono_detail::steady_simplified;
    }
  }
  else {
    pcVar2 = (code *)0x0;
  }
  (*pcVar2)();
  return;
}
}
