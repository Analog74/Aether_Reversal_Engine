#include <ni/controller_editor/LazyPicture.hpp>
namespace NI::NWL {

void LazyPicture::resolve(float) const {
LazyPicture *pLVar1;
  __tree<// std code
  *this_00;
  long *plVar2;
  long lVar3;
  LazyPicture *pLVar4;
  LazyPicture *pLVar5;
  LazyPicture *pLVar6;
  unsigned long long *puVar7;
  LazyPicture *pLVar8;
  long *unaff_R15;
  bool bVar9;
  unsigned int local_70;
  float local_6c;
  long *local_68;
  long lStack_60;
  long *local_58;
  long lStack_50;
  long *local_40;
  float local_34;
  
  pLVar1 = this + 0x38;
  pLVar4 = *(LazyPicture **)(this + 0x38);
  pLVar6 = pLVar1;
  pLVar5 = pLVar4;
  if (pLVar4 != (LazyPicture *)0x0) {
    do {
      pLVar8 = pLVar5;
      if (param_1 < *(float *)(pLVar8 + 0x20) || param_1 == *(float *)(pLVar8 + 0x20)) {
        pLVar5 = *(LazyPicture **)pLVar8;
      }
      else {
        pLVar5 = *(LazyPicture **)(pLVar8 + 8);
        pLVar8 = pLVar6;
      }
      pLVar6 = pLVar8;
    } while (pLVar5 != (LazyPicture *)0x0);
    if ((pLVar8 != pLVar1) && (*(float *)(pLVar8 + 0x20) <= param_1)) {
      return *(long **)(pLVar8 + 0x28);
    }
  }
  this_00 = (__tree<// std code
             *)(this + 0x30);
  local_58 = (long *)0x0;
  lStack_50 = 0;
  plVar2 = *(long **)(this + 0x20);
  local_34 = param_1;
  if (plVar2 == (long *)0x0) {
    pLVar5 = pLVar1;
    if (pLVar4 != (LazyPicture *)0x0) {
      do {
        if (1.0 < *(float *)(pLVar4 + 0x20) || *(float *)(pLVar4 + 0x20) == 1.0) {
          pLVar6 = *(LazyPicture **)pLVar4;
          pLVar5 = pLVar4;
        }
        else {
          pLVar6 = *(LazyPicture **)(pLVar4 + 8);
        }
        pLVar4 = pLVar6;
      } while (pLVar6 != (LazyPicture *)0x0);
      if ((pLVar5 != pLVar1) && (*(float *)(pLVar5 + 0x20) <= 1.0)) {
        plVar2 = *(long **)(pLVar5 + 0x28);
        lVar3 = *(long *)(pLVar5 + 0x30);
        if (lVar3 != 0) {
          // std code
        }
        goto LAB_10002dc90;
      }
    }
  }
  else {
    local_6c = param_1;
    (**(code **)(*plVar2 + 0x30))(&local_68,plVar2,&local_6c);
    bVar9 = local_68 != (long *)0x0;
    if (bVar9) {
      // std code
      __tree<// std code
      ::__emplace_unique_key_args<float,float&,// std code
                (this_00,&local_34,&local_34,(shared_ptr *)&local_68);
      unaff_R15 = local_68;
    }
    if (lStack_60 != 0) {
      // std code
    }
    if (bVar9) goto LAB_10002dcda;
    pLVar5 = pLVar1;
    pLVar4 = *(LazyPicture **)pLVar1;
    if (*(LazyPicture **)pLVar1 != (LazyPicture *)0x0) {
      do {
        pLVar6 = pLVar4;
        if (1.0 < *(float *)(pLVar6 + 0x20) || *(float *)(pLVar6 + 0x20) == 1.0) {
          pLVar4 = *(LazyPicture **)pLVar6;
        }
        else {
          pLVar4 = *(LazyPicture **)(pLVar6 + 8);
          pLVar6 = pLVar5;
        }
        pLVar5 = pLVar6;
      } while (pLVar4 != (LazyPicture *)0x0);
      if ((pLVar6 != pLVar1) && (*(float *)(pLVar6 + 0x20) <= 1.0)) {
        plVar2 = *(long **)(pLVar6 + 0x28);
        lVar3 = *(long *)(pLVar6 + 0x30);
        if (lVar3 != 0) {
          // std code
        }
        if (lStack_50 != 0) {
          local_58 = plVar2;
          lStack_50 = lVar3;
          // std code
          plVar2 = local_58;
          lVar3 = lStack_50;
        }
        goto LAB_10002dc90;
      }
    }
    local_70 = 0x3f800000;
    plVar2 = *(long **)(this + 0x20);
    if (plVar2 == (long *)0x0) {
      puVar7 = (unsigned long long *)___cxa_allocate_exception(8);
      *puVar7 = PTR_vtable_100227298 + 0x10;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar7,PTR_typeinfo_100227198,// std code
    }
    (**(code **)(*plVar2 + 0x30))(&local_68,plVar2,&local_70);
    lVar3 = lStack_50;
    lStack_50 = lStack_60;
    local_58 = local_68;
    local_68 = (long *)0x0;
    lStack_60 = 0;
    if ((lVar3 != 0) && (// std code
      // std code
    }
    if (local_58 != (long *)0x0) {
      local_68 = (long *)CONCAT44(local_68._4_4_,0x3f800000);
      // std code
      __tree<// std code
      ::__emplace_unique_key_args<float,float,// std code
                (this_00,(float *)&local_68,(float *)&local_68,(shared_ptr *)&local_58);
      plVar2 = local_58;
      lVar3 = lStack_50;
LAB_10002dc90:
      lStack_50 = lVar3;
      local_58 = plVar2;
      UIA::Picture::cloneAndScale(local_34,&local_40,local_58,1);
      unaff_R15 = local_40;
      // std code
      __tree<// std code
      ::
      __emplace_unique_key_args<float,float&,// std code
                (this_00,&local_34,&local_34,(unique_ptr *)&local_40);
      plVar2 = local_40;
      local_40 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      goto LAB_10002dcda;
    }
  }
  unaff_R15 = (long *)0x0;
LAB_10002dcda:
  if (lStack_50 != 0) {
    // std code
  }
  return unaff_R15;
}

LazyPicture::~LazyPicture() {
LazyPicture *pLVar1;
  
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x30),*(__tree_node **)(this + 0x38));
  pLVar1 = *(LazyPicture **)(this + 0x20);
  if (pLVar1 == this) {
                    /* WARNING: Could not recover jumptable at 0x00010002e499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pLVar1 + 0x20))();
    return;
  }
  if (pLVar1 != (LazyPicture *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010002e48d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pLVar1 + 0x28))();
    return;
  }
  return;
}
}
