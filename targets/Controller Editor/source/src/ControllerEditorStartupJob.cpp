#include <ni/controller_editor/ControllerEditorStartupJob.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

ControllerEditorStartupJob::~ControllerEditorStartupJob() {
*(void ***)this = &PTR__ControllerEditorStartupJob_101af47d8;
  if (*(long *)(this + 0x20) != 0) {
    // std code
  }
  // std code
  UIA::TimerJob::~TimerJob((TimerJob *)this);
  delete(this);
  return;
}
}
