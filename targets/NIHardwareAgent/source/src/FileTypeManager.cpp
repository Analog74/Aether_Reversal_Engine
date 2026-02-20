#include <ni/controller_editor/FileTypeManager.hpp>
namespace NI::GP::FileTypeManager::unregister(NI::GP {

void FileTypeManager::RegistrationHandle&) {
unique_ptr<NI::GP::FileTypeDescr,// std code
  unsigned long uVar2;
  unique_ptr<NI::GP::FileTypeDescr,// std code
  unsigned long uVar3;
  
  if ((((-1 < *(int *)param_1) && (s_currentRegistrationPosType < 0)) && (0 < s_registrationCount))
     && (((*(int *)param_1 == s_registrationCount + -1 && (-1 < *(int *)(param_1 + 8))) &&
         (-1 < *(int *)(param_1 + 4))))) {
    // std code
    // std code
    vector<// std code
    ::resize((vector<// std code
              *)&s_registeredGroups,(long)*(int *)(param_1 + 8));
    uVar3 = (unsigned long)*(int *)(param_1 + 4);
    uVar2 = (long)0 - s_registeredTypes >> 3;
    if (uVar2 < uVar3) {
      // std code
      vector<// std code
      ::__append((vector<// std code
                  *)&s_registeredTypes,uVar3 - uVar2);
      puVar1 = 0;
    }
    else {
      puVar1 = 0;
      if (uVar3 < uVar2) {
        puVar1 = (unique_ptr<NI::GP::FileTypeDescr,// std code
                 (s_registeredTypes + uVar3 * 8);
        this = 0;
        while (this != puVar1) {
          this = this + -8;
          // std code
          ~unique_ptr(this);
        }
      }
    }
    0 = puVar1;
    s_registrationCount = s_registrationCount + -1;
    *(unsigned long long *)param_1 = 0xffffffffffffffff;
    *(unsigned int *)(param_1 + 8) = 0xffffffff;
    // std code
    return;
  }
  return;
}
}
