#pragma once

class Utsubo
{
public:
    Utsubo(char const*, bool);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isAttack() const;
    control();
    exeWait();
    exeWaitForWatcher();
    exeMove();
    exeFollow();
    exeRiseSign();
    exeRise();
    exeAttackSign();
    exeAttack();
    exeSink();
    exeWaitForce();
    isRiseReady() const;
    setNerveRiseSign();
};
