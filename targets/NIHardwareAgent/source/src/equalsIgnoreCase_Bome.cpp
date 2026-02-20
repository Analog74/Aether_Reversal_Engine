#include <ni/controller_editor/equalsIgnoreCase_Bome.hpp>
namespace Bome::BString {

void equalsIgnoreCase(Bome::BString const&) const {
long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  
  lVar1 = *(long *)this;
  lVar2 = *(long *)param_1;
  lVar5 = 0;
  do {
    cVar3 = *(char *)(lVar1 + 0x14 + lVar5);
    cVar4 = *(char *)(lVar2 + 0x14 + lVar5);
    if (cVar3 == '\0') {
      bVar6 = cVar4 != '\0';
LAB_1001fec83:
      return cVar3 == '\0' ^ bVar6;
    }
    if (cVar4 == '\0') {
      bVar6 = false;
      goto LAB_1001fec83;
    }
    cVar3 = btoupper(cVar3);
    cVar4 = btoupper(*(char *)(lVar2 + 0x14 + lVar5));
    if (cVar3 != cVar4) {
      btoupper(*(char *)(lVar1 + 0x14 + lVar5));
      btoupper(*(char *)(lVar2 + 0x14 + lVar5));
      return 0;
    }
    lVar5 = lVar5 + 1;
    if ((int)lVar5 == 0x7fffffff) {
      return 1;
    }
  } while( true );
}
}
