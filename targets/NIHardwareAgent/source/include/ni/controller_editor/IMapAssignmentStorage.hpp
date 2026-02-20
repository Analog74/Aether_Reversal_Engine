#pragma once
namespace NI::NHL2 {
class IMapAssignmentStorage {
public:
    virtual void associateAssignmentsWithDeviceSection(unsigned int);
    virtual ~IMapAssignmentStorage();
};
}
