#pragma once

namespace al { 

class CameraAngleVerticalRequester
{
public:
    CameraAngleVerticalRequester();
    init(al::AreaObjDirector*);
    initAfterPlacement();
    update(sead::Vector3<float> const&);
    getAreaObjDirector() const;
};

} 
