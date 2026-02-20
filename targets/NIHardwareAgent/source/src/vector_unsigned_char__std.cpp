#include <ni/controller_editor/vector_unsigned_char__std.hpp>
namespace NI::NHL2::HIDReport::HIDReport(std {

void vector<unsigned char, std::allocator<unsigned char> >) {
unsigned char *puVar1;
  unsigned long long uVar2;
  unsigned long uVar3;
  unsigned char *puVar4;
  unsigned long uVar5;
  unsigned long uVar6;
  
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  uVar2 = param_2[1];
  *(unsigned long long *)this = *param_2;
  *(unsigned long long *)(this + 8) = uVar2;
  *(unsigned long long *)(this + 0x10) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar1 = *(unsigned char **)this;
  if (puVar1 == *(unsigned char **)(this + 8)) {
    if (puVar1 < *(unsigned char **)(this + 0x10)) {
      *puVar1 = 0;
      *(unsigned char **)(this + 8) = puVar1 + 1;
    }
    else {
      uVar3 = (long)*(unsigned char **)(this + 0x10) - (long)puVar1;
      uVar5 = 1;
      if (uVar3 != 0) {
        uVar5 = uVar3 * 2;
      }
      uVar6 = 0x7fffffffffffffff;
      if (uVar3 < 0x3fffffffffffffff) {
        uVar6 = uVar5;
      }
      puVar4 = (unsigned char *)new(uVar6);
      *puVar4 = 0;
      *(unsigned char **)this = puVar4;
      *(unsigned char **)(this + 8) = puVar4 + 1;
      *(unsigned char **)(this + 0x10) = puVar4 + uVar6;
      if (puVar1 != (unsigned char *)0x0) {
        delete(puVar1);
        return;
      }
    }
  }
  return;
}
}
