#include <ni/controller_editor/DrawingCache.hpp>
namespace NI::NWL {

void DrawingCache::rebuildCache() {
unsigned long long in_R8;
  unsigned long long in_R9;
  DrawingCache *pDVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  unsigned int uStack_184;
  DrawingCache *local_148;
  unsigned int local_140;
  long local_138 [4];
  LazyPicture *local_118;
  __tree<// std code
  local_108 [8];
  __tree_node *local_100;
  long local_e8 [4];
  LazyPicture *local_c8;
  __tree_node **local_b8;
  __tree_node *local_b0;
  unsigned long long local_a8;
  DrawingCache *local_98;
  unsigned int local_90;
  long local_88 [4];
  LazyPicture *local_68;
  __tree<// std code
  local_58 [8];
  __tree_node *local_50;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_1002272e0;
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<unsigned_int>>
            (this,"background-color",this + 8,6);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,"background-color-palette",this + 0xb0,0);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<unsigned_int>>
            (this,"foreground-color",this + 0x38,6);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,"foreground-color-palette",this + 0xe0,0);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<unsigned_int>>
            (this,"selection-background-color",this + 0x20,6);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,"selection-background-color-palette",this + 200,0);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<unsigned_int>>
            (this,"selection-foreground-color",this + 0x50,6);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,"selection-foreground-color-palette",this + 0xf8,0);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<unsigned_int>>
            (this,"dye-color",this + 0x68,6);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,"dye-color-palette",this + 0x110,0);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<unsigned_int>>
            (this,"background-border-color",this + 0x80,6);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,"background-border-color-palette",this + 0x128,0);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<unsigned_int>>
            (this,"foreground-border-color",this + 0x98,6);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,"foreground-border-color-palette",this + 0x140,0);
  pDVar1 = this + 0x158;
  uVar3 = 0;
  uVar2 = CONCAT44(uStack_184,7);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<NI::UIA::Font_const*>>(this,"font");
  rebuildRules<NI::NWL::DrawingCache::tGetAlignmentFunctor>
            (this,"horizontal-alignment",this + 0x178,1,in_R8,in_R9,pDVar1,uVar2,uVar3);
  rebuildRules<NI::NWL::DrawingCache::tGetAlignmentFunctor>(this,"vertical-alignment",this + 400,0);
  local_98 = this + 0x1a8;
  local_c8 = (LazyPicture *)0x0;
  local_a8 = 0;
  local_b0 = (__tree_node *)0x0;
  local_90 = 8;
  local_b8 = &local_b0;
  LazyPicture::LazyPicture((LazyPicture *)local_88,(LazyPicture *)local_e8);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<NI::NWL::LazyPicture>>
            (this,"picture",&local_98);
  // std code
  __tree<// std code
  ::destroy(local_58,local_50);
  if (local_68 == (LazyPicture *)local_88) {
    (**(code **)(local_88[0] + 0x20))((LazyPicture *)local_88);
  }
  else if (local_68 != (LazyPicture *)0x0) {
    (**(code **)(*(long *)local_68 + 0x28))();
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)&local_b8,local_b0);
  if (local_c8 == (LazyPicture *)local_e8) {
    (**(code **)(local_e8[0] + 0x20))(local_e8);
  }
  else if (local_c8 != (LazyPicture *)0x0) {
    (**(code **)(*(long *)local_c8 + 0x28))();
  }
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,"animation-index",this + 0x1d8,0);
  local_148 = this + 0x1c0;
  local_c8 = (LazyPicture *)0x0;
  local_a8 = 0;
  local_b0 = (__tree_node *)0x0;
  local_140 = 8;
  local_b8 = &local_b0;
  LazyPicture::LazyPicture((LazyPicture *)local_138,(LazyPicture *)local_e8);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<NI::NWL::LazyPicture>>
            (this,"dye-mask-picture",&local_148);
  // std code
  __tree<// std code
  ::destroy(local_108,local_100);
  if (local_118 == (LazyPicture *)local_138) {
    (**(code **)(local_138[0] + 0x20))((LazyPicture *)local_138);
  }
  else if (local_118 != (LazyPicture *)0x0) {
    (**(code **)(*(long *)local_118 + 0x28))();
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)&local_b8,local_b0);
  if (local_c8 == (LazyPicture *)local_e8) {
    (**(code **)(local_e8[0] + 0x20))(local_e8);
  }
  else if (local_c8 != (LazyPicture *)0x0) {
    (**(code **)(*(long *)local_c8 + 0x28))();
  }
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<int>>
            (this,"dye-mask-animation-index",this + 0x1f0,0);
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<NI::GP::Point>>
            (this,"picture-displacement");
  rebuildRules<NI::NWL::DrawingCache::tTestUnitCacheFunctor<NI::GP::Point>>
            (this,"text-displacement");
  rebuildRules<NI::NWL::DrawingCache::tGetBoolFunctor>(this,"picture-includes-margin",this + 0x238);
  if (*(long *)PTR____stack_chk_guard_1002272e0 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

DrawingCache::~DrawingCache() {
void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(this + 0x238);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x240);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0x240) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x220);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x228);
    if (pvVar2 != pvVar1) {
      *(void **)(this + 0x228) =
           (void *)((long)pvVar2 + ~((unsigned long)((long)pvVar2 + (-0x24 - (long)pvVar1)) / 0x24) * 0x24);
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x208);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x210);
    if (pvVar2 != pvVar1) {
      *(void **)(this + 0x210) =
           (void *)((long)pvVar2 + ~((unsigned long)((long)pvVar2 + (-0x24 - (long)pvVar1)) / 0x24) * 0x24);
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x1f0);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x1f8);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0x1f8) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x1d8);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x1e0);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0x1e0) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x1c0);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x1c8);
    if (pvVar2 != pvVar1) {
      do {
        *(long *)(this + 0x1c8) = (long)pvVar2 + -0x70;
        LazyPicture::~LazyPicture((LazyPicture *)((long)pvVar2 + -0x50));
        pvVar2 = *(void **)(this + 0x1c8);
      } while (pvVar2 != pvVar1);
      pvVar1 = *(void **)(this + 0x1c0);
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x1a8);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x1b0);
    if (pvVar2 != pvVar1) {
      do {
        *(long *)(this + 0x1b0) = (long)pvVar2 + -0x70;
        LazyPicture::~LazyPicture((LazyPicture *)((long)pvVar2 + -0x50));
        pvVar2 = *(void **)(this + 0x1b0);
      } while (pvVar2 != pvVar1);
      pvVar1 = *(void **)(this + 0x1a8);
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 400);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x198);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0x198) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x178);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x180);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0x180) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x158);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x160);
    if (pvVar2 != pvVar1) {
      *(void **)(this + 0x160) =
           (void *)((long)pvVar2 + ~((unsigned long)((long)pvVar2 + (-0x28 - (long)pvVar1)) / 0x28) * 0x28);
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x140);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x148);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0x148) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x128);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x130);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0x130) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x110);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x118);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0x118) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xf8);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x100);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0x100) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xe0);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0xe8);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0xe8) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 200);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0xd0);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0xd0) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xb0);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0xb8);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0xb8) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x98);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0xa0);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0xa0) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x80);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x88);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0x88) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x68);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x70);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0x70) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x58);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0x58) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x38);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x40);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0x40) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x28);
    if (pvVar2 != pvVar1) {
      *(unsigned long *)(this + 0x28) =
           (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
    }
    delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(this + 0x10);
  if (pvVar2 != pvVar1) {
    *(unsigned long *)(this + 0x10) =
         (~((long)pvVar2 + (-0x20 - (long)pvVar1)) & 0xffffffffffffffe0U) + (long)pvVar2;
  }
  delete(pvVar1);
  return;
}
}
