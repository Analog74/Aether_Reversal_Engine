#include <ni/controller_editor/TextInputBase.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI::NWL::TextEdit::setMarkedRange(NI::UIA {

void TextInputBase::tRange const&) {
int iVar1;
  
  iVar1 = *(int *)param_1;
  *(int *)(this + 0x590) = iVar1;
  *(int *)(this + 0x594) = iVar1 + *(int *)(param_1 + 8);
  return;
}
}
