#include <ni/controller_editor/List.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::Display::DataDefs {

void List::clearList() {
long lVar1;
  
  lVar1 = 600;
  do {
    this[lVar1 + -600] = (List)0x0;
    this[lVar1 + -300] = (List)0x0;
    this[lVar1] = (List)0x0;
    lVar1 = lVar1 + 900;
  } while (lVar1 != 0x765c);
  *(unsigned int *)(this + 0x7404) = 0;
  return;
}

void List::highlight(float param_1) {
}

void List::highlightInt(int param_1) {
}
}
