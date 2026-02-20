#pragma once
namespace NI::GP {
class Region {
public:
    virtual void contains(int, int) const;
    virtual void moveBy(int, int);
    virtual ~Region();
};
}
