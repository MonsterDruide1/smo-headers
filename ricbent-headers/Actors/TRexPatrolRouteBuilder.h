#pragma once

class TRexPatrolRouteBuilder
{
public:
    TRexPatrolRouteBuilder();
    init(al::ActorInitInfo const&);
    calcFirstRoute(TRexRouteInfoBase const**, TRexRouteInfoBase const**) const;
    calcNearestRoute(TRexRouteInfoBase const**, TRexRouteInfoBase const**, sead::Vector3<float> const&) const;
    calcRecoveryRoute(TRexRouteInfoBase const**, TRexRouteInfoBase const**, sead::Vector3<float> const&) const;
    calcNextRouteGoal(TRexRouteInfoBase const**, TRexRouteInfoBase const*) const;
};
