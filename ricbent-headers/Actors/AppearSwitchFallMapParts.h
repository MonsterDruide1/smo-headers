#pragma once

class AppearSwitchFallMapParts
{
public:
    AppearSwitchFallMapParts(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appearAndSetStart();
    exeAppear();
    exeWait();
    exeFallSign();
    isEndFallSign() const;
    exeFall();
    exeEnd();
};
