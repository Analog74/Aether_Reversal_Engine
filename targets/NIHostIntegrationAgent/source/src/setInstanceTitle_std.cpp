#include <ni/controller_editor/setInstanceTitle_std.hpp>
namespace NI::dawcontrol::hw::gui::PageInstanceSelectionMono128x32 {

void setInstanceTitle(std::string const&) {
Widget *pWVar1;
  string sVar2;
  Widget WVar3;
  Widget *this_00;
  Widget *pWVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  size_t sVar9;
  bool bVar10;
  
  this_00 = *(Widget **)(this + 0x248);
  sVar2 = *param_1;
  sVar8 = (unsigned long)((byte)sVar2 >> 1);
  if (((byte)sVar2 & 1) != 0) {
    sVar8 = *(size_t *)(param_1 + 8);
  }
  WVar3 = this_00[0x300];
  if (((byte)WVar3 & 1) == 0) {
    sVar9 = (size_t)((byte)WVar3 >> 1);
  }
  else {
    sVar9 = *(size_t *)(this_00 + 0x308);
  }
  if (sVar8 == sVar9) {
    if (((byte)WVar3 & 1) == 0) {
      pWVar4 = this_00 + 0x301;
    }
    else {
      pWVar4 = *(Widget **)(this_00 + 0x310);
    }
    if (((byte)sVar2 & 1) == 0) {
      if (sVar8 == 0) goto LAB_10005df93;
      lVar7 = 0;
      do {
        lVar5 = lVar7 + 1;
        pWVar1 = pWVar4 + lVar7;
        if (*(Widget *)(param_1 + lVar5) != *pWVar1) break;
        bVar10 = (unsigned long)((byte)sVar2 >> 1) - 1 != lVar7;
        lVar7 = lVar7 + 1;
      } while (bVar10);
      if (*(Widget *)(param_1 + lVar5) == *pWVar1) goto LAB_10005df93;
    }
    else if ((sVar8 == 0) || (iVar6 = _memcmp(*(void **)(param_1 + 0x10),pWVar4,sVar8), iVar6 == 0))
    goto LAB_10005df93;
  }
  // std code
  NWL::Widget::setInvalid(this_00,0);
LAB_10005df93:
  NWL::TextPanel<NI::NWL::Label>::autoResize((TextPanel<NI::NWL::Label> *)this_00);
  return;
}
}
