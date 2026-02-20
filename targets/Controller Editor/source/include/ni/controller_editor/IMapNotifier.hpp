#pragma once
namespace NI::NHL2 {
class IMapNotifier {
public:
    virtual void onAnyCapacitiveTouchChanged(bool);
    virtual ~IMapNotifier();
};
}
