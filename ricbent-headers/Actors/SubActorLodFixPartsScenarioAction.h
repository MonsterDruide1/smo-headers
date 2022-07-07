#pragma once

class SubActorLodFixPartsScenarioAction
{
public:
    SubActorLodFixPartsScenarioAction(char const*);
    init(al::ActorInitInfo const&);
    listenStartSnapShotMode();
    listenEndSnapShotMode();
    movement();
    calcAnim();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
