#pragma once

namespace al { namespace PoseHistoryPath { 

class PoseInfo
{
public:
    PoseInfo();
    PoseInfo(sead::Quat<float> const&, sead::Vector3<float> const&, char const*, float);
};

} } 
