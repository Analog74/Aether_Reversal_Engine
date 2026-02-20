#include <ni/controller_editor/InstanceModeClient.hpp>
namespace NI::dawcontrol::hw::komplete_kontrol::mk2 {

void InstanceModeClient::instances() const {
pair_conflict *ppVar1;
  code *pcVar2;
  pair_conflict *ppVar3;
  pair_conflict *ppVar4;
  long in_RSI;
  unsigned long long *in_RDI;
  unsigned long uVar5;
  
  // std code
  *in_RDI = 0;
  in_RDI[1] = 0;
  in_RDI[2] = 0;
  ppVar4 = *(pair_conflict **)(in_RSI + 0x90);
  ppVar1 = *(pair_conflict **)(in_RSI + 0x98);
  uVar5 = (long)ppVar1 - (long)ppVar4;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) {
      // std code
      vector<// std code
      ::__throw_length_error_abi_v15006_();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    ppVar3 = (pair_conflict *)new(uVar5);
    *in_RDI = ppVar3;
    in_RDI[1] = ppVar3;
    in_RDI[2] = ppVar3 + ((long)ppVar1 - (long)ppVar4 >> 6) * 0x40;
    ppVar4 = // std code
             __uninitialized_allocator_copy_abi_v15006_<// std code
                       ((allocator *)(in_RDI + 2),ppVar4,ppVar1,ppVar3);
    in_RDI[1] = ppVar4;
  }
  in_RDI[3] = *(unsigned long long *)(in_RSI + 0xa8);
  // std code
  return;
}

void InstanceModeClient::updateInstances() {
InstanceModeClient *pIVar1;
  byte bVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  void *pvVar7;
  int *local_50;
  int *local_48;
  unsigned long long uStack_40;
  
  // std code
  *(unsigned int *)(this + 0xac) = *(unsigned int *)(*(long *)(this + 0x88) + 0x27cc);
  listInstances();
  pIVar1 = this + 0x90;
  pvVar3 = *(void **)pIVar1;
  if (pvVar3 != (void *)0x0) {
    pvVar5 = *(void **)(this + 0x98);
    pvVar7 = pvVar3;
    if (pvVar5 != pvVar3) {
      do {
        if ((*(byte *)((long)pvVar5 + -0x20) & 1) == 0) {
          bVar2 = *(byte *)((long)pvVar5 + -0x38);
        }
        else {
          delete(*(void **)((long)pvVar5 + -0x10));
          bVar2 = *(byte *)((long)pvVar5 + -0x38);
        }
        if ((bVar2 & 1) != 0) {
          delete(*(void **)((long)pvVar5 + -0x28));
        }
        pvVar5 = (void *)((long)pvVar5 + -0x40);
      } while (pvVar5 != pvVar3);
      pvVar7 = *(void **)pIVar1;
    }
    *(void **)(this + 0x98) = pvVar3;
    delete(pvVar7);
    *(long *)pIVar1 = 0;
    *(unsigned long long *)(this + 0x98) = 0;
    *(unsigned long long *)(this + 0xa0) = 0;
  }
  *(int **)(this + 0x90) = local_50;
  *(int **)(this + 0x98) = local_48;
  *(unsigned long long *)(this + 0xa0) = uStack_40;
  if (local_50 != local_48) {
    iVar4 = *(int *)(this + 0xac);
    piVar6 = local_50;
    do {
      if (*piVar6 == iVar4) {
        if (piVar6 != local_48) goto LAB_10004e3f6;
        break;
      }
      piVar6 = piVar6 + 0x10;
    } while (piVar6 != local_48);
    iVar4 = *local_50;
LAB_10004e3f6:
    *(int *)(this + 0xa8) = iVar4;
  }
  // std code
  return;
}
}
