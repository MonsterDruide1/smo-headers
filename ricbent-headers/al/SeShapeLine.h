#pragma once

namespace al { 

class SeShapeLine
{
public:
    SeShapeLine(al::SeShapePose*, sead::Vector3<float> const*, al::SeShapeInfo3DVector const*);
    updatePosition(al::IAudioListener const*, bool);
    ~SeShapeLine();
};

} 
