#pragma once
namespace pplx {
class invalid_operation {
public:
    invalid_operation(char const*);
    virtual ~invalid_operation();
};
}
