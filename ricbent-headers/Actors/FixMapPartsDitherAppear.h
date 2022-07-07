#pragma once

class FixMapPartsDitherAppear
{
public:
    FixMapPartsDitherAppear(char const*);
    init(al::ActorInitInfo const&);
    ditherAppear();
    waitAppear();
    calcAnim();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeAppear();
    exeWait();
};
