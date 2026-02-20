#pragma once
namespace boost {
class condition_variable_any {
public:
    virtual void notify_all();
};
}
