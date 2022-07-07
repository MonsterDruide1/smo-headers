#pragma once

class TreasureBoxKey
{
public:
    TreasureBoxKey(char const*);
    init(al::ActorInitInfo const&);
    makeActorDead();
    makeActorAlive();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    restart();
    exeCloseWait();
    exeWaitStartDemo();
    exeWaitCameraInterpole();
    exeOpen();
    exeWaitEndCameraInterpole();
    exeOpenWait();
};
