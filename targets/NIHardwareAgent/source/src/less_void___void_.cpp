#include <ni/controller_editor/less_void___void_.hpp>
namespace boost::container::flat_set<std::string, std {

void less<void>, void>::~flat_set() {
unsigned long long *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  if (lVar2 != 0) {
    puVar1 = (unsigned long long *)(*(long *)this + 0x10);
    do {
      lVar2 = lVar2 + -1;
      if ((*(byte *)(puVar1 + -2) & 1) != 0) {
        delete((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
    } while (lVar2 != 0);
  }
  if (*(long *)(this + 0x10) != 0) {
    delete(*(void **)this);
    return;
  }
  return;
}
}
