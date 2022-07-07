#pragma once

namespace al { 

class PoseHistoryPath
{
public:
    PoseHistoryPath(int);
    clear();
    addHistory(sead::Quat<float> const&, sead::Vector3<float> const&, float);
    addHistory(sead::Quat<float> const&, sead::Vector3<float> const&, char const*, float);
    calcPoseAndTrans(sead::Quat<float>*, sead::Vector3<float>*, float) const;
    calcPoseAndTrans(sead::Quat<float>*, sead::Vector3<float>*, char const**, float) const;
};

} 
