#include <ni/controller_editor/UpdateWizardMainWidget.hpp>
namespace NI {

void UpdateWizardMainWidget::createAboutOverlay() {
long lVar1;
  Widget *pWVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  unsigned long uVar6;
  bind_t local_218 [8];
  long local_210;
  Bar *local_200;
  long local_1f8;
  Bar *local_1f0;
  long local_1e8;
  Bar *local_1e0;
  long local_1d8;
  Bar *local_1d0;
  long local_1c8;
  Bar *local_1c0;
  long local_1b8;
  code *local_1b0;
  unsigned long long local_1a8;
  long local_1a0;
  unsigned long long local_198;
  long local_190;
  unsigned long long local_188;
  long local_180;
  unsigned long long local_178;
  long local_170;
  unsigned long long local_168;
  long local_160;
  unsigned long long local_158;
  long local_150;
  unsigned long long local_148;
  long local_140;
  Bar *local_138;
  long local_130;
  Bar *local_128;
  long lStack_120;
  unsigned long long local_118;
  code *local_108;
  long lStack_100;
  UpdateWizardMainWidget *local_f8;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1002272e0;
  // std code
  lVar5 = lStack_100;
  pcVar4 = local_108;
  local_108 = (code *)0x0;
  lStack_100 = 0;
  lVar1 = *(long *)(this + 0x5f8);
  *(code **)(this + 0x5f0) = pcVar4;
  *(long *)(this + 0x5f8) = lVar5;
  if (lVar1 != 0) {
    // std code
    if (lStack_100 != 0) {
      // std code
    }
  }
  local_1a8 = *(unsigned long long *)(this + 0x5f0);
  local_1a0 = *(long *)(this + 0x5f8);
  if (local_1a0 != 0) {
    // std code
  }
  local_108 = (code *)0x0;
  lStack_100 = 0;
  local_f8 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Button>((Widget *)this,&local_1a8,&local_108);
  // std code
  if (local_1a0 != 0) {
    // std code
  }
  local_108 = (code *)0x0;
  lStack_100 = 0;
  local_f8 = (UpdateWizardMainWidget *)0x0;
  NWL::Button::style(*(Button **)(this + 0x5f0),(string *)&local_108,(char *)0x0);
  // std code
  NWL::Widget::setNoAlign(*(Widget **)(this + 0x5f0),true);
  NWL::Widget::setActive(*(Widget **)(this + 0x5f0),false);
  local_108 = hideAbout;
  lStack_100 = 0;
  local_f8 = this;
  nod::signal_type<nod::multithread_policy,void(NI::NWL::ButtonImpl::tSignalData_const*)>::
  connect<// boost code
            (local_218);
  if (local_210 != 0) {
    // std code
  }
  // std code
  lVar5 = lStack_100;
  pcVar4 = local_108;
  local_108 = (code *)0x0;
  lStack_100 = 0;
  lVar1 = *(long *)(this + 0x608);
  *(code **)(this + 0x600) = pcVar4;
  *(long *)(this + 0x608) = lVar5;
  if (lVar1 != 0) {
    // std code
    if (lStack_100 != 0) {
      // std code
    }
  }
  pWVar2 = *(Widget **)(this + 0x5f0);
  local_198 = *(unsigned long long *)(this + 0x600);
  local_190 = *(long *)(this + 0x608);
  if (local_190 != 0) {
    // std code
  }
  local_108 = (code *)0x0;
  lStack_100 = 0;
  local_f8 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Bar>(pWVar2,&local_198,&local_108);
  // std code
  if (local_190 != 0) {
    // std code
  }
  NWL::Bar::style(*(Bar **)(this + 0x600),0x10,"Panel");
  NWL::Widget::setEnabled(*(Widget **)(this + 0x600),false);
  // std code
  lVar5 = lStack_100;
  pcVar4 = local_108;
  local_108 = (code *)0x0;
  lStack_100 = 0;
  lVar1 = *(long *)(this + 0x628);
  *(code **)(this + 0x620) = pcVar4;
  *(long *)(this + 0x628) = lVar5;
  if (lVar1 != 0) {
    // std code
    if (lStack_100 != 0) {
      // std code
    }
  }
  pWVar2 = *(Widget **)(this + 0x600);
  local_188 = *(unsigned long long *)(this + 0x620);
  local_180 = *(long *)(this + 0x628);
  if (local_180 != 0) {
    // std code
  }
  local_108 = (code *)0x0;
  lStack_100 = 0;
  local_f8 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Label>(pWVar2,&local_188,&local_108);
  // std code
  if (local_180 != 0) {
    // std code
  }
  (**(code **)(**(long **)(this + 0x620) + 0xd0))(*(long **)(this + 0x620),this + 0x440,0);
  NWL::Widget::setEnabled(*(Widget **)(this + 0x620),false);
  if (((byte)this[0x440] & 1) == 0) {
    uVar6 = (unsigned long)((byte)this[0x440] >> 1);
  }
  else {
    uVar6 = *(unsigned long *)(this + 0x448);
  }
  if (0x24 < uVar6) {
    pWVar2 = *(Widget **)(this + 0x620);
    local_108 = (code *)0x0;
    lStack_100 = 0;
    local_f8 = (UpdateWizardMainWidget *)0x0;
    // std code
    local_128 = (Bar *)0x0;
    lStack_120 = 0;
    local_118 = 0;
    // std code
    NWL::Widget::setAttribute(pWVar2,(string *)&local_108,(string *)&local_128);
    // std code
    // std code
  }
  // std code
  lVar5 = lStack_100;
  pcVar4 = local_108;
  local_108 = (code *)0x0;
  lStack_100 = 0;
  lVar1 = *(long *)(this + 0x618);
  *(code **)(this + 0x610) = pcVar4;
  *(long *)(this + 0x618) = lVar5;
  if (lVar1 != 0) {
    // std code
    if (lStack_100 != 0) {
      // std code
    }
  }
  pWVar2 = *(Widget **)(this + 0x600);
  local_178 = *(unsigned long long *)(this + 0x610);
  local_170 = *(long *)(this + 0x618);
  if (local_170 != 0) {
    // std code
  }
  local_108 = (code *)0x0;
  lStack_100 = 0;
  local_f8 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Bar>(pWVar2,&local_178,&local_108);
  // std code
  if (local_170 != 0) {
    // std code
  }
  NWL::Bar::style(*(Bar **)(this + 0x610),1,"Panel");
  NWL::Widget::setEnabled(*(Widget **)(this + 0x610),false);
  // std code
  lVar5 = lStack_100;
  pcVar4 = local_108;
  local_108 = (code *)0x0;
  lStack_100 = 0;
  lVar1 = *(long *)(this + 0x638);
  *(code **)(this + 0x630) = pcVar4;
  *(long *)(this + 0x638) = lVar5;
  if (lVar1 != 0) {
    // std code
    if (lStack_100 != 0) {
      // std code
    }
  }
  pWVar2 = *(Widget **)(this + 0x610);
  local_168 = *(unsigned long long *)(this + 0x630);
  local_160 = *(long *)(this + 0x638);
  if (local_160 != 0) {
    // std code
  }
  local_108 = (code *)0x0;
  lStack_100 = 0;
  local_f8 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Label>(pWVar2,&local_168,&local_108);
  // std code
  if (local_160 != 0) {
    // std code
  }
  plVar3 = *(long **)(this + 0x630);
  local_1b0 = *(code **)(*plVar3 + 0xd0);
  // boost code
            ((basic_format<char,// std code
  ;
  GP::DETAIL::FormatApply<char>::apply<// std code
            ((FormatApply<char> *)&local_128,
             (basic_format<char,// std code
             this + 0x428,this + 0x470);
  // boost code
            ((basic_format<char,// std code
  (*local_1b0)(plVar3,&local_128,0);
  // std code
  NWL::Widget::setEnabled(*(Widget **)(this + 0x630),false);
  // std code
  lVar5 = lStack_100;
  pcVar4 = local_108;
  local_108 = (code *)0x0;
  lStack_100 = 0;
  lVar1 = *(long *)(this + 0x648);
  *(code **)(this + 0x640) = pcVar4;
  *(long *)(this + 0x648) = lVar5;
  if (lVar1 != 0) {
    // std code
    if (lStack_100 != 0) {
      // std code
    }
  }
  pWVar2 = *(Widget **)(this + 0x610);
  local_158 = *(unsigned long long *)(this + 0x640);
  local_150 = *(long *)(this + 0x648);
  if (local_150 != 0) {
    // std code
  }
  local_108 = (code *)0x0;
  lStack_100 = 0;
  local_f8 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Label>(pWVar2,&local_158,&local_108);
  // std code
  if (local_150 != 0) {
    // std code
  }
  (**(code **)(**(long **)(this + 0x640) + 0xd0))(*(long **)(this + 0x640),this + 0x458,0);
  NWL::Widget::setEnabled(*(Widget **)(this + 0x640),false);
  // std code
  lVar5 = lStack_100;
  pcVar4 = local_108;
  local_108 = (code *)0x0;
  lStack_100 = 0;
  lVar1 = *(long *)(this + 0x658);
  *(code **)(this + 0x650) = pcVar4;
  *(long *)(this + 0x658) = lVar5;
  if (lVar1 != 0) {
    // std code
    if (lStack_100 != 0) {
      // std code
    }
  }
  pWVar2 = *(Widget **)(this + 0x600);
  local_148 = *(unsigned long long *)(this + 0x650);
  local_140 = *(long *)(this + 0x658);
  if (local_140 != 0) {
    // std code
  }
  local_108 = (code *)0x0;
  lStack_100 = 0;
  local_f8 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Label>(pWVar2,&local_148,&local_108);
  // std code
  if (local_140 != 0) {
    // std code
  }
  local_108 = (code *)0x0;
  lStack_100 = 0;
  local_f8 = (UpdateWizardMainWidget *)0x0;
  (**(code **)(**(long **)(this + 0x650) + 0xd0))(*(long **)(this + 0x650),&local_108,0);
  // std code
  NWL::Widget::setEnabled(*(Widget **)(this + 0x650),false);
  // std code
  pWVar2 = *(Widget **)(this + 0x600);
  local_138 = local_128;
  local_130 = lStack_120;
  if (lStack_120 != 0) {
    // std code
  }
  local_108 = (code *)0x0;
  lStack_100 = 0;
  local_f8 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Bar>(pWVar2,&local_138,&local_108);
  // std code
  if (local_130 != 0) {
    // std code
  }
  NWL::Bar::style(local_128,0x10,"Panel");
  lVar1 = lStack_120;
  local_200 = local_128;
  local_1f8 = lStack_120;
  if (lStack_120 != 0) {
    // std code
  }
  addContributorLine();
  if (lVar1 != 0) {
    // std code
  }
  lVar1 = lStack_120;
  local_1f0 = local_128;
  local_1e8 = lStack_120;
  if (lStack_120 != 0) {
    // std code
  }
  addContributorLine();
  if (lVar1 != 0) {
    // std code
  }
  lVar1 = lStack_120;
  local_1e0 = local_128;
  local_1d8 = lStack_120;
  if (lStack_120 != 0) {
    // std code
  }
  addContributorLine();
  if (lVar1 != 0) {
    // std code
  }
  lVar1 = lStack_120;
  local_1d0 = local_128;
  local_1c8 = lStack_120;
  if (lStack_120 != 0) {
    // std code
  }
  addContributorLine();
  if (lVar1 != 0) {
    // std code
  }
  lVar1 = lStack_120;
  local_1c0 = local_128;
  local_1b8 = lStack_120;
  if (lStack_120 != 0) {
    // std code
  }
  addContributorLine();
  if (lVar1 != 0) {
    // std code
  }
  if (lStack_120 != 0) {
    // std code
  }
  if (*(long *)PTR____stack_chk_guard_1002272e0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

void UpdateWizardMainWidget::createBody() {
long lVar1;
  unsigned long long uVar2;
  long lVar3;
  unsigned long long local_38;
  long local_30;
  unsigned long long local_28;
  long lStack_20;
  unsigned long long local_18;
  
  // std code
  lVar3 = lStack_20;
  uVar2 = local_28;
  local_28 = 0;
  lStack_20 = 0;
  lVar1 = *(long *)(this + 0x528);
  *(unsigned long long *)(this + 0x520) = uVar2;
  *(long *)(this + 0x528) = lVar3;
  if (lVar1 != 0) {
    // std code
    if (lStack_20 != 0) {
      // std code
    }
  }
  local_38 = *(unsigned long long *)(this + 0x520);
  local_30 = *(long *)(this + 0x528);
  if (local_30 != 0) {
    // std code
  }
  local_28 = 0;
  lStack_20 = 0;
  local_18 = 0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Bar>((Widget *)this,&local_38,&local_28);
  // std code
  if (local_30 != 0) {
    // std code
  }
  NWL::Bar::style(*(Bar **)(this + 0x520),0x10,"FirmwareUpdaterBodyPanel");
  createFirmwarePanel(this);
  createInfoPanel(this);
  createButtonPanel(this);
  return;
}

void UpdateWizardMainWidget::createButtonPanel() {
long lVar1;
  Widget *pWVar2;
  Button *pBVar3;
  code *pcVar4;
  long lVar5;
  bind_t local_98 [8];
  long local_90;
  bind_t local_80 [8];
  long local_78;
  unsigned long long local_68;
  long local_60;
  unsigned long long local_58;
  long local_50;
  unsigned long long local_48;
  long local_40;
  code *local_38;
  long lStack_30;
  UpdateWizardMainWidget *local_28;
  
  // std code
  lVar5 = lStack_30;
  pcVar4 = local_38;
  local_38 = (code *)0x0;
  lStack_30 = 0;
  lVar1 = *(long *)(this + 0x5c8);
  *(code **)(this + 0x5c0) = pcVar4;
  *(long *)(this + 0x5c8) = lVar5;
  if (lVar1 != 0) {
    // std code
    if (lStack_30 != 0) {
      // std code
    }
  }
  pWVar2 = *(Widget **)(this + 0x520);
  local_68 = *(unsigned long long *)(this + 0x5c0);
  local_60 = *(long *)(this + 0x5c8);
  if (local_60 != 0) {
    // std code
  }
  local_38 = (code *)0x0;
  lStack_30 = 0;
  local_28 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Bar>(pWVar2,&local_68,&local_38);
  // std code
  if (local_60 != 0) {
    // std code
  }
  NWL::Bar::style(*(Bar **)(this + 0x5c0),0x1000,"Panel");
  // std code
  lVar5 = lStack_30;
  pcVar4 = local_38;
  local_38 = (code *)0x0;
  lStack_30 = 0;
  lVar1 = *(long *)(this + 0x5d8);
  *(code **)(this + 0x5d0) = pcVar4;
  *(long *)(this + 0x5d8) = lVar5;
  if (lVar1 != 0) {
    // std code
    if (lStack_30 != 0) {
      // std code
    }
  }
  pWVar2 = *(Widget **)(this + 0x5c0);
  local_58 = *(unsigned long long *)(this + 0x5d0);
  local_50 = *(long *)(this + 0x5d8);
  if (local_50 != 0) {
    // std code
  }
  local_38 = (code *)0x0;
  lStack_30 = 0;
  local_28 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Button>(pWVar2,&local_58,&local_38);
  // std code
  if (local_50 != 0) {
    // std code
  }
  pBVar3 = *(Button **)(this + 0x5d0);
  local_38 = (code *)0x0;
  lStack_30 = 0;
  local_28 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Button::style(pBVar3,(string *)&local_38,(char *)0x0);
  // std code
  local_38 = onAction;
  lStack_30 = 0;
  local_28 = this;
  nod::signal_type<nod::multithread_policy,void(NI::NWL::ButtonImpl::tSignalData_const*)>::
  connect<// boost code
            (local_98);
  if (local_90 != 0) {
    // std code
  }
  // std code
  lVar5 = lStack_30;
  pcVar4 = local_38;
  local_38 = (code *)0x0;
  lStack_30 = 0;
  lVar1 = *(long *)(this + 0x5e8);
  *(code **)(this + 0x5e0) = pcVar4;
  *(long *)(this + 0x5e8) = lVar5;
  if (lVar1 != 0) {
    // std code
    if (lStack_30 != 0) {
      // std code
    }
  }
  pWVar2 = *(Widget **)(this + 0x5c0);
  local_48 = *(unsigned long long *)(this + 0x5e0);
  local_40 = *(long *)(this + 0x5e8);
  if (local_40 != 0) {
    // std code
  }
  local_38 = (code *)0x0;
  lStack_30 = 0;
  local_28 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Button>(pWVar2,&local_48,&local_38);
  // std code
  if (local_40 != 0) {
    // std code
  }
  pBVar3 = *(Button **)(this + 0x5e0);
  local_38 = (code *)0x0;
  lStack_30 = 0;
  local_28 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Button::style(pBVar3,(string *)&local_38,(char *)0x0);
  // std code
  local_38 = onQuit;
  lStack_30 = 0;
  local_28 = this;
  nod::signal_type<nod::multithread_policy,void(NI::NWL::ButtonImpl::tSignalData_const*)>::
  connect<// boost code
            (local_80);
  if (local_78 != 0) {
    // std code
  }
  return;
}

void UpdateWizardMainWidget::createFirmwarePanel() {
long lVar1;
  Widget *pWVar2;
  Bar *pBVar3;
  unsigned long long uVar4;
  long lVar5;
  GUI local_138 [8];
  long local_130;
  GUI local_128 [8];
  long local_120;
  GUI local_118 [8];
  long local_110;
  unsigned long long local_108;
  long local_100;
  Bar *local_f8;
  long local_f0;
  Bar *local_e8;
  long local_e0;
  unsigned long long local_d8;
  long local_d0;
  unsigned long long local_c8;
  long local_c0;
  Bar *local_b8;
  long local_b0;
  Bar *local_a8;
  long local_a0;
  unsigned long long local_98;
  unsigned long long uStack_90;
  unsigned long long local_88;
  unsigned long long local_78;
  unsigned long long uStack_70;
  unsigned long long local_68;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned long long local_38;
  long lStack_30;
  unsigned long long local_28;
  
  // std code
  lVar5 = lStack_30;
  uVar4 = local_38;
  local_38 = 0;
  lStack_30 = 0;
  lVar1 = *(long *)(this + 0x538);
  *(unsigned long long *)(this + 0x530) = uVar4;
  *(long *)(this + 0x538) = lVar5;
  if (lVar1 != 0) {
    // std code
    if (lStack_30 != 0) {
      // std code
    }
  }
  pWVar2 = *(Widget **)(this + 0x520);
  local_108 = *(unsigned long long *)(this + 0x530);
  local_100 = *(long *)(this + 0x538);
  if (local_100 != 0) {
    // std code
  }
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Bar>(pWVar2,&local_108,&local_38);
  // std code
  if (local_100 != 0) {
    // std code
  }
  NWL::Bar::style(*(Bar **)(this + 0x530),0x10,"FirmwareUpdaterFirmwarePanel");
  // std code
  pWVar2 = *(Widget **)(this + 0x530);
  local_f8 = local_b8;
  local_f0 = local_b0;
  if (local_b0 != 0) {
    // std code
  }
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Bar>(pWVar2,&local_f8,&local_38);
  // std code
  if (local_f0 != 0) {
    // std code
  }
  NWL::Bar::style(local_b8,1,"FirmwareUpdaterFirmwarePanelBody");
  // std code
  pBVar3 = local_b8;
  local_e8 = local_a8;
  local_e0 = local_a0;
  if (local_a0 != 0) {
    // std code
  }
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Bar>((Widget *)pBVar3,&local_e8,&local_38);
  // std code
  if (local_e0 != 0) {
    // std code
  }
  NWL::Bar::style(local_a8,0x10,"FirmwareUpdaterFirmwarePanelRevisions");
  pBVar3 = local_a8;
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  // std code
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  // std code
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  // std code
  GUI::createControlWithLabel<NI::NWL::Label>
            (local_138,this + 0x560,(string *)&local_38,(string *)&local_98,(string *)&local_78);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Bar>((Widget *)pBVar3,local_138,&local_58);
  // std code
  if (local_130 != 0) {
    // std code
  }
  // std code
  // std code
  // std code
  pBVar3 = local_a8;
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  // std code
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  // std code
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  // std code
  GUI::createControlWithLabel<NI::NWL::Label>
            (local_128,this + 0x570,(string *)&local_38,(string *)&local_98,(string *)&local_78);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Bar>((Widget *)pBVar3,local_128,&local_58);
  // std code
  if (local_120 != 0) {
    // std code
  }
  // std code
  // std code
  // std code
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  // std code
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  // std code
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  // std code
  GUI::createControlWithLabel<NI::NWL::Label>
            (local_118,this + 0x580,(string *)&local_38,(string *)&local_98,(string *)&local_78);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Bar>((Widget *)local_a8,local_118,&local_58);
  // std code
  if (local_110 != 0) {
    // std code
  }
  // std code
  // std code
  // std code
  // std code
  lVar5 = lStack_30;
  uVar4 = local_38;
  local_38 = 0;
  lStack_30 = 0;
  lVar1 = *(long *)(this + 0x548);
  *(unsigned long long *)(this + 0x540) = uVar4;
  *(long *)(this + 0x548) = lVar5;
  if (lVar1 != 0) {
    // std code
    if (lStack_30 != 0) {
      // std code
    }
  }
  local_d8 = *(unsigned long long *)(this + 0x540);
  local_d0 = *(long *)(this + 0x548);
  if (local_d0 != 0) {
    // std code
  }
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Bar>((Widget *)local_b8,&local_d8,&local_38);
  // std code
  if (local_d0 != 0) {
    // std code
  }
  NWL::Bar::style(*(Bar **)(this + 0x540),0x10,"FirmwareUpdaterFirmwarePanelDeviceImage");
  pWVar2 = *(Widget **)(this + 0x540);
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::Widget::setAttribute(pWVar2,(string *)&local_38,(string *)(this + 0x3f8));
  // std code
  // std code
  lVar5 = lStack_30;
  uVar4 = local_38;
  local_38 = 0;
  lStack_30 = 0;
  lVar1 = *(long *)(this + 0x558);
  *(unsigned long long *)(this + 0x550) = uVar4;
  *(long *)(this + 0x558) = lVar5;
  if (lVar1 != 0) {
    // std code
    if (lStack_30 != 0) {
      // std code
    }
  }
  pWVar2 = *(Widget **)(this + 0x540);
  local_c8 = *(unsigned long long *)(this + 0x550);
  local_c0 = *(long *)(this + 0x558);
  if (local_c0 != 0) {
    // std code
  }
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Label>(pWVar2,&local_c8,&local_38);
  // std code
  if (local_c0 != 0) {
    // std code
  }
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  (**(code **)(**(long **)(this + 0x550) + 0xd0))(*(long **)(this + 0x550),&local_38,0);
  // std code
  if (local_a0 != 0) {
    // std code
  }
  if (local_b0 != 0) {
    // std code
  }
  return;
}

void UpdateWizardMainWidget::createInfoPanel() {
long lVar1;
  Widget *pWVar2;
  unsigned long long uVar3;
  long lVar4;
  unsigned long long local_98;
  long local_90;
  unsigned long long local_88;
  long local_80;
  unsigned long long local_78;
  long local_70;
  Widget *local_68;
  long local_60;
  unsigned long long local_58;
  long local_50;
  Bar *local_48;
  long local_40;
  unsigned long long local_38;
  long lStack_30;
  unsigned long long local_28;
  
  // std code
  lVar4 = lStack_30;
  uVar3 = local_38;
  local_38 = 0;
  lStack_30 = 0;
  lVar1 = *(long *)(this + 0x598);
  *(unsigned long long *)(this + 0x590) = uVar3;
  *(long *)(this + 0x598) = lVar4;
  if (lVar1 != 0) {
    // std code
    if (lStack_30 != 0) {
      // std code
    }
  }
  pWVar2 = *(Widget **)(this + 0x520);
  local_98 = *(unsigned long long *)(this + 0x590);
  local_90 = *(long *)(this + 0x598);
  if (local_90 != 0) {
    // std code
  }
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Bar>(pWVar2,&local_98,&local_38);
  // std code
  if (local_90 != 0) {
    // std code
  }
  NWL::Bar::style(*(Bar **)(this + 0x590),1,"Panel");
  // std code
  lVar4 = lStack_30;
  uVar3 = local_38;
  local_38 = 0;
  lStack_30 = 0;
  lVar1 = *(long *)(this + 0x5a8);
  *(unsigned long long *)(this + 0x5a0) = uVar3;
  *(long *)(this + 0x5a8) = lVar4;
  if (lVar1 != 0) {
    // std code
    if (lStack_30 != 0) {
      // std code
    }
  }
  pWVar2 = *(Widget **)(this + 0x590);
  local_88 = *(unsigned long long *)(this + 0x5a0);
  local_80 = *(long *)(this + 0x5a8);
  if (local_80 != 0) {
    // std code
  }
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Label>(pWVar2,&local_88,&local_38);
  // std code
  if (local_80 != 0) {
    // std code
  }
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  (**(code **)(**(long **)(this + 0x5a0) + 0xd0))(*(long **)(this + 0x5a0),&local_38,0);
  // std code
  NWL::Widget::setActive(*(Widget **)(this + 0x5a0),true);
  // std code
            ((shared_ptr<NI::SpinningProgressWheel> *)&local_38);
  lVar4 = lStack_30;
  uVar3 = local_38;
  local_38 = 0;
  lStack_30 = 0;
  lVar1 = *(long *)(this + 0x668);
  *(unsigned long long *)(this + 0x660) = uVar3;
  *(long *)(this + 0x668) = lVar4;
  if (lVar1 != 0) {
    // std code
    if (lStack_30 != 0) {
      // std code
    }
  }
  pWVar2 = *(Widget **)(this + 0x590);
  local_78 = *(unsigned long long *)(this + 0x660);
  local_70 = *(long *)(this + 0x668);
  if (local_70 != 0) {
    // std code
  }
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::Widget::insertChild<NI::SpinningProgressWheel>(pWVar2,&local_78,&local_38);
  // std code
  if (local_70 != 0) {
    // std code
  }
  NWL::Widget::setActive(*(Widget **)(this + 0x660),false);
  NWL::Bar::style(*(Bar **)(this + 0x660),1,"Panel");
  // std code
  NWL::Bar::setBreadthMax(local_48);
  NWL::Widget::setActive((Widget *)local_48,true);
  pWVar2 = *(Widget **)(this + 0x590);
  local_68 = (Widget *)local_48;
  local_60 = local_40;
  if (local_40 != 0) {
    // std code
  }
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Bar>(pWVar2,&local_68,&local_38);
  // std code
  if (local_60 != 0) {
    // std code
  }
  // std code
            ((shared_ptr<NI::NWL::MultilineLabel> *)&local_38);
  lVar4 = lStack_30;
  uVar3 = local_38;
  local_38 = 0;
  lStack_30 = 0;
  lVar1 = *(long *)(this + 0x5b8);
  *(unsigned long long *)(this + 0x5b0) = uVar3;
  *(long *)(this + 0x5b8) = lVar4;
  if (lVar1 != 0) {
    // std code
    if (lStack_30 != 0) {
      // std code
    }
  }
  local_58 = *(unsigned long long *)(this + 0x5b0);
  local_50 = *(long *)(this + 0x5b8);
  if (local_50 != 0) {
    // std code
  }
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::Widget::insertChild<NI::NWL::MultilineLabel>((Widget *)local_48,&local_58,&local_38);
  // std code
  if (local_50 != 0) {
    // std code
  }
  NWL::MultilineLabel::setAutoResize(*(MultilineLabel **)(this + 0x5b0),true);
  if (local_40 != 0) {
    // std code
  }
  return;
}

void UpdateWizardMainWidget::createTitle() {
long lVar1;
  Widget *pWVar2;
  Button *this_00;
  code *pcVar3;
  long lVar4;
  bind_t local_90 [8];
  long local_88;
  unsigned long long local_78;
  long local_70;
  Widget *local_68;
  long local_60;
  unsigned long long local_58;
  long local_50;
  Widget *local_48;
  long local_40;
  code *local_38;
  long lStack_30;
  UpdateWizardMainWidget *local_28;
  
  // std code
  lVar4 = lStack_30;
  pcVar3 = local_38;
  local_38 = (code *)0x0;
  lStack_30 = 0;
  lVar1 = *(long *)(this + 0x508);
  *(code **)(this + 0x500) = pcVar3;
  *(long *)(this + 0x508) = lVar4;
  if (lVar1 != 0) {
    // std code
    if (lStack_30 != 0) {
      // std code
    }
  }
  local_78 = *(unsigned long long *)(this + 0x500);
  local_70 = *(long *)(this + 0x508);
  if (local_70 != 0) {
    // std code
  }
  local_38 = (code *)0x0;
  lStack_30 = 0;
  local_28 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Bar>((Widget *)this,&local_78,&local_38);
  // std code
  if (local_70 != 0) {
    // std code
  }
  NWL::Bar::style(*(Bar **)(this + 0x500),0x1000,"FirmwareUpdaterTitlePanel");
  // std code
  pWVar2 = *(Widget **)(this + 0x500);
  local_68 = local_48;
  local_60 = local_40;
  if (local_40 != 0) {
    // std code
  }
  local_38 = (code *)0x0;
  lStack_30 = 0;
  local_28 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Label>(pWVar2,&local_68,&local_38);
  // std code
  if (local_60 != 0) {
    // std code
  }
  (**(code **)(*(long *)local_48 + 0xd0))(local_48,this + 0x440,0);
  // std code
  lVar4 = lStack_30;
  pcVar3 = local_38;
  local_38 = (code *)0x0;
  lStack_30 = 0;
  lVar1 = *(long *)(this + 0x518);
  *(code **)(this + 0x510) = pcVar3;
  *(long *)(this + 0x518) = lVar4;
  if (lVar1 != 0) {
    // std code
    if (lStack_30 != 0) {
      // std code
    }
  }
  local_58 = *(unsigned long long *)(this + 0x510);
  local_50 = *(long *)(this + 0x518);
  if (local_50 != 0) {
    // std code
  }
  local_38 = (code *)0x0;
  lStack_30 = 0;
  local_28 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Widget::insertChild<NI::NWL::Button>(local_48,&local_58,&local_38);
  // std code
  if (local_50 != 0) {
    // std code
  }
  this_00 = *(Button **)(this + 0x510);
  local_38 = (code *)0x0;
  lStack_30 = 0;
  local_28 = (UpdateWizardMainWidget *)0x0;
  // std code
  NWL::Button::style(this_00,(string *)&local_38,"FirmwareUpdaterTitlePanelAbout");
  // std code
  local_38 = showAbout;
  lStack_30 = 0;
  local_28 = this;
  nod::signal_type<nod::multithread_policy,void(NI::NWL::ButtonImpl::tSignalData_const*)>::
  connect<// boost code
            (local_90);
  if (local_88 != 0) {
    // std code
  }
  if (local_40 != 0) {
    // std code
  }
  return;
}

void UpdateWizardMainWidget::hideAbout() {
NWL::Widget::setActive(*(Widget **)(this + 0x5f0),false);
  return;
}

void UpdateWizardMainWidget::onAction() {
char cVar1;
  _Unwind_Exception *exception_object;
  unsigned int uVar2;
  void **local_c8 [2];
  unsigned long long local_b8;
  unsigned long long uStack_b0;
  unsigned long long local_a8;
  unsigned long long local_98;
  unsigned long long uStack_90;
  unsigned long long local_88;
  void **local_80;
  unsigned long long local_78;
  unsigned long long local_70;
  unsigned long long local_68;
  unsigned long long local_60;
  unsigned long long local_58;
  unsigned long long local_50;
  unsigned long long local_48;
  unsigned long long local_40;
  unsigned long long local_38;
  char local_29 [41];
  
  do {
    switch(*(unsigned int *)(this + 0x710)) {
    case 0:
      goto switchD_100019a43_caseD_0;
    default:
      goto switchD_100019a43_caseD_1;
    case 2:
      if (*(unsigned long *)(this + 0x690) == 0) goto LAB_100019d53;
      cVar1 = (**(code **)((*(unsigned long *)(this + 0x690) & 0xfffffffffffffffe) + 8))(this + 0x698);
      if (cVar1 == '\0') {
        showPageNoUpdateMode(this);
        *(unsigned int *)(this + 0x710) = 4;
        return;
      }
      break;
    case 3:
      *(unsigned int *)(this + 0x714) = 0;
      if (*(unsigned long *)(this + 0x6d0) != 0) {
        cVar1 = (**(code **)((*(unsigned long *)(this + 0x6d0) & 0xfffffffffffffffe) + 8))
                          (this + 0x6d8,this + 0x714);
        if (cVar1 == '\0') {
          showPageUpdateFailed(this);
          *(unsigned int *)(this + 0x710) = 6;
          return;
        }
        NWL::Widget::setTimer((Widget *)this,1);
        return;
      }
      goto LAB_100019d2d;
    case 4:
      if (*(unsigned long *)(this + 0x6b0) == 0) goto LAB_100019d79;
      cVar1 = (**(code **)((*(unsigned long *)(this + 0x6b0) & 0xfffffffffffffffe) + 8))(this + 0x6b8);
      if (cVar1 == '\0') {
        if (*(unsigned long *)(this + 0x670) == 0) goto LAB_100019dcc;
        cVar1 = (**(code **)((*(unsigned long *)(this + 0x670) & 0xfffffffffffffffe) + 8))(this + 0x678);
        if (cVar1 == '\0') {
          return;
        }
        if (*(unsigned long *)(this + 0x690) == 0) goto LAB_100019df2;
        cVar1 = (**(code **)((*(unsigned long *)(this + 0x690) & 0xfffffffffffffffe) + 8))(this + 0x698);
        if (cVar1 == '\0') {
          return;
        }
      }
    }
    showPageUpdating(this);
    *(unsigned int *)(this + 0x710) = 3;
  } while( true );
switchD_100019a43_caseD_0:
  if (*(unsigned long *)(this + 0x670) == 0) {
    // std code
    local_80 = &PTR__bad_function_call_1002343e8;
    // boost code
LAB_100019d2d:
    // std code
    local_80 = &PTR__bad_function_call_1002343e8;
    // boost code
LAB_100019d53:
    // std code
    local_80 = &PTR__bad_function_call_1002343e8;
    // boost code
LAB_100019d79:
    // std code
    local_80 = &PTR__bad_function_call_1002343e8;
    // boost code
LAB_100019d9f:
    // std code
    local_c8[0] = &PTR__bad_function_call_1002343e8;
    // boost code
LAB_100019dcc:
    // std code
    local_80 = &PTR__bad_function_call_1002343e8;
    // boost code
LAB_100019df2:
    // std code
    local_80 = &PTR__bad_function_call_1002343e8;
    // boost code
    // std code
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(exception_object);
  }
  cVar1 = (**(code **)((*(unsigned long *)(this + 0x670) & 0xfffffffffffffffe) + 8))(this + 0x678);
  if (cVar1 != '\0') {
    local_80 = (void **)((unsigned long)local_80 & 0xffff000000000000);
    local_38 = 0;
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_29[0] = '\0';
    if (*(unsigned long *)(this + 0x6f0) == 0) goto LAB_100019d9f;
    (**(code **)((*(unsigned long *)(this + 0x6f0) & 0xfffffffffffffffe) + 8))
              (this + 0x6f8,&local_80,&local_b8,&local_98,local_29);
    NWL::TextPanel<NI::NWL::Label>::setText
              (*(TextPanel<NI::NWL::Label> **)(this + 0x580),(string *)&local_48);
    NWL::TextPanel<NI::NWL::Label>::setText
              (*(TextPanel<NI::NWL::Label> **)(this + 0x570),(string *)&local_b8);
    NWL::TextPanel<NI::NWL::Label>::setText
              (*(TextPanel<NI::NWL::Label> **)(this + 0x560),(string *)&local_98);
    if (local_29[0] == '\0') {
      uVar2 = 1;
      showPageNoUpdateAvailable(this);
    }
    else {
      uVar2 = 2;
      showPageUpdateAvailable(this);
    }
    *(unsigned int *)(this + 0x710) = uVar2;
    // std code
    // std code
    // std code
    // std code
    // std code
  }
switchD_100019a43_caseD_1:
  return;
}

void UpdateWizardMainWidget::onQuit() {
long *plVar1;
  
  if (*(int *)(this + 0x710) == 3) {
    return;
  }
  plVar1 = (long *)UIA::Application::getApplication();
                    /* WARNING: Could not recover jumptable at 0x000100019eba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1);
  return;
}

void UpdateWizardMainWidget::resetFirmwareRevisionsAndSerialNumber() {
TextPanel<NI::NWL::Label> *pTVar1;
  _Unwind_Exception *exception_object;
  unsigned long long local_d8;
  unsigned long long uStack_d0;
  unsigned long long local_c8;
  unsigned int local_b8;
  void2 local_b4;
  unsigned long long local_b0;
  unsigned long long local_a8;
  unsigned long long local_a0;
  unsigned long long local_98;
  unsigned long long local_90;
  unsigned long long local_88;
  unsigned long long local_80;
  unsigned long long local_78;
  unsigned long long local_70;
  unsigned long long local_68;
  unsigned long long uStack_60;
  unsigned long long local_58;
  void **local_48;
  unsigned long long uStack_40;
  unsigned long long local_38;
  unsigned char local_21;
  
  local_b8 = 0;
  local_b4 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_21 = 0;
  if (*(unsigned long *)(this + 0x6f0) != 0) {
    (**(code **)((*(unsigned long *)(this + 0x6f0) & 0xfffffffffffffffe) + 8))
              (this + 0x6f8,&local_b8,&local_d8,&local_68,&local_21);
    pTVar1 = *(TextPanel<NI::NWL::Label> **)(this + 0x570);
    local_48 = (void **)0x0;
    uStack_40 = 0;
    local_38 = 0;
    // std code
    NWL::TextPanel<NI::NWL::Label>::setText(pTVar1,(string *)&local_48);
    // std code
    pTVar1 = *(TextPanel<NI::NWL::Label> **)(this + 0x580);
    local_48 = (void **)0x0;
    uStack_40 = 0;
    local_38 = 0;
    // std code
    NWL::TextPanel<NI::NWL::Label>::setText(pTVar1,(string *)&local_48);
    // std code
    NWL::TextPanel<NI::NWL::Label>::setText
              (*(TextPanel<NI::NWL::Label> **)(this + 0x560),(string *)&local_68);
    // std code
    // std code
    // std code
    // std code
    // std code
    return;
  }
  // std code
  local_48 = &PTR__bad_function_call_1002343e8;
  // boost code
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(exception_object);
}

void UpdateWizardMainWidget::showAbout() {
int iVar1;
  int iVar2;
  Widget *this_00;
  int iVar3;
  int iVar4;
  unsigned long long local_b8;
  unsigned long long uStack_b0;
  unsigned long long local_a8;
  unsigned long long local_98;
  unsigned long long uStack_90;
  unsigned long long local_88;
  unsigned long long local_80;
  unsigned long long local_78;
  unsigned int local_70;
  void2 local_6c;
  unsigned long long local_68;
  unsigned long long local_60;
  unsigned long long local_58;
  unsigned long long local_50;
  unsigned long long local_48;
  unsigned long long local_40;
  unsigned long long local_38;
  unsigned long long local_30;
  unsigned long long local_28;
  
  local_70 = 0;
  local_6c = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  NWL::Widget::setPos(*(Widget **)(this + 0x5f0),this + 0x140);
  NWL::Widget::setSize(*(Widget **)(this + 0x5f0),this + 0x178);
  this_00 = *(Widget **)(this + 0x5f0);
  iVar1 = *(int *)(this_00 + 0x178) + -0x1c2;
  iVar2 = *(int *)(this_00 + 0x17c) + -0x112;
  iVar3 = (*(int *)(this_00 + 0x178) + -0x1c2) - (iVar1 >> 0x1f) >> 1;
  iVar4 = (*(int *)(this_00 + 0x17c) + -0x112) - (iVar2 >> 0x1f) >> 1;
  local_78 = CONCAT44(iVar2 - iVar4,iVar1 - iVar3);
  local_80 = CONCAT44(iVar4,iVar3);
  NWL::Widget::setMargin(this_00,(Margin *)&local_80);
  NWL::Widget::arrangeChilds(*(Widget **)(this + 0x5f0),1,0);
  NWL::Widget::setActive(*(Widget **)(this + 0x5f0),true);
  // std code
  // std code
  // std code
  // std code
  // std code
  return;
}

void UpdateWizardMainWidget::showPageNoDeviceConnected() {
long lVar1;
  unsigned long long local_48;
  long local_40;
  unsigned long long local_38;
  unsigned long long uStack_30;
  unsigned long long local_28;
  
  resetFirmwareRevisionsAndSerialNumber(this);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_38,"Please connect your %1% and click RESCAN.",
             (string *)(this + 0x3e0));
  setInfoPanelInfo(this,(string *)&local_38);
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::TextPanel<NI::NWL::Button>::setText
            (*(TextPanel<NI::NWL::Button> **)(this + 0x5d0),(string *)&local_38);
  NWL::Widget::setActive(*(Widget **)(this + 0x5d0),true);
  // std code
  NWL::Widget::setActive(*(Widget **)(this + 0x5e0),true);
  NWL::Widget::setActive(*(Widget **)(this + 0x5a0),true);
  NWL::Widget::setActive(*(Widget **)(this + 0x660),false);
  *(unsigned char *)(*(long *)(this + 0x660) + 0x3e0) = 0;
  local_48 = *(unsigned long long *)(this + 0x5d0);
  lVar1 = *(long *)(this + 0x5d8);
  local_40 = lVar1;
  if (lVar1 != 0) {
    // std code
  }
  setFocusOnButton(this,&local_48);
  if (lVar1 != 0) {
    // std code
  }
  return;
}

void UpdateWizardMainWidget::showPageNoUpdateAvailable() {
TextPanel<NI::NWL::Button> *this_00;
  Widget *this_01;
  long lVar1;
  unsigned long long local_68;
  long local_60;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned long long local_38;
  unsigned long long uStack_30;
  unsigned long long local_28;
  
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_38,"Currently there is no newer firmware for your %1%.",
             (string *)(this + 0x3e0));
  setInfoPanelSuccess(this,(string *)&local_38);
  // std code
  this_00 = *(TextPanel<NI::NWL::Button> **)(this + 0x5d0);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::TextPanel<NI::NWL::Button>::setText(this_00,(string *)&local_38);
  // std code
  NWL::Widget::setActive(*(Widget **)(this + 0x5d0),false);
  NWL::Widget::setActive(*(Widget **)(this + 0x5e0),true);
  this_01 = *(Widget **)(this + 0x570);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  // std code
  NWL::Widget::setAttribute(this_01,(string *)&local_38,(string *)&local_58);
  // std code
  // std code
  NWL::Widget::setActive(*(Widget **)(this + 0x550),false);
  NWL::Widget::setActive(*(Widget **)(this + 0x5a0),true);
  NWL::Widget::setActive(*(Widget **)(this + 0x660),false);
  *(unsigned char *)(*(long *)(this + 0x660) + 0x3e0) = 0;
  local_68 = *(unsigned long long *)(this + 0x5e0);
  lVar1 = *(long *)(this + 0x5e8);
  local_60 = lVar1;
  if (lVar1 != 0) {
    // std code
  }
  setFocusOnButton(this,&local_68);
  if (lVar1 != 0) {
    // std code
  }
  return;
}

void UpdateWizardMainWidget::showPageNoUpdateMode() {
Widget *this_00;
  long lVar1;
  unsigned long long local_68;
  long local_60;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned long long local_38;
  unsigned long long uStack_30;
  unsigned long long local_28;
  
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_38,
             "Your %1% failed to boot into firmware update mode and could not be properly updated. To boot your %1% into firmware update mode, please power-cycle it and click RETRY."
             ,(string *)(this + 0x3e0));
  setInfoPanelFailure(this,(string *)&local_38);
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::TextPanel<NI::NWL::Button>::setText
            (*(TextPanel<NI::NWL::Button> **)(this + 0x5d0),(string *)&local_38);
  NWL::Widget::setActive(*(Widget **)(this + 0x5d0),true);
  // std code
  NWL::Widget::setActive(*(Widget **)(this + 0x5e0),true);
  this_00 = *(Widget **)(this + 0x570);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  // std code
  NWL::Widget::setAttribute(this_00,(string *)&local_38,(string *)&local_58);
  // std code
  // std code
  NWL::Widget::setActive(*(Widget **)(this + 0x5a0),true);
  NWL::Widget::setActive(*(Widget **)(this + 0x660),false);
  *(unsigned char *)(*(long *)(this + 0x660) + 0x3e0) = 0;
  local_68 = *(unsigned long long *)(this + 0x5d0);
  lVar1 = *(long *)(this + 0x5d8);
  local_60 = lVar1;
  if (lVar1 != 0) {
    // std code
  }
  setFocusOnButton(this,&local_68);
  if (lVar1 != 0) {
    // std code
  }
  return;
}

void UpdateWizardMainWidget::showPageUpdateAvailable() {
Widget *this_00;
  long lVar1;
  unsigned long long local_68;
  long local_60;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned long long local_38;
  unsigned long long uStack_30;
  unsigned long long local_28;
  
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_38,
             "A firmware update is available for your %1%. To update the firmware now, click UPDATE. To update the firmware later, click QUIT."
             ,(string *)(this + 0x3e0));
  setInfoPanelInfo(this,(string *)&local_38);
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::TextPanel<NI::NWL::Button>::setText
            (*(TextPanel<NI::NWL::Button> **)(this + 0x5d0),(string *)&local_38);
  NWL::Widget::setActive(*(Widget **)(this + 0x5d0),true);
  // std code
  NWL::Widget::setActive(*(Widget **)(this + 0x5e0),true);
  this_00 = *(Widget **)(this + 0x570);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  // std code
  NWL::Widget::setAttribute(this_00,(string *)&local_38,(string *)&local_58);
  // std code
  // std code
  NWL::Widget::setActive(*(Widget **)(this + 0x550),false);
  NWL::Widget::setActive(*(Widget **)(this + 0x5a0),true);
  NWL::Widget::setActive(*(Widget **)(this + 0x660),false);
  *(unsigned char *)(*(long *)(this + 0x660) + 0x3e0) = 0;
  local_68 = *(unsigned long long *)(this + 0x5d0);
  lVar1 = *(long *)(this + 0x5d8);
  local_60 = lVar1;
  if (lVar1 != 0) {
    // std code
  }
  setFocusOnButton(this,&local_68);
  if (lVar1 != 0) {
    // std code
  }
  return;
}

void UpdateWizardMainWidget::showPageUpdateFailed() {
TextPanel<NI::NWL::Button> *this_00;
  long lVar1;
  FormatApply<char> local_130 [24];
  unsigned long long local_118;
  long local_110;
  unsigned long long local_108;
  unsigned long long uStack_100;
  unsigned long long local_f8;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1002272e0;
  // boost code
            ((basic_format<char,// std code
             "An error occurred while updating your %1% (error %2%). Please disconnect the %1%, unpower it and quit the %3%. Then reconnect the %1%, restart %3% and try performing the update again. Alternatively contact the NI Technical Support."
            );
  GP::DETAIL::FormatApply<char>::apply<// std code
            (local_130,(basic_format<char,// std code
             this + 0x3e0,this + 0x714,this + 0x428);
  // boost code
            ((basic_format<char,// std code
  setInfoPanelFailure(this,(string *)local_130);
  // std code
  this_00 = *(TextPanel<NI::NWL::Button> **)(this + 0x5d0);
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  // std code
  NWL::TextPanel<NI::NWL::Button>::setText(this_00,(string *)&local_108);
  // std code
  NWL::Widget::setActive(*(Widget **)(this + 0x5d0),false);
  NWL::Widget::setActive(*(Widget **)(this + 0x5e0),true);
  NWL::Widget::setActive(*(Widget **)(this + 0x5a0),true);
  NWL::Widget::setActive(*(Widget **)(this + 0x660),false);
  *(unsigned char *)(*(long *)(this + 0x660) + 0x3e0) = 0;
  local_118 = *(unsigned long long *)(this + 0x5e0);
  lVar1 = *(long *)(this + 0x5e8);
  local_110 = lVar1;
  if (lVar1 != 0) {
    // std code
  }
  setFocusOnButton(this,&local_118);
  if (lVar1 != 0) {
    // std code
  }
  if (*(long *)PTR____stack_chk_guard_1002272e0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

void UpdateWizardMainWidget::showPageUpdateSuccessful() {
TextPanel<NI::NWL::Button> *pTVar1;
  Widget *this_00;
  long lVar2;
  unsigned long long local_68;
  long local_60;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned long long local_38;
  unsigned long long uStack_30;
  unsigned long long local_28;
  
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_38,"The firmware of your %1% was successfully updated.",
             (string *)(this + 0x3e0));
  setInfoPanelSuccess(this,(string *)&local_38);
  // std code
  pTVar1 = *(TextPanel<NI::NWL::Button> **)(this + 0x5d0);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::TextPanel<NI::NWL::Button>::setText(pTVar1,(string *)&local_38);
  // std code
  NWL::Widget::setActive(*(Widget **)(this + 0x5d0),false);
  NWL::Widget::setActive(*(Widget **)(this + 0x5e0),true);
  pTVar1 = *(TextPanel<NI::NWL::Button> **)(this + 0x5e0);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::TextPanel<NI::NWL::Button>::setText(pTVar1,(string *)&local_38);
  // std code
  this_00 = *(Widget **)(this + 0x570);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  // std code
  NWL::Widget::setAttribute(this_00,(string *)&local_38,(string *)&local_58);
  // std code
  // std code
  NWL::Widget::setActive(*(Widget **)(this + 0x5a0),true);
  NWL::Widget::setActive(*(Widget **)(this + 0x660),false);
  *(unsigned char *)(*(long *)(this + 0x660) + 0x3e0) = 0;
  local_68 = *(unsigned long long *)(this + 0x5e0);
  lVar2 = *(long *)(this + 0x5e8);
  local_60 = lVar2;
  if (lVar2 != 0) {
    // std code
  }
  setFocusOnButton(this,&local_68);
  if (lVar2 != 0) {
    // std code
  }
  return;
}

void UpdateWizardMainWidget::showPageUpdating() {
TextPanel<NI::NWL::Button> *this_00;
  Widget *this_01;
  long lVar1;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned long long local_38;
  unsigned long long uStack_30;
  unsigned long long local_28;
  
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_38,
             "Please stand by while your %1% is being updated and do not disconnect it from USB.",
             (string *)(this + 0x3e0));
  setInfoPanelInfo(this,(string *)&local_38);
  // std code
  this_00 = *(TextPanel<NI::NWL::Button> **)(this + 0x5d0);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::TextPanel<NI::NWL::Button>::setText(this_00,(string *)&local_38);
  // std code
  NWL::Widget::setActive(*(Widget **)(this + 0x5d0),false);
  NWL::Widget::setActive(*(Widget **)(this + 0x5e0),false);
  this_01 = *(Widget **)(this + 0x570);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  // std code
  NWL::Widget::setAttribute(this_01,(string *)&local_38,(string *)&local_58);
  // std code
  // std code
  NWL::Widget::setActive(*(Widget **)(this + 0x5a0),false);
  NWL::Widget::setActive(*(Widget **)(this + 0x660),true);
  lVar1 = *(long *)(this + 0x660);
  *(unsigned char *)(lVar1 + 0x3e0) = 1;
  *(unsigned long long *)(lVar1 + 0x3e4) = 0;
  return;
}

UpdateWizardMainWidget::~UpdateWizardMainWidget() {
unsigned long uVar1;
  
  *(void ***)this = &PTR__UpdateWizardMainWidget_100228360;
  *(void ***)(this + 0x60) = &PTR__UpdateWizardMainWidget_100228440;
  uVar1 = *(unsigned long *)(this + 0x6f0);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x6f8,this + 0x6f8,2);
    }
    *(unsigned long long *)(this + 0x6f0) = 0;
  }
  uVar1 = *(unsigned long *)(this + 0x6d0);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x6d8,this + 0x6d8,2);
    }
    *(unsigned long long *)(this + 0x6d0) = 0;
  }
  uVar1 = *(unsigned long *)(this + 0x6b0);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x6b8,this + 0x6b8,2);
    }
    *(unsigned long long *)(this + 0x6b0) = 0;
  }
  uVar1 = *(unsigned long *)(this + 0x690);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x698,this + 0x698,2);
    }
    *(unsigned long long *)(this + 0x690) = 0;
  }
  uVar1 = *(unsigned long *)(this + 0x670);
  if (uVar1 != 0) {
    if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 0x678,this + 0x678,2);
    }
    *(unsigned long long *)(this + 0x670) = 0;
  }
  if (*(long *)(this + 0x668) != 0) {
    // std code
  }
  if (*(long *)(this + 0x658) != 0) {
    // std code
  }
  if (*(long *)(this + 0x648) != 0) {
    // std code
  }
  if (*(long *)(this + 0x638) != 0) {
    // std code
  }
  if (*(long *)(this + 0x628) != 0) {
    // std code
  }
  if (*(long *)(this + 0x618) != 0) {
    // std code
  }
  if (*(long *)(this + 0x608) != 0) {
    // std code
  }
  if (*(long *)(this + 0x5f8) != 0) {
    // std code
  }
  if (*(long *)(this + 0x5e8) != 0) {
    // std code
  }
  if (*(long *)(this + 0x5d8) != 0) {
    // std code
  }
  if (*(long *)(this + 0x5c8) != 0) {
    // std code
  }
  if (*(long *)(this + 0x5b8) != 0) {
    // std code
  }
  if (*(long *)(this + 0x5a8) != 0) {
    // std code
  }
  if (*(long *)(this + 0x598) != 0) {
    // std code
  }
  if (*(long *)(this + 0x588) != 0) {
    // std code
  }
  if (*(long *)(this + 0x578) != 0) {
    // std code
  }
  if (*(long *)(this + 0x568) != 0) {
    // std code
  }
  if (*(long *)(this + 0x558) != 0) {
    // std code
  }
  if (*(long *)(this + 0x548) != 0) {
    // std code
  }
  if (*(long *)(this + 0x538) != 0) {
    // std code
  }
  if (*(long *)(this + 0x528) != 0) {
    // std code
  }
  if (*(long *)(this + 0x518) != 0) {
    // std code
  }
  if (*(long *)(this + 0x508) != 0) {
    // std code
  }
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
  // std code
  NWL::Bar::~Bar((Bar *)this);
  return;
}
}
