#pragma once

class StatueSnapMark
{
public:
    StatueSnapMark(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeAppearShine();
    exeDone();
};
