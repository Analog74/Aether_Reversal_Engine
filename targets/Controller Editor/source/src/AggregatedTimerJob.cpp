#include <ni/controller_editor/AggregatedTimerJob.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void AggregatedTimerJob::doPartOfJob() {
AggregatedTimerJob *pAVar1;
  char cVar2;
  unsigned long long unaff_R14;
  unsigned long uVar3;
  
  if (*(AggregatedTimerJob **)(this + 0x38) == this + 0x20) {
    uVar3 = 0;
  }
  else {
    cVar2 = (**(code **)(**(long **)(*(AggregatedTimerJob **)(this + 0x38) + 0x10) + 0x48))();
    uVar3 = 0((int7)((unsigned long)unaff_R14 >> 8),1);
    if (cVar2 == '\0') {
      (**(code **)(**(long **)(*(long *)(this + 0x38) + 0x10) + 0x50))();
      do {
        pAVar1 = *(AggregatedTimerJob **)(*(long *)(this + 0x38) + 8);
        *(AggregatedTimerJob **)(this + 0x38) = pAVar1;
        if (pAVar1 == this + 0x20) break;
        cVar2 = (**(code **)(**(long **)(pAVar1 + 0x10) + 0x30))();
      } while (cVar2 == '\0');
    }
  }
  return uVar3 & 0xffffffff;
}

void AggregatedTimerJob::updateProgress() {
if (*(AggregatedTimerJob **)(this + 0x38) != this + 0x20) {
                    /* WARNING: Could not recover jumptable at 0x0001006c5c69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(AggregatedTimerJob **)(this + 0x38) + 0x10) + 0x40))();
    return;
  }
  return;
}

AggregatedTimerJob::~AggregatedTimerJob() {
~AggregatedTimerJob(this);
  delete(this);
  return;
}
}
