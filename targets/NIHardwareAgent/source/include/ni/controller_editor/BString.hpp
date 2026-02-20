#pragma once
namespace Bome {
class BString {
public:
    BString(char const*, int, int);
    virtual void createEmpty(int);
    virtual void equals(char const*) const;
    virtual void format(char const*, ...);
    virtual void isEmpty() const;
    virtual void isNotEmpty() const;
    virtual void setCapacity(int) const;
    virtual void startsWith(char const*, int) const;
    virtual void substr(int, int) const;
    virtual void toCFString() const;
    virtual void toUTF8() const;
    virtual ~BString();
};
}
