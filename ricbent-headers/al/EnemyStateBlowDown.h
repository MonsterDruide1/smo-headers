#pragma once

namespace al { 

class EnemyStateBlowDown
{
public:
    EnemyStateBlowDown(al::LiveActor*, al::EnemyStateBlowDownParam const*, char const*);
    start(al::HitSensor const*);
    start(sead::Vector3<float> const&);
    start(al::HitSensor const*, al::HitSensor const*);
    start(al::LiveActor const*);
    appear();
    kill();
    control();
    ~EnemyStateBlowDown();
};

} 
