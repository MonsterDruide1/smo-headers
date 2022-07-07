#pragma once

class HackMapParts
{
public:
    HackMapParts(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isHack() const;
    exeWait();
    exeWaitHack();
    exeHackStart();
    exeHackMove();
    exeHackEnd();
    exeReaction();
    control();
};
