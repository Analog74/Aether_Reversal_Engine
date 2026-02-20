#include <ni/controller_editor/getAttribute_ni.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::AttributesMap {

void getAttribute(ni::symbol) const {
AttributesMap *pAVar1;
  AttributesMap *pAVar2;
  
  pAVar2 = *(AttributesMap **)(this + 8);
  if (pAVar2 != (AttributesMap *)0x0) {
    pAVar1 = this + 8;
    do {
      if (*(unsigned long *)(pAVar2 + 0x20) >= param_2) {
        pAVar1 = pAVar2;
      }
      pAVar2 = *(AttributesMap **)(pAVar2 + (unsigned long)(*(unsigned long *)(pAVar2 + 0x20) < param_2) * 8);
    } while (pAVar2 != (AttributesMap *)0x0);
    if ((pAVar1 != this + 8) && (*(unsigned long *)(pAVar1 + 0x20) <= param_2)) {
      return pAVar1 + 0x28;
    }
  }
  return (AttributesMap *)0x0;
}
}
