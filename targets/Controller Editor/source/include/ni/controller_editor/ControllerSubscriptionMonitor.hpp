#pragma once
namespace NI {
class ControllerSubscriptionMonitor {
public:
    virtual void checkDeviceChanges();
    virtual void checkServiceAvailability(bool);
    virtual void inAppStartup() const;
    virtual void isServiceRunning() const;
    virtual void runSubscriptionMonitor();
    virtual void startMonitoring();
    virtual void subscribeAll() [clone .cold.1];
    virtual void unsubscribeAll();
    virtual ~ControllerSubscriptionMonitor();
};
}
