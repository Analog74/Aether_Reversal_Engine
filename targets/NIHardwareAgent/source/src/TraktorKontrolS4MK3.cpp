#include <ni/controller_editor/TraktorKontrolS4MK3.hpp>
namespace NI::NHL2::SERVER {

void TraktorKontrolS4MK3::isMotorJogwheelProcessingDisabled() const {
if (*(long *)(this + 0x150) != 0) {
    return 0((int7)((unsigned long)*(long *)(this + 0x150) >> 8),*(int *)(this + 0x160) == 0x536c6570
                   );
  }
  return 0;
}

TraktorKontrolS4MK3::~TraktorKontrolS4MK3() {
~TraktorKontrolS4MK3(this);
  delete(this);
  return;
}
}
