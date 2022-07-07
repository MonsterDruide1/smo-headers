#pragma once

class Stake
{
public:
    Stake(char const*);
    init(al::ActorInitInfo const&);
    listenStageSwitchWaterAreaDisappear();
    initAfterPlacement();
    kill();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeOffWait();
    exeOn();
    exeOnWait();
    exePull();
    exePullOut();
};
