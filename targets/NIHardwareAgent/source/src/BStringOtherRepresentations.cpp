#include <ni/controller_editor/BStringOtherRepresentations.hpp>
namespace Bome {

BStringOtherRepresentations::~BStringOtherRepresentations() {
if (*(void **)this != (void *)0x0) {
    _free(*(void **)this);
    *(unsigned long long *)this = 0;
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    _free(*(void **)(this + 0x10));
    *(unsigned long long *)(this + 0x10) = 0;
  }
  return;
}
}
