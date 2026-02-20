#pragma once
namespace NI::NHL2 {
class checkLockOrder {
public:
    checkLockOrder(unsigned int);
    virtual void reportViolation();
    virtual ~checkLockOrder();
};
}
