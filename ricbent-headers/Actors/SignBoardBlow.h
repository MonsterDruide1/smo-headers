#pragma once

class SignBoardBlow
{
public:
    SignBoardBlow(char const*, char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startBlow(sead::Vector3<float> const&);
    exeWait();
    exeBlow();
};
