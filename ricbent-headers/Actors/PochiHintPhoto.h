#pragma once

class PochiHintPhoto
{
public:
    PochiHintPhoto(char const*);
    setIsLinkChild();
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
};
