#pragma once
namespace web::json::details {
class _Object {
public:
    virtual void as_object() const;
    virtual ~_Object();
};
}
