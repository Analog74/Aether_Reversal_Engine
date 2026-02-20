#pragma once
namespace pplx::details {
class _CancellationTokenState {
public:
    virtual void _Cancel();
    virtual ~_CancellationTokenState();
};
}
