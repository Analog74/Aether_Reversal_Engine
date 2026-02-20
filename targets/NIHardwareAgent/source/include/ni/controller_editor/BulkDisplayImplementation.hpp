#pragma once
namespace NI::NHL2::SERVER {
class BulkDisplayImplementation {
public:
    virtual void resetDisplayContrasts();
    virtual void retrieveDisplayContrasts();
};
}
