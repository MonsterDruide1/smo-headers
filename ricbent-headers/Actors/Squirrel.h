#pragma once

class Squirrel
{
public:
    Squirrel(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    appear();
    kill();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeHide();
    exeAppear();
    exeWait();
    exeTurn();
    exeRunaway();
    exeDisappear();
    exeRestartPrepare();
};
