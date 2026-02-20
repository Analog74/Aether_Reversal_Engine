#include <ni/controller_editor/load_file_wchar_t_const___unsigned_int__pugi.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pugi::xml_document {

void load_file(2 param_2, 2 param_2, wchar_t const*, unsigned int, pugi::xml_encoding {
long lVar1;
  unsigned long *puVar2;
  FILE *pFVar3;
  long *plVar4;
  
  if (param_2[1] != 0 {
    (*(code *)impl::(anonymous_namespace)::xml_memory_management_function_storage<int>::deallocate)
              ();
    param_2[1] = 0;
  }
  puVar2 = (unsigned long *)*param_2;
  plVar4 = (long *)puVar2[0xb];
  if (plVar4 != (long *)0x0) {
    do {
      if (*plVar4 != 0) {
        (*(code *)impl::(anonymous_namespace)::xml_memory_management_function_storage<int>::
                  deallocate)();
      }
      plVar4 = (long *)plVar4[1];
    } while (plVar4 != (long *)0x0);
    puVar2 = (unsigned long *)*param_2;
  }
  lVar1 = *(long *)((long)puVar2 + (0x10 - (*puVar2 >> 8)));
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x10);
    (*(code *)impl::(anonymous_namespace)::xml_memory_management_function_storage<int>::deallocate)
              ();
  }
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x7fd8;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xe] = 0;
  param_2[7] = 0x2801;
  param_2[0xf] = (long)(param_2 + 2);
  param_2[0x10] = 0x7fd8;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *param_2 = (long)(param_2 + 7);
  param_2[0xc] = (long)(param_2 + 7);
  param_2[2] = (long)(param_2 + 0xf);
  pFVar3 = (FILE *)impl::(anonymous_namespace)::open_file_wide(param_3,L"rb");
  impl::(anonymous_namespace)::load_file_impl(param_1,*param_2,pFVar3,param_4,param_5,param_2 + 1);
  if (pFVar3 != (FILE *)0x0) {
    _fclose(pFVar3);
  }
  return param_1;
}
}
