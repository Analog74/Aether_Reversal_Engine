#pragma once
namespace NI::UIA {
class TimerJob {
public:
    virtual void endOfJob();
    virtual void runSynchronous();
    virtual void start();
    virtual ~TimerJob();
};
}
