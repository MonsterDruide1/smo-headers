#pragma once

namespace al { 

class ParabolicPathMovement
{
public:
    ParabolicPathMovement(al::LiveActor*, bool);
    start(sead::Vector3<float> const&, float, float, int, int);
    setOrbitParams(sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, int, int);
    start(sead::Vector3<float> const&, float, int);
    isReachedEnd() const;
    isOverTheTop() const;
    calcRate() const;
    setVelocity(float);
    exeMove();
    ~ParabolicPathMovement();
};

} 
