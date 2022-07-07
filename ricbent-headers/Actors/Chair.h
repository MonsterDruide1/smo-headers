#pragma once

class Chair
{
public:
    Chair(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeBindSitDownStart();
    exeBindSitDown();
    exeBindStandUp();
    exeBindJump();
    exeWaitNoSitDown();
    exeWaitLeave();
    exeReaction();
};
