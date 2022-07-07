#pragma once

class CloudStep
{
public:
    CloudStep(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeWait();
    exeWaitOnPlayer();
    exeAppear();
    endAppear();
    exeDisappear();
    endDisappear();
    exeThrough();
    exeLand();
};
