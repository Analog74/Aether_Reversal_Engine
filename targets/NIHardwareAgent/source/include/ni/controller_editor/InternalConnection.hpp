#pragma once
namespace NI::NHL2::SERVER {
class InternalConnection {
public:
    virtual void processMessageQueue();
    virtual ~InternalConnection();
};
}
