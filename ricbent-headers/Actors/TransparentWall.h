#pragma once

class TransparentWall
{
public:
    TransparentWall(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
