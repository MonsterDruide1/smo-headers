#pragma once

namespace al { 

class SeShapePose
{
public:
    SeShapePose(sead::Matrix34<float> const*, sead::Vector3<float> const*, sead::Vector3<float> const*, sead::Vector3<float> const*);
    update();
    getMtxPtr() const;
};

} 
