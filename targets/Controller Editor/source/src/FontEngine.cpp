#include <ni/controller_editor/FontEngine.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

FontEngine::FontEngine() {
unsigned long long *puVar1;
  unsigned long long local_20;
  
  puVar1 = (unsigned long long *)new char[0x38];
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  local_20 = 0;
  _FT_Init_FreeType(&local_20);
  *puVar1 = local_20;
  puVar1[1] = _FT_Done_FreeType;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(unsigned int *)(puVar1 + 6) = 0x3f800000;
  *(unsigned long long **)this = puVar1;
  
}

void FontEngine::handle() const {
return *(unsigned long long *)this;
}

FontEngine::~FontEngine() {
~FontEngine(this);
  return;
}
}
