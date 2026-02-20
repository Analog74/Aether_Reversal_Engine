#include <ni/controller_editor/Port_bmidilib.hpp>
namespace bmidilib::Port {

void Port(bmidilib::Manager*) {
Bome::BString::BString((BString *)(this + 0x30));
  Bome::BString::BString((BString *)(this + 0x38));
  Bome::BString::BString((BString *)(this + 0x40));
  Bome::BString::BString((BString *)(this + 0x48));
  *(Manager **)this = param_1;
  static_serial = static_serial + 1;
  *(int *)(this + 8) = static_serial;
  *(unsigned long long *)(this + 0xc) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned int *)(this + 0x27) = 0;
  return;
}
}
