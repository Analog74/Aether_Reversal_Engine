#include <ni/controller_editor/LazyPicture.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

LazyPicture::~LazyPicture() {
LazyPicture *pLVar1;
  
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x30),*(__tree_node **)(this + 0x38));
  pLVar1 = *(LazyPicture **)(this + 0x20);
  if (this == pLVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001004c8749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pLVar1 + 0x20))();
    return;
  }
  if (pLVar1 != (LazyPicture *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001004c873d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pLVar1 + 0x28))();
    return;
  }
  return;
}
}
