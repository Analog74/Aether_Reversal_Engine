#pragma once
namespace web::json::details {
class _Array {
public:
    virtual void as_array() const;
    virtual void index(unsigned long);
    virtual ~_Array();
};
}
