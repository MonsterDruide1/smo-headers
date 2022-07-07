#pragma once

namespace al { 

class CollisionObj
{
public:
    CollisionObj(al::ActorInitInfo const&, al::Resource*, char const*, al::HitSensor*, sead::Matrix34<float> const*, char const*);
};

} 
