#pragma once

class HideAndSeekCapMan
{
public:
    tryCreateLinkNpcIfClearGame(al::LiveActor*, al::ActorInitInfo const&, char const*, char const*);
    HideAndSeekCapMan(char const*);
    init(al::ActorInitInfo const&);
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeAppear();
    exeWait();
    exeDisappear();
    exeHide();
    exeScared();
};
