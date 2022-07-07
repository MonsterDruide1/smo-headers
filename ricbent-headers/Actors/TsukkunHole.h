#pragma once

class TsukkunHole
{
public:
    TsukkunHole(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeKill();
};
