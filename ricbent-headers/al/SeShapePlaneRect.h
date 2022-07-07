#pragma once

namespace al { 

class SeShapePlaneRect
{
public:
    SeShapePlaneRect(al::SeShapePose*, sead::Vector2<float> const*, al::SeShapeInfo3DPlane const*);
    calcNearlestPosition(sead::Vector3<float> const*, sead::Vector3<float>&, float);
    updatePosition(al::IAudioListener const*, bool);
    setPositionRandom(al::IAudioListener const*, float, float, bool);
    ~SeShapePlaneRect();
};

} 
