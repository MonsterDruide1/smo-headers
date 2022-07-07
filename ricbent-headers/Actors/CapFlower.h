#pragma once

class CapFlower
{
public:
    CapFlower(char const*);
    init(al::ActorInitInfo const&);
    appear();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isBloom() const;
    isGerm() const;
    attackSensor(al::HitSensor*, al::HitSensor*);
    exeGerm();
    exeReturnToGerm();
    exeBloom();
    isBloomTrig() const;
    tryPlayReturnAnim();
    changeFlowerColorWhite();
    forceReturnToGerm();
    tryStopReturnAnim();
};
