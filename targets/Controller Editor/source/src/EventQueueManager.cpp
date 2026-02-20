#include <ni/controller_editor/EventQueueManager.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::uret {

void EventQueueManager::clearQueueAndPrepareCache() {
unsigned long uVar1;
  void *pvVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  void *pvVar6;
  double *pdVar7;
  int iVar8;
  value *pvVar9;
  value *in_RSI;
  long *in_RDI;
  value *pvVar10;
  value *pvVar11;
  value *pvVar12;
  long lVar13;
  value *pvVar14;
  int iVar15;
  value *pvVar16;
  long lVar17;
  unsigned long uVar18;
  long *local_38;
  
  *in_RDI = 0;
  in_RDI[1] = 0;
  in_RDI[2] = 0;
  pvVar10 = in_RSI;
  // std code
  pvVar12 = *(value **)(in_RSI + 0x78);
  pvVar14 = *(value **)(in_RSI + 0x80);
  if (pvVar12 != pvVar14) {
    do {
      if (pvVar12[8] != (value)0x0) {
        pvVar9 = (value *)in_RDI[1];
        if (pvVar9 < (value *)in_RDI[2]) {
          pvVar10 = pvVar9;
          web::json::value::value(pvVar9,pvVar12);
          in_RDI[1] = (long)(pvVar9 + 8);
        }
        else {
          lVar13 = (long)pvVar9 - *in_RDI >> 3;
          uVar1 = lVar13 + 1;
          if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
            // std code
          }
          lVar17 = in_RDI[2] - *in_RDI;
          uVar18 = lVar17 >> 2;
          if (uVar18 < uVar1) {
            uVar18 = uVar1;
          }
          if (0xffffffffffffffe < (unsigned long)(lVar17 >> 3)) {
            uVar18 = 0x1fffffffffffffff;
          }
          if (uVar18 == 0) {
            pvVar6 = (void *)0x0;
          }
          else {
            if (0x1fffffffffffffff < uVar18) {
              // std code
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            pvVar6 = new char[uVar18 * 8];
          }
          pvVar9 = (value *)((long)pvVar6 + lVar13 * 8);
          pvVar2 = (void *)((long)pvVar6 + uVar18 * 8);
          pvVar10 = pvVar9;
          web::json::value::value(pvVar9,pvVar12);
          lVar13 = (long)pvVar6 + lVar13 * 8 + 8;
          pvVar11 = (value *)*in_RDI;
          pvVar16 = (value *)in_RDI[1];
          if (pvVar16 == pvVar11) {
            *in_RDI = (long)pvVar9;
            in_RDI[1] = lVar13;
            in_RDI[2] = (long)pvVar2;
          }
          else {
            do {
              pvVar9 = pvVar9 + -8;
              pvVar16 = pvVar16 + -8;
              pvVar10 = pvVar9;
              web::json::value::value(pvVar9,pvVar16);
            } while (pvVar11 != pvVar16);
            pvVar11 = (value *)*in_RDI;
            pvVar16 = (value *)in_RDI[1];
            *in_RDI = (long)pvVar9;
            in_RDI[1] = lVar13;
            in_RDI[2] = (long)pvVar2;
            while (pvVar16 != pvVar11) {
              pvVar10 = *(value **)(pvVar16 + -8);
              *(unsigned long long *)(pvVar16 + -8) = 0;
              pvVar16 = pvVar16 + -8;
              if (pvVar10 != (value *)0x0) {
                (**(code **)(*(long *)pvVar10 + 0xc0))();
              }
            }
          }
          if (pvVar11 != (value *)0x0) {
            delete(pvVar11);
            pvVar10 = pvVar11;
          }
        }
      }
      pvVar12 = pvVar12 + 0x40;
    } while (pvVar12 != pvVar14);
    pvVar12 = *(value **)(in_RSI + 0x78);
    pvVar14 = *(value **)(in_RSI + 0x80);
    while (pvVar14 != pvVar12) {
      pvVar10 = *(value **)(pvVar14 + -0x10);
      if (pvVar14 + -0x30 == pvVar10) {
        (**(code **)(*(long *)pvVar10 + 0x20))();
      }
      else if (pvVar10 != (value *)0x0) {
        (**(code **)(*(long *)pvVar10 + 0x28))();
      }
      pvVar10 = pvVar14 + -0x40;
      plVar3 = *(long **)(pvVar14 + -0x40);
      *(unsigned long long *)(pvVar14 + -0x40) = 0;
      pvVar14 = pvVar10;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0xc0))();
      }
    }
  }
  *(value **)(in_RSI + 0x80) = pvVar12;
  // std code
  lVar13 = in_RDI[1];
  uVar1 = *(unsigned long *)(in_RSI + 0x58);
  if (uVar1 < (unsigned long)(lVar13 - *in_RDI >> 3)) {
    web::json::value::value((value *)&local_38);
    pvVar12 = (value *)(lVar13 + uVar1 * -8);
    cVar5 = json::getProperty(pvVar12 + -8,(string *)(in_RSI + 0x60),(value *)&local_38);
    iVar15 = 0;
    plVar3 = local_38;
    if ((cVar5 != '\0') &&
       (cVar5 = web::json::value::is_integer((value *)&local_38), plVar3 = local_38, cVar5 != '\0'))
    {
      pdVar7 = (double *)web::json::value::as_number((value *)&local_38);
      plVar3 = local_38;
      if (*(int *)(pdVar7 + 1) == 2) {
        iVar15 = (int)(long)*pdVar7;
      }
      else {
        iVar15 = *(int *)pdVar7;
      }
    }
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      local_38 = (long *)0x0;
      (**(code **)(*plVar3 + 0xc0))();
    }
    pvVar14 = pvVar12;
    if ((iVar15 != 0) && (pvVar10 = (value *)in_RDI[1], pvVar12 != pvVar10)) {
      do {
        web::json::value::value((value *)&local_38);
        cVar5 = json::getProperty(pvVar12,(string *)(in_RSI + 0x60),(value *)&local_38);
        iVar8 = 0;
        plVar3 = local_38;
        if ((cVar5 != '\0') &&
           (cVar5 = web::json::value::is_integer((value *)&local_38), plVar3 = local_38,
           cVar5 != '\0')) {
          pdVar7 = (double *)web::json::value::as_number((value *)&local_38);
          plVar3 = local_38;
          if (*(int *)(pdVar7 + 1) == 2) {
            iVar8 = (int)(long)*pdVar7;
          }
          else {
            iVar8 = *(int *)pdVar7;
          }
        }
        local_38 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          local_38 = (long *)0x0;
          (**(code **)(*plVar3 + 0xc0))();
        }
        pvVar14 = pvVar12;
      } while ((iVar8 == iVar15) && (pvVar12 = pvVar12 + 8, pvVar14 = pvVar10, pvVar10 != pvVar12));
    }
    pvVar12 = (value *)*in_RDI;
    if (pvVar12 != pvVar14) {
      pvVar10 = (value *)in_RDI[1];
      if (pvVar10 != pvVar14) {
        do {
          web::json::value::operator=(pvVar12,pvVar14);
          pvVar14 = pvVar14 + 8;
          pvVar12 = pvVar12 + 8;
        } while (pvVar10 != pvVar14);
        pvVar14 = (value *)in_RDI[1];
      }
      while (pvVar14 != pvVar12) {
        plVar3 = *(long **)(pvVar14 + -8);
        *(unsigned long long *)(pvVar14 + -8) = 0;
        pvVar14 = pvVar14 + -8;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0xc0))();
        }
      }
      in_RDI[1] = (long)pvVar12;
    }
  }
  return in_RDI;
}

