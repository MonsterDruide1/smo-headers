#pragma once

class Jango
{
public:
    Jango(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    isEnableCap() const;
    tryOffCapCatchedSwitch();
    exeWaitCapGetDemo();
    exeCapGetDemo();
    exeEscape();
    exeSurprise();
    exeBlowDown();
};
