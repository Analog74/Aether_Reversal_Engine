#include <ni/controller_editor/IMapTemplateAndPagesSupport.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2 {

void IMapTemplateAndPagesSupport::checkAndResetMapModificationState() const {
int iVar1;
  
  iVar1 = *(int *)(this + 0x11c);
  *(unsigned int *)(this + 0x11c) = 0;
  return CONCAT31((int3)(iVar1 - 1U >> 8),iVar1 - 1U < 5);
}

void IMapTemplateAndPagesSupport::needsMapSaving() const {
return CONCAT31((int3)(*(int *)(this + 0x11c) - 1U >> 8),*(int *)(this + 0x11c) - 1U < 5);
}
}
