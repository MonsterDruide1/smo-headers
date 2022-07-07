#pragma once

namespace al { 

class CameraInterpole
{
public:
    CameraInterpole();
    start(al::CameraTicket const*, float, int);
    update(sead::LookAtCamera const&);
    isActive() const;
    makeLookAtCamera(sead::LookAtCamera*) const;
    lerpFovyDegree(float);
    exeDeactive();
    exeActiveHermite();
    exeActiveHermiteDistanceHV();
    exeActiveRotateAxisY();
    exeActiveBrigade();
    ~CameraInterpole();
};

} 
