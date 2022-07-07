#pragma once

class RailDrawerEdge
{
public:
    RailDrawerEdge(char const*);
    init(al::ActorInitInfo const&);
    control();
    exeWait();
    appearWithTrans(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
};
