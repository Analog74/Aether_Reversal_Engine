#pragma once
namespace boost::filesystem {
class path {
public:
    virtual void append_v3(char const*, char const*);
    virtual void find_relative_path() const;
    virtual void root_name() const;
    virtual void root_path() const;
    virtual ~path();
};
}
