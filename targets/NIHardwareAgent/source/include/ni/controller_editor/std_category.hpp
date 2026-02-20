#pragma once
namespace boost::system::detail {
class std_category {
public:
    virtual void default_error_condition(int) const;
    virtual ~std_category();
};
}
