#pragma once
namespace NI::NHL2 {
class MsgDisplayDraw {
public:
    virtual void getUpdateRect() const;
    virtual void setResult(bool);
};
}
