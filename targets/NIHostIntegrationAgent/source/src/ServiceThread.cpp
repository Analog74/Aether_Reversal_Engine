#include <ni/controller_editor/ServiceThread.hpp>
namespace NI::dawcontrol {

void ServiceThread::getInstance() {
long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  unsigned long long *puVar5;
  ServiceThread *this_00;
  bool bVar6;
  
  if ((getInstance()::instance == '\0') &&
     (iVar3 = ___cxa_guard_acquire(&getInstance()::instance), iVar3 != 0)) {
    ___cxa_atexit(// std code
                  0x100000000);
    ___cxa_guard_release(&getInstance()::instance);
  }
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  if (0 != (unsigned long long *)0x0) {
    plVar4 = (long *)// std code
    *(long **)(this + 8) = plVar4;
    lVar2 = (long)getInstance()::instance;
    if (plVar4 != (long *)0x0) {
      *(ServiceThread **)this = getInstance()::instance;
      if (lVar2 != 0) {
        return this;
      }
      LOCK();
      plVar1 = plVar4 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        // std code
      }
    }
  }
  puVar5 = (unsigned long long *)new(0x180);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR____shared_ptr_emplace_100a44f18;
  this_00 = (ServiceThread *)(puVar5 + 4);
  ServiceThread(this_00);
  LOCK();
  puVar5[2] = puVar5[2] + 1;
  UNLOCK();
  bVar6 = 0 != (unsigned long long *)0x0;
  getInstance()::instance = this_00;
  0 = puVar5;
  if (bVar6) {
    // std code
  }
  *(ServiceThread **)this = this_00;
  *(unsigned long long **)(this + 8) = puVar5;
  return this;
}

void ServiceThread::masterTimerTick() {
long lVar1;
  kqueue_reactor *this_00;
  unsigned long uVar2;
  wait_op *pwVar3;
  long lVar4;
  ServiceThread *local_30;
  
  if (*(long *)(this + 0xc0) == 0) {
    return;
  }
  lVar4 = 0x7fffffffffffffff;
  lVar1 = *(long *)(this + 0xe0);
  uVar2 = // std code
  if ((long)uVar2 < 0) {
    if ((long)((uVar2 ^ 0x7fffffffffffffff) + 1) < 0x2625a01) goto LAB_10000a011;
    lVar4 = -0x8000000000000000;
  }
  else if (uVar2 < 0x7ffffffffd9da600) {
LAB_10000a011:
    lVar4 = uVar2 + 40000000;
  }
  if (this[0xf0] != (ServiceThread)0x0) {
    // boost code
    cancel_timer<// boost code
              (*(kqueue_reactor **)(lVar1 + 0x58),(timer_queue *)(lVar1 + 0x28),
               (per_timer_data *)(this + 0xf8),0xffffffffffffffff);
    this[0xf0] = (ServiceThread)0x0;
  }
  *(long *)(this + 0xe8) = lVar4;
  // std code
  nod::signal_type<nod::multithread_policy,void()>::operator()
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x30));
  // std code
  lVar1 = *(long *)(this + 0xe0);
  local_30 = this;
  pwVar3 = (wait_op *)// boost code
  *(unsigned long long *)pwVar3 = 0;
  *(code **)(pwVar3 + 8) =
       // boost code
       wait_handler<NI::dawcontrol::ServiceThread::masterTimerTick()::$_3,// boost code
       ::do_complete;
  *(unsigned int *)(pwVar3 + 0x10) = 0;
  *(unsigned long long *)(pwVar3 + 0x18) = 0;
  *(unsigned long long *)(pwVar3 + 0x20) = 0;
  *(unsigned long long *)(pwVar3 + 0x28) = 0;
  *(unsigned long long *)(pwVar3 + 0x30) = 0;
  *(ServiceThread **)(pwVar3 + 0x38) = local_30;
  if (*(long *)(this + 0x140) == 0) {
    if (*(char **)(PTR_typeinfo_100a44290 + 8) ==
        "N5boost4asio10io_context19basic_executor_typeINSt3__19allocatorIvEELm0EEE")
    goto LAB_10000a112;
  }
  else {
    lVar4 = (*(code *)**(unsigned long long **)(this + 0x148))();
    if (*(char **)(lVar4 + 8) ==
        "N5boost4asio10io_context19basic_executor_typeINSt3__19allocatorIvEELm0EEE") {
LAB_10000a112:
      // boost code
      goto LAB_10000a11a;
    }
  }
  // boost code
  prefer<// boost code
            (pwVar3 + 0x40,this + 0x120,
             &// boost code
LAB_10000a11a:
  this_00 = *(kqueue_reactor **)(lVar1 + 0x58);
  this[0xf0] = (ServiceThread)0x1;
  // boost code
  schedule_timer<// boost code
            (this_00,(timer_queue *)(lVar1 + 0x28),(time_type *)(this + 0xe8),
             (per_timer_data *)(this + 0xf8),pwVar3);
  return;
}

