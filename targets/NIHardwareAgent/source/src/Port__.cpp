#include <ni/controller_editor/Port__.hpp>
namespace Bome::BOwnedList<bmidilib {

void Port*>::~BOwnedList() {
*(void **)this = PTR_vtable_1009cc1b0 + 0x10;
  BList<bmidilib::Port*>::clearAndDelete((BList<bmidilib::Port*> *)this);
  *(void **)this = PTR_vtable_1009cc1b8 + 0x10;
  *(unsigned int *)(this + 0x10) = 0;
  if (*(void **)(this + 8) != (void *)0x0) {
    delete__(*(void **)(this + 8));
    *(unsigned long long *)(this + 8) = 0;
  }
  return;
}
}
