#pragma once
namespace boost::system {
class error_category {
public:
    virtual void default_error_condition(int) const;
    virtual ~error_category();
};
}
