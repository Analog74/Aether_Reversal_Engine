#include <ni/controller_editor/error_with_option_name.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options {

void error_with_option_name::get_canonical_option_name() const {
__tree<// std code
  *this;
  int iVar1;
  long lVar2;
  unsigned long long uVar3;
  long lVar4;
  logic_error *plVar5;
  unsigned long long *puVar6;
  unsigned long uVar7;
  unsigned long uVar8;
  long in_RSI;
  void6 *puVar9;
  string *in_RDI;
  string local_78;
  void6 uStack_77;
  unsigned char uStack_71;
  unsigned char uStack_70;
  void6 uStack_6f;
  unsigned char uStack_69;
  void6 *local_68;
  string local_60;
  unsigned int local_5f;
  void2 uStack_5b;
  unsigned char uStack_59;
  unsigned char uStack_58;
  void6 uStack_57;
  unsigned char uStack_51;
  void *local_50;
  string local_48;
  unsigned char uStack_47;
  unsigned char uStack_46;
  unsigned char uStack_45;
  unsigned char uStack_44;
  void2 uStack_43;
  unsigned char uStack_41;
  unsigned long long uStack_40;
  void *local_38;
  
  local_60 = (string)0xc;
  local_5f = 0x6974706f;
  uStack_5b = 0x6e6f;
  uStack_59 = 0;
  this = (__tree<// std code
          *)(in_RSI + 0x18);
  lVar4 = // std code
          __tree<// std code
          ::find<// std code
  if ((*(byte *)(lVar4 + 0x38) & 1) == 0) {
    uVar8 = (unsigned long)(*(byte *)(lVar4 + 0x38) >> 1);
  }
  else {
    uVar8 = *(unsigned long *)(lVar4 + 0x40);
  }
  if (((byte)local_60 & 1) != 0) {
    delete(local_50);
  }
  if (uVar8 == 0) {
    local_60 = (string)0x1c;
    local_5f = 0x6769726f;
    uStack_5b = 0x6e69;
    uStack_59 = 0x61;
    uStack_58 = 0x6c;
    uStack_57 = 0x6e656b6f745f;
    uStack_51 = 0;
    lVar4 = // std code
            __tree<// std code
            ::find<// std code
    // std code
    return;
  }
  local_78 = (string)0x1c;
  uStack_77 = 0x6e696769726f;
  uStack_71 = 0x61;
  uStack_70 = 0x6c;
  uStack_6f = 0x6e656b6f745f;
  uStack_69 = 0;
  lVar4 = // std code
          __tree<// std code
          ::find<// std code
  if ((*(byte *)(lVar4 + 0x38) & 1) == 0) {
    lVar2 = lVar4 + 0x39;
    uVar8 = (unsigned long)(*(byte *)(lVar4 + 0x38) >> 1);
  }
  else {
    lVar2 = *(long *)(lVar4 + 0x48);
    uVar8 = *(unsigned long *)(lVar4 + 0x40);
  }
  if (uVar8 != 0) {
    uVar7 = 0;
    do {
      if ((0x3f < *(byte *)(lVar2 + uVar7)) ||
         ((1L << (*(byte *)(lVar2 + uVar7) & 0x3f) & 0xa00000000000U) == 0)) {
        if (uVar7 != 0xffffffffffffffff) {
          // std code
                              (allocator *)(lVar4 + 0x38));
          return;
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar7);
  }
  // std code
  if (((byte)local_78 & 1) != 0) {
    delete(local_68);
  }
  local_48 = (string)0xc;
  uStack_47 = 0x6f;
  uStack_46 = 0x70;
  uStack_45 = 0x74;
  uStack_44 = 0x69;
  uStack_43 = 0x6e6f;
  uStack_41 = 0;
  lVar4 = // std code
          __tree<// std code
          ::find<// std code
  if ((*(byte *)(lVar4 + 0x38) & 1) == 0) {
    lVar2 = lVar4 + 0x39;
    uVar8 = (unsigned long)(*(byte *)(lVar4 + 0x38) >> 1);
  }
  else {
    lVar2 = *(long *)(lVar4 + 0x48);
    uVar8 = *(unsigned long *)(lVar4 + 0x40);
  }
  if (uVar8 != 0) {
    uVar7 = 0;
    do {
      if ((0x3f < *(byte *)(lVar2 + uVar7)) ||
         ((1L << (*(byte *)(lVar2 + uVar7) & 0x3f) & 0xa00000000000U) == 0)) {
        if (uVar7 != 0xffffffffffffffff) {
          // std code
                              (allocator *)(lVar4 + 0x38));
          return;
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar7);
  }
  // std code
  if (((byte)local_48 & 1) != 0) {
    delete(local_38);
  }
  iVar1 = *(int *)(in_RSI + 0x10);
  if (iVar1 == 0) return;
  if ((iVar1 == 0x1000) || (iVar1 == 1)) {
    if (iVar1 < 8) {
      if (iVar1 == 1) {
        local_48 = (string)0x4;
        uStack_46 = 0x2d;
        uStack_45 = 0;
      }
      else {
        if (iVar1 != 4) {
          plVar5 = (logic_error *)___cxa_allocate_exception(0x10);
          // std code
                    (plVar5,
                     "error_with_option_name::m_option_style can only be one of [0, allow_dash_for_short, allow_slash_for_short, allow_long_disguise or allow_long]"
                    );
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(plVar5,PTR_typeinfo_101ab42f0,PTR__logic_error_101ab40a0);
        }
        local_48 = (string)0x2;
        uStack_46 = 0;
      }
      uStack_47 = 0x2d;
    }
    else {
      if (iVar1 != 8) {
        if (iVar1 != 0x1000) return;
        return;
      }
      local_48 = (string)0x2;
      uStack_47 = 0x2f;
      uStack_46 = 0;
    }
    puVar9 = local_68;
    if (((byte)local_78 & 1) == 0) {
      puVar9 = &uStack_77;
    }
    puVar6 = (unsigned long long *)// std code
    *(unsigned long long *)(in_RDI + 0x10) = puVar6[2];
    uVar3 = puVar6[1];
    *(unsigned long long *)in_RDI = *puVar6;
    *(unsigned long long *)(in_RDI + 8) = uVar3;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    if (((byte)local_48 & 1) != 0) {
      delete(local_38);
    }
  }
  else {
    if (((byte)local_60 & 1) == 0) {
      if ((byte)local_60 >> 1 == 0) return;
    }
    else if (CONCAT17(uStack_51,CONCAT61(uStack_57,uStack_58)) == 0) {
      *(void6 **)(in_RDI + 0x10) = local_68;
      *(unsigned long *)in_RDI = CONCAT17(uStack_71,CONCAT61(uStack_77,local_78));
      *(unsigned long *)(in_RDI + 8) = CONCAT17(uStack_69,CONCAT61(uStack_6f,uStack_70));
      local_78 = (string)0x0;
      uStack_77 = 0;
      uStack_71 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_69 = 0;
      local_68 = (void6 *)0x0;
      return;
    }
    if (iVar1 < 8) {
      if (iVar1 == 1) {
        local_48 = (string)0x4;
        uStack_46 = 0x2d;
        uStack_45 = 0;
      }
      else {
        if (iVar1 != 4) {
          plVar5 = (logic_error *)___cxa_allocate_exception(0x10);
          // std code
                    (plVar5,
                     "error_with_option_name::m_option_style can only be one of [0, allow_dash_for_short, allow_slash_for_short, allow_long_disguise or allow_long]"
                    );
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(plVar5,PTR_typeinfo_101ab42f0,PTR__logic_error_101ab40a0);
        }
        local_48 = (string)0x2;
        uStack_46 = 0;
      }
      uStack_47 = 0x2d;
    }
    else {
      if (iVar1 != 8) {
        if (iVar1 != 0x1000) return;
        return;
      }
      local_48 = (string)0x2;
      uStack_47 = 0x2f;
      uStack_46 = 0;
    }
    // std code
    *(void **)(in_RDI + 0x10) = local_38;
    *(unsigned long *)in_RDI =
         CONCAT17(uStack_41,
                  CONCAT25(uStack_43,
                           CONCAT14(uStack_44,
                                    CONCAT13(uStack_45,
                                             CONCAT12(uStack_46,CONCAT11(uStack_47,local_48))))));
    *(unsigned long long *)(in_RDI + 8) = uStack_40;
  }
  if (((byte)local_78 & 1) != 0) {
    delete(local_68);
  }
  if (((byte)local_60 & 1) != 0) {
    delete(local_50);
  }
  return;
}

error_with_option_name::~error_with_option_name() {
*(void ***)this = &PTR__error_with_option_name_101b22288;
  if (((byte)this[0x60] & 1) != 0) {
    delete(*(void **)(this + 0x70));
  }
  if (((byte)this[0x48] & 1) != 0) {
    delete(*(void **)(this + 0x58));
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x30),*(__tree_node **)(this + 0x38));
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x18),*(__tree_node **)(this + 0x20));
  // std code
  delete(this);
  return;
}
}
