#include <ni/controller_editor/u16string.hpp>
namespace std {

u16string::~u16string() {
if (((byte)*this & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x10));
  return;
}
}
