#pragma once
namespace std {
class length_error {
public:
    length_error(char const*);
    virtual ~length_error();
};
}
