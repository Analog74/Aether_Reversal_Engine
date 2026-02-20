#include <ni/controller_editor/__wrap_iter_char____char32_t_.hpp>
namespace boost::u8_to_u32_iterator<std {

void __wrap_iter<char*>, char32_t>::TEMPNAMEPLACEHOLDERVALUE() {
byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  void *local_20 [2];
  
  pbVar3 = *(byte **)this;
  bVar1 = *pbVar3;
  if ((bVar1 & 0xc0) == 0x80) {
    // std code
              ((logic_error *)local_20,
               "Invalid UTF-8 sequence encountered while trying to encode UTF-32 character");
    local_20[0] = PTR_vtable_1009cc2a8 + 0x10;
    throw_exception<// std code
LAB_1002fbba2:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((char)bVar1 < '\0') {
    uVar4 = 0x80;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 >> 1;
    } while ((uVar4 & bVar1) != 0);
    uVar4 = 4;
    if (uVar5 < 4) {
      uVar4 = uVar5;
    }
    if (uVar5 != 0) goto LAB_1002fbb08;
  }
  uVar4 = 1;
LAB_1002fbb08:
  if (*(int *)(this + 8) == -1) {
    do {
      pbVar3 = pbVar3 + 1;
      *(byte **)this = pbVar3;
      if ((uVar4 != 1) && ((*pbVar3 & 0xc0) != 0x80)) {
        // std code
                  ((logic_error *)local_20,
                   "Invalid UTF-8 sequence encountered while trying to encode UTF-32 character");
        local_20[0] = PTR_vtable_1009cc2a8 + 0x10;
        throw_exception<// std code
        goto LAB_1002fbba2;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  else {
    *(byte **)this = pbVar3 + uVar4;
  }
  *(unsigned int *)(this + 8) = 0xffffffff;
  return this;
}
}
