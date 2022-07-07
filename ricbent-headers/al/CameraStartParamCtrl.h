#pragma once

namespace al { 

class CameraStartParamCtrl
{
public:
    CameraStartParamCtrl();
    init(al::AreaObjDirector*, al::CameraFlagCtrl const*);
    initAfterPlacement();
    update(sead::Vector3<float> const&);
    tryApplyParam(al::CameraStartInfo*);
    getAreaObjDirector() const;
};

} 
