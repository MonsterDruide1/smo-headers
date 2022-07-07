#pragma once

class JangoStateCapCatch
{
public:
    JangoStateCapCatch(al::LiveActor*, JangoCap*, al::ActorInitInfo const&, al::JointLookAtController*, bool, bool);
    init();
    appear();
    appearEscape();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeFind();
    exeWaitThreat();
    exeTurnPlayer();
    exeTurnPlayerBack();
    exeEscape();
    exeEscapeWait();
    exeWaitPlayerLeaveNextPoint();
    exeTurnNextPoint();
    exeEscapeNextPoint();
    exeFallSign();
    exeFallLoop();
    exeLand();
    ~JangoStateCapCatch();
};
