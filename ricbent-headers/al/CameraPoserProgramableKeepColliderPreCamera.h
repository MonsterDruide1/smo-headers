#pragma once

namespace al { 

class CameraPoserProgramableKeepColliderPreCamera
{
public:
    CameraPoserProgramableKeepColliderPreCamera(sead::Vector3<float> const*, sead::Vector3<float> const*, sead::Vector3<float> const*);
    init();
    start(al::CameraStartInfo const&);
};

} 
