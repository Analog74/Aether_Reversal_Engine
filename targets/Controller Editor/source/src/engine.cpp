#include <ni/controller_editor/engine.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::ssl::detail {

void engine::do_accept(void*, unsigned long) {
/* WARNING: Load size is inaccurate */
  _SSL_accept(*param_1);
  return;
}

void engine::do_connect(void*, unsigned long) {
/* WARNING: Load size is inaccurate */
  _SSL_connect(*param_1);
  return;
}

void engine::do_read(void*, unsigned long) {
unsigned int uVar1;
  
  uVar1 = 0x7fffffff;
  if (param_2 < 0x7fffffff) {
    uVar1 = (unsigned int)param_2;
  }
  _SSL_read(*(unsigned long long *)this,param_1,uVar1);
  return;
}

void engine::do_write(void*, unsigned long) {
unsigned int uVar1;
  
  uVar1 = 0x7fffffff;
  if (param_2 < 0x7fffffff) {
    uVar1 = (unsigned int)param_2;
  }
  _SSL_write(*(unsigned long long *)this,param_1,uVar1);
  return;
}

engine::engine(ssl_ctx_st* param_1) {
}

void engine::native_handle() {
return *(unsigned long long *)this;
}

void engine::verify_callback_function(int, x509_store_ctx_st*) {
unsigned char uVar1;
  int idx;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  x509_store_ctx_st *local_30;
  
  uVar1 = 0;
  if (param_2 != (x509_store_ctx_st *)0x0) {
    idx = _SSL_get_ex_data_X509_STORE_CTX_idx();
    pvVar2 = _X509_STORE_CTX_get_ex_data(param_2,idx);
    if (pvVar2 != (void *)0x0) {
      uVar1 = 0;
      lVar3 = _SSL_get_ex_data(pvVar2,0);
      if (lVar3 != 0) {
        plVar4 = (long *)_SSL_get_ex_data(pvVar2,0);
        local_30 = param_2;
        uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4,param_1 != 0,&local_30);
      }
    }
  }
  return uVar1;
}

engine::~engine() {
~engine(this);
  return;
}
}
