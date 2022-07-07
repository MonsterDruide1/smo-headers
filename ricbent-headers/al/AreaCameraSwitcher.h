#pragma once

namespace al { 

class AreaCameraSwitcher
{
public:
    AreaCameraSwitcher(al::CameraDirector*, al::AreaObjDirector*, int);
    makeAllAreaCameraAfterPlacement();
    getSwitchInfoPtr(int) const;
    update(sead::Vector3<float> const&, bool, bool);
    updateEmptyTarget();
    getAreaObjDirector() const;
    getCameraDirector() const;
};

} 
