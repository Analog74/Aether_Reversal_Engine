#pragma once
namespace std {
class stringbuf {
public:
    virtual void overflow(int);
    virtual void pbackfail(int);
    virtual void str() const;
    virtual void underflow();
    virtual ~stringbuf();
};
}
