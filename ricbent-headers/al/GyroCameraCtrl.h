#pragma once

namespace al { 

class GyroCameraCtrl
{
public:
    GyroCameraCtrl();
    reset(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    update(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    reduceSensitivity();
};

} 
