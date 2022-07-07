#pragma once

namespace al { 

class RaceCheckPoint
{
public:
    RaceCheckPoint();
    init(al::PlacementInfo const&);
    initFinalCheckPoint(al::PlacementInfo const&);
    update(bool*, bool*, int*, float*, sead::Vector3<float> const&, sead::Vector3<float> const&) const;
    updateFinal(bool*, bool*, float*, sead::Vector3<float> const&, sead::Vector3<float> const&) const;
    calcIsPass(int, sead::Vector3<float> const&, sead::Vector3<float> const&) const;
    calcIsReverse(sead::Vector3<float> const&, sead::Vector3<float> const&, int) const;
    calcGoalPlane(sead::Vector3<float>*, sead::Vector3<float>*) const;
    getCheckPointPos(sead::Vector3<float>*, int) const;
    getCheckPointFront(sead::Vector3<float>*, int) const;
};

} 
