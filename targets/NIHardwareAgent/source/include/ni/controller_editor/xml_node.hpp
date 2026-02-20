#pragma once
namespace pugi {
class xml_node {
public:
    virtual void append_attribute(char const*);
    virtual void append_child(char const*);
    virtual void attribute(char const*) const;
    virtual void attributes() const;
    virtual void child(char const*) const;
    virtual void child_value() const;
    virtual void empty() const;
    virtual void first_child() const;
    virtual void next_sibling() const;
    virtual void TEMPNAMEPLACEHOLDERVALUE() const;
    virtual void text() const;
    xml_node();
};
}
