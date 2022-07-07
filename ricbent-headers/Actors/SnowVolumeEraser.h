#pragma once

class SnowVolumeEraser
{
public:
    SnowVolumeEraser(char const*);
    init(al::ActorInitInfo const&);
    start();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeAppear();
};
