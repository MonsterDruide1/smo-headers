#pragma once

class PictureNoStageChange
{
public:
    PictureNoStageChange(char const*, char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
};
