#pragma once
namespace NI::NHL2 {
class IPCReceivePort {
public:
    virtual void stopReceiveLoop();
    virtual ~IPCReceivePort();
};
}
