#include <ni/controller_editor/onUpdateKeyzoneContent_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::KompleteKontrolKeyboardWidget {

void onUpdateKeyzoneContent(1 param_1, NI::SelectionContentUpdateScope {
byte bVar1;
  long lVar2;
  long lVar3;
  unsigned long long local_48;
  __tree_node *local_40 [2];
  
  if (*(long *)(param_1 + 0x500) != 0) {
    lVar2 = *(long *)(param_1 + 0x408);
    for (lVar3 = *(long *)(param_1 + 0x410); lVar3 != lVar2; lVar3 = lVar3 + -0x68) {
      if ((*(byte *)(lVar3 + -0x38) & 1) == 0) {
        if ((*(byte *)(lVar3 + -0x50) & 1) == 0) return;
        delete(*(void **)(lVar3 + -0x40));
        bVar1 = *(byte *)(lVar3 + -0x68);
      }
      else {
        delete(*(void **)(lVar3 + -0x28));
        if ((*(byte *)(lVar3 + -0x50) & 1) != 0) return;
        bVar1 = *(byte *)(lVar3 + -0x68);
      }
      if ((bVar1 & 1) != 0) {
        delete(*(void **)(lVar3 + -0x58));
      }
    }
    *(long *)(param_1 + 0x410) = lVar2;
    NHL2::Komplete::KontrolMK1::MapHandler::getKeyZones();
    // std code
    vector<NI::NHL2::Komplete::KontrolMK1::KeyZone,// std code
    ::
    insert<// std code
              ((vector<NI::NHL2::Komplete::KontrolMK1::KeyZone,// std code
                *)(param_1 + 0x408),*(unsigned long long *)(param_1 + 0x410),local_48,local_40);
    NWL::Widget::setAlign(param_1);
    // std code
    __tree<NI::NHL2::Komplete::KontrolMK1::KeyZone,// std code
    ::destroy((__tree<NI::NHL2::Komplete::KontrolMK1::KeyZone,// std code
               *)&local_48,local_40[0]);
  }
  return;
}
}
