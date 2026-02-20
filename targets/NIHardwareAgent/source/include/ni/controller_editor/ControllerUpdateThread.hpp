#pragma once
namespace NI::NHL2 {
class ControllerUpdateThread {
public:
    virtual void invalidateDisplays(unsigned int);
    virtual void invalidateLEDs();
    virtual void onControllerAvailable(bool);
    virtual void onThreadDoIdleTasks();
    virtual void performPendingUpdates();
    virtual void runLoop();
    virtual ~ControllerUpdateThread();
};
}
