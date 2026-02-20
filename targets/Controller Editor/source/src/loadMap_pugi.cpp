#include <ni/controller_editor/loadMap_pugi.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void loadMap(pugi::xml_node) [clone .cold.1] {
array<NI::NHL2::Assignment,3ul> *paVar1;
  array<NI::NHL2::Assignment,3ul> *this;
  array<NI::NHL2::Assignment,3ul> *paVar2;
  unsigned long long *puVar3;
  unsigned long long *puVar4;
  
  puVar4 = (unsigned long long *)*param_2;
  puVar3 = param_1;
  if (puVar4 != param_1) {
    do {
      puVar3 = puVar4 + -3;
      paVar1 = (array<NI::NHL2::Assignment,3ul> *)puVar4[-3];
      if (paVar1 != (array<NI::NHL2::Assignment,3ul> *)0x0) {
        this = (array<NI::NHL2::Assignment,3ul> *)puVar4[-2];
        paVar2 = paVar1;
        if (this != paVar1) {
          do {
            this = this + -0x1f8;
            // std code
          } while (paVar1 != this);
          paVar2 = (array<NI::NHL2::Assignment,3ul> *)*puVar3;
        }
        puVar4[-2] = paVar1;
        delete(paVar2);
      }
      puVar4 = puVar3;
    } while (puVar3 != param_1);
    puVar3 = (unsigned long long *)*param_3;
  }
  *param_2 = (long)param_1;
  delete(puVar3);
  return;
}
}
