#pragma once

namespace al { 

class CameraLimitRailKeeper
{
public:
    CameraLimitRailKeeper();
    init(al::PlacementInfo const&, int);
    updateRider(al::CameraPoser const*);
    getRider(al::CameraPoser const*) const;
    calcCameraDirH(sead::Vector3<float>*, al::CameraPoser const*) const;
    isNearInsideRailPoint(al::CameraPoser const*, float) const;
    getRailPos(al::CameraPoser const*) const;
    calcDistanceFromNearestRailPos(sead::Vector3<float> const&) const;
    calcNearestRailPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
};

} 
