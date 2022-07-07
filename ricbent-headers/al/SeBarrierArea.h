#pragma once

namespace al { 

class SeBarrierArea
{
public:
    SeBarrierArea(char const*);
    init(al::AreaInitInfo const&);
    calcVolumePanLpf(float*, float*, float*, sead::Vector3<float> const*, sead::Vector3<float> const*, sead::Matrix34<float> const*);
};

} 
