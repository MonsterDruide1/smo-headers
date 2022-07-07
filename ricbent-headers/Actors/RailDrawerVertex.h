#pragma once

class RailDrawerVertex
{
public:
    RailDrawerVertex(char const*);
    init(al::ActorInitInfo const&);
    exeWait();
    appearWithTrans(sead::Vector3<float> const&);
};
