#pragma once
namespace web::json::details {
class _Boolean {
public:
    virtual void _copy_value();
    virtual void as_bool() const;
    virtual ~_Boolean();
};
}
