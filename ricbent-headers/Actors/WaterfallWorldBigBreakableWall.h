#pragma once

class WaterfallWorldBigBreakableWall
{
public:
    WaterfallWorldBigBreakableWall(char const*);
    init(al::ActorInitInfo const&);
    kill();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeBeforeDemo();
    exeDemo();
};
