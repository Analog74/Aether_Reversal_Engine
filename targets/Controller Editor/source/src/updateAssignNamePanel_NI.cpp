#include <ni/controller_editor/updateAssignNamePanel_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MidiAssignmentPanel {

void updateAssignNamePanel(1 param_1, NI::Model* {
long lVar1;
  long *plVar2;
  TextPanel<NI::NWL::Label> *this_00;
  Switcher *this_01;
  bool bVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  unsigned long uVar7;
  long *plVar8;
  __bind local_f8 [8];
  long local_f0;
  signal_type<nod::multithread_policy,void(int)> *local_e0;
  unsigned long local_d8 [2];
  void *local_c8;
  unsigned long local_b8 [2];
  void *local_a8;
  Switcher *local_a0;
  unsigned long local_98;
  unsigned long uStack_90;
  char *local_88;
  string local_78;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  unsigned long uStack_70;
  char *local_68;
  long *local_60;
  unsigned long local_58 [2];
  Model *local_48;
  char local_40;
  
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_c8 = (void *)0x0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_a8 = (void *)0x0;
  bVar3 = (bool)Model::getPageNameForSelectedAssignment
                          (param_1,(string *)local_d8,(string *)local_b8);
  NWL::Widget::setVisible(*(Widget **)(this + 0x450),bVar3);
  NWL::Widget::setVisible(*(Widget **)(this + 0x460),bVar3);
  if ((*(uint *)(param_1 + 0x7ec) < 0xc) &&
     ((0xb60U >> (*(uint *)(param_1 + 0x7ec) & 0x1f) & 1) != 0)) {
    NWL::Widget::setActive(*(Widget **)(this + 0x520),true);
    NWL::Widget::setVisible(*(Widget **)(this + 0x520),false);
    if (bVar3 != false) {
      cVar4 = Model::isPageColorEditNeeded(param_1);
      if (cVar4 == '\0') {
        cVar4 = (**(code **)(*(long *)param_1 + 0x278))(param_1);
        if (cVar4 != '\0') {
          NWL::Widget::setActive((Widget *)**(unsigned long long **)(*(long *)(this + 0x520) + 0x120),false)
          ;
          NWL::Widget::setActive
                    (*(Widget **)(*(long *)(*(long *)(this + 0x520) + 0x120) + 0x10),true);
          lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(this + 0x520) + 0x120) + 0x10) + 0x120);
          lVar1 = *(long *)(lVar6 + 0x10);
          if (lVar1 == 0) {
            local_60 = (long *)0x0;
            local_a0 = (Switcher *)0x0;
          }
          else {
            plVar8 = *(long **)(lVar6 + 0x18);
            local_a0 = (Switcher *)
                       ___dynamic_cast(lVar1,&NWL::Widget::typeinfo,&NWL::Switcher::typeinfo);
            if (local_a0 == (Switcher *)0x0) {
              local_60 = (long *)0x0;
              local_a0 = (Switcher *)0x0;
            }
            else if(1 param_1, plVar8 == (long *0x0) {
              local_60 = (long *)0x0;
            }
            else {
              LOCK();
              plVar8[1] = plVar8[1] + 1;
              UNLOCK();
              local_60 = plVar8;
            }
          }
          local_e0 = (signal_type<nod::multithread_policy,void(int)> *)(local_a0 + 0x3d0);
          // std code
          lVar6 = *(long *)(local_a0 + 0x418);
          if (lVar6 != 0) {
            plVar8 = *(long **)(local_a0 + 0x410);
            do {
              lVar6 = lVar6 + -1;
              plVar2 = (long *)plVar8[4];
              if (plVar8 == plVar2) {
                (**(code **)(*plVar2 + 0x20))();
              }
              else if(1 param_1, plVar2 != (long *0x0) {
                (**(code **)(*plVar2 + 0x28))();
              }
              plVar8 = plVar8 + 6;
            } while (lVar6 != 0);
          }
          this_01 = local_a0;
          *(unsigned long long *)(local_a0 + 0x418) = 0;
          *(unsigned long long *)(local_a0 + 0x460) = 0;
          nod::signal_type<nod::multithread_policy,void(int)>::invalidate_disconnector(local_e0);
          // std code
          local_58[0] = 0x259;
          local_58[1] = 0;
          local_48 = param_1;
          nod::signal_type<nod::multithread_policy,void(int)>::
          connect<// std code
                    (local_f8);
          if (local_f0 != 0) {
            // std code
          }
          bVar5 = (**(code **)(*(long *)param_1 + 0x260))(param_1);
          NWL::Switcher::setValue(this_01,(uint)bVar5,false);
          NWL::Widget::setVisible(*(Widget **)(this + 0x520),true);
          if (local_60 != (long *)0x0) {
            LOCK();
            plVar8 = local_60 + 1;
            lVar6 = *plVar8;
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (lVar6 == 0) {
              (**(code **)(*local_60 + 0x10))(local_60);
              // std code
            }
          }
        }
      }
      else {
        NWL::Widget::setActive((Widget *)**(unsigned long long **)(*(long *)(this + 0x520) + 0x120),true);
        NWL::Widget::setActive
                  (*(Widget **)(*(long *)(*(long *)(this + 0x520) + 0x120) + 0x10),false);
        NWL::Widget::setVisible(*(Widget **)(this + 0x520),true);
      }
    }
    local_58[0] = CONCAT17(local_58[0]._7_1_,0x656772616c0a);
    NWL::Widget::setAttribute(*(unsigned long long *)(this + 0x440),NI::symbolDimension,local_58);
  }
  else {
    NWL::Widget::setActive(*(Widget **)(this + 0x520),false);
    local_58[0] = 0x6c616d726f6e0c;
    NWL::Widget::setAttribute(*(unsigned long long *)(this + 0x440),NI::symbolDimension,local_58);
  }
  if ((local_58[0] & 1) != 0) {
    delete(local_48);
  }
  if (bVar3 != false) {
    NWL::TextPanel<NI::NWL::Label>::setText
              (*(TextPanel<NI::NWL::Label> **)(this + 0x460),(string *)local_d8);
    NWL::TextPanel<NI::NWL::Label>::setText
              (*(TextPanel<NI::NWL::Label> **)(this + 0x450),(string *)local_b8);
  }
  lVar6 = IAssignmentSupport::getNumSelectedAssignments((IAssignmentSupport *)param_1);
  if (lVar6 == 0) {
    local_58[0] = 0x29656e6f6e280c;
    NWL::TextPanel<NI::NWL::Label>::setText
              (*(TextPanel<NI::NWL::Label> **)(this + 0x470),(string *)local_58);
    if ((local_58[0] & 1) != 0) {
      delete(local_48);
    }
    local_58[0] = local_58[0] & 0xffffffffffff0000;
    NWL::TextEdit::setText(*(TextEdit **)(this + 0x480),(string *)local_58,true);
    if ((local_58[0] & 1) != 0) {
      delete(local_48);
    }
    return;
  }
  NWL::Widget::setActive(*(Widget **)(this + 0x4e0),true);
  this_00 = *(TextPanel<NI::NWL::Label> **)(this + 0x470);
  (**(code **)(*(long *)param_1 + 0xb0))(local_58,param_1);
  if (local_40 == '\x02') {
    local_98 = CONCAT17(local_98._7_1_,0x69746c756d0a);
  }
  else {
    // std code if(1 param_1, ((bytelocal_78 & 1) == 0) {
      if ((byte)local_78 < 10) {
        if ((byte)local_78 < 8) return;
        if (((cStack_77 == 'P') && (cStack_76 == 'a')) && (cVar4 = cStack_74, cStack_75 == 'd'))
        return;
      }
      else {
        if ((((cStack_77 != 'K') || (cStack_76 != 'n')) ||
            ((cStack_75 != 'o' || ((cStack_74 != 'b' || (uVar7 = 4, 9 < (byte)(cStack_73 - 0x30U))))
             ))) && ((((byte)local_78 < 0xe ||
                      (((cStack_77 != 'B' || (cStack_76 != 'u')) || (cStack_75 != 't')))) ||
                     (((cStack_74 != 't' || (cStack_73 != 'o')) ||
                      ((cStack_72 != 'n' || (uVar7 = 6, 9 < (byte)(cStack_71 - 0x30U)))))))))
        return;
        // std code
      }
    }
    else {
      if (uStack_70 < 5) {
        if (uStack_70 != 4) return;
      }
      else if(1 param_1, ((((*local_68 == 'K' && (local_68[1] == 'n')) && (local_68[2] == 'o')) &&
               ((local_68[3] == 'b' && (uVar7 = 4, (byte)(local_68[4] - 0x30U) < 10)))) ||
              (((((6 < uStack_70 && ((*local_68 == 'B' && (local_68[1] == 'u')))) &&
                 (local_68[2] == 't')) &&
                (((local_68[3] == 't' && (local_68[4] == 'o')) && (local_68[5] == 'n')))) &&
               (uVar7 = 6, (byte)(local_68[6] - 0x30U) < 10)))) return;
      if (((*local_68 == 'P') && (local_68[1] == 'a')) && (local_68[2] == 'd')) {
        cVar4 = local_68[3];
        uVar7 = 3;
        if ((byte)(cVar4 - 0x30U) < 10) return;
      }
    }
    local_88 = local_68;
    local_98 = CONCAT17(cStack_71,
                        CONCAT16(cStack_72,
                                 CONCAT15(cStack_73,
                                          CONCAT14(cStack_74,
                                                   CONCAT13(cStack_75,
                                                            CONCAT12(cStack_76,
                                                                     CONCAT11(cStack_77,local_78))))
                                         )));
    uStack_90 = uStack_70;
  }
  NWL::TextPanel<NI::NWL::Label>::setText(this_00,(string *)&local_98);
  if ((local_98 & 1) != 0) {
    delete(local_88);
  }
  if ((local_58[0] & 1) != 0) {
    delete(local_48);
  }
  NWL::Widget::setEnabled(*(Widget **)(this + 0x480),true);
  showLabel(this);
  if ((local_b8[0] & 1) != 0) {
    delete(local_a8);
  }
  if ((local_d8[0] & 1) != 0) {
    delete(local_c8);
  }
  return;
}
}
