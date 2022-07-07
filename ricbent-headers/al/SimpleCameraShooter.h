#pragma once

namespace al { 

class SimpleCameraShooter
{
public:
    SimpleCameraShooter(char const*);
    calcAspectRatioByScreenSize(int, int);
    calcCameraPos(sead::Vector3<float>*, al::IUseCollision const*) const;
    calcFrontDir(sead::Vector3<float>*) const;
    checkCollision(float, al::IUseCollision const*) const;
    applyCameraWithCollision(sead::LookAtCamera*, al::IUseCollision const*) const;
    applyProjection(sead::PerspectiveProjection*) const;
    lookAt(sead::Vector3<float> const&);
    applyLimitation();
    rotateYaw(float);
    rotatePitch(float);
};

} 
