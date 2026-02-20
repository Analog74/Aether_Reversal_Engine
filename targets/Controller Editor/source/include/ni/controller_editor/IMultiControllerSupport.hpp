#pragma once
namespace NI {
class IMultiControllerSupport {
public:
    virtual void applyIdToMapping(unsigned char);
    virtual void getModelInstanceID() const;
    virtual void setModelInstanceID(unsigned int);
};
}
