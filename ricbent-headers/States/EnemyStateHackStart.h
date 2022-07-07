#pragma once

class EnemyStateHackStart
{
public:
    EnemyStateHackStart(al::LiveActor*, EnemyStateHackStartParam const*, PlayerHackStartShaderParam*);
    tryStart(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    kill();
    isHackStart() const;
    calcHackStartNerveRate() const;
    exeDiveIn();
    exeHackStart();
    ~EnemyStateHackStart();
};
