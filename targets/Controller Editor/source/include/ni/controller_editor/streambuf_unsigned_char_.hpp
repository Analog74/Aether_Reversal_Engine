#pragma once
namespace Concurrency::streams {
class streambuf<unsigned char> {
public:
    virtual void create_istream() const;
    virtual void create_ostream() const;
};
}
