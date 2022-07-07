#pragma once

namespace al { 

class CameraViewInfo
{
public:
    CameraViewInfo(int, sead::LookAtCamera const&, al::Projection const&, al::CameraViewFlag const&, al::OrthoProjectionInfo const&);
    getProjectionSead() const;
    getProjMtx() const;
    getProjMtxStd() const;
    getAspect() const;
    getNear() const;
    getFar() const;
};

} 
