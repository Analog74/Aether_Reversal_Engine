#pragma once
namespace web::json {
class value {
public:
    virtual void number(unsigned long long);
    virtual void object(bool);
};
}
