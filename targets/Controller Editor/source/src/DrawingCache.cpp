#include <ni/controller_editor/DrawingCache.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

void DrawingCache::rebuildCache() {
unsigned long long in_R8;
  unsigned long long in_R9;
  unsigned int uVar1;
  unsigned long long uVar2;
  unsigned int local_190;
  DrawingCache *local_148;
  unsigned int local_140;
  LazyPicture local_138 [32];
  LazyPicture *local_118;
  __tree<// std code
  local_108 [8];
  __tree_node *local_100;
  LazyPicture local_e8 [32];
  LazyPicture *local_c8;
  __tree_node **local_b8;
  __tree_node *local_b0;
  unsigned long long uStack_a8;
  DrawingCache *local_98;
  unsigned int local_90;
  LazyPicture local_88 [32];
  LazyPicture *local_68;
  __tree<// std code
  local_58 [8];
  __tree_node *local_50;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<unsigned_int>>
            (this,s_ColorTags,this + (unsigned long)0 * 0x18 + 8,6);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,s_ColorPaletteTags,this + (unsigned long)0 * 0x18 + 0xb0,0);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<unsigned_int>>
            (this,0,this + (unsigned long)0 * 0x18 + 8,6);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,0,this + (unsigned long)0 * 0x18 + 0xb0,0);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<unsigned_int>>
            (this,0,this + (unsigned long)0 * 0x18 + 8,6);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,0,this + (unsigned long)0 * 0x18 + 0xb0,0);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<unsigned_int>>
            (this,0,this + (unsigned long)0 * 0x18 + 8,6);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,0,this + (unsigned long)0 * 0x18 + 0xb0,0);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<unsigned_int>>
            (this,0,this + (unsigned long)0 * 0x18 + 8,6);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,0,this + (unsigned long)0 * 0x18 + 0xb0,0);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<unsigned_int>>
            (this,0,this + (unsigned long)0 * 0x18 + 8,6);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,0,this + (unsigned long)0 * 0x18 + 0xb0,0);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<unsigned_int>>
            (this,0,this + (unsigned long)0 * 0x18 + 8,6);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,0,this + (unsigned long)0 * 0x18 + 0xb0,0);
  uVar2 = 0;
  local_190 = SUB84(this + 0x158,0);
  uVar1 = 7;
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<NI::UIA::Font_const*>>
            (this,properties::font);
  rebuildRules<NI::NWL::DrawingCache::tGetAlignmentFunctor>
            (this,properties::horizontalAlignment,this + 0x178,1,in_R8,in_R9,local_190,uVar1,uVar2);
  rebuildRules<NI::NWL::DrawingCache::tGetAlignmentFunctor>
            (this,properties::verticalAlignment,this + 400,0);
  uVar2 = properties::picture;
  local_98 = this + 0x1a8;
  local_c8 = (LazyPicture *)0x0;
  local_b0 = (__tree_node *)0x0;
  uStack_a8 = 0;
  local_90 = 8;
  local_b8 = &local_b0;
  LazyPicture::LazyPicture(local_88,local_e8);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<NI::NWL::LazyPicture>>
            (this,uVar2,&local_98);
  // std code
  __tree<// std code
  ::destroy(local_58,local_50);
  if (local_88 == local_68) {
    (**(code **)(*(long *)local_68 + 0x20))();
  }
  else if (local_68 != (LazyPicture *)0x0) {
    (**(code **)(*(long *)local_68 + 0x28))();
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)&local_b8,local_b0);
  if (local_e8 == local_c8) {
    (**(code **)(*(long *)local_c8 + 0x20))();
  }
  else if (local_c8 != (LazyPicture *)0x0) {
    (**(code **)(*(long *)local_c8 + 0x28))();
  }
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,properties::animationIndex,this + 0x1d8,0);
  uVar2 = properties::dyeMaskPicture;
  local_148 = this + 0x1c0;
  local_c8 = (LazyPicture *)0x0;
  local_b0 = (__tree_node *)0x0;
  uStack_a8 = 0;
  local_140 = 8;
  local_b8 = &local_b0;
  LazyPicture::LazyPicture(local_138,local_e8);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<NI::NWL::LazyPicture>>
            (this,uVar2,&local_148);
  // std code
  __tree<// std code
  ::destroy(local_108,local_100);
  if (local_138 == local_118) {
    (**(code **)(*(long *)local_118 + 0x20))();
  }
  else if (local_118 != (LazyPicture *)0x0) {
    (**(code **)(*(long *)local_118 + 0x28))();
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)&local_b8,local_b0);
  if (local_e8 == local_c8) {
    (**(code **)(*(long *)local_c8 + 0x20))();
  }
  else if (local_c8 != (LazyPicture *)0x0) {
    (**(code **)(*(long *)local_c8 + 0x28))();
  }
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,properties::dyeMaskAnimationIndex,this + 0x1f0,0);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<NI::GP::Point>>
            (this,properties::pictureDisplacement);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<NI::GP::Point>>
            (this,properties::textDisplacement);
  rebuildRules<NI::NWL::DrawingCache::tGetBoolFunctor>
            (this,properties::pictureIncludeMargin,this + 0x238);
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

