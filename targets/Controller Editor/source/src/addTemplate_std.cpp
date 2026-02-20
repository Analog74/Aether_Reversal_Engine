#include <ni/controller_editor/addTemplate_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::Model {

void addTemplate(std::string const&) [clone .cold.1] {
array<NI::NHL2::Assignment,3ul> *paVar1;
  unsigned long long *in_RDX;
  array<NI::NHL2::Assignment,3ul> *this;
  long *in_RSI;
  array<NI::NHL2::Assignment,3ul> *paVar2;
  string *psVar3;
  string *psVar4;
  
  psVar3 = (string *)*in_RSI;
  psVar4 = param_1;
  if (psVar3 != param_1) {
    do {
      psVar4 = psVar3 + -0x18;
      paVar1 = *(array<NI::NHL2::Assignment,3ul> **)(psVar3 + -0x18);
      if (paVar1 != (array<NI::NHL2::Assignment,3ul> *)0x0) {
        this = *(array<NI::NHL2::Assignment,3ul> **)(psVar3 + -0x10);
        paVar2 = paVar1;
        if (this != paVar1) {
          do {
            this = this + -0x1f8;
            // std code
          } while (paVar1 != this);
          paVar2 = *(array<NI::NHL2::Assignment,3ul> **)psVar4;
        }
        *(array<NI::NHL2::Assignment,3ul> **)(psVar3 + -0x10) = paVar1;
        delete(paVar2);
      }
      psVar3 = psVar4;
    } while (psVar4 != param_1);
    psVar4 = (string *)*in_RDX;
  }
  *in_RSI = (long)param_1;
  delete(psVar4);
  return;
}
}
