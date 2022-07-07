#pragma once

namespace al { 

class CameraPoserProgramable
{
public:
    CameraPoserProgramable(sead::Vector3<float> const*, sead::Vector3<float> const*, sead::Vector3<float> const*);
    CameraPoserProgramable();
    update();
    setPose(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
};

} 
