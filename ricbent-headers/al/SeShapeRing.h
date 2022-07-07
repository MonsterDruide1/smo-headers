#pragma once

namespace al { 

class SeShapeRing
{
public:
    SeShapeRing(al::SeShapePose*, float const*, al::SeShapeInfo3DRing const*);
    updatePosition(al::IAudioListener const*, bool);
    ~SeShapeRing();
};

} 
