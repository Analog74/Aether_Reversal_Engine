#pragma once
namespace bmidilib {
class Manager {
public:
    virtual void getPort(char const*, int);
    virtual ~Manager();
};
}
