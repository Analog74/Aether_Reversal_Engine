#pragma once
namespace pplx::details {
class _RefCounter {
public:
    virtual void _Destroy();
    virtual ~_RefCounter();
};
}
