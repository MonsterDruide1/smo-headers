#pragma once

class FixMapPartsScenarioAction
{
public:
    FixMapPartsScenarioAction(char const*);
    init(al::ActorInitInfo const&);
    movement();
    calcAnim();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
