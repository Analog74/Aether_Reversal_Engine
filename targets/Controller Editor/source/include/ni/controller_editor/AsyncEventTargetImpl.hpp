#pragma once
namespace NI::UIA {
class AsyncEventTargetImpl {
public:
    virtual void deInitPlatform();
    virtual void initPlatform(bool);
};
}
