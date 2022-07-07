#pragma once

namespace al { 

class SeShapeSphere
{
public:
    SeShapeSphere(al::SeShapePose*, float const*, al::SeShapeInfo3DSphere const*);
    calcNearlestPosition(sead::Vector3<float> const*, sead::Vector3<float>&, float);
    updatePosition(al::IAudioListener const*, bool);
    setPositionRandom(al::IAudioListener const*, float, float, bool);
    ~SeShapeSphere();
};

} 