void EventQueueManager::pop(unsigned long) [clone .cold.1] {
long *plVar1;
  EventQueueManager *pEVar2;
  EventQueueManager *pEVar3;
  
  pEVar2 = *(EventQueueManager **)(param_1 + 8);
  pEVar3 = this;
  if (*(EventQueueManager **)(param_1 + 8) != this) {
    do {
      pEVar3 = *(EventQueueManager **)(pEVar2 + -0x10);
      if (pEVar2 + -0x30 == pEVar3) {
        (**(code **)(*(long *)pEVar3 + 0x20))();
      }
      else if (pEVar3 != (EventQueueManager *)0x0) {
        (**(code **)(*(long *)pEVar3 + 0x28))();
      }
      pEVar3 = pEVar2 + -0x40;
      plVar1 = *(long **)(pEVar2 + -0x40);
      *(unsigned long long *)(pEVar2 + -0x40) = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0xc0))();
      }
      pEVar2 = pEVar3;
    } while (this != pEVar3);
    pEVar3 = *(EventQueueManager **)param_1;
  }
  *(EventQueueManager **)(param_1 + 8) = this;
  delete(pEVar3);
  return;
}

void EventQueueManager::restoreCache() {
value *pvVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  value *pvVar5;
  long *local_68;
  long *local_60;
  unsigned int local_58 [2];
  unsigned long long local_50;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  if (((byte)this[0x40] & 1) == 0) {
    if ((byte)this[0x40] >> 1 == 0) return;
  }
  else if (*(long *)(this + 0x48) == 0) return;
  if (*(long *)(this + 0x58) != 0) {
    readJsonFromFile((uret *)&local_60,(path *)(this + 0x40));
    iVar3 = web::json::value::type((value *)&local_60);
    if (iVar3 == 4) {
      plVar4 = (long *)web::json::value::as_array((value *)&local_60);
      pvVar5 = (value *)*plVar4;
      pvVar1 = (value *)plVar4[1];
      if (pvVar5 != pvVar1) {
        do {
          cVar2 = json::validateEvent(pvVar5);
          if (cVar2 != '\0') {
            local_50 = 1;
            local_58[0] = 2;
            json::setProperty(pvVar5,(string *)&constants::property::was_cached,(variant *)local_58)
            ;
            // boost code
            variant<// boost code
            ::destroy_content((variant<// boost code
                               *)local_58);
            web::json::value::value((value *)&local_68,pvVar5);
            enqueue(this,(value *)&local_68);
            plVar4 = local_68;
            local_68 = (long *)0x0;
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0xc0))();
            }
          }
          pvVar5 = pvVar5 + 8;
        } while (pvVar1 != pvVar5);
      }
    }
    plVar4 = local_60;
    local_60 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0xc0))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

