#pragma once
namespace boost::container::pmr {
class new_delete_resource_imp {
public:
    virtual void do_allocate(unsigned long, unsigned long);
    virtual ~new_delete_resource_imp();
};
}
