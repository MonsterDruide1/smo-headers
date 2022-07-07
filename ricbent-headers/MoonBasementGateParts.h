#pragma once

class MoonBasementGateParts
{
public:
    MoonBasementGateParts(char const*);
    initParts(al::ActorInitInfo const&, char const*, char const*, sead::Vector3<float> const&, bool);
    kill();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    validate();
    moveSlideToTarget(sead::Vector3<float> const&);
    exeInvalid();
    exeWait();
    exeBreakDelay();
};
