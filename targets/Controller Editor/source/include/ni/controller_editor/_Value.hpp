#pragma once
namespace web::json::details {
class _Value {
public:
    virtual void as_double() const;
    virtual void as_integer() const;
    virtual void as_number();
    virtual void as_string() const;
    virtual void cnst_index(unsigned long) const;
    virtual void get_element(unsigned long) const;
    virtual void is_double() const;
    virtual void is_integer() const;
};
}
