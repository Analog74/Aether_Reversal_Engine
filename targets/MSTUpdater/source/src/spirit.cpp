#include <ni/controller_editor/spirit.hpp>
namespace NI::NWL::StyleGrammar::outputError(boost {

void spirit::info const&) {
uint uVar1;
  string *psVar2;
  unsigned long uVar3;
  int iVar4;
  string *psVar5;
  void *puVar6;
  
  unsigned long long *local_50 [3];
  unsigned long long local_38;
  unsigned long long uStack_30;
  unsigned long local_28;
  
  // std code
  iVar4 = // std code
  if ((iVar4 == 0) || (iVar4 = // std code
    local_50[0] = &local_38;
    uVar1 = *(uint *)(param_1 + 0x18);
    psVar5 = (string *)
             // boost code
             visitation_impl<mpl_::int_<0>,// boost code
                       (uVar1,(int)uVar1 >> 0x1f ^ uVar1,local_50,param_1 + 0x20,0,0);
    if (psVar5 != (string *)0x0) {
      // std code
    }
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  puVar6 = (void *)
           // std code
           __tree<// std code
           ::find<// std code
                                *)&(anonymous_namespace)::s_collDebugInfo,local_68);
  psVar5 = (string *)(puVar6 + 0x38);
  if (puVar6 == &0) {
    psVar5 = local_68;
  }
  psVar2 = psVar5 + 1;
  if (((byte)*psVar5 & 1) != 0) {
    psVar2 = *(string **)(psVar5 + 0x10);
  }
  // std code
  fmt::sprintf<unsigned_int>((fmt *)local_50,"PARSER ERROR at line %d: ",this + 0xfe8);
  uVar3 = (long)&local_38 + 1;
  if ((local_38 & 1) != 0) {
    uVar3 = local_28;
  }
  // std code
  StyleParser2::addErrorMessage
            (*(StyleParser2 **)(this + 0xfe0),*(uint *)(this + 0xfe8),(string *)local_50);
  // std code
  // std code
  // std code
  return;
}
}
