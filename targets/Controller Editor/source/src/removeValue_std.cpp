#include <ni/controller_editor/removeValue_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::DETAIL::Registry2KeyCF {

void removeValue(std::string const&) const {
long lVar1;
  char cVar2;
  
  lVar1 = *(long *)(this + 0x18);
  if (lVar1 != 0) {
    // std code if(1 param_1, 1 param_1, ((bytethis[0x20] & 0x10 == 0) {
      cVar2 = DEFAULTS::deleteKeyValue(this,param_1,0);
      if (cVar2 != '\0') {
        _CFPreferencesSynchronize
                  (*(unsigned long long *)(this + 0x18),
                   *(unsigned long long *)PTR__kCFPreferencesCurrentUser_101ab4678,
                   *(unsigned long long *)PTR__kCFPreferencesAnyHost_101ab4660);
      }
    }
    else {
      cVar2 = DEFAULTS::deleteKeyValue(this,param_1,1);
      if (cVar2 != '\0') {
        _CFPreferencesSynchronize
                  (*(unsigned long long *)(this + 0x18),*(unsigned long long *)PTR__kCFPreferencesAnyUser_101ab4668,
                   *(unsigned long long *)PTR__kCFPreferencesCurrentHost_101ab4670);
      }
    }
    // std code
  }
  return lVar1 != 0;
}
}
