#pragma once

class GrowPlantStartStage
{
public:
    GrowPlantStartStage(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    kill();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeSet();
    exeJumpPlayer();
    exeDown();
};
