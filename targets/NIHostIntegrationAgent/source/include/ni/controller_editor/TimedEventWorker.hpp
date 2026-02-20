#pragma once
namespace NI::dawcontrol {
class TimedEventWorker {
public:
    virtual void notify();
    virtual void stopTimer();
    virtual ~TimedEventWorker();
};
}
