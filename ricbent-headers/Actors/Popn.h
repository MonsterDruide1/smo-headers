#pragma once

class Popn
{
public:
    Popn(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    appearByGenerater(sead::Vector3<float> const&, int, bool, bool);
    exeAppear();
    exeWait();
    exeWaitRove();
    exeTurn();
    exeMoveStart();
    exeMove();
    exeMoveEnd();
    exeBlowDown();
};
