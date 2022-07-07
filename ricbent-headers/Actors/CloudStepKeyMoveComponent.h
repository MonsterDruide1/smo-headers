#pragma once

class CloudStepKeyMoveComponent
{
public:
    CloudStepKeyMoveComponent(CloudStep*);
    init(al::ActorInitInfo const&);
    start();
    stop();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeStandBy();
    exeMove();
    exeStop();
};
