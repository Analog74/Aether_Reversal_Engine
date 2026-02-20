#include <ni/controller_editor/StyleGrammar.hpp>
namespace NI::NWL {

void StyleGrammar::assignErrorHandlers() {
// boost code
  on_error<(// boost code
            (this + 0x360);
  // boost code
  on_error<(// boost code
            (this + 0x6a0);
  // boost code
  on_error<(// boost code
            (this + 0xde0);
  // boost code
  on_error<(// boost code
            (this + 0xe20);
  // boost code
  on_error<(// boost code
            (this + 0xf20);
  // boost code
  on_error<(// boost code
            (this + 4000);
  return;
}

void StyleGrammar::onNextLine() {
int iVar1;
  
  iVar1 = *(int *)(this + 0xfe8);
  *(int *)(this + 0xfe8) = iVar1 + 1;
  if ((*(long *)(this + 0x1158) == *(long *)(this + 0x1150)) &&
     (*(long *)(this + 0x10a8) == *(long *)(this + 0x10a0))) {
    *(int *)(this + 0x1180) = iVar1 + 1;
  }
  return;
}

void StyleGrammar::onProperty() {
string *psVar1;
  StyleGrammar *pSVar2;
  long lVar3;
  unsigned long uVar4;
  unsigned long long local_b0;
  unsigned long long local_a8;
  unsigned long long uStack_a0;
  unsigned long long local_98;
  unsigned long long uStack_90;
  unsigned long long local_88;
  unsigned long long uStack_80;
  unsigned long long local_78;
  unsigned long long uStack_70;
  unsigned long long local_68;
  unsigned long long uStack_60;
  unsigned long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned int local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_1002272e0;
  if (((byte)this[0x10c0] & 1) == 0) {
    uVar4 = (unsigned long)((byte)this[0x10c0] >> 1);
  }
  else {
    uVar4 = *(unsigned long *)(this + 0x10c8);
  }
  if (uVar4 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    ni::symbol::symbol((symbol *)&local_48);
    psVar1 = (string *)(this + 0x10c0);
    local_40 = 0;
    ni::symbol::symbol((symbol *)&local_b0,psVar1);
    local_48 = local_b0;
    pSVar2 = this + 0x10e0;
    if ((int)local_58 == *(int *)(this + 0x1130)) {
      (*(code *)(&eggs::variants::detail::
                  visitor<eggs::variants::detail::copy_assign,void(void*,void_const*)>::
                  _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                  ::value)[local_58 & 0xffffffff])(&local_a8,pSVar2);
    }
    else {
      (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                  _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                  ::value)[local_58 & 0xffffffff])(&local_a8);
      local_58 = local_58 & 0xffffffff00000000;
      (*(code *)(&eggs::variants::detail::
                  visitor<eggs::variants::detail::copy_construct,void(void*,void_const*)>::
                  _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                  ::value)[*(uint *)(this + 0x1130)])(&local_a8,pSVar2);
      local_58 = CONCAT44(local_58._4_4_,*(unsigned int *)(this + 0x1130));
    }
    local_40 = *(unsigned int *)(this + 0x1140);
    lVar3 = *(long *)(this + 0x1170);
    if (lVar3 == *(long *)(this + 0x1178)) {
      // std code
      __push_back_slow_path<NI::NWL::Property_const&>
                ((vector<NI::NWL::Property,// std code
                 (Property *)&local_a8);
    }
    else {
      *(unsigned int *)(lVar3 + 0x50) = 0;
      (*(code *)(&eggs::variants::detail::
                  visitor<eggs::variants::detail::copy_construct,void(void*,void_const*)>::
                  _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                  ::value)[local_58 & 0xffffffff])(lVar3,&local_a8);
      *(int *)(lVar3 + 0x50) = (int)local_58;
      *(unsigned long long *)(lVar3 + 0x60) = local_48;
      *(unsigned int *)(lVar3 + 0x68) = local_40;
      *(long *)(this + 0x1170) = *(long *)(this + 0x1170) + 0x70;
    }
    if (((byte)*psVar1 & 1) == 0) {
      *(void2 *)psVar1 = 0;
    }
    else {
      **(unsigned char **)(this + 0x10d0) = 0;
      *(unsigned long long *)(this + 0x10c8) = 0;
    }
    if ((unsigned long)*(uint *)(this + 0x1130) == 3) {
      *(unsigned int *)pSVar2 = 0;
    }
    else {
      (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                  _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                  ::value)[*(uint *)(this + 0x1130)])(pSVar2);
      *(unsigned int *)(this + 0x10e0) = 0;
      *(unsigned int *)(this + 0x1130) = 3;
    }
    *(unsigned int *)(this + 0x1140) = 0;
    (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                ::value)[local_58 & 0xffffffff])(&local_a8);
  }
  if (*(long *)PTR____stack_chk_guard_1002272e0 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

void StyleGrammar::onSelector() {
uint uVar1;
  Selector *pSVar2;
  long lVar3;
  string *this_00;
  tSimpleSelector *this_01;
  
  
  if (*(long *)(this + 0x10a0) != *(long *)(this + 0x10a8)) {
    pSVar2 = *(Selector **)(this + 0x1158);
    if (pSVar2 < *(Selector **)(this + 0x1160)) {
      uVar1 = *(uint *)(this + 0x1180);
      // std code
      Selector::Selector(pSVar2,uVar1,local_40);
      this_00 = local_40;
      // std code
      lVar3 = *(long *)(this + 0x1158) + 0x78;
      *(long *)(this + 0x1158) = lVar3;
    }
    else {
      this_00 = (string *)(this + 0x1150);
      // std code
      __emplace_back_slow_path<unsigned_int&,// std code
                ((vector<NI::NWL::Selector,// std code
                 (uint *)(this + 0x1180),(string *)(this + 0xff0));
      lVar3 = *(long *)(this + 0x1158);
    }
    transferSelector((StyleGrammar *)this_00,(vector *)(this + 0x10a0),(Selector *)(lVar3 + -0x78));
    lVar3 = *(long *)(this + 0x10a0);
    while (*(long *)(this + 0x10a8) != lVar3) {
      this_01 = (tSimpleSelector *)(*(long *)(this + 0x10a8) + -0x98);
      *(tSimpleSelector **)(this + 0x10a8) = this_01;
      StyleParser2::tSimpleSelector::~tSimpleSelector(this_01);
    }
  }
  return;
}

void StyleGrammar::onSimpleSelector() {
tSimpleSelector *this_00;
  unsigned long uVar1;
  
  if (((byte)this[0x1008] & 1) == 0) {
    uVar1 = (unsigned long)((byte)this[0x1008] >> 1);
  }
  else {
    uVar1 = *(unsigned long *)(this + 0x1010);
  }
  if (uVar1 == 0) {
    if (((byte)this[0x1038] & 1) == 0) {
      uVar1 = (unsigned long)((byte)this[0x1038] >> 1);
    }
    else {
      uVar1 = *(unsigned long *)(this + 0x1040);
    }
    if (uVar1 == 0) {
      if (((byte)this[0x1050] & 1) == 0) {
        uVar1 = (unsigned long)((byte)this[0x1050] >> 1);
      }
      else {
        uVar1 = *(unsigned long *)(this + 0x1058);
      }
      if (((uVar1 == 0) && (*(long *)(this + 0x1068) == *(long *)(this + 0x1070))) &&
         (*(long *)(this + 0x1080) == *(long *)(this + 0x1088))) {
        return;
      }
    }
  }
  this_00 = (tSimpleSelector *)(this + 0x1008);
  if (*(tSimpleSelector **)(this + 0x10a8) == *(tSimpleSelector **)(this + 0x10b0)) {
    // std code
    vector<NI::NWL::StyleParser2::tSimpleSelector,// std code
    ::__push_back_slow_path<NI::NWL::StyleParser2::tSimpleSelector_const&>
              ((vector<NI::NWL::StyleParser2::tSimpleSelector,// std code
                *)(this + 0x10a0),this_00);
  }
  else {
    StyleParser2::tSimpleSelector::tSimpleSelector(*(tSimpleSelector **)(this + 0x10a8),this_00);
    *(long *)(this + 0x10a8) = *(long *)(this + 0x10a8) + 0x98;
  }
  StyleParser2::tSimpleSelector::reset(this_00);
  return;
}

void StyleGrammar::onStyle() {
if ((*(long *)(this + 0x1158) != *(long *)(this + 0x1150)) &&
     (*(long *)(this + 0x1170) != *(long *)(this + 0x1168))) {
    StyleParser2::addRule(*(StyleParser2 **)(this + 0xfe0),(tRule *)(this + 0x1150));
  }
  StyleParser2::tRule::reset((tRule *)(this + 0x1150));
  return;
}

void StyleGrammar::setNames() {
unsigned long long local_38;
  unsigned long long uStack_30;
  unsigned long long local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  // std code
  // std code
  return;
}

StyleGrammar::~StyleGrammar() {
long *plVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  unsigned long uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  
  // std code
  plVar4 = *(long **)(this + 0x1228);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      LOCK();
      piVar2 = (int *)((long)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  // std code
  plVar4 = *(long **)(this + 0x11e8);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      LOCK();
      piVar2 = (int *)((long)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  // std code
  plVar4 = *(long **)(this + 0x11a8);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      LOCK();
      piVar2 = (int *)((long)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  pvVar8 = *(void **)(this + 0x1168);
  if (pvVar8 != (void *)0x0) {
    pvVar7 = *(void **)(this + 0x1170);
    if (pvVar7 != pvVar8) {
      do {
        *(long *)(this + 0x1170) = (long)pvVar7 + -0x70;
        (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
                    _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
                    ::value)[*(uint *)((long)pvVar7 + -0x20)])();
        *(unsigned int *)((long)pvVar7 + -0x20) = 0;
        pvVar7 = *(void **)(this + 0x1170);
      } while (pvVar7 != pvVar8);
      pvVar8 = *(void **)(this + 0x1168);
    }
    delete(pvVar8);
  }
  // std code
            ((__vector_base<NI::NWL::Selector,// std code
  (*(code *)(&eggs::variants::detail::visitor<eggs::variants::detail::destroy,void(void*)>::
              _table<eggs::variants::detail::empty,float,unsigned_int,int,bool,// std code
              ::value)[*(uint *)(this + 0x1130)])(this + 0x10e0);
  *(unsigned int *)(this + 0x1130) = 0;
  // std code
  pvVar8 = *(void **)(this + 0x10a0);
  if (pvVar8 != (void *)0x0) {
    pvVar7 = *(void **)(this + 0x10a8);
    if (pvVar7 != pvVar8) {
      do {
        *(tSimpleSelector **)(this + 0x10a8) = (tSimpleSelector *)((long)pvVar7 + -0x98);
        StyleParser2::tSimpleSelector::~tSimpleSelector((tSimpleSelector *)((long)pvVar7 + -0x98));
        pvVar7 = *(void **)(this + 0x10a8);
      } while (pvVar7 != pvVar8);
      pvVar8 = *(void **)(this + 0x10a0);
    }
    delete(pvVar8);
  }
  StyleParser2::tSimpleSelector::~tSimpleSelector((tSimpleSelector *)(this + 0x1008));
  // std code
  uVar5 = *(unsigned long *)(this + 0xfc0);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xfc8,this + 0xfc8,2);
    }
    *(unsigned long long *)(this + 0xfc0) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xf80);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xf88,this + 0xf88,2);
    }
    *(unsigned long long *)(this + 0xf80) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xf40);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xf48,this + 0xf48,2);
    }
    *(unsigned long long *)(this + 0xf40) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xf00);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xf08,this + 0xf08,2);
    }
    *(unsigned long long *)(this + 0xf00) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xec0);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xec8,this + 0xec8,2);
    }
    *(unsigned long long *)(this + 0xec0) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xe80);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xe88,this + 0xe88,2);
    }
    *(unsigned long long *)(this + 0xe80) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xe40);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xe48,this + 0xe48,2);
    }
    *(unsigned long long *)(this + 0xe40) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xe00);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xe08,this + 0xe08,2);
    }
    *(unsigned long long *)(this + 0xe00) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xdc0);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xdc8,this + 0xdc8,2);
    }
    *(unsigned long long *)(this + 0xdc0) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xd80);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xd88,this + 0xd88,2);
    }
    *(unsigned long long *)(this + 0xd80) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xd40);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xd48,this + 0xd48,2);
    }
    *(unsigned long long *)(this + 0xd40) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xd00);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xd08,this + 0xd08,2);
    }
    *(unsigned long long *)(this + 0xd00) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xcc0);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xcc8,this + 0xcc8,2);
    }
    *(unsigned long long *)(this + 0xcc0) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xc80);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xc88,this + 0xc88,2);
    }
    *(unsigned long long *)(this + 0xc80) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xc40);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xc48,this + 0xc48,2);
    }
    *(unsigned long long *)(this + 0xc40) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xc00);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xc08,this + 0xc08,2);
    }
    *(unsigned long long *)(this + 0xc00) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xbc0);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xbc8,this + 0xbc8,2);
    }
    *(unsigned long long *)(this + 0xbc0) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xb80);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xb88,this + 0xb88,2);
    }
    *(unsigned long long *)(this + 0xb80) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xb40);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xb48,this + 0xb48,2);
    }
    *(unsigned long long *)(this + 0xb40) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xb00);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xb08,this + 0xb08,2);
    }
    *(unsigned long long *)(this + 0xb00) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xac0);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xac8,this + 0xac8,2);
    }
    *(unsigned long long *)(this + 0xac0) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xa80);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xa88,this + 0xa88,2);
    }
    *(unsigned long long *)(this + 0xa80) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xa40);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xa48,this + 0xa48,2);
    }
    *(unsigned long long *)(this + 0xa40) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xa00);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0xa08,this + 0xa08,2);
    }
    *(unsigned long long *)(this + 0xa00) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x9c0);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x9c8,this + 0x9c8,2);
    }
    *(unsigned long long *)(this + 0x9c0) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x980);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x988,this + 0x988,2);
    }
    *(unsigned long long *)(this + 0x980) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x940);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x948,this + 0x948,2);
    }
    *(unsigned long long *)(this + 0x940) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x900);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x908,this + 0x908,2);
    }
    *(unsigned long long *)(this + 0x900) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x8c0);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x8c8,this + 0x8c8,2);
    }
    *(unsigned long long *)(this + 0x8c0) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x880);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x888,this + 0x888,2);
    }
    *(unsigned long long *)(this + 0x880) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x840);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x848,this + 0x848,2);
    }
    *(unsigned long long *)(this + 0x840) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x800);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x808,this + 0x808,2);
    }
    *(unsigned long long *)(this + 0x800) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x7c0);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x7c8,this + 0x7c8,2);
    }
    *(unsigned long long *)(this + 0x7c0) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x780);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x788,this + 0x788,2);
    }
    *(unsigned long long *)(this + 0x780) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x740);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x748,this + 0x748,2);
    }
    *(unsigned long long *)(this + 0x740) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x700);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x708,this + 0x708,2);
    }
    *(unsigned long long *)(this + 0x700) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x6c0);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x6c8,this + 0x6c8,2);
    }
    *(unsigned long long *)(this + 0x6c0) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x680);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x688,this + 0x688,2);
    }
    *(unsigned long long *)(this + 0x680) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x640);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x648,this + 0x648,2);
    }
    *(unsigned long long *)(this + 0x640) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x600);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x608,this + 0x608,2);
    }
    *(unsigned long long *)(this + 0x600) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x5c0);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x5c8,this + 0x5c8,2);
    }
    *(unsigned long long *)(this + 0x5c0) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x580);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x588,this + 0x588,2);
    }
    *(unsigned long long *)(this + 0x580) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x540);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x548,this + 0x548,2);
    }
    *(unsigned long long *)(this + 0x540) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x500);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x508,this + 0x508,2);
    }
    *(unsigned long long *)(this + 0x500) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x4c0);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x4c8,this + 0x4c8,2);
    }
    *(unsigned long long *)(this + 0x4c0) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x480);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x488,this + 0x488,2);
    }
    *(unsigned long long *)(this + 0x480) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x440);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x448,this + 0x448,2);
    }
    *(unsigned long long *)(this + 0x440) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x400);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x408,this + 0x408,2);
    }
    *(unsigned long long *)(this + 0x400) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x3c0);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x3c8,this + 0x3c8,2);
    }
    *(unsigned long long *)(this + 0x3c0) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x380);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x388,this + 0x388,2);
    }
    *(unsigned long long *)(this + 0x380) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x340);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x348,this + 0x348,2);
    }
    *(unsigned long long *)(this + 0x340) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x300);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x308,this + 0x308,2);
    }
    *(unsigned long long *)(this + 0x300) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x2c0);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x2c8,this + 0x2c8,2);
    }
    *(unsigned long long *)(this + 0x2c0) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x280);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x288,this + 0x288,2);
    }
    *(unsigned long long *)(this + 0x280) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x240);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x248,this + 0x248,2);
    }
    *(unsigned long long *)(this + 0x240) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x200);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x208,this + 0x208,2);
    }
    *(unsigned long long *)(this + 0x200) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x1c0);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x1c8,this + 0x1c8,2);
    }
    *(unsigned long long *)(this + 0x1c0) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x180);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x188,this + 0x188,2);
    }
    *(unsigned long long *)(this + 0x180) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x140);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x148,this + 0x148,2);
    }
    *(unsigned long long *)(this + 0x140) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x100);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x108,this + 0x108,2);
    }
    *(unsigned long long *)(this + 0x100) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0xc0);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 200,this + 200,2);
    }
    *(unsigned long long *)(this + 0xc0) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x80);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x88,this + 0x88,2);
    }
    *(unsigned long long *)(this + 0x80) = 0;
  }
  // std code
  uVar5 = *(unsigned long *)(this + 0x40);
  if (uVar5 != 0) {
    if (((uVar5 & 1) == 0) && (*(code **)(uVar5 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar5 & 0xfffffffffffffffe))(this + 0x48,this + 0x48,2);
    }
    *(unsigned long long *)(this + 0x40) = 0;
  }
  // std code
  // std code
  return;
}
}
