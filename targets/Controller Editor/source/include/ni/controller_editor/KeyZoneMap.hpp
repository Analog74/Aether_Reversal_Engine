#pragma once
namespace NI::NHL2::Komplete::KontrolMK1 {
class KeyZoneMap {
public:
    virtual void createInitialKeyZone() [clone .cold.1];
    virtual void deleteKeyZone(unsigned long) [clone .cold.2];
    virtual void isKeyZoneDefinitionConsistent() const;
};
}
