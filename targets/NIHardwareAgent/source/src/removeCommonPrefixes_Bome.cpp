#include <ni/controller_editor/removeCommonPrefixes_Bome.hpp>
namespace bmidilib {

void removeCommonPrefixes(Bome::BString const&) {
int iVar1;
  
  iVar1 = Bome::BString::startsWith(param_1,"From ",0);
  if ((iVar1 == 0) && (iVar1 = Bome::BString::startsWith(param_1,"To ",0), iVar1 == 0)) {
    Bome::BString::BString((BString *)this,param_1);
  }
  else {
    Bome::BString::substr((int)this,(int)param_1);
  }
  return this;
}
}
