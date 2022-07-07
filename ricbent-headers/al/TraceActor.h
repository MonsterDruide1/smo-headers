#pragma once

namespace al { 

class TraceActor
{
public:
    TraceActor(char const*, al::ActorInitInfo const&, char const*, char const*);
    control();
    appearTrace(sead::Quat<float> const&, sead::Vector3<float> const&, al::CollisionParts const*, unsigned int);
};

} 
