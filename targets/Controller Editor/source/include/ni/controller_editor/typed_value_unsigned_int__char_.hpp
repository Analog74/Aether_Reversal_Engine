#pragma once
namespace boost::program_options {
class typed_value<unsigned int, char> {
public:
    virtual void is_composing() const;
    virtual void is_required() const;
    virtual void max_tokens() const;
    virtual void min_tokens() const;
    virtual void ~typed_value();
};
}
