#include <ni/controller_editor/Window____.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std::list<NI::UIA::Window*, std::allocator<NI::UIA {

void Window*> >::~list() {
long lVar1;
  list<NI::UIA::Window*,// std code
  long lVar3;
  list<NI::UIA::Window*,// std code
  
  if (*(long *)(this + 0x10) != 0) {
    lVar1 = *(long *)this;
    plVar2 = *(list<NI::UIA::Window*,// std code
    lVar3 = *(long *)plVar2;
    *(unsigned long long *)(lVar3 + 8) = *(unsigned long long *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    *(unsigned long long *)(this + 0x10) = 0;
    while (plVar2 != this) {
      plVar4 = *(list<NI::UIA::Window*,// std code
      delete(plVar2);
      plVar2 = plVar4;
    }
  }
  return;
}
}
