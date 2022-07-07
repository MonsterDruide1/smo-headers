#pragma once

class GabuZouGroup
{
public:
    GabuZouGroup(char const*);
    init(al::ActorInitInfo const&);
    checkReach(GabuZou const*, sead::Vector3<float> const&) const;
};
