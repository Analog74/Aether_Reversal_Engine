#pragma once
namespace boost::any {
class holder<unsigned int> {
public:
    virtual void clone() const;
    virtual void type() const;
    virtual void ~holder();
};
}
