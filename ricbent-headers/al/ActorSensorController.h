#pragma once

namespace al { 

class ActorSensorController
{
public:
    ActorSensorController(al::LiveActor*, char const*);
    setSensorScale(float);
    setSensorRadius(float);
    setSensorFollowPosOffset(sead::Vector3<float> const&);
    resetActorSensorController();
};

} 
