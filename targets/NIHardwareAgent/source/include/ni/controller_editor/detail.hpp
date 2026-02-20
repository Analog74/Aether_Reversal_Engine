#pragma once
namespace boost::system {
class detail {
public:
    virtual void snprintf(char*, unsigned long, char const*, ...);
};
}
