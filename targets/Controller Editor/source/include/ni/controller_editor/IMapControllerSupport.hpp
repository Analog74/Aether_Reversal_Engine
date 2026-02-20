#pragma once
namespace NI::NHL2 {
class IMapControllerSupport {
public:
    virtual void onDeviceEvent(bool);
    virtual void onFocusEvent(bool);
    virtual void onFocusGained();
};
}
