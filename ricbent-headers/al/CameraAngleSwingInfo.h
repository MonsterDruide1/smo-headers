#pragma once

namespace al { 

class CameraAngleSwingInfo
{
public:
    CameraAngleSwingInfo();
    load(al::ByamlIter const&);
    update(sead::Vector2<float> const&, float);
    makeLookAtCamera(sead::LookAtCamera*) const;
};

} 
