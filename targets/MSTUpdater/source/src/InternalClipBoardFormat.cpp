#include <ni/controller_editor/InternalClipBoardFormat.hpp>
namespace NI::UIA {

void InternalClipBoardFormat::FormatHandle() {
int iVar1;
  unsigned long *puVar2;
  unsigned long long *puVar3;
  char *pcVar4;
  
  unsigned long long local_40;
  unsigned long local_38;
  char *local_30;
  void **local_28 [2];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_1002272e0;
  if ((FormatHandle()::handle != '\0') ||
     (iVar1 = ___cxa_guard_acquire(&FormatHandle()::handle), iVar1 == 0)) goto LAB_1000894f3;
  local_28[0] = &ClipBoardFormatHandle::s_StdFileListFormat;
  fmt::format(local_58,"application.internalclipboardformat.{0}",0xd,local_28);
  puVar2 = (unsigned long *)// std code
  local_30 = (char *)puVar2[2];
  local_40 = *puVar2;
  local_38 = puVar2[1];
  puVar2[2] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  if ((local_40 & 1) == 0) {
    pcVar4 = (char *)((long)&local_40 + 1);
LAB_1000894a5:
    FormatHandle()::handle =
         _CFStringCreateWithCString(*(unsigned long long *)PTR__kCFAllocatorDefault_1002272f8,pcVar4,0x600);
  }
  else {
    puVar3 = (unsigned long long *)PTR__kUTTypeUTF16PlainText_100227340;
    if ((local_30 != "native-instruments.unicodetext") &&
       (puVar3 = (unsigned long long *)PTR__kUTTypeFileURL_100227338, pcVar4 = local_30,
       local_30 != "native-instruments.filelist")) goto LAB_1000894a5;
    FormatHandle()::handle = *puVar3;
  }
  // std code
  // std code
  ___cxa_guard_release(&FormatHandle()::handle);
LAB_1000894f3:
  if (*(long *)PTR____stack_chk_guard_1002272e0 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return &FormatHandle()::handle;
}

void InternalClipBoardFormat::readRawData(void const*, unsigned long) {
unsigned long long uVar1;
  
  *(unsigned long long *)((long)param_1 + 0x10) = *(unsigned long long *)param_2;
  uVar1 = *(unsigned long long *)(param_2 + 8);
  *(unsigned long long *)((long)param_1 + 0x18) = uVar1;
  return 0((int7)((unsigned long)uVar1 >> 8),1);
}

void InternalClipBoardFormat::writeRawData(void*) const {
*(unsigned long long *)param_1 = *(unsigned long long *)(this + 0x10);
  *(unsigned long long *)((long)param_1 + 8) = *(unsigned long long *)(this + 0x18);
  return;
}

InternalClipBoardFormat::~InternalClipBoardFormat() {
delete(this);
  return;
}
}
