#pragma once

class FixMapPartsBgmChangeAction
{
public:
    FixMapPartsBgmChangeAction(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exePlayingBgm();
};
