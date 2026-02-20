#include <ni/controller_editor/InstanceList.hpp>
namespace NI::NHL2::Display::DataDefs {

void InstanceList::clearList() {
long lVar1;
  
  ___bzero(this + 0x7424,0x18c);
  lVar1 = 600;
  do {
    this[lVar1 + -600] = (InstanceList)0x0;
    this[lVar1 + -300] = (InstanceList)0x0;
    this[lVar1] = (InstanceList)0x0;
    lVar1 = lVar1 + 900;
  } while (lVar1 != 0x765c);
  *(unsigned int *)(this + 0x7404) = 0;
  return;
}
}
