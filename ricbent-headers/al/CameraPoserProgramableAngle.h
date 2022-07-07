#pragma once

namespace al { 

class CameraPoserProgramableAngle
{
public:
    CameraPoserProgramableAngle(sead::Vector3<float> const*, float const*, float const*, float const*);
    update();
};

} 
