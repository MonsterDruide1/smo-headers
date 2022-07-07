#pragma once

namespace al { 

class HitSensorDirector
{
public:
    HitSensorDirector(al::ExecuteDirector*);
    initGroup(al::HitSensor*);
    execute();
    executeHitCheckInSameGroup(al::SensorHitGroup*) const;
    executeHitCheckGroup(al::SensorHitGroup*, al::SensorHitGroup*) const;
    executeHitCheck(al::HitSensor*, al::HitSensor*) const;
};

} 
