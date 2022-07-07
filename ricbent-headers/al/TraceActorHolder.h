#pragma once

namespace al { 

class TraceActorHolder
{
public:
    TraceActorHolder();
    init(char const*, int, al::ActorInitInfo const&, char const*, char const*, char const*);
    findTrace();
    appearTrace(sead::Quat<float> const&, sead::Vector3<float> const&, al::CollisionParts const*);
};

} 
