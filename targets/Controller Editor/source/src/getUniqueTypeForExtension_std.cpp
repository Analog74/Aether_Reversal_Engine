#include <ni/controller_editor/getUniqueTypeForExtension_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::FileTypeManager {

void getUniqueTypeForExtension(1 param_1, 1 param_1, std::string const& {
bool bVar1;
  unsigned long long *puVar2;
  unsigned long long *puVar3;
  unsigned long long *puVar4;
  char cVar5;
  unsigned long long *puVar6;
  unsigned long long uVar7;
  unsigned long long *puVar8;
  
  // std code
  puVar3 = 0;
  puVar8 = s_stdTypes;
  puVar6 = s_registeredTypes;
  if (s_registeredTypes != 0 {
    do {
      if (((FileTypeDescr *)*puVar6 != (FileTypeDescr *)0x0) &&
         (cVar5 = GP::(anonymous_namespace)::matchFileExtensionCaseInsensitive
                            (param_1,(FileTypeDescr *)*puVar6), cVar5 != '\0')) {
        puVar8 = s_stdTypes;
        puVar2 = 0;
        puVar3 = puVar6;
        puVar4 = 0;
        if (puVar6 == 0) return;
        goto joined_r0x0001007286a0;
      }
      puVar6 = puVar6 + 1;
    } while (puVar3 != puVar6);
    puVar8 = s_stdTypes;
    puVar2 = 0;
    puVar4 = 0;
    puVar6 = puVar3;
    if (puVar3 != 0) {
joined_r0x0001007286a0:
      do {
        0 = puVar4;
        puVar4 = 0;
        puVar3 = puVar3 + 1;
        bVar1 = puVar3 == 0;
        puVar8 = puVar6;
        0 = puVar2;
        if (bVar1) return;
      } while (((FileTypeDescr *)*puVar3 == (FileTypeDescr *)0x0) ||
              (cVar5 = GP::(anonymous_namespace)::matchFileExtensionCaseInsensitive
                                 (param_1,(FileTypeDescr *)*puVar3), puVar2 = 0,
              cVar5 == '\0'));
      if (puVar4 != puVar3) {
        uVar7 = 0;
        return;
      }
    }
  }
  uVar7 = *puVar8;
  // std code
  return uVar7;
}
}
