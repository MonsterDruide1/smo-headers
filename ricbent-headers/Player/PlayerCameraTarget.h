#pragma once

class PlayerCameraTarget
{
public:
    PlayerCameraTarget(al::LiveActor const*);
    update();
    calcTrans(sead::Vector3<float>*) const;
    isCollideGround() const;
    isInWater() const;
    isInMoonGravity() const;
    isClimbPole() const;
    isGrabCeil() const;
    isWallCatch() const;
    isInvalidMoveByInput() const;
    isEnableEndAfterInterpole() const;
};
