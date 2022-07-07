#pragma once

class RaceManShell
{
public:
    RaceManShell(char const*);
    init(al::ActorInitInfo const&);
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
