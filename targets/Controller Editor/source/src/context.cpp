#include <ni/controller_editor/context.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::ssl {

void context::set_default_verify_paths() {
int iVar1;
  unsigned long uVar2;
  long lVar3;
  char *pcVar4;
  error_code *peVar5;
  byte bVar6;
  BIO *pBStack_60;
  void **ppuStack_58;
  unsigned long uStack_50;
  unsigned long uStack_40;
  unsigned long local_28;
  void **ppuStack_20;
  unsigned long local_18;
  
  local_28 = 0;
  ppuStack_20 = (void **)0x0;
  local_18 = 0;
  _ERR_clear_error();
  iVar1 = _SSL_CTX_set_default_verify_paths(*(unsigned long long *)this);
  if (iVar1 != 1) {
    uVar2 = _ERR_get_error();
    if (0 >> 1 == 0x595588bd12bf6fe8) {
      bVar6 = (int)uVar2 != 0;
    }
    else {
      bVar6 = (**(code **)(asio::error::get_ssl_category()::instance + 0x30))
                        (&asio::error::get_ssl_category()::instance,uVar2 & 0xffffffff);
    }
    local_18 = (unsigned long)bVar6 | 2;
    local_28 = uVar2 & 0xffffffff;
    ppuStack_20 = &asio::error::get_ssl_category()::instance;
    if ((bVar6 & 1) != 0) {
      pcVar4 = "set_default_verify_paths";
      peVar5 = (error_code *)&local_28;
      asio::detail::do_throw_error(peVar5,"set_default_verify_paths");
      uStack_40 = uVar2;
      lVar3 = _SSL_new(pcVar4);
      *(long *)peVar5 = lVar3;
      if (lVar3 == 0) {
        uVar2 = _ERR_get_error();
        pBStack_60 = (BIO *)0x0;
        ppuStack_58 = (void **)0x0;
        if (0 >> 1 == 0x595588bd12bf6fe8) {
          bVar6 = (int)uVar2 != 0;
        }
        else {
          bVar6 = (**(code **)(asio::error::get_ssl_category()::instance + 0x30))
                            (&asio::error::get_ssl_category()::instance,uVar2 & 0xffffffff);
        }
        uStack_50 = (unsigned long)bVar6 | 2;
        pBStack_60 = (BIO *)CONCAT44(pBStack_60._4_4_,(int)uVar2);
        ppuStack_58 = &asio::error::get_ssl_category()::instance;
        if ((bVar6 & 1) != 0) {
          pcVar4 = "engine";
          peVar5 = (error_code *)&pBStack_60;
          asio::detail::do_throw_error(peVar5,"engine");
          ssl::detail::engine::engine((engine *)peVar5,(ssl_ctx_st *)pcVar4);
          return;
        }
        lVar3 = *(long *)peVar5;
      }
      _SSL_ctrl(lVar3,0x21,1);
      _SSL_ctrl(*(unsigned long long *)peVar5,0x21,2);
      _SSL_ctrl(*(unsigned long long *)peVar5,0x21,0x10);
      pBStack_60 = (BIO *)0x0;
      _BIO_new_bio_pair(&pBStack_60,0,(BIO **)(peVar5 + 8),0);
      _SSL_set_bio(*(unsigned long long *)peVar5,pBStack_60);
      return;
    }
  }
  return;
}

void context::set_options(long param_1) {
}

context::~context() {
long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (*(long *)this != 0) {
    plVar2 = (long *)_SSL_CTX_get_default_passwd_cb_userdata();
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      _SSL_CTX_set_default_passwd_cb_userdata(*(unsigned long long *)this,0);
    }
    lVar3 = _SSL_CTX_get_ex_data(*(unsigned long long *)this,0);
    if (lVar3 != 0) {
      plVar2 = (long *)_SSL_CTX_get_ex_data(*(unsigned long long *)this,0);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      _SSL_CTX_set_ex_data(*(unsigned long long *)this,0,0);
    }
    _SSL_CTX_free(*(unsigned long long *)this);
  }
  plVar2 = *(long **)(this + 0x10);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      // std code
      return;
    }
  }
  return;
}
}