ServiceThread::ServiceThread() {
io_context *this_00;
  code *pcVar1;
  int iVar2;
  unsigned long long *puVar3;
  unsigned long long uVar4;
  __thread_struct *this_01;
  pthread_t local_48;
  unsigned long long local_40;
  _Unwind_Exception *local_38;
  
  *(unsigned long long *)this = 0;
  this_00 = (io_context *)(this + 8);
  // boost code
  puVar3 = (unsigned long long *)new(0x58);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR____shared_ptr_emplace_100a44ec8;
  // std code
  *(recursive_mutex **)(this + 0x18) = (recursive_mutex *)(puVar3 + 3);
  *(unsigned long long **)(this + 0x20) = puVar3;
  *(unsigned long long *)(this + 0x30) = 0x32aaaba7;
  *(unsigned long long *)(this + 0x38) = 0;
  *(unsigned long long *)(this + 0x40) = 0;
  *(unsigned long long *)(this + 0x48) = 0;
  *(unsigned long long *)(this + 0x50) = 0;
  *(unsigned long long *)(this + 0x58) = 0;
  *(unsigned long long *)(this + 0x60) = 0;
  *(unsigned long long *)(this + 0x68) = 0;
  *(ServiceThread **)(this + 0x70) = this + 0x90;
  *(unsigned long long *)(this + 0x78) = 0;
  *(unsigned long long *)(this + 0x80) = 1;
  *(unsigned long long *)(this + 0xc0) = 0;
  *(unsigned long long *)(this + 200) = 0;
  *(unsigned long long *)(this + 0xd0) = 0;
  local_48 = (pthread_t)
             &// boost code
              typeid_wrapper<// boost code
              ::typeinfo;
  local_40 = 0;
  uVar4 = // boost code
                    (*(service_registry **)(this + 8),(key *)&local_48,
                     // boost code
                     create<// boost code
                     ,this_00);
  *(unsigned long long *)(this + 0xe0) = uVar4;
  *(unsigned long long *)(this + 0xf8) = 0;
  *(unsigned long long *)(this + 0x100) = 0;
  *(unsigned long long *)(this + 0x108) = 0xffffffffffffffff;
  *(unsigned long long *)(this + 0x110) = 0;
  *(unsigned long long *)(this + 0x118) = 0;
  *(void ***)(this + 0x148) =
       &// boost code
        target_fns_table<// boost code
        ::fns_with_execute;
  *(void ***)(this + 0x138) =
       &// boost code
        object_fns_table<// boost code
        ::fns;
  *(io_context **)(this + 0x120) = this_00;
  *(ServiceThread **)(this + 0x140) = this + 0x120;
  *(void ***)(this + 0x150) =
       &// boost code
        any_executor<// boost code
        ::prop_fns_table<// boost code
        fns;
  *(unsigned long long *)(this + 0xe8) = 0;
  this[0xf0] = (ServiceThread)0x0;
  this_01 = (__thread_struct *)new(8);
  // std code
  puVar3 = (unsigned long long *)new(0x10);
  *puVar3 = this_01;
  puVar3[1] = this;
  iVar2 = _pthread_create(&local_48,(pthread_attr_t *)0x0,
                          (void **)// std code
                                   __thread_proxy_abi_v15006_<// std code
                          ,puVar3);
  if (iVar2 != 0) {
    // std code
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*(long *)this == 0) {
    *(pthread_t *)this = local_48;
    local_48 = (pthread_t)0x0;
    // std code
    
  }
  local_38 = (_Unwind_Exception *)// std code
  // std code
  delete(this_01);
  // boost code
  io_object_impl<// boost code
  ::~io_object_impl((io_object_impl<// boost code
                     *)(this + 0xe0));
  nod::signal_type<nod::multithread_policy,void()>::~signal_type
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x30));
  // std code
            ((shared_ptr<// std code
  // boost code
  // std code
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(local_38);
}

void ServiceThread::syncPendingMessages() {
pthread_mutex_t *ppVar1;
  long lVar2;
  int iVar3;
  unsigned long long uVar4;
  scheduler_operation *psVar5;
  pthread_mutex_t *local_f8;
  char local_f0;
  pthread_mutex_t local_e8;
  pthread_mutex_t local_a8;
  pthread_cond_t local_68;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100a44490;
  // boost code
  uVar4 = // boost code
  psVar5 = (scheduler_operation *)
           // boost code
           allocate<// boost code
  *(unsigned long long *)psVar5 = 0;
  *(code **)(psVar5 + 8) =
       // boost code
       executor_op<// boost code
       ::do_complete;
  *(unsigned int *)(psVar5 + 0x10) = 0;
  *(pthread_mutex_t **)(psVar5 + 0x18) = &local_e8;
  // boost code
            (*(scheduler **)(this + 0x10),psVar5,false);
  local_f0 = '\0';
  local_f8 = &local_e8;
  // boost code
  lVar2 = local_30;
  if (local_38 != 0) {
    do {
      // boost code
    } while (lVar2 == local_30);
  }
  ppVar1 = local_f8;
  if (local_f0 != '\0') {
    do {
      iVar3 = _pthread_mutex_unlock(ppVar1);
    } while (iVar3 == 4);
  }
  do {
    iVar3 = _pthread_mutex_destroy(&local_a8);
  } while (iVar3 == 4);
  do {
    iVar3 = _pthread_cond_destroy(&local_68);
  } while (iVar3 == 4);
  do {
    iVar3 = _pthread_mutex_destroy(&local_e8);
  } while (iVar3 == 4);
  if (*(long *)PTR____stack_chk_guard_100a44490 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

ServiceThread::~ServiceThread() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  // boost code
  // std code
  // boost code
  io_object_impl<// boost code
  ::~io_object_impl((io_object_impl<// boost code
                     *)(this + 0xe0));
  nod::signal_type<nod::multithread_policy,void()>::~signal_type
            ((signal_type<nod::multithread_policy,void()> *)(this + 0x30));
  plVar3 = *(long **)(this + 0x20);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
    }
  }
  // boost code
  // std code
  return;
}
}
