#pragma once

class TalkMessageInfoPointCameraEyePoint
{
public:
    TalkMessageInfoPointCameraEyePoint(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
