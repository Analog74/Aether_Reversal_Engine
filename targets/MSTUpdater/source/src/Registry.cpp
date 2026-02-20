#include <ni/controller_editor/Registry.hpp>
namespace NI::GP {

void Registry::deInit() {
if (s_pImpl != (long *)0x0) {
    // std code
    (**(code **)(*s_pImpl + 0x78))();
    if (s_pImpl != (long *)0x0) {
      (**(code **)(*s_pImpl + 8))();
    }
    s_pImpl = (long *)0x0;
    // std code
  }
  return 1;
}
}
