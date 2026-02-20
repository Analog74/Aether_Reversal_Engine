#pragma once
namespace NI {
class MaschineJamModelBase {
public:
    virtual void getDefaultPageClassName(unsigned int) const;
    virtual void getDefaultPageName(unsigned int, unsigned long) const;
};
}
