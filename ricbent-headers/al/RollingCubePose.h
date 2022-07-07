#pragma once

namespace al { 

class RollingCubePose
{
public:
    RollingCubePose();
    isMovementRotate() const;
    isMovementSlide() const;
    setCubeSize(sead::BoundBox3<float> const&);
    calcNearPose(sead::Quat<float>*, sead::Quat<float> const&) const;
    fittingToBoundingBox(sead::Quat<float>*, sead::Vector3<float>*) const;
    calcBoundingBoxCenter(sead::Vector3<float>*) const;
    calcBoundingBoxCenter(sead::Vector3<float>*, sead::Quat<float> const&, sead::Vector3<float> const&) const;
    setNextCubePose(al::RollingCubePose const*);
    calcBottomFacePoint(sead::Vector3<float>*) const;
    init(al::PlacementInfo const&);
    calcRotateQT(sead::Quat<float>*, sead::Vector3<float>*, sead::Quat<float> const&, sead::Vector3<float> const&, float) const;
    calcBottomFaceIndex() const;
};

} 
