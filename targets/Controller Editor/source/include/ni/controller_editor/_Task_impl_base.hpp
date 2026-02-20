#pragma once
namespace pplx::details {
class _Task_impl_base {
public:
    virtual void _Wait();
    virtual ~_Task_impl_base();
};
}
