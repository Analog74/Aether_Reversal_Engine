#include <ni/controller_editor/holder_unsigned_int_.hpp>
namespace boost::any {

void holder<unsigned int>::clone() const {
unsigned long long *puVar1;
  
  puVar1 = (unsigned long long *)new(0x10);
  *puVar1 = &PTR__holder_100a4a380;
  *(unsigned int *)(puVar1 + 1) = *(unsigned int *)(this + 8);
  return;
}

void holder<unsigned int>::type() const {
return PTR_typeinfo_100a44270;
}

void holder<unsigned int>::~holder() {
delete(this);
  return;
}
}
