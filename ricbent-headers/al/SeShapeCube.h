#pragma once

namespace al { 

class SeShapeCube
{
public:
    SeShapeCube(al::SeShapePose*, sead::Vector3<float> const*, al::SeShapeInfo3DCube const*);
    calcNearlestPosition(sead::Vector3<float> const*, sead::Vector3<float>&, float);
    updatePosition(al::IAudioListener const*, bool);
    setPositionRandom(al::IAudioListener const*, float, float, bool);
    ~SeShapeCube();
};

} 
