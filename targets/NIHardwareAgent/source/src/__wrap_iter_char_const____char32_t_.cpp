#include <ni/controller_editor/__wrap_iter_char_const____char32_t_.hpp>
namespace boost::u8_to_u32_iterator<std {

void __wrap_iter<char const*>, char32_t>::extract_current() const {
byte bVar1;
  byte *pbVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  unsigned long uVar9;
  long lVar10;
  unsigned long uVar11;
  uint uVar12;
  void *local_30 [2];
  
  pbVar2 = *(byte **)this;
  bVar1 = *pbVar2;
  uVar5 = (uint)bVar1;
  *(uint *)(this + 8) = (uint)bVar1;
  if ((bVar1 & 0xffffffc0) == 0x80) {
    // std code
              ((logic_error *)local_30,
               "Invalid UTF-8 sequence encountered while trying to encode UTF-32 character");
    local_30[0] = PTR_vtable_1009cc2a8 + 0x10;
    throw_exception<// std code
    goto LAB_1002fc91c;
  }
  uVar11 = 0xffffffff;
  bVar4 = true;
  uVar9 = 0;
  if ((char)*pbVar2 < '\0') {
    uVar6 = 0x80;
    do {
      uVar8 = (int)uVar9 + 1;
      uVar9 = (unsigned long)uVar8;
      uVar6 = uVar6 >> 1;
    } while ((uVar6 & *pbVar2) != 0);
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if (uVar8 != 0) {
      uVar12 = uVar6 - 1;
      if (uVar12 != 0) {
        uVar7 = 4;
        if (uVar8 < 4) {
          uVar7 = uVar8;
        }
        lVar10 = 1;
        do {
          *(uint *)(this + 8) = uVar5 << 6;
          if ((pbVar2[lVar10] & 0xc0) != 0x80) {
            // std code
                      ((logic_error *)local_30,
                       "Invalid UTF-8 sequence encountered while trying to encode UTF-32 character")
            ;
            local_30[0] = PTR_vtable_1009cc2a8 + 0x10;
            throw_exception<// std code
            goto LAB_1002fc91c;
          }
          uVar5 = uVar5 << 6 | pbVar2[lVar10] & 0x3f;
          *(uint *)(this + 8) = uVar5;
          lVar10 = lVar10 + 1;
        } while (uVar7 != (uint)lVar10);
        uVar9 = (unsigned long)uVar12;
        uVar11 = (unsigned long)(uVar6 - 2);
        bVar4 = uVar12 == 0;
        goto LAB_1002fc7f6;
      }
    }
    uVar9 = 0;
  }
LAB_1002fc7f6:
  uVar5 = uVar5 & (&extract_current()::masks)[uVar9];
  *(uint *)(this + 8) = uVar5;
  if (uVar5 < 0x110000) {
    if ((uVar5 & 0xfffff800) == 0xd800) {
      // std code
                ((logic_error *)local_30,
                 "Invalid UTF-8 sequence encountered while trying to encode UTF-32 character");
      local_30[0] = PTR_vtable_1009cc2a8 + 0x10;
      throw_exception<// std code
    }
    else {
      if ((bVar4) || ((uint)(&extract_current()::masks)[uVar11] < uVar5)) {
        return;
      }
      // std code
                ((logic_error *)local_30,
                 "Invalid UTF-8 sequence encountered while trying to encode UTF-32 character");
      local_30[0] = PTR_vtable_1009cc2a8 + 0x10;
      throw_exception<// std code
    }
  }
  else {
    // std code
              ((logic_error *)local_30,
               "Invalid UTF-8 sequence encountered while trying to encode UTF-32 character");
    local_30[0] = PTR_vtable_1009cc2a8 + 0x10;
    throw_exception<// std code
  }
LAB_1002fc91c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}
}
