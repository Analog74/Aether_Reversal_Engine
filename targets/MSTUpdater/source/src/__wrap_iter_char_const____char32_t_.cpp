#include <ni/controller_editor/__wrap_iter_char_const____char32_t_.hpp>
namespace boost::u8_to_u32_iterator<std {

void __wrap_iter<char const*>, char32_t>::extract_current() const {
byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  unsigned long uVar7;
  bool bVar8;
  
  pbVar2 = *(byte **)this;
  bVar1 = *pbVar2;
  uVar3 = (uint)bVar1;
  *(uint *)(this + 8) = (uint)bVar1;
  if ((bVar1 & 0xc0) != 0x80) {
    uVar7 = 0;
    bVar8 = true;
    if ((char)*pbVar2 < '\0') {
      uVar4 = 0x80;
      iVar5 = 0;
      do {
        uVar4 = uVar4 >> 1;
        iVar5 = iVar5 + -1;
      } while ((uVar4 & *pbVar2) != 0);
      uVar4 = 4;
      if ((uint)-iVar5 < 5) {
        uVar4 = -iVar5;
      }
      uVar4 = uVar4 - 1;
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      uVar7 = (unsigned long)uVar4;
      bVar8 = uVar4 == 0;
      if (bVar8) {
        uVar7 = 0;
        bVar8 = true;
      }
      else {
        lVar6 = 0;
        do {
          *(uint *)(this + 8) = uVar3 << 6;
          if ((pbVar2[lVar6 + 1] & 0xc0) != 0x80) goto LAB_1001ad368;
          uVar3 = (uint)(pbVar2[lVar6 + 1] & 0x3f) | uVar3 << 6;
          *(uint *)(this + 8) = uVar3;
          lVar6 = lVar6 + 1;
        } while ((uint)lVar6 < uVar4);
      }
    }
    uVar3 = uVar3 & (&extract_current()::masks)[uVar7];
    *(uint *)(this + 8) = uVar3;
    if (0x10ffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      invalid_sequence();
    }
    if (((uVar3 & 0xfffff800) != 0xd800) &&
       ((bVar8 || ((uint)(&extract_current()::masks)[(int)uVar7 - 1] < uVar3)))) {
      return;
    }
  }
LAB_1001ad368:
                    /* WARNING: Subroutine does not return */
  invalid_sequence();
}

void __wrap_iter<char const*>, char32_t>::invalid_sequence() {
_Unwind_Exception *exception_object;
  void *local_20 [2];
  
  // std code
            ((logic_error *)local_20,
             "Invalid UTF-8 sequence encountered while trying to encode UTF-32 character");
  local_20[0] = PTR_vtable_1002272b8 + 0x10;
  throw_exception<// std code
  // std code
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(exception_object);
}
}
