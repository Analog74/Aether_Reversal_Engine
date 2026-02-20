#pragma once
namespace pugi {
class xml_text {
public:
    virtual void _data_new();
    virtual void as_float(float) const;
    virtual void as_int(int) const;
    virtual void as_string(char const*) const;
    virtual void as_uint(unsigned int) const;
    xml_text();
};
}
