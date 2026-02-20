#include <ni/controller_editor/JPGSourceManager_512ul_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void JPGSourceManager<512ul>::fillInputBuffer(jpeg_decompress_struct* param_1) {
}

void JPGSourceManager<512ul>::initSource(jpeg_decompress_struct* param_1) {
}

void JPGSourceManager<512ul>::jpg_term_source(jpeg_decompress_struct*) {
return;
}

void JPGSourceManager<512ul>::skipInputData(jpeg_decompress_struct*, long) {
long *plVar1;
  long lVar2;
  long lVar3;
  
  if (0 < param_2) {
    plVar1 = *(long **)(param_1 + 0x28);
    lVar2 = plVar1[1];
    lVar3 = lVar2;
    if (param_2 < lVar2) {
      lVar3 = param_2;
    }
    *plVar1 = *plVar1 + lVar3;
    plVar1[1] = lVar2 - lVar3;
    if ((param_2 - lVar3 != 0 && lVar3 <= param_2) &&
       (plVar1 = *(long **)(plVar1[7] + 8), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001005eb824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2 - lVar3,1);
      return;
    }
  }
  return;
}
}
