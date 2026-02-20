#pragma once
namespace ni {
class symbol {
public:
    virtual void hash() const;
    symbol(char const*, unsigned long);
};
}
