#pragma once
namespace boost::uuids::detail {
class random_provider_base {
public:
    virtual void get_random_bytes(void*, unsigned long);
    random_provider_base();
};
}
