#pragma once

class GunetterBody
{
public:
    createForSpin(char const*, al::ActorInitInfo const&);
    GunetterBody(char const*);
    createForMove(char const*, al::ActorInitInfo const&);
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    updateCollider();
};
