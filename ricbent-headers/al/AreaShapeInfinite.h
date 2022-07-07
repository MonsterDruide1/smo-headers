#pragma once

namespace al { 

class AreaShapeInfinite
{
public:
    AreaShapeInfinite();
    isInVolume(sead::Vector3<float> const&) const;
    isInVolumeOffset(sead::Vector3<float> const&, float) const;
    calcNearestEdgePoint(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    checkArrowCollision(sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&) const;
    calcLocalBoundingBox(sead::BoundBox3<float>*) const;
};

} 
