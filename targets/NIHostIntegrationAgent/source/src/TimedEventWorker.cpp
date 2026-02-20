#include <ni/controller_editor/TimedEventWorker.hpp>
namespace NI::dawcontrol {

void TimedEventWorker::notify() {
void **local_58;
  TimedEventWorker *local_50;
  void ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_100a44490;
  LOCK();
  *(int *)(this + 0xa8) = *(int *)(this + 0xa8) + 1;
  UNLOCK();
  local_58 = &PTR____func_100a4ffa8;
  local_50 = this;
  local_38 = &local_58;
  ServiceThread::dispatch(*(ServiceThread **)(this + 0x70),&local_58);
  if (&local_58 == local_38) {
    (*(code *)(*local_38)[4])();
  }
  else if (local_38 != (void ***)0x0) {
    (*(code *)(*local_38)[5])();
  }
  if (*(long *)PTR____stack_chk_guard_100a44490 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

void TimedEventWorker::stopTimer() {
scoped_locked_connection::disconnect((scoped_locked_connection *)(this + 0x80));
  return;
}

TimedEventWorker::~TimedEventWorker() {
~TimedEventWorker(this);
  delete(this);
  return;
}
}
