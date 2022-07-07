#pragma once

class HipDropMoveLift
{
public:
    HipDropMoveLift(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    start();
    exeStandBy();
    exeWait();
    setWaitEndNerve();
    exeMove();
};
