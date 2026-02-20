#pragma once
namespace pplx {
class task_completion_event<unsigned long long> {
public:
    virtual void _CancelInternal() const [clone .cold.1];
};
}
