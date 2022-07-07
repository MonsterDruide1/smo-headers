#pragma once

class BreedaSkirtHemPos
{
public:
    BreedaSkirtHemPos();
    init(al::ActorInitInfo const&);
    control();
    setFollowPosPtr(sead::Vector3<float> const*);
};
