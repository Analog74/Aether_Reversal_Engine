#pragma once
namespace NI::NHL2::IPCPort {
class OSImpl {
public:
    virtual void callback(__CFMessagePort*, int, __CFData const*, void*);
    virtual void onPortInvalidated(__CFMessagePort*, void*);
    virtual void receiveLoop();
    virtual void startReceiveLoop();
};
}
