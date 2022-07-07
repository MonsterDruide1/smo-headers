#pragma once

class ElectricWireKoopa
{
public:
    ElectricWireKoopa(char const*);
    init(al::ActorInitInfo const&);
    start();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeDemoAppearPrepare();
    exeDemoAppear();
    exeWait();
    exeInDiveIn();
    exeInStart();
    exeInWait();
    exeInCharge();
    exeInMoveStart();
    exeInMove();
};
