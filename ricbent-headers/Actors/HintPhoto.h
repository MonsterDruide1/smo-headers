#pragma once

class HintPhoto
{
public:
    HintPhoto(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeWait();
    exeShowPhoto();
};
