#pragma once
namespace anyrpc {
class WriteSegmentedStream {
public:
    virtual void AddBuffer();
    virtual ~WriteSegmentedStream();
};
}
