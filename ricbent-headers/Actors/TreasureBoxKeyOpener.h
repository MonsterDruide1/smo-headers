#pragma once

class TreasureBoxKeyOpener
{
public:
    TreasureBoxKeyOpener(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    appear();
    makeActorAlive();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    isGot();
    exeAppear();
    exeWait();
    exeGot();
    setHostForClipping(al::LiveActor*);
};
