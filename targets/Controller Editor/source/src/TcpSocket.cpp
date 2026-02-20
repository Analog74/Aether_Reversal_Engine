#include <ni/controller_editor/TcpSocket.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

void TcpSocket::Receive(char*, unsigned long, unsigned long&, bool&, int) {
uint uVar1;
  char *pcVar2;
  unsigned long uVar3;
  unsigned long *puVar4;
  uint uVar5;
  int iVar6;
  unsigned long uVar7;
  ssize_t sVar8;
  uint *puVar9;
  uint local_118 [34];
  unsigned long local_90;
  int local_88;
  timeval local_80;
  timeval local_70;
  char *local_60;
  __darwin_time_t local_58;
  unsigned long local_50;
  unsigned long *local_48;
  bool *local_40;
  int local_34;
  
  if (param_5 < 0) {
    param_5 = *(int *)(this + 0x10);
  }
  if (param_5 < 0) {
    param_5 = 0;
  }
  local_60 = param_1;
  _gettimeofday(&local_80,(void *)0x0);
  pcVar2 = local_60;
  *param_3 = 0;
  *param_4 = false;
  if (param_2 != 0) {
    local_58 = local_80.tv_sec;
    local_34 = local_80.tv_usec;
    uVar7 = 0;
    local_50 = param_2;
    local_48 = param_3;
    local_40 = param_4;
    while( true ) {
      uVar3 = local_50;
      sVar8 = _recv(*(int *)(this + 8),pcVar2 + uVar7,(long)((int)local_50 - (int)uVar7),0);
      puVar9 = (uint *)___error();
      puVar4 = local_48;
      uVar5 = *puVar9;
      *(uint *)(this + 0xc) = uVar5;
      iVar6 = (int)sVar8;
      if (iVar6 < 1) {
        if (iVar6 == 0) {
          *local_40 = true;
          return 0;
        }
        *local_40 = uVar5 == 0x36;
        if (uVar5 == 0x36) {
          return 0;
        }
        if (0x24 < uVar5) {
          return 0;
        }
        if ((0x1800000011U >> ((unsigned long)uVar5 & 0x3f) & 1) == 0) {
          return 0;
        }
      }
      else {
        uVar7 = *local_48;
        *local_48 = (long)iVar6 + uVar7;
        pcVar2[(long)iVar6 + uVar7] = '\0';
        if (uVar3 <= *local_48) {
          return 1;
        }
      }
      _gettimeofday(&local_70,(void *)0x0);
      iVar6 = (int)((unsigned long)((long)(local_70.tv_usec - local_34) * -0x10624dd3) >> 0x20);
      uVar5 = ((int)local_70.tv_sec - (int)local_58) * -1000 + param_5 +
              ((iVar6 >> 6) - (iVar6 >> 0x1f));
      if (((int)uVar5 < 1) || (uVar1 = *(uint *)(this + 8), (int)uVar1 < 0)) break;
      local_90 = (unsigned long)uVar5 / 1000;
      local_88 = (uVar5 % 1000) * 1000;
      local_118[0x1c] = 0;
      local_118[0x1d] = 0;
      local_118[0x1e] = 0;
      local_118[0x1f] = 0;
      local_118[0x18] = 0;
      local_118[0x19] = 0;
      local_118[0x1a] = 0;
      local_118[0x1b] = 0;
      local_118[0x14] = 0;
      local_118[0x15] = 0;
      local_118[0x16] = 0;
      local_118[0x17] = 0;
      local_118[0x10] = 0;
      local_118[0x11] = 0;
      local_118[0x12] = 0;
      local_118[0x13] = 0;
      local_118[0xc] = 0;
      local_118[0xd] = 0;
      local_118[0xe] = 0;
      local_118[0xf] = 0;
      local_118[8] = 0;
      local_118[9] = 0;
      local_118[10] = 0;
      local_118[0xb] = 0;
      local_118[4] = 0;
      local_118[5] = 0;
      local_118[6] = 0;
      local_118[7] = 0;
      local_118[0] = 0;
      local_118[1] = 0;
      local_118[2] = 0;
      local_118[3] = 0;
      iVar6 = ___darwin_check_fd_set_overflow(uVar1,local_118,0);
      if (iVar6 != 0) {
        local_118[uVar1 >> 5] = local_118[uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
      }
      iVar6 = _select_1050(*(int *)(this + 8) + 1,local_118,0,0,&local_90);
      if ((iVar6 < 1) || (uVar7 = *puVar4, local_50 <= uVar7)) break;
    }
  }
  *(unsigned int *)(this + 0xc) = 0x23;
  return 1;
}

void TcpSocket::Send(char const*, unsigned long, unsigned long&, int) {
uint uVar1;
  uint uVar2;
  int iVar3;
  ssize_t sVar4;
  uint *puVar5;
  unsigned long uVar6;
  uint local_f8 [32];
  unsigned long local_78;
  int local_70;
  timeval local_68;
  timeval local_58;
  char *local_48;
  __darwin_time_t local_40;
  int local_34;
  
  if (param_4 < 0) {
    param_4 = *(int *)(this + 0x10);
  }
  if (param_4 < 0) {
    param_4 = 0;
  }
  *param_3 = 0;
  local_48 = param_1;
  _gettimeofday(&local_68,(void *)0x0);
  local_40 = local_68.tv_sec;
  local_34 = local_68.tv_usec;
  do {
    sVar4 = _send(*(int *)(this + 8),local_48 + *param_3,(long)((int)param_2 - (int)*param_3),
                  0x80000);
    puVar5 = (uint *)___error();
    uVar2 = *puVar5;
    uVar6 = (unsigned long)uVar2;
    *(uint *)(this + 0xc) = uVar2;
    iVar3 = (int)sVar4;
    if (iVar3 < 0) {
      if ((0x24 < uVar2) || (uVar6 = (unsigned long)uVar2, (0x1800000011U >> (uVar6 & 0x3f) & 1) == 0))
      return;
    }
    else {
      uVar6 = (long)iVar3 + *param_3;
      *param_3 = uVar6;
      if (param_2 <= uVar6) {
        return 0((int7)(uVar6 >> 8),-1 < iVar3);
      }
    }
    _gettimeofday(&local_58,(void *)0x0);
    iVar3 = (int)((unsigned long)((long)(local_58.tv_usec - local_34) * -0x10624dd3) >> 0x20);
    uVar2 = ((int)local_58.tv_sec - (int)local_40) * -1000 + param_4 +
            ((iVar3 >> 6) - (iVar3 >> 0x1f));
    if (((int)uVar2 < 1) || (uVar1 = *(uint *)(this + 8), (int)uVar1 < 0)) break;
    local_78 = (unsigned long)uVar2 / 1000;
    local_70 = (uVar2 % 1000) * 1000;
    local_f8[0x1c] = 0;
    local_f8[0x1d] = 0;
    local_f8[0x1e] = 0;
    local_f8[0x1f] = 0;
    local_f8[0x18] = 0;
    local_f8[0x19] = 0;
    local_f8[0x1a] = 0;
    local_f8[0x1b] = 0;
    local_f8[0x14] = 0;
    local_f8[0x15] = 0;
    local_f8[0x16] = 0;
    local_f8[0x17] = 0;
    local_f8[0x10] = 0;
    local_f8[0x11] = 0;
    local_f8[0x12] = 0;
    local_f8[0x13] = 0;
    local_f8[0xc] = 0;
    local_f8[0xd] = 0;
    local_f8[0xe] = 0;
    local_f8[0xf] = 0;
    local_f8[8] = 0;
    local_f8[9] = 0;
    local_f8[10] = 0;
    local_f8[0xb] = 0;
    local_f8[4] = 0;
    local_f8[5] = 0;
    local_f8[6] = 0;
    local_f8[7] = 0;
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_f8[2] = 0;
    local_f8[3] = 0;
    iVar3 = ___darwin_check_fd_set_overflow(uVar1,local_f8,0);
    if (iVar3 != 0) {
      local_f8[uVar1 >> 5] = local_f8[uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
    }
    iVar3 = _select_1050(*(int *)(this + 8) + 1,0,local_f8,0,&local_78);
  } while (0 < iVar3);
  *(unsigned int *)(this + 0xc) = 0x23;
  return 0;
}

TcpSocket::~TcpSocket() {
*(void ***)this = &PTR__Socket_101b82d38;
  if (*(int *)(this + 8) != -1) {
    _close(*(int *)(this + 8));
  }
  delete(this);
  return;
}
}
