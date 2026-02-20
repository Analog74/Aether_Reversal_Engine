#include <ni/controller_editor/FileStorage____.hpp>
namespace std::vector<NI::GP::FileStorage*, std::allocator<NI::GP {

void FileStorage*> >::~vector() {
void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 8);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 8) =
           (~((long)pvVar2 + (-8 - (long)pvVar1)) & 0xfffffffffffffff8U) + (long)pvVar2;
    }
    delete(pvVar1);
    return;
  }
  return;
}
}
