#pragma once

class EnemyStateDamageCap
{
public:
    EnemyStateDamageCap(al::LiveActor*);
    kill();
    createEnemyCap(al::ActorInitInfo const&, char const*);
    tryReceiveMsgCapBlow(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isCapOn() const;
    blowCap(al::HitSensor*);
    resetCap();
    makeActorDeadCap();
    exeWait();
    exeDamageCap();
    ~EnemyStateDamageCap();
};
