#pragma once

namespace al { 

class ActorSensorControllerList
{
public:
    ActorSensorControllerList(int);
    addSensor(al::LiveActor*, char const*);
    setAllSensorScale(float);
    resetAllActorSensorController();
};

} 
