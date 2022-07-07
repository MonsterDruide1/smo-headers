#pragma once

class BirdGatheringSpotArea
{
public:
    BirdGatheringSpotArea(char const*);
    init(al::AreaInitInfo const&);
    updateClipping(al::ClippingJudge const*, sead::Vector3<float> const&);
    isClipped() const;
    getSightDistance() const;
    isGreaterPriorityNotClipped(BirdGatheringSpotArea const*) const;
    calcRandomGroundTrans(sead::Vector3<float>*) const;
};
