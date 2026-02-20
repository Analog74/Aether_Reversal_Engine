#pragma once
namespace boost {
class container {
public:
    virtual void throw_bad_alloc();
    virtual void throw_length_error(char const*);
};
}
