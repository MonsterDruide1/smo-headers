#pragma once

class TRexPatrolRouteRider
{
public:
    TRexPatrolRouteRider();
    init(TRexPatrolRouteBuilder const*);
    resetRoute();
    move(float);
    recoveryRoute(sead::Vector3<float> const&);
    rebuildRoute(sead::Vector3<float> const&);
    calcTrans(sead::Vector3<float>*, float) const;
    calcMoveDirH(sead::Vector3<float>*, sead::Vector3<float> const&) const;
};
