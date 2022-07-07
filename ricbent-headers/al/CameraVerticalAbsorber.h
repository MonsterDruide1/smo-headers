#pragma once

namespace al { 

class CameraVerticalAbsorber
{
public:
    CameraVerticalAbsorber(al::CameraPoser const*, bool);
    load(al::ByamlIter const&);
    start(sead::Vector3<float> const&, al::CameraStartInfo const&);
    isValid() const;
    update();
    makeLookAtCamera(sead::LookAtCamera*) const;
    liberateAbsorb();
    exeAbsorb();
    exeFollow();
    exeFollowGround();
    exeFollowClimbPole();
    exeFollowAbsolute();
    isAbsorbing() const;
    invalidate();
    tryResetAbsorbVecIfInCollision(sead::Vector3<float> const&);
    ~CameraVerticalAbsorber();
};

} 
