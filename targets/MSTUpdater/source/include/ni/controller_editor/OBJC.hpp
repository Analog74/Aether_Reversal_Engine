#pragma once
namespace NI::GP {
class OBJC {
public:
    virtual void getIvarFloat(objc_object*, char const*);
    virtual void getIvarPtr(objc_object*, char const*);
    virtual void getIvarUInt32(objc_object*, char const*);
    virtual void setIvarFloat(objc_object*, char const*, float);
    virtual void setIvarPtr(objc_object*, char const*, objc_object*);
    virtual void setIvarUInt32(objc_object*, char const*, unsigned int);
};
}
