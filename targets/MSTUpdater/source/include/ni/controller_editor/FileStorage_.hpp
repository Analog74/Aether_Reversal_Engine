#pragma once
namespace NI::GP::MultiPartStorage<NI::GP {
class FileStorage> {
public:
    virtual void closePart(int);
    virtual void flush();
    virtual void getCurrentStorageSize();
    virtual void getMaxAllowedPartCount() const;
    virtual void getMaxAllowedPartSize() const;
    virtual void getMaxAllowedStorageSize() const;
    virtual void getMaximumPartSizeForCurrentMode(int);
    virtual void getPartOffset(int);
    virtual void getPartSize(int);
    virtual void isOpen() const;
    virtual void openPartStorageAt(int);
    virtual void setMaxAllowedPartCount(long long);
    virtual void setMaxAllowedPartSize(long long);
    virtual void setMaxAllowedStorageSize(long long);
    virtual void ~MultiPartStorage();
};
}
