#pragma once
namespace NI::dawcontrol {
class ServiceThread {
public:
    virtual void getInstance();
    virtual void masterTimerTick();
    ServiceThread();
    virtual void syncPendingMessages();
    virtual ~ServiceThread();
};
}
