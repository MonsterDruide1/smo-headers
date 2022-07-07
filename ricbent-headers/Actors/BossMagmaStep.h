#pragma once

class BossMagmaStep
{
public:
    BossMagmaStep();
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    rebirth();
    down();
    control();
};
