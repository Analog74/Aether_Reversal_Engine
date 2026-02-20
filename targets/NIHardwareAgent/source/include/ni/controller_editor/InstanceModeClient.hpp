#pragma once
namespace NI::NHL2::SERVER {
class InstanceModeClient {
public:
    virtual void activate();
    virtual void deactivate();
    virtual ~InstanceModeClient();
};
}
