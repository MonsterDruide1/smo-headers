#pragma once

namespace al { 

class SensorHitGroup
{
public:
    SensorHitGroup(int, char const*);
    add(al::HitSensor*);
    remove(al::HitSensor*);
    getSensor(int) const;
    clear() const;
};

} 
