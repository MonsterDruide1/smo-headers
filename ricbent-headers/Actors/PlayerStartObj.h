#pragma once

class PlayerStartObj
{
public:
    PlayerStartObj(char const*);
    init(al::ActorInitInfo const&);
    tryRequestStartDemo();
    requestBind();
    setStartId(char const*);
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeDemoWait();
    exeBindWait();
    exeWait();
    exeMove();
    exeBindEnd();
};
