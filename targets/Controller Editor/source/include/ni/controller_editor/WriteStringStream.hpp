#pragma once
namespace anyrpc {
class WriteStringStream {
private:
    // Based on decompiled access patterns
    void* vtable;        // offset 0
    char padding[7];     // offset 1-7
    unsigned char flags; // offset 8
    char padding2[7];    // offset 9-15
    unsigned long size;  // offset 16 (0x10)
    void* data;          // offset 24 (0x18)
public:
    virtual void* GetBuffer(unsigned long, unsigned long&);
    virtual unsigned long Length();
    virtual ~WriteStringStream();
};
}
