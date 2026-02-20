#pragma once
namespace ni {
class symbol {
public:
    virtual void hash() const;
    virtual void TEMPNAMEPLACEHOLDERVALUE(char const*) const;
    virtual void string() const;
    symbol(char const*, unsigned long);
};
}
