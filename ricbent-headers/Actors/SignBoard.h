#pragma once

class SignBoard
{
public:
    SignBoard(char const*);
    init(al::ActorInitInfo const&);
    exeWait();
    exeReaction();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
