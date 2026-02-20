#pragma once
namespace web::json {
class json_exception {
public:
    json_exception(char const*);
    virtual ~json_exception();
};
}
