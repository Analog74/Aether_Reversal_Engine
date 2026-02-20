#pragma once
namespace NI::UIA {
class AggregatedTimerJob {
public:
    virtual void doPartOfJob();
    virtual void updateProgress();
    virtual ~AggregatedTimerJob();
};
}
