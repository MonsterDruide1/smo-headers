#pragma once

class StackerStatePanic
{
public:
    StackerStatePanic(Stacker*);
    appear();
    kill();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsgDamage(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    setIsRunAway(bool);
    exeSurprise();
    exeWait();
    exeRunStart();
    exeRun();
    exeTurn();
    exeCapHit();
    ~StackerStatePanic();
};
