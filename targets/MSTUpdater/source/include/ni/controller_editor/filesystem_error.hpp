#pragma once
namespace boost::filesystem {
class filesystem_error {
public:
    virtual void what() const;
    virtual ~filesystem_error();
};
}
