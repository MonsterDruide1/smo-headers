#pragma once

namespace al { 

class CameraTargetBase
{
public:
    isInMoonGravity() const;
    isClimbPole() const;
    isGrabCeil() const;
    isWallCatch() const;
    isInvalidMoveByInput() const;
    isEnableEndAfterInterpole() const;
    update();
    getRequestDistance() const;
    calcGravity(sead::Vector3<float>*) const;
    isCollideGround() const;
    isInWater() const;
    CameraTargetBase();
    calcSide(sead::Vector3<float>*) const;
    calcUp(sead::Vector3<float>*) const;
    calcFront(sead::Vector3<float>*) const;
    calcVelocity(sead::Vector3<float>*) const;
};

} 
