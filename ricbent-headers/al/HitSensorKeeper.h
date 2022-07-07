#pragma once

namespace al { 

class HitSensorKeeper
{
public:
    HitSensorKeeper(int);
    addSensor(al::LiveActor*, char const*, unsigned int, float, unsigned short, sead::Vector3<float> const*, sead::Matrix34<float> const*, sead::Vector3<float> const&);
    update();
    getSensorNum() const;
    getSensor(int) const;
    attackSensor();
    clear();
    validate();
    invalidate();
    validateBySystem();
    invalidateBySystem();
    getSensor(char const*) const;
};

} 
