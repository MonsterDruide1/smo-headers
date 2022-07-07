#pragma once

class KoopaShell
{
public:
    KoopaShell(char const*);
    init(al::ActorInitInfo const&);
    appear();
    appearRecover();
    isDeactive() const;
    updateCollider();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeAppear();
    exeSpinStart();
    exeSpin();
    exeBlow();
    exeEnd();
    exeDeactive();
    exeRecoverJump();
    exeRecoverFallSign();
    exeRecoverFall();
    exeRecoverLand();
    getPlayerCollider() const;
};
