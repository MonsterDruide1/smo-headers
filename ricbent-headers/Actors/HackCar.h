#pragma once

class HackCar
{
public:
    HackCar(char const*);
    init(al::ActorInitInfo const&);
    calcAnim();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    forceEndCameraBeforeSetNerve();
    forceCancelHack(al::SensorMsg const*);
    exeWait();
    exeWaitHackion();
    exeHackStart();
    exeHackWaitInput();
    exeHackChargeStart();
    chargeCore();
    exeHackCharge();
    exeHackMoveSign();
    exeHackMoveStart();
    runCore();
    exeHackMove();
    exeHackEnd();
    control();
};
