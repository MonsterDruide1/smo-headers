#pragma once

namespace al { 

class SeShapePoint
{
public:
    SeShapePoint(al::SeShapePose*, al::SeShapeInfo3DPoint const*);
    updatePosition(al::IAudioListener const*, bool);
    setPositionRandom(al::IAudioListener const*, float, float, bool);
    ~SeShapePoint();
};

} 
