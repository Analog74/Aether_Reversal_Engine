#pragma once
namespace NI::GP {
class Region {
public:
    virtual void moveBy(int, int);
    virtual ~Region();
};
}
