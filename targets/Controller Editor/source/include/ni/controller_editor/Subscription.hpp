#pragma once
namespace NI::NHL2 {
class Subscription {
public:
    virtual void onConnectionDropped(unsigned long long);
    virtual void queryConnectedDevices();
    virtual void unsubscribe();
    virtual ~Subscription();
};
}
