#pragma once

class PaulineAudience
{
public:
    PaulineAudience(char const*);
    init(al::ActorInitInfo const&);
    control();
    forceControlForDance();
    controlForDance();
    endClipped();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeDance();
    exeSabi();
    exeReaction();
};
