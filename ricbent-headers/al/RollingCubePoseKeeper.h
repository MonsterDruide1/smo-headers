#pragma once

namespace al { 

class RollingCubePoseKeeper
{
public:
    RollingCubePoseKeeper();
    setCubeSize(sead::BoundBox3<float> const&);
    isMoveTypeTurn() const;
    isMoveTypeLoop() const;
    init(al::ActorInitInfo const&);
    nextKey();
    setStart();
    setKeyIndex(int);
    getCurrentPose() const;
    getPose(int) const;
    calcBoundingBoxCenter(sead::Vector3<float>*, sead::Quat<float> const&, sead::Vector3<float> const&) const;
};

} 
