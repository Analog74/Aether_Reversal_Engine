#include <ni/controller_editor/getConstValue_std.hpp>
namespace NI::NWL::StyleParser2 {

void getConstValue(std::string const&, unsigned int) {
string *psVar1;
  StyleParser2 *pSVar2;
  uint in_ECX;
  string *in_RDX;
  unsigned int in_register_00000034;
  StyleParser2 *this;
  fmt local_48 [28];
  uint local_2c;
  
  this = (StyleParser2 *)CONCAT44(in_register_00000034,param_2);
  *(unsigned long long *)(param_1 + 0x50) = 0;
  *(unsigned long long *)(param_1 + 0x58) = 0;
  *(unsigned long long *)(param_1 + 0x40) = 0;
  *(unsigned long long *)(param_1 + 0x48) = 0;
  *(unsigned long long *)(param_1 + 0x30) = 0;
  *(unsigned long long *)(param_1 + 0x38) = 0;
  *(unsigned long long *)(param_1 + 0x20) = 0;
  *(unsigned long long *)(param_1 + 0x28) = 0;
  *(unsigned long long *)(param_1 + 0x10) = 0;
  *(unsigned long long *)(param_1 + 0x18) = 0;
  *(unsigned long long *)param_1 = 0;
  *(unsigned long long *)(param_1 + 8) = 0;
  local_2c = in_ECX;
  pSVar2 = (StyleParser2 *)
           // std code
           __tree<// std code
           ::find<// std code
                                *)(this + 0x20),in_RDX);
  if (pSVar2 == this + 0x28) {
    *(unsigned int *)param_1 = 0;
    *(unsigned int *)(param_1 + 0x50) = 3;
    *(unsigned int *)(param_1 + 0x60) = 0;
    fmt::sprintf<unsigned_int>
              (local_48,"PARSER ERROR at line %d: use of void constant ",&local_2c);
    psVar1 = in_RDX + 1;
    if (((byte)*in_RDX & 1) != 0) {
      psVar1 = *(string **)(in_RDX + 0x10);
    }
    // std code
    addErrorMessage(this,(string *)(this + 0x58),local_2c,(string *)local_48);
    // std code
  }
  else {
    if (*(int *)(pSVar2 + 0x90) != 0) {
      *(unsigned int *)(param_1 + 0x50) = 0;
      (*(code *)(&eggs::variants::detail::
                  visitor<eggs::variants::detail::copy_construct,void(void*,void_const*)>::
                  _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                  ::value)[*(uint *)(pSVar2 + 0x90)])(param_1,pSVar2 + 0x40);
      *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(pSVar2 + 0x90);
    }
    *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(pSVar2 + 0xa0);
  }
  return param_1;
}
}
