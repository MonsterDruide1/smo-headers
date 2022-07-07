#pragma once

class TRexScrollBreakMapParts
{
public:
    TRexScrollBreakMapParts(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeBreak();
};
