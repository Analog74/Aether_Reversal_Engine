#pragma once
namespace boost::sync {
class runtime_exception {
public:
    runtime_exception(int, char const*);
    virtual ~runtime_exception();
};
}
