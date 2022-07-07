#pragma once

namespace al { 

class MoveTwoPoint
{
public:
    MoveTwoPoint();
    MoveTwoPoint(al::ActorInitInfo const&);
    init(al::ActorInitInfo const&);
    calcPose(sead::Quat<float>*, sead::Vector3<float>*, float) const;
    calcPoseByDistance(sead::Quat<float>*, sead::Vector3<float>*, float) const;
};

} 
