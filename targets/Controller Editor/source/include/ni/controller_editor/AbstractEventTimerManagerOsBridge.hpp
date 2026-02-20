#pragma once
namespace NI::UIA {
class AbstractEventTimerManagerOsBridge {
public:
    virtual void notifySubscribers();
    virtual ~AbstractEventTimerManagerOsBridge();
};
}
