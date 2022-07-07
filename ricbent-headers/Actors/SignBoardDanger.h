#pragma once

class SignBoardDanger
{
public:
    SignBoardDanger(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isCanStartReaction();
    attackSensor(al::HitSensor*, al::HitSensor*);
    exeWait();
    exeReaction();
    exeDead();
};
