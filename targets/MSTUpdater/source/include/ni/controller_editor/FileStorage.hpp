#pragma once
namespace NI::GP {
class FileStorage {
public:
    virtual void close();
    virtual ~FileStorage();
};
}
