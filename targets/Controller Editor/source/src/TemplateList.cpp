#include <ni/controller_editor/TemplateList.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

TemplateList::~TemplateList() {
TemplateList *pTVar1;
  
  *(void ***)(this + -0x60) = &PTR__IEditingSelectable_101af6958;
  *(void ***)this = &PTR__IEditingSelectable_101af6a38;
  // std code
            ((__tree<unsigned_long,// std code
             (this + 0x6f0),*(__tree_node **)(this + 0x6f8));
  *(void ***)(this + -0x60) = &PTR__Vector_101af6a68;
  *(void ***)this = &PTR__Vector_101af6b48;
  pTVar1 = *(TemplateList **)(this + 0x6e0);
  if (this + 0x6c0 == pTVar1) {
    (**(code **)(*(long *)pTVar1 + 0x20))();
    pTVar1 = *(TemplateList **)(this + 0x6b0);
    if (this + 0x690 == pTVar1) return;
    if (pTVar1 != (TemplateList *)0x0) {
      (**(code **)(*(long *)pTVar1 + 0x28))();
    }
    pTVar1 = *(TemplateList **)(this + 0x680);
    if (this + 0x660 == pTVar1) {
      (**(code **)(*(long *)pTVar1 + 0x20))();
      return;
    }
  }
  else {
    if (pTVar1 != (TemplateList *)0x0) {
      (**(code **)(*(long *)pTVar1 + 0x28))();
    }
    pTVar1 = *(TemplateList **)(this + 0x6b0);
    if (this + 0x690 != pTVar1) return;
    (**(code **)(*(long *)pTVar1 + 0x20))();
    pTVar1 = *(TemplateList **)(this + 0x680);
    if (this + 0x660 == pTVar1) return;
  }
  if (pTVar1 != (TemplateList *)0x0) {
    (**(code **)(*(long *)pTVar1 + 0x28))();
  }
  NWL::VectorBase::~VectorBase((VectorBase *)(this + -0x60));
  delete((VectorBase *)(this + -0x60));
  return;
}
}