DrawingCache::~DrawingCache() {
void *pvVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar1 = *(void **)(this + 0x238);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x240) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x220);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x228) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x208);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x210) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x1f0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x1f8) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x1d8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x1e0) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x1c0);
  if (pvVar1 != (void *)0x0) {
    pvVar4 = pvVar1;
    pvVar3 = *(void **)(this + 0x1c8);
    if (*(void **)(this + 0x1c8) != pvVar1) {
      do {
        pvVar4 = (void *)((long)pvVar3 + -0x70);
        // std code
        __tree<// std code
        ::destroy((__tree<// std code
                   *)((long)pvVar3 + -0x20),*(__tree_node **)((long)pvVar3 + -0x18));
        plVar2 = *(long **)((long)pvVar3 + -0x30);
        if ((long *)((long)pvVar3 + -0x50) == plVar2) {
          (**(code **)(*plVar2 + 0x20))();
        }
        else if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x28))();
        }
        pvVar3 = pvVar4;
      } while (pvVar1 != pvVar4);
      pvVar4 = *(void **)(this + 0x1c0);
    }
    *(void **)(this + 0x1c8) = pvVar1;
    delete(pvVar4);
  }
  pvVar1 = *(void **)(this + 0x1a8);
  if (pvVar1 != (void *)0x0) {
    pvVar4 = pvVar1;
    pvVar3 = *(void **)(this + 0x1b0);
    if (*(void **)(this + 0x1b0) != pvVar1) {
      do {
        pvVar4 = (void *)((long)pvVar3 + -0x70);
        // std code
        __tree<// std code
        ::destroy((__tree<// std code
                   *)((long)pvVar3 + -0x20),*(__tree_node **)((long)pvVar3 + -0x18));
        plVar2 = *(long **)((long)pvVar3 + -0x30);
        if ((long *)((long)pvVar3 + -0x50) == plVar2) {
          (**(code **)(*plVar2 + 0x20))();
        }
        else if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x28))();
        }
        pvVar3 = pvVar4;
      } while (pvVar1 != pvVar4);
      pvVar4 = *(void **)(this + 0x1a8);
    }
    *(void **)(this + 0x1b0) = pvVar1;
    delete(pvVar4);
  }
  pvVar1 = *(void **)(this + 400);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x198) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x178);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x180) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x158);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x160) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x140);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x148) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x128);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x130) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x110);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x118) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xf8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x100) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xe0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xe8) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 200);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xd0) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xb0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xb8) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x98);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xa0) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x80);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x88) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x68);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x38);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  *(void **)(this + 0x10) = pvVar1;
  delete(pvVar1);
  return;
}
}
