#include <ni/controller_editor/SharedLEDs.hpp>
namespace NI::dawcontrol::hw {

void SharedLEDs::getLed(unsigned int) {
long lVar1;
  unsigned long uVar2;
  unsigned long long *puVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  __tree_node_base _Var6;
  long lVar7;
  __tree_node_base *p_Var8;
  unsigned long long *puVar9;
  long lVar10;
  unsigned long long *puVar11;
  
  // std code
  lVar1 = *(long *)(this + 8);
  if (*(long *)(this + 0x10) == lVar1) {
    _Var6 = (__tree_node_base)0x0;
  }
  else {
    uVar2 = *(unsigned long *)(this + 0x20);
    lVar10 = (unsigned long)((uint)uVar2 & 0x7f) * 0x20 + *(long *)(lVar1 + (uVar2 >> 7) * 8);
    lVar7 = (unsigned long)((uint)(uVar2 + *(long *)(this + 0x28)) & 0x7f) * 0x20 +
            *(long *)(lVar1 + (uVar2 + *(long *)(this + 0x28) >> 7) * 8);
    if (lVar10 != lVar7) {
      plVar5 = (long *)(lVar1 + (uVar2 >> 7) * 8);
      do {
        if (*(unsigned long long **)(lVar10 + 0x10) == (unsigned long long *)0x0) {
          puVar9 = (unsigned long long *)(lVar10 + 0x10);
        }
        else {
          puVar3 = *(unsigned long long **)(lVar10 + 0x10);
          puVar11 = (unsigned long long *)(lVar10 + 0x10);
LAB_10004ae7f:
          do {
            puVar9 = puVar3;
            if (*(uint *)((long)puVar9 + 0x1c) <= param_1) {
              if (*(uint *)((long)puVar9 + 0x1c) < param_1) {
                puVar11 = puVar9 + 1;
                puVar3 = (unsigned long long *)puVar9[1];
                if ((unsigned long long *)puVar9[1] != (unsigned long long *)0x0) goto LAB_10004ae7f;
              }
              p_Var4 = (__tree_node_base *)*puVar11;
              goto joined_r0x00010004aebd;
            }
            puVar3 = (unsigned long long *)*puVar9;
            puVar11 = puVar9;
          } while ((unsigned long long *)*puVar9 != (unsigned long long *)0x0);
        }
        p_Var4 = (__tree_node_base *)*puVar9;
        puVar11 = puVar9;
joined_r0x00010004aebd:
        if (p_Var4 == (__tree_node_base *)0x0) {
          p_Var4 = (__tree_node_base *)new(0x28);
          *(uint *)(p_Var4 + 0x1c) = param_1;
          *(void2 *)(p_Var4 + 0x20) = 0;
          *(unsigned long long *)p_Var4 = 0;
          *(unsigned long long *)(p_Var4 + 8) = 0;
          *(unsigned long long **)(p_Var4 + 0x10) = puVar9;
          *puVar11 = p_Var4;
          p_Var8 = p_Var4;
          if (**(long **)(lVar10 + 8) != 0) {
            *(long *)(lVar10 + 8) = **(long **)(lVar10 + 8);
            p_Var8 = (__tree_node_base *)*puVar11;
          }
          // std code
                    (*(__tree_node_base **)(lVar10 + 0x10),p_Var8);
          *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + 1;
          if (p_Var4[0x20] != (__tree_node_base)0x0) goto LAB_10004af0e;
LAB_10004af3d:
          _Var6 = p_Var4[0x21];
          goto LAB_10004af44;
        }
        if (p_Var4[0x20] == (__tree_node_base)0x0) goto LAB_10004af3d;
LAB_10004af0e:
        lVar10 = lVar10 + 0x20;
        if (lVar10 - *plVar5 == 0x1000) {
          lVar10 = plVar5[1];
          plVar5 = plVar5 + 1;
        }
      } while (lVar10 != lVar7);
    }
    _Var6 = (__tree_node_base)0x0;
  }
LAB_10004af44:
  // std code
  return _Var6;
}

void SharedLEDs::removePlane(unsigned int) {
unsigned long uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  long *plVar7;
  long *plVar8;
  uint *puVar9;
  
  // std code
  lVar3 = *(long *)(this + 8);
  if (*(long *)(this + 0x10) == lVar3) goto LAB_10004a26e;
  uVar1 = *(unsigned long *)(this + 0x20);
  plVar7 = (long *)(lVar3 + (uVar1 >> 7) * 8);
  puVar5 = *(uint **)(lVar3 + (uVar1 >> 7) * 8);
  puVar6 = puVar5 + (unsigned long)((uint)uVar1 & 0x7f) * 8;
  puVar4 = (uint *)((unsigned long)((uint)(uVar1 + *(long *)(this + 0x28)) & 0x7f) * 0x20 +
                   *(long *)(lVar3 + (uVar1 + *(long *)(this + 0x28) >> 7) * 8));
  if (puVar6 == puVar4) {
LAB_10004a114:
    plVar8 = plVar7;
    puVar9 = puVar6;
    if (puVar6 == puVar4) goto LAB_10004a21e;
    while( true ) {
    }
    lVar3 = *(long *)(this + 8);
    puVar4 = puVar9;
    if (*(long *)(this + 0x10) != lVar3) goto LAB_10004a226;
LAB_10004a25c:
    if (puVar4 == (uint *)0x0) goto LAB_10004a26e;
  }
  else {
    do {
      if (*puVar6 == param_1) goto LAB_10004a114;
      puVar6 = puVar6 + 8;
      if ((long)puVar6 - (long)puVar5 == 0x1000) {
        puVar5 = (uint *)plVar7[1];
        plVar7 = plVar7 + 1;
        puVar6 = puVar5;
      }
    } while (puVar6 != puVar4);
LAB_10004a21e:
    if (*(long *)(this + 0x10) == lVar3) goto LAB_10004a25c;
LAB_10004a226:
    if (puVar4 == (uint *)((unsigned long)((uint)(*(long *)(this + 0x28) + *(long *)(this + 0x20)) & 0x7f) *
                           0x20 + *(long *)(lVar3 + ((unsigned long)(*(long *)(this + 0x28) +
                                                            *(long *)(this + 0x20)) >> 7) * 8)))
    goto LAB_10004a26e;
  }
  // std code
  deque<NI::dawcontrol::hw::SharedLEDs::LEDPlane,// std code
  ::erase(this,plVar7,puVar4);
LAB_10004a26e:
  this[0x30] = (SharedLEDs)0x1;
  // std code
  return;
}

SharedLEDs::~SharedLEDs() {
unsigned long long *puVar1;
  long lVar2;
  unsigned long long *puVar3;
  
  // std code
  // std code
  __deque_base<NI::dawcontrol::hw::SharedLEDs::LEDPlane,// std code
  ::clear((__deque_base<NI::dawcontrol::hw::SharedLEDs::LEDPlane,// std code
           *)this);
  puVar3 = *(unsigned long long **)(this + 8);
  puVar1 = *(unsigned long long **)(this + 0x10);
  if (puVar3 != puVar1) {
    do {
      delete((void *)*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
    lVar2 = *(long *)(this + 0x10) - *(long *)(this + 8);
    if (lVar2 != 0) {
      *(unsigned long *)(this + 0x10) = *(long *)(this + 0x10) + ~(lVar2 - 8U >> 3) * 8;
    }
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  delete(*(void **)this);
  return;
}
}
