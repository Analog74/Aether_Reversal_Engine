#include <ni/controller_editor/UpdateThread.hpp>
namespace NI::NHL2::SERVER::InstanceModeClient {

void UpdateThread::onInstancesUpdated() {
return;
}

void UpdateThread::updateInstances() {
long *plVar1;
  uint uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  char cVar7;
  int iVar8;
  size_t sVar9;
  void *pvVar10;
  __tree_node_base *p_Var11;
  __tree_node_base *p_Var12;
  InstanceList *this_00;
  int iVar13;
  unsigned long uVar14;
  __tree_node_base *p_Var15;
  unsigned int local_308;
  unsigned int uStack_304;
  unsigned int uStack_300;
  unsigned int uStack_2fc;
  unsigned int local_2f8;
  int local_2f4;
  unsigned int local_2e8;
  unsigned int uStack_2e4;
  unsigned int uStack_2e0;
  unsigned int uStack_2dc;
  int local_2d8;
  uint local_2d4;
  uint local_2c8;
  unsigned long local_2c0;
  unsigned long long uStack_2b8;
  void *local_2b0;
  UpdateThread *local_2a8;
  InstanceList *local_2a0;
  int local_294;
  unsigned long long local_290;
  size_t local_288;
  void *local_280;
  __tree_node_base *local_278;
  __tree_node_base *local_270;
  long lStack_268;
  int iStack_25c;
  int local_258 [4];
  uint local_248;
  char local_23c [516];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009cc2c8;
  local_278 = (__tree_node_base *)&local_270;
  local_270 = (__tree_node_base *)0x0;
  lStack_268 = 0;
  this_00 = (InstanceList *)(this + 0x48);
  Display::DataDefs::InstanceList::clearList(this_00);
  local_2f8 = 0x23436c6e;
  local_308 = 8;
  uStack_304 = 0x14;
  uStack_300 = 4;
  uStack_2fc = 0x3566775;
  plVar1 = *(long **)(*(long *)(this + 0x40) + 0x60);
  if ((plVar1 != (long *)0x0) &&
     (cVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_308), cVar7 != '\0')) {
    iStack_25c = 0;
    (**(code **)(**(long **)(this + 8) + 0x38))(*(long **)(this + 8),0x40436c6e,&iStack_25c);
    local_294 = local_2f4;
    if (local_2f4 != 0) {
      iVar13 = 0;
      local_2a8 = this;
      local_2a0 = this_00;
      do {
        local_2e8 = 8;
        uStack_2e4 = 0x14;
        uStack_2e0 = 4;
        uStack_2dc = 0x3636749;
        uVar3 = 8;
        uVar4 = 0x14;
        uVar5 = 4;
        uVar6 = 0x3636749;
        local_2d8 = iVar13;
        if ((*(long **)(*(long *)(this + 0x40) + 0x60) != (long *)0x0) &&
           (cVar7 = (**(code **)(**(long **)(*(long *)(this + 0x40) + 0x60) + 0x30))(),
           uVar2 = local_2d4, uVar3 = local_2e8, uVar4 = uStack_2e4, uVar5 = uStack_2e0,
           uVar6 = uStack_2dc, cVar7 != '\0')) {
          MessageGetString::MessageGetString((MessageGetString *)local_258,0x63674e);
          local_248 = uVar2;
          local_258[0] = local_258[0] + 4;
          plVar1 = *(long **)(*(long *)(this + 0x40) + 0x60);
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 0x30))(plVar1,local_258);
          }
          sVar9 = strlen(local_23c);
          if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
            // std code
          }
          if (sVar9 < 0x17) {
            local_290 = 0(local_290._1_7_,(char)sVar9 * '\x02');
            pvVar10 = (void *)((long)&local_290 + 1);
            if (sVar9 != 0) goto LAB_100082af8;
          }
          else {
            uVar14 = sVar9 + 0x10 & 0xfffffffffffffff0;
            pvVar10 = new(uVar14);
            local_290 = uVar14 | 1;
            local_288 = sVar9;
            local_280 = pvVar10;
LAB_100082af8:
            memcpy(pvVar10,local_23c,sVar9);
          }
          *(unsigned char *)((long)pvVar10 + sVar9) = 0;
          iVar8 = // std code
          this = local_2a8;
          this_00 = local_2a0;
          if (((iVar8 != 0) &&
              (iVar8 = // std code
              this_00 = local_2a0, iVar8 != 0)) &&
             (iVar8 = // std code
             this_00 = local_2a0, iVar8 != 0)) {
            local_2c8 = uVar2;
            // std code
            this_00 = local_2a0;
            this = local_2a8;
            if (local_270 == (__tree_node_base *)0x0) {
              p_Var12 = (__tree_node_base *)&local_270;
              p_Var15 = p_Var12;
LAB_100082bfa:
              p_Var11 = *(__tree_node_base **)p_Var15;
            }
            else {
              p_Var11 = local_270;
              p_Var15 = (__tree_node_base *)&local_270;
              do {
                while (p_Var12 = p_Var11, *(uint *)(p_Var12 + 0x20) <= local_2c8) {
                  if (local_2c8 <= *(uint *)(p_Var12 + 0x20)) goto LAB_100082bfa;
                  p_Var15 = p_Var12 + 8;
                  p_Var11 = *(__tree_node_base **)(p_Var12 + 8);
                  if (*(__tree_node_base **)(p_Var12 + 8) == (__tree_node_base *)0x0)
                  goto LAB_100082bfa;
                }
                p_Var11 = *(__tree_node_base **)p_Var12;
                p_Var15 = p_Var12;
              } while (*(__tree_node_base **)p_Var12 != (__tree_node_base *)0x0);
              p_Var11 = *(__tree_node_base **)p_Var12;
            }
            if (p_Var11 == (__tree_node_base *)0x0) {
              p_Var11 = (__tree_node_base *)new(0x40);
              *(uint *)(p_Var11 + 0x20) = local_2c8;
              *(void **)(p_Var11 + 0x38) = local_2b0;
              *(unsigned long *)(p_Var11 + 0x28) = local_2c0;
              *(unsigned long long *)(p_Var11 + 0x30) = uStack_2b8;
              local_2c0 = 0;
              uStack_2b8 = 0;
              local_2b0 = (void *)0x0;
              *(unsigned long long *)p_Var11 = 0;
              *(unsigned long long *)(p_Var11 + 8) = 0;
              *(__tree_node_base **)(p_Var11 + 0x10) = p_Var12;
              *(__tree_node_base **)p_Var15 = p_Var11;
              if (*(__tree_node_base **)local_278 != (__tree_node_base *)0x0) {
                p_Var11 = *(__tree_node_base **)p_Var15;
                local_278 = *(__tree_node_base **)local_278;
              }
              // std code
              lStack_268 = lStack_268 + 1;
            }
            if ((local_2c0 & 1) != 0) {
              delete(local_2b0);
            }
          }
          uVar3 = local_2e8;
          uVar4 = uStack_2e4;
          uVar5 = uStack_2e0;
          uVar6 = uStack_2dc;
          if ((local_290 & 1) != 0) {
            delete(local_280);
            uVar3 = local_2e8;
            uVar4 = uStack_2e4;
            uVar5 = uStack_2e0;
            uVar6 = uStack_2dc;
          }
        }
        uStack_2dc = uVar6;
        uStack_2e0 = uVar5;
        uStack_2e4 = uVar4;
        local_2e8 = uVar3;
        iVar13 = iVar13 + 1;
      } while (iVar13 != local_294);
    }
    p_Var15 = local_278;
    while (p_Var11 = p_Var15, p_Var11 != (__tree_node_base *)&local_270) {
      Display::DataDefs::InstanceList::pushBack
                (this_00,*(uint *)(p_Var11 + 0x20),(string *)(p_Var11 + 0x28));
      if (*(int *)(p_Var11 + 0x20) == iStack_25c) {
        *(int *)((ControllerUpdateThread *)this + 0x7450) =
             *(int *)((ControllerUpdateThread *)this + 0x744c) + -1;
      }
      p_Var12 = *(__tree_node_base **)(p_Var11 + 8);
      if (*(__tree_node_base **)(p_Var11 + 8) == (__tree_node_base *)0x0) {
        p_Var15 = *(__tree_node_base **)(p_Var11 + 0x10);
        if ((__tree_node_base *)*(__tree_node_base ***)*(__tree_node_base **)(p_Var11 + 0x10) !=
            p_Var11) {
          do {
            p_Var11 = *(__tree_node_base **)(p_Var11 + 0x10);
            p_Var15 = *(__tree_node_base **)(p_Var11 + 0x10);
          } while (*(__tree_node_base **)*(__tree_node_base **)(p_Var11 + 0x10) != p_Var11);
        }
      }
      else {
        do {
          p_Var15 = p_Var12;
          p_Var12 = *(__tree_node_base **)p_Var15;
        } while (p_Var12 != (__tree_node_base *)0x0);
      }
    }
    *(unsigned int *)((ControllerUpdateThread *)this + 0x7458) = 0;
    *(unsigned int *)((ControllerUpdateThread *)this + 0x7464) = 0;
    (**(code **)(*(long *)this + 0x50))(this);
    ControllerUpdateThread::invalidateDisplays((ControllerUpdateThread *)this,0);
    ControllerUpdateThread::invalidateLEDs((ControllerUpdateThread *)this);
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)&local_278,(__tree_node *)local_270);
  if (*(long *)PTR____stack_chk_guard_1009cc2c8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

UpdateThread::~UpdateThread() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
