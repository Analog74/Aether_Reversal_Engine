#pragma once
namespace pugi {
class xml_attribute {
public:
    virtual void set_value(float);
    virtual void value() const;
    xml_attribute();
};
}