void EventQueueManager::storeCache() {
long *plVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_40;
  void *local_38;
  long *local_28;
  
  if (((byte)this[0x40] & 1) == 0) {
    if ((byte)this[0x40] >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(this + 0x48) == 0) {
    return;
  }
  if (*(long *)(this + 0x58) != 0) {
    clearQueueAndPrepareCache();
    json::array((json *)&local_28,(vector *)&local_40);
    writeJsonToFile((path *)(this + 0x40),(value *)&local_28);
    plVar1 = local_28;
    local_28 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0xc0))();
    }
    pvVar2 = local_40;
    pvVar3 = local_38;
    if (local_40 != (void *)0x0) {
      while (pvVar3 != pvVar2) {
        plVar1 = *(long **)((long)pvVar3 + -8);
        *(unsigned long long *)((long)pvVar3 + -8) = 0;
        pvVar3 = (void *)((long)pvVar3 + -8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0xc0))();
        }
      }
      local_38 = pvVar2;
      delete(local_40);
    }
  }
  return;
}

EventQueueManager::~EventQueueManager() {
void *pvVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0xa8),*(__tree_node **)(this + 0xb0));
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x90),*(__tree_node **)(this + 0x98));
  pvVar1 = *(void **)(this + 0x78);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = *(void **)(this + 0x80);
    pvVar4 = pvVar1;
    if (*(void **)(this + 0x80) != pvVar1) {
      do {
        plVar2 = *(long **)((long)pvVar3 + -0x10);
        if ((long *)((long)pvVar3 + -0x30) == plVar2) {
          (**(code **)(*plVar2 + 0x20))();
        }
        else if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x28))();
        }
        pvVar4 = (void *)((long)pvVar3 + -0x40);
        plVar2 = *(long **)((long)pvVar3 + -0x40);
        *(unsigned long long *)((long)pvVar3 + -0x40) = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0xc0))();
        }
        pvVar3 = pvVar4;
      } while (pvVar1 != pvVar4);
      pvVar4 = *(void **)(this + 0x78);
    }
    *(void **)(this + 0x80) = pvVar1;
    delete(pvVar4);
  }
  if (((byte)this[0x60] & 1) != 0) {
    delete(*(void **)(this + 0x70));
  }
  if (((byte)this[0x40] & 1) != 0) {
    delete(*(void **)(this + 0x50));
  }
  // std code
  return;
}
}
