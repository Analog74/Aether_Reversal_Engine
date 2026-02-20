#pragma once
namespace NI::NHL2 {
class MsgDisplayDraw {
public:
    virtual void getResult() const;
    virtual void setPictureDataSize(unsigned int);
};
}
