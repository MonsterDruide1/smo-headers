#pragma once

class FireSwitch
{
public:
    FireSwitch(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    appear();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWaitNoBurn();
    exeReaction();
    exeBurnStart();
    exeBurnLoop();
    exeBurnEnd();
};
