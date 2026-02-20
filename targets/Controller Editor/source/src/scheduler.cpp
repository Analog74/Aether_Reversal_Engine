#include <ni/controller_editor/scheduler.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::detail {

void scheduler::can_dispatch() {
long *plVar1;
  
  plVar1 = (long *)_pthread_getspecific
                             (call_stack<// boost code
                              ::top_);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return false;
    }
    if ((scheduler *)*plVar1 == this) break;
    plVar1 = (long *)plVar1[2];
  }
  return plVar1[1] != 0;
}

void scheduler::init_task() {
scheduler *psVar1;
  scheduler sVar2;
  scheduler sVar3;
  unsigned long uVar4;
  long *plVar5;
  
  sVar2 = this[0x78];
  if (sVar2 != (scheduler)0x0) {
    _pthread_mutex_lock((pthread_mutex_t *)(this + 0x38));
  }
  if ((this[0x109] == (scheduler)0x0) && (*(long *)(this + 0xc0) == 0)) {
    plVar5 = (long *)(**(code **)(this + 200))(*(unsigned long long *)(this + 0x18));
    *(long **)(this + 0xc0) = plVar5;
    psVar1 = this + 0xd0;
    *(unsigned long long *)(this + 0xd0) = 0;
    if (*(long **)(this + 0x100) == (long *)0x0) {
      *(scheduler **)(this + 0x100) = psVar1;
      *(scheduler **)(this + 0xf8) = psVar1;
      sVar3 = this[0x78];
    }
    else {
      **(long **)(this + 0x100) = (long)psVar1;
      *(scheduler **)(this + 0x100) = psVar1;
      sVar3 = this[0x78];
    }
    if ((sVar3 != (scheduler)0x0) &&
       (uVar4 = *(unsigned long *)(this + 0xb8), *(unsigned long *)(this + 0xb8) = uVar4 | 1, 1 < uVar4)) {
      if (sVar2 != (scheduler)0x0) {
        _pthread_mutex_unlock((pthread_mutex_t *)(this + 0x38));
      }
      _pthread_cond_signal((pthread_cond_t *)(this + 0x88));
      return;
    }
    if ((plVar5 != (long *)0x0) && (this[0xe8] == (scheduler)0x0)) {
      this[0xe8] = (scheduler)0x1;
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    if ((sVar2 != (scheduler)0x0) && (this[0x78] != (scheduler)0x0)) {
      _pthread_mutex_unlock((pthread_mutex_t *)(this + 0x38));
    }
  }
  else if (sVar2 != (scheduler)0x0) {
    _pthread_mutex_unlock((pthread_mutex_t *)(this + 0x38));
  }
  return;
}

void scheduler::stop() {
scheduler sVar1;
  bool bVar2;
  bool bVar3;
  
  if (this[0x78] == (scheduler)0x0) {
    this[0x108] = (scheduler)0x1;
    bVar3 = true;
    bVar2 = true;
    sVar1 = this[0xe8];
  }
  else {
    _pthread_mutex_lock((pthread_mutex_t *)(this + 0x38));
    this[0x108] = (scheduler)0x1;
    if (this[0x78] != (scheduler)0x0) {
      this[0xb8] = (scheduler)((byte)this[0xb8] | 1);
      _pthread_cond_broadcast((pthread_cond_t *)(this + 0x88));
    }
    bVar3 = false;
    bVar2 = false;
    sVar1 = this[0xe8];
  }
  if ((sVar1 == (scheduler)0x0) && (bVar2 = bVar3, *(long **)(this + 0xc0) != (long *)0x0)) {
    this[0xe8] = (scheduler)0x1;
    (**(code **)(**(long **)(this + 0xc0) + 8))();
  }
  if (!bVar2) {
    _pthread_mutex_unlock((pthread_mutex_t *)(this + 0x38));
  }
  return;
}

scheduler::~scheduler() {
~scheduler(this);
  delete(this);
  return;
}
}
