#pragma once
namespace Concurrency::streams {
class basic_ostream<unsigned char> {
public:
    virtual void _verify_and_throw(char const*) const;
};
}
