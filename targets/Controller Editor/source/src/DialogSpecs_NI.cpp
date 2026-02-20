#include <ni/controller_editor/DialogSpecs_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::DialogSpecs {

void DialogSpecs(1 param_1, NI::DialogSpecs const& {
DialogSpecs *pDVar1;
  DialogSpecs *pDVar2;
  DialogSpecs *pDVar3;
  
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(DialogSpecs **)this = this + 8;
  pDVar3 = *(DialogSpecs **)param_1;
  while (pDVar1 = pDVar3, pDVar1 != param_1 + 8) {
    // std code
    __tree<// std code
    ::
    __emplace_hint_unique_key_args<NI::CalibrationStep,// std code
              ((__tree<// std code
                *)this,this + 8,pDVar1 + 0x20);
    pDVar2 = *(DialogSpecs **)(pDVar1 + 8);
    if (*(DialogSpecs **)(pDVar1 + 8) == (DialogSpecs *)0x0) {
      pDVar3 = *(DialogSpecs **)(pDVar1 + 0x10);
      if (*(DialogSpecs **)*(DialogSpecs **)(pDVar1 + 0x10) != pDVar1) {
        do {
          pDVar1 = *(DialogSpecs **)(pDVar1 + 0x10);
          pDVar3 = *(DialogSpecs **)(pDVar1 + 0x10);
        } while (*(DialogSpecs **)*(DialogSpecs **)(pDVar1 + 0x10) != pDVar1);
      }
    }
    else {
      do {
        pDVar3 = pDVar2;
        pDVar2 = *(DialogSpecs **)pDVar3;
      } while (pDVar2 != (DialogSpecs *)0x0);
    }
  }
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 0x28) = 0;
  *(DialogSpecs **)(this + 0x18) = this + 0x20;
  pDVar3 = *(DialogSpecs **)(param_1 + 0x18);
  while (pDVar1 = pDVar3, pDVar1 != param_1 + 0x20) {
    // std code
    __tree<// std code
    ::
    __emplace_hint_unique_key_args<NI::ConfirmationType,// std code
              ((__tree<// std code
                *)(this + 0x18),this + 0x20,pDVar1 + 0x20);
    pDVar2 = *(DialogSpecs **)(pDVar1 + 8);
    if (*(DialogSpecs **)(pDVar1 + 8) == (DialogSpecs *)0x0) {
      pDVar3 = *(DialogSpecs **)(pDVar1 + 0x10);
      if (*(DialogSpecs **)*(DialogSpecs **)(pDVar1 + 0x10) != pDVar1) {
        do {
          pDVar1 = *(DialogSpecs **)(pDVar1 + 0x10);
          pDVar3 = *(DialogSpecs **)(pDVar1 + 0x10);
        } while (*(DialogSpecs **)*(DialogSpecs **)(pDVar1 + 0x10) != pDVar1);
      }
    }
    else {
      do {
        pDVar3 = pDVar2;
        pDVar2 = *(DialogSpecs **)pDVar3;
      } while (pDVar2 != (DialogSpecs *)0x0);
    }
  }
  *(unsigned long long *)(this + 0x38) = 0;
  *(unsigned long long *)(this + 0x40) = 0;
  *(DialogSpecs **)(this + 0x30) = this + 0x38;
  if (*(DialogSpecs **)(param_1 + 0x30) != param_1 + 0x38) {
    pDVar3 = *(DialogSpecs **)(param_1 + 0x30);
    do {
      // std code
      __tree<// std code
      ::
      __emplace_hint_unique_key_args<NI::DialogText,// std code
                ((__tree<// std code
                  *)(this + 0x30),this + 0x38,pDVar3 + 0x20);
      pDVar1 = *(DialogSpecs **)(pDVar3 + 8);
      if (*(DialogSpecs **)(pDVar3 + 8) == (DialogSpecs *)0x0) {
        pDVar2 = *(DialogSpecs **)(pDVar3 + 0x10);
        if (*(DialogSpecs **)pDVar2 != pDVar3) {
          do {
            pDVar3 = *(DialogSpecs **)(pDVar3 + 0x10);
            pDVar2 = *(DialogSpecs **)(pDVar3 + 0x10);
          } while (*(DialogSpecs **)pDVar2 != pDVar3);
        }
      }
      else {
        do {
          pDVar2 = pDVar1;
          pDVar1 = *(DialogSpecs **)pDVar2;
        } while (*(DialogSpecs **)pDVar2 != (DialogSpecs *)0x0);
      }
      pDVar3 = pDVar2;
    } while (pDVar2 != param_1 + 0x38);
  }
  return;
}
}
