#include <ni/controller_editor/streambuf_unsigned_char_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace Concurrency::streams {

void streambuf<unsigned char>::create_istream() const {
long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  runtime_error *this;
  long *in_RSI;
  
  cVar4 = (**(code **)(*in_RSI + 0x10))();
  if (cVar4 != '\0') {
    plVar3 = (long *)in_RSI[2];
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    basic_istream<unsigned_char>::basic_istream<unsigned_char>();
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
    return;
  }
  this = (runtime_error *)___cxa_allocate_exception(0x10);
  // std code
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_101ab4310,PTR__runtime_error_101ab40c0);
}

void streambuf<unsigned char>::create_ostream() const {
long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  runtime_error *this;
  long *in_RSI;
  
  cVar4 = (**(code **)(*in_RSI + 0x18))();
  if (cVar4 != '\0') {
    plVar3 = (long *)in_RSI[2];
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    basic_ostream<unsigned_char>::basic_ostream();
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
    return;
  }
  this = (runtime_error *)___cxa_allocate_exception(0x10);
  // std code
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_101ab4310,PTR__runtime_error_101ab40c0);
}
}
