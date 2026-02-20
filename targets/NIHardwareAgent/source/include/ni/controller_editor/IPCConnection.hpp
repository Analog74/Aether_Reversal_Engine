#pragma once
namespace NI::NHL2::SERVER {
class IPCConnection {
public:
    virtual void reset();
    virtual ~IPCConnection();
};
}
